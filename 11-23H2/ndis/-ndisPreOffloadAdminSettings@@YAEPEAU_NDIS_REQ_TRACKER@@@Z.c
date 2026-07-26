/*
 * XREFs of ?ndisPreOffloadAdminSettings@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A4600
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000CCD0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C002702C (WPP_RECORDER_SF_qDD_ea_1C002702C.c)
 *     ?ndisUpdateOffloadKeywords@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD_PARAMETERS@@@Z @ 0x1C00A76FC (-ndisUpdateOffloadKeywords@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD_PARAMETERS@@@Z.c)
 */

unsigned __int8 __fastcall ndisPreOffloadAdminSettings(struct _NDIS_REQ_TRACKER *a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // r14
  __int64 v3; // rbp
  unsigned __int8 v4; // di
  _DWORD *v5; // rbx
  __int64 v6; // rsi
  char v7; // al
  bool v8; // cf
  int v9; // eax
  _NDIS_MINIPORT_OFFLOAD *Offload; // rax
  int updated; // eax
  unsigned __int8 MajorNdisVersion; // al
  bool v13; // cf
  __int16 v14; // ax
  __int16 v15; // ax
  __int16 v16; // ax
  __int16 v17; // ax

  v1 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v3 = *((_QWORD *)a1 + 4);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xBFu,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      (char)v1,
      v3);
  v4 = 1;
  if ( *(_DWORD *)(v3 + 4) != 1 )
  {
    v5 = (_DWORD *)((char *)a1 + 40);
    *v5 = -1073741637;
    goto LABEL_70;
  }
  if ( !*(_QWORD *)a1 )
  {
    v4 = 0;
    v5 = (_DWORD *)((char *)a1 + 40);
    goto LABEL_70;
  }
  v5 = (_DWORD *)((char *)a1 + 40);
  *v5 = 0;
  if ( *(_DWORD *)(v3 + 48) < 0x14u )
  {
    *(_DWORD *)(v3 + 56) = 20;
    *v5 = -1073676268;
    goto LABEL_70;
  }
  v6 = *(_QWORD *)(v3 + 40);
  v7 = *(_BYTE *)(v6 + 1);
  if ( v7 != 1 )
  {
    if ( v7 == 2 )
    {
      *v5 = 0;
      if ( *(_DWORD *)(v3 + 48) < 0x16u )
      {
        *(_DWORD *)(v3 + 56) = 22;
LABEL_16:
        *v5 = -1073676268;
        goto LABEL_70;
      }
      *v5 = 0;
      if ( *(_BYTE *)v6 != 0x80 || *(_BYTE *)(v6 + 1) < 2u )
        goto LABEL_33;
      v8 = *(_WORD *)(v6 + 2) < 0x16u;
    }
    else if ( v7 == 3 )
    {
      *v5 = 0;
      if ( *(_DWORD *)(v3 + 48) < 0x1Au )
      {
        *(_DWORD *)(v3 + 56) = 26;
        goto LABEL_16;
      }
      *v5 = 0;
      if ( *(_BYTE *)v6 != 0x80 || *(_BYTE *)(v6 + 1) < 3u )
        goto LABEL_33;
      v8 = *(_WORD *)(v6 + 2) < 0x1Au;
    }
    else
    {
      if ( v7 != 4 )
      {
        if ( v7 == 5 )
        {
          *v5 = 0;
          if ( *(_DWORD *)(v3 + 48) < 0x22u )
          {
            *(_DWORD *)(v3 + 56) = 34;
            goto LABEL_16;
          }
          *v5 = 0;
          if ( *(_BYTE *)v6 == 0x80 && *(_BYTE *)(v6 + 1) >= 5u && *(_WORD *)(v6 + 2) >= 0x22u )
            goto LABEL_42;
        }
        *v5 = -1073676267;
        goto LABEL_70;
      }
      *v5 = 0;
      if ( *(_DWORD *)(v3 + 48) < 0x20u )
      {
        *(_DWORD *)(v3 + 56) = 32;
        goto LABEL_16;
      }
      *v5 = 0;
      if ( *(_BYTE *)v6 != 0x80 || *(_BYTE *)(v6 + 1) < 4u )
        goto LABEL_33;
      v8 = *(_WORD *)(v6 + 2) < 0x20u;
    }
LABEL_32:
    v9 = 0;
    if ( !v8 )
      goto LABEL_34;
    goto LABEL_33;
  }
  *v5 = 0;
  if ( *(_BYTE *)v6 == 0x80 && *(_BYTE *)(v6 + 1) )
  {
    v8 = *(_WORD *)(v6 + 2) < 0x14u;
    goto LABEL_32;
  }
