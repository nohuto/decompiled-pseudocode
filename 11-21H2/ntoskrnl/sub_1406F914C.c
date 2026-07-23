/*
 * XREFs of sub_1406F914C @ 0x1406F914C
 * Callers:
 *     sub_1406FDCD0 @ 0x1406FDCD0 (sub_1406FDCD0.c)
 * Callees:
 *     sub_1402450AC @ 0x1402450AC (sub_1402450AC.c)
 *     sub_140249828 @ 0x140249828 (sub_140249828.c)
 *     sub_140281DE0 @ 0x140281DE0 (sub_140281DE0.c)
 *     sub_1402879F8 @ 0x1402879F8 (sub_1402879F8.c)
 *     IoSetTopLevelIrp @ 0x140288140 (IoSetTopLevelIrp.c)
 *     sub_1402EB1A0 @ 0x1402EB1A0 (sub_1402EB1A0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14058D310 @ 0x14058D310 (sub_14058D310.c)
 *     sub_1406F9808 @ 0x1406F9808 (sub_1406F9808.c)
 *     sub_1406FA990 @ 0x1406FA990 (sub_1406FA990.c)
 *     FsRtlReleaseFile @ 0x1406FE310 (FsRtlReleaseFile.c)
 *     sub_1406FF378 @ 0x1406FF378 (sub_1406FF378.c)
 *     sub_1407010C8 @ 0x1407010C8 (sub_1407010C8.c)
 *     sub_140705E1C @ 0x140705E1C (sub_140705E1C.c)
 *     sub_1407074F0 @ 0x1407074F0 (sub_1407074F0.c)
 *     sub_140707E70 @ 0x140707E70 (sub_140707E70.c)
 *     sub_1407E4D40 @ 0x1407E4D40 (sub_1407E4D40.c)
 *     sub_14092D730 @ 0x14092D730 (sub_14092D730.c)
 */

