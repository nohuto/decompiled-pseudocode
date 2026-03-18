/*
 * XREFs of ?GetMonitorHashsForPath@CCD_TOPOLOGY@@QEAAJU_LUID@@IPEAIPEAUD3DKMT_HASH@@@Z @ 0x1C01D4550
 * Callers:
 *     ?DxgkGetMonitorHash@@YAJU_LUID@@IPEAIPEAUD3DKMT_HASH@@@Z @ 0x1C01D4190 (-DxgkGetMonitorHash@@YAJU_LUID@@IPEAIPEAUD3DKMT_HASH@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z @ 0x1C0019678 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C01ABE88 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?CcdCreateMd5Checksum@@YAJPEBEIPEAE@Z @ 0x1C01ACB70 (-CcdCreateMd5Checksum@@YAJPEBEIPEAE@Z.c)
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z @ 0x1C01D7150 (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::GetMonitorHashsForPath(
        CCD_TOPOLOGY *this,
        struct _LUID a2,
        unsigned int a3,
        unsigned int *a4,
        struct D3DKMT_HASH *a5)
{
  unsigned int v5; // ebp
  unsigned int v6; // edi
  __int64 v7; // rsi
  DWORD LowPart; // ebx
  __int64 v11; // rax
  unsigned __int16 v12; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  __int64 v14; // rcx
  __int64 v15; // r9
  int v16; // r12d
  unsigned int v17; // ebx
  unsigned int v18; // edi
  __int64 v19; // rax
  unsigned __int16 v20; // cx
  unsigned __int16 *v21; // rbx
  struct D3DKMT_HASH *v22; // r14
  unsigned int i; // ebp
  __int64 v24; // rax
  unsigned __int16 v25; // cx
  const struct _LUID *v26; // rax
  const struct _LUID *v27; // rsi
  unsigned int HighPart; // edx
  int v29; // eax
  __int64 v30; // r9
  __int64 v31; // rdi
  int Md5Checksum; // eax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v33; // rax
  int v34; // ecx
  unsigned int v35; // eax
  unsigned __int16 v37; // [rsp+70h] [rbp+8h] BYREF
  struct _LUID v38; // [rsp+78h] [rbp+10h] BYREF

  v38 = a2;
  v5 = *a4;
  v6 = 0;
  v7 = a3;
  LowPart = a2.LowPart;
  while ( 1 )
  {
    v11 = *((_QWORD *)this + 8);
    if ( v11 )
      v12 = *(_WORD *)(v11 + 20);
    else
      v12 = 0;
    if ( v6 >= v12 )
      goto LABEL_36;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, v6);
    if ( CCD_TOPOLOGY::IsMatchingSource(PathDescriptor, &v38, v7) )
      break;
    ++v6;
  }
  v16 = *(_DWORD *)(v14 + 184);
  if ( v16 == -1 )
  {
LABEL_36:
    WdLogSingleEntry3(3LL, v38.HighPart, LowPart, v7);
    return 3221225473LL;
  }
  v17 = 0;
  v18 = 0;
  while ( 1 )
  {
    v19 = *((_QWORD *)this + 8);
    v20 = v19 ? *(_WORD *)(v19 + 20) : 0;
    if ( v18 >= v20 )
      break;
    v33 = CCD_TOPOLOGY::GetPathDescriptor(this, v18++);
    v34 = *((_DWORD *)v33 + 46);
    v35 = v17 + 1;
    if ( v34 != v16 )
      v35 = v17;
    v17 = v35;
  }
  *a4 = v17;
  if ( v17 > v5 )
    return 3221225507LL;
  v21 = (unsigned __int16 *)operator new[](0x8002uLL, 0x63644356u, 256LL, v15);
  if ( !v21 )
  {
    WdLogSingleEntry0(6LL);
    LODWORD(v31) = -1073741801;
    goto LABEL_26;
  }
  v22 = a5;
  for ( i = 0; ; ++i )
  {
    v24 = *((_QWORD *)this + 8);
    if ( v24 )
      v25 = *(_WORD *)(v24 + 20);
    else
      v25 = 0;
    if ( i >= v25 )
    {
      LODWORD(v31) = 0;
      goto LABEL_27;
    }
    v26 = (const struct _LUID *)CCD_TOPOLOGY::GetPathDescriptor(this, i);
    v27 = v26;
    if ( v26[23].LowPart == v16 )
      break;
LABEL_21:
    ;
  }
  HighPart = v26[3].HighPart;
  v37 = 0;
  v29 = CCD_TOPOLOGY::_QueryMonitorIdStr(v26 + 2, HighPart, v21, 0x4001u, &v37);
  v31 = v29;
  if ( v29 >= 0 )
  {
    Md5Checksum = CcdCreateMd5Checksum(
                    (const unsigned __int8 *)v21,
                    2 * (unsigned int)v37,
                    (unsigned __int8 *)v22 + 4,
                    v30);
    v31 = Md5Checksum;
    if ( Md5Checksum >= 0 )
    {
      *(_DWORD *)v22 = 1;
      v22 = (struct D3DKMT_HASH *)((char *)v22 + 20);
      goto LABEL_21;
    }
  }
  WdLogSingleEntry4(2LL, v27[2].HighPart, v27[2].LowPart, (unsigned int)v27[3].HighPart, v31);
LABEL_26:
  if ( v21 )
LABEL_27:
    operator delete[](v21);
  return (unsigned int)v31;
}