LABEL_33:
  v9 = -1073676267;
  *v5 = -1073676267;
LABEL_34:
  if ( v9 )
    goto LABEL_70;
LABEL_42:
  Offload = v1->Offload;
  if ( !Offload || v1->MajorNdisVersion < 6u )
  {
    *v5 = -1073741637;
    goto LABEL_70;
  }
  if ( Offload->RSCDisallowed && *(_BYTE *)(v6 + 1) >= 3u )
    *(_WORD *)(v6 + 22) = 257;
  if ( (*(_DWORD *)(v6 + 16) & 1) != 0 )
  {
    *(_BYTE *)(v3 + 144) |= 1u;
    *(_DWORD *)(v6 + 16) &= ~1u;
  }
  if ( (*(_BYTE *)(v3 + 144) & 1) != 0
    || (updated = ndisUpdateOffloadKeywords(v1, (struct _NDIS_OFFLOAD_PARAMETERS *)v6), (*v5 = updated) == 0) )
  {
    MajorNdisVersion = v1->MajorNdisVersion;
    v13 = MajorNdisVersion < 6u;
    if ( MajorNdisVersion <= 6u )
    {
      if ( MajorNdisVersion != 6 )
        goto LABEL_64;
      if ( v1->MinorNdisVersion < 0x53u )
      {
        if ( v1->MinorNdisVersion >= 0x32u )
        {
          if ( *(_BYTE *)(v6 + 1) >= 5u )
          {
            *(_DWORD *)(v3 + 88) |= 0x400000u;
            *(_BYTE *)(v3 + 233) = *(_BYTE *)(v6 + 1);
            v16 = *(_WORD *)(v6 + 2);
            *(_BYTE *)(v6 + 1) = 4;
            *(_WORD *)(v3 + 234) = v16;
            *(_WORD *)(v6 + 2) = 32;
          }
          goto LABEL_67;
        }
        if ( v1->MinorNdisVersion >= 0x1Eu )
        {
          if ( *(_BYTE *)(v6 + 1) >= 4u )
          {
            *(_DWORD *)(v3 + 88) |= 0x400000u;
            *(_BYTE *)(v3 + 233) = *(_BYTE *)(v6 + 1);
            v15 = *(_WORD *)(v6 + 2);
            *(_BYTE *)(v6 + 1) = 3;
            *(_WORD *)(v3 + 234) = v15;
            *(_WORD *)(v6 + 2) = 26;
          }
          goto LABEL_67;
        }
        if ( v1->MinorNdisVersion )
        {
          if ( *(_BYTE *)(v6 + 1) >= 3u )
          {
            *(_DWORD *)(v3 + 88) |= 0x400000u;
            *(_BYTE *)(v3 + 233) = *(_BYTE *)(v6 + 1);
            v14 = *(_WORD *)(v6 + 2);
            *(_BYTE *)(v6 + 1) = 2;
            *(_WORD *)(v3 + 234) = v14;
            *(_WORD *)(v6 + 2) = 22;
          }
          goto LABEL_67;
        }
        v13 = 0;
LABEL_64:
        if ( !v13 && *(_BYTE *)(v6 + 1) >= 2u )
        {
          *(_DWORD *)(v3 + 88) |= 0x400000u;
          *(_BYTE *)(v3 + 233) = *(_BYTE *)(v6 + 1);
          v17 = *(_WORD *)(v6 + 2);
          *(_BYTE *)(v6 + 1) = 1;
          *(_WORD *)(v3 + 234) = v17;
          *(_WORD *)(v6 + 2) = 20;
        }
      }
    }
LABEL_67:
    v4 = 0;
  }
LABEL_70:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xC0u,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      (char)v1,
      *v5,
      v4);
  return v4;
}