__int64 __fastcall sub_1406F914C(__int64 a1, _QWORD *a2)
{
  ULONG_PTR **v3; // rdi
  struct _FILE_OBJECT *v4; // r13
  int v5; // r15d
  __int64 v6; // rsi
  ULONG_PTR *v7; // rdi
  int v9; // r14d
  int v10; // eax
  int v11; // r12d
  int v12; // eax
  int v13; // edi
  __int64 v14; // r14
  signed __int64 v15; // rax
  int v16; // edx
  __int64 v17; // r14
  int v18; // r8d
  int v19; // esi
  __int64 *v20; // r15
  _QWORD *v21; // r12
  int v22; // edx
  int v23; // ecx
  int v24; // r15d
  int v25; // ecx
  int v26; // r12d
  int v27; // eax
  int v28; // r8d
  char v29; // dl
  char v30; // al
  int v31; // r9d
  int v32; // r12d
  int v33; // eax
  __int64 v34; // rax
  int v35; // ecx
  char v36; // r15
  __int64 v37; // rdx
  int v38; // ecx
  __int64 v39; // rdx
  PMDL v40; // rbx
  struct _MDL *v41; // r15
  ULONG i; // esi
  char v43; // [rsp+50h] [rbp-89h]
  _BYTE v44[11]; // [rsp+51h] [rbp-88h] BYREF
  _DWORD v45[3]; // [rsp+5Ch] [rbp-7Dh] BYREF
  _QWORD *v46; // [rsp+68h] [rbp-71h]
  __int64 v47; // [rsp+70h] [rbp-69h]
  PMDL MemoryDescriptorList; // [rsp+78h] [rbp-61h] BYREF
  __int64 v49[14]; // [rsp+80h] [rbp-59h] BYREF

  v46 = a2;
  v47 = 0LL;
  memset(v49, 0, sizeof(v49));
  v3 = *(ULONG_PTR ***)(a1 + 176);
  v4 = *(struct _FILE_OBJECT **)(a1 + 56);
  v5 = *(_DWORD *)(a1 + 16);
  v6 = *(_QWORD *)(a1 + 152);
  v43 = *(_BYTE *)(a1 + 24);
  *(_WORD *)v44 = 0;
  *(_DWORD *)&v44[3] = 0;
  v44[7] = 0;
  memset(v45, 0, sizeof(v45));
  if ( v3 )
    v7 = *v3;
  else
    v7 = &StartContext;
  if ( (*((_DWORD *)v7 + 1) & 0x100) != 0 )
  {
    if ( (*(_DWORD *)a1 & 2) != 0 )
    {
      IoSetTopLevelIrp(*(PIRP *)(a1 + 184));
      FsRtlReleaseFile(v4);
      *(_DWORD *)a1 &= ~2u;
    }
    return 3221225659LL;
  }
  v9 = sub_1406F9808(v7);
  if ( v9 >= 0 )
  {
    v10 = *(_DWORD *)(a1 + 172);
    MemoryDescriptorList = 0LL;
    v11 = v5 & 0x1000000;
    if ( (v5 & 0x1000000) != 0 )
      v12 = sub_140707E70(v4, (__int64)&v45[1], (__int64)&MemoryDescriptorList, (__int64)v49, (__int64)v45);
    else
      v12 = sub_1406FA990(v4, *(_DWORD *)(a1 + 28), v5, v10, *(_DWORD *)a1);
    v13 = v12;
    if ( v12 < 0 )
    {
      if ( (*(_DWORD *)a1 & 2) != 0 )
      {
        IoSetTopLevelIrp(*(PIRP *)(a1 + 184));
        FsRtlReleaseFile(v4);
        *(_DWORD *)a1 &= ~2u;
      }
      return (unsigned int)v13;
    }
    v14 = *(_QWORD *)&v45[1];
    *v46 = *(_QWORD *)&v45[1];
    if ( v6 )
    {
      *(_QWORD *)(a1 + 128) = v6;
    }
    else
    {
      v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 24), -1LL, -1LL);
      v14 = *(_QWORD *)&v45[1];
      *(_QWORD *)(a1 + 128) = v15;
    }
    v16 = *(_DWORD *)a1;
    v17 = *(_QWORD *)v14;
    if ( (*(_DWORD *)a1 & 0x1000000) != 0 )
    {
      *(_BYTE *)(v17 + 62) |= 1u;
      v16 = *(_DWORD *)a1;
    }
    LOWORD(v18) = v16;
    if ( (v16 & 0x2000) != 0 && (v4->DeviceObject->Characteristics & 0x10) == 0 && (!v11 || (v49[1] & 0xFFF) == 0) )
    {
      *(_DWORD *)(v17 + 56) |= 0x40000000u;
      v18 = *(_DWORD *)a1;
    }
    if ( (v18 & 0x4000) != 0 )
      *(_DWORD *)(v17 + 56) |= 0x20000u;
    v19 = 2;
    v20 = (__int64 *)sub_140281DE0((_DWORD *)a1, (__int64)v4, v17, (__int64 *)MemoryDescriptorList);
    if ( (*(_DWORD *)a1 & 2) != 0 )
    {
      IoSetTopLevelIrp(*(PIRP *)(a1 + 184));
      FsRtlReleaseFile(v4);
      *(_DWORD *)a1 &= ~2u;
    }
    if ( !v11 )
      goto LABEL_119;
    v21 = *(_QWORD **)(*(_QWORD *)&v45[1] + 56LL);
    v46 = v21;
    if ( !LODWORD(v49[11]) && !HIDWORD(v49[11]) && !*((_BYTE *)v21 + 50) )
      *(_BYTE *)(*(_QWORD *)&v45[1] + 15LL) |= 1u;
    if ( (*(_DWORD *)(v17 + 56) & 0x800) != 0 )
    {
      if ( (*(_DWORD *)a1 & 0x100000) != 0 )
      {
        dword_140C4F3D0 = 5;
        v13 = -1073740749;
LABEL_122:
        sub_140705E1C(MemoryDescriptorList);
        return (unsigned int)v13;
      }
      v13 = sub_14058D310(v17, *(_DWORD *)(a1 + 168));
      if ( v13 < 0 )
      {
        dword_140C4F3D0 = 6;
        goto LABEL_122;
      }
    }
    v13 = sub_1407E4D40(v17, v49, &v44[1]);
    if ( v13 < 0 )
    {
      dword_140C4F3D0 = 4;
      goto LABEL_122;
    }
    v22 = *(_DWORD *)a1;
    if ( (*(_DWORD *)a1 & 0x100) != 0 )
    {
      v23 = 4;
    }
    else if ( (v22 & 0x20) != 0 )
    {
      v23 = 1;
    }
    else if ( (v22 & 0x10) != 0 )
    {
      v23 = (*(_DWORD *)a1 & 0x1000) != 0 ? 8 : 2;
    }
    else
    {
      v23 = 0;
    }
    v24 = v23 | 0x10;
    if ( (v22 & 0x800) == 0 )
      v24 = v23;
    v25 = *(_DWORD *)a1;
    if ( (v22 & 0x8400) == 0 || (v22 & 0x10) != 0 )
    {
      v29 = v43;
    }
    else
    {
      v26 = *(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2512LL);
      v13 = sub_1407010C8(v4, (__int64)v44);
      if ( v13 < 0 )
      {
        dword_140C4F3D0 = 7;
        goto LABEL_122;
      }
      v25 = *(_DWORD *)a1;
      if ( (*(_DWORD *)a1 & 0x800) == 0 )
      {
        if ( v43 )
        {
          v27 = *(_DWORD *)&v44[3];
          if ( (v26 & 0x800000) != 0 )
            v27 = 1;
          *(_DWORD *)&v44[3] = v27;
        }
        if ( (v26 & 0x1000000) != 0 )
        {
          v44[7] = 8;
        }
        else
        {
          v28 = v44[7];
          if ( (v26 & 0x2000000) != 0 )
            v28 = 6;
          *(_DWORD *)&v44[7] = v28;
        }
      }
      v29 = v44[0];
      v21 = v46;
      v43 = v44[0];
      *(_BYTE *)(a1 + 24) = v44[0];
    }
    if ( (v25 & 0x100000) != 0 )
    {
      v30 = v29;
      v24 |= 0x40000000u;
      if ( !v29 )
        v30 = 4;
      v29 = v30;
      v43 = v30;
    }
    v31 = v24 | 0x20000000;
    if ( (v25 & 0x800000) == 0 )
      v31 = v24;
    LODWORD(v46) = v31;
    if ( (dword_140D06880 & 0x20000) != 0 )
    {
      v25 |= 0x8000u;
      *(_DWORD *)a1 = v25;
      if ( !v29 )
      {
        v29 = 1;
        v43 = 1;
      }
    }
    if ( (v25 & 0x8000) == 0 )
    {
      if ( (v25 & 0x400) == 0 )
        goto LABEL_85;
      if ( !v29 && *((char *)v21 + 46) >= 0 )
        goto LABEL_83;
    }
    *(_DWORD *)&v44[3] |= 2u;
    if ( (v25 & 0x400) != 0 )
    {
LABEL_83:
      if ( v44[7] )
        *(_DWORD *)&v44[3] |= 4u;
    }
LABEL_85:
    if ( (v25 & 0x40) == 0 )
      v19 = (v25 & 0x20) != 0;
    v32 = 0;
    if ( (*(_BYTE *)(v17 + 62) & 0xC) != 0 )
    {
      v33 = sub_14092D730(v4);
      v13 = v33;
      if ( v33 >= 0 )
      {
        v34 = v47;
        goto LABEL_94;
      }
      if ( v33 != -1073741637 && v33 != -1073741808 )
      {
        dword_140C4F3D0 = 8;
        goto LABEL_122;
      }
    }
    v34 = -1LL;
    v47 = -1LL;
LABEL_94:
    v35 = *(_DWORD *)&v44[3];
    v36 = v44[1];
    if ( (v44[3] & 6) != 0 )
    {
      if ( v34 != -1 )
      {
        v13 = sub_1407074F0(v45[1], (unsigned int)v49, v45[0], v19, v34, 0);
        if ( v13 < 0 )
        {
          dword_140C4F3D0 = 9;
          goto LABEL_122;
        }
        v32 = 1;
        if ( v36 )
          sub_1402450AC(v17, v37);
        v35 = *(_DWORD *)&v44[3];
      }
      v38 = v35 | 8;
      if ( (*(_DWORD *)a1 & 0x10000000) == 0 )
        v38 = *(_DWORD *)&v44[3];
      v13 = sub_1406FF378(
              0,
              (_DWORD)v4,
              v17,
              *(_DWORD *)(a1 + 168),
              *(_QWORD *)(a1 + 160),
              (_DWORD)v46,
              v38,
              v43,
              v44[7]);
      if ( v13 < 0 )
      {
        dword_140C4F3D0 = 10;
        goto LABEL_122;
      }
      if ( v32 )
        goto LABEL_110;
      v34 = v47;
    }
    v13 = sub_1407074F0(v45[1], (unsigned int)v49, v45[0], v19, v34, 0);
    if ( v13 < 0 )
    {
      dword_140C4F3D0 = 11;
      goto LABEL_122;
    }
    if ( v36 )
      sub_1402450AC(v17, v39);
LABEL_110:
    v40 = MemoryDescriptorList;
    if ( MemoryDescriptorList )
    {
      do
      {
        if ( (v40->MdlFlags & 4) == 0 )
        {
          v41 = v40 + 1;
          for ( i = v40->ByteCount >> 12; i; --i )
          {
            if ( v41->Next != (struct _MDL *)-1LL )
              sub_1402EB1A0(48 * (__int64)v41->Next - 0x220000000000LL);
            v41 = (struct _MDL *)((char *)v41 + 8);
          }
        }
        v40 = v40->Next;
      }
      while ( v40 );
      v40 = MemoryDescriptorList;
    }
    sub_140705E1C(v40);
    v20 = (__int64 *)sub_140249828((__int64)v4, v17);
LABEL_119:
    sub_1402879F8(v20);
    return (unsigned int)v13;
  }
  if ( (*(_DWORD *)a1 & 2) != 0 )
  {
    IoSetTopLevelIrp(*(PIRP *)(a1 + 184));
    FsRtlReleaseFile(v4);
    *(_DWORD *)a1 &= ~2u;
  }
  return (unsigned int)v9;
}
