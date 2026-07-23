/*
 * XREFs of sub_14093D590 @ 0x14093D590
 * Callers:
 *     sub_14093A0B8 @ 0x14093A0B8 (sub_14093A0B8.c)
 *     sub_14093A954 @ 0x14093A954 (sub_14093A954.c)
 * Callees:
 *     MmFreePagesFromMdl @ 0x140221A10 (MmFreePagesFromMdl.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14055E720 @ 0x14055E720 (sub_14055E720.c)
 *     RtlNumberOfSetBitsEx @ 0x1405E6540 (RtlNumberOfSetBitsEx.c)
 *     sub_14093C238 @ 0x14093C238 (sub_14093C238.c)
 *     sub_14093C2FC @ 0x14093C2FC (sub_14093C2FC.c)
 *     sub_14093C544 @ 0x14093C544 (sub_14093C544.c)
 *     sub_14093D4CC @ 0x14093D4CC (sub_14093D4CC.c)
 *     sub_14093E294 @ 0x14093E294 (sub_14093E294.c)
 *     sub_14096ED20 @ 0x14096ED20 (sub_14096ED20.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14093D590(__int64 a1)
{
  __int64 v1; // r14
  LARGE_INTEGER v2; // r15
  void *v3; // r13
  void *v5; // r12
  LARGE_INTEGER v6; // rax
  unsigned __int64 v7; // rsi
  struct _KTHREAD *CurrentThread; // rax
  int v9; // edi
  ULONG v10; // r8d
  struct _MDL *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  LARGE_INTEGER v15; // rdi
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  LARGE_INTEGER v18; // rdi
  __int64 v19; // rax
  int v20; // ecx
  __int64 v21; // rsi
  __int128 v22; // xmm0
  int v23; // ecx
  __int128 v24; // xmm0
  __int64 v25; // rax
  LARGE_INTEGER v26; // rcx
  LARGE_INTEGER v27; // rdx
  _DWORD *Pool2; // rax
  ULONG v29; // r8d
  LARGE_INTEGER ByteOffset; // [rsp+38h] [rbp-39h] BYREF
  struct _KTHREAD *i; // [rsp+40h] [rbp-31h]
  __int64 v33; // [rsp+48h] [rbp-29h]
  __int128 v34; // [rsp+50h] [rbp-21h] BYREF
  __int128 v35; // [rsp+60h] [rbp-11h]
  __int64 v36; // [rsp+70h] [rbp-1h]
  __int128 v37; // [rsp+78h] [rbp+7h] BYREF
  __int128 v38; // [rsp+88h] [rbp+17h]
  __int64 v39; // [rsp+98h] [rbp+27h]

  v1 = *(_QWORD *)(a1 + 560);
  v2.QuadPart = 0LL;
  v3 = *(void **)(a1 + 64);
  v33 = 0LL;
  v5 = 0LL;
  v36 = 0LL;
  v34 = 0LL;
  v39 = 0LL;
  v35 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  if ( *(_BYTE *)(a1 + 976) )
    v6.QuadPart = *(_QWORD *)(v1 + 8224) + *(unsigned int *)(a1 + 984);
  else
    v6 = *(LARGE_INTEGER *)(v1 + 8224);
  ByteOffset = v6;
  v7 = 0LL;
  CurrentThread = KeGetCurrentThread();
  for ( i = CurrentThread; v7 < *(_QWORD *)(a1 + 736); ++v7 )
  {
    v9 = sub_14093C238(a1, (__int64)CurrentThread);
    if ( v9 < 0 )
      goto LABEL_52;
    v10 = v7 >= *(_QWORD *)(a1 + 736) - 1LL ? *(_DWORD *)(a1 + 720) << 12 : dword_140C0CBE8;
    v9 = sub_14093D4CC(v3, *(PVOID *)(*(_QWORD *)(a1 + 752) + 8 * v7), v10, &ByteOffset, a1, v2.QuadPart);
    if ( v9 < 0 )
      goto LABEL_52;
    v11 = *(struct _MDL **)(*(_QWORD *)(a1 + 760) + 8 * v7);
    if ( v11 )
    {
      MmFreePagesFromMdl(v11);
      ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(a1 + 760) + 8 * v7), 0x706D644Cu);
      *(LARGE_INTEGER *)(*(_QWORD *)(a1 + 752) + 8 * v7) = v2;
      v12 = *(_QWORD *)(a1 + 760);
    }
    else
    {
      v13 = *(_QWORD *)(a1 + 808);
      if ( v13 )
      {
        v14 = *(_QWORD *)(a1 + 800);
        if ( v7 >= v14 )
        {
          if ( v7 - v14 + 1 == v13 )
          {
            v15 = *(LARGE_INTEGER *)(a1 + 816);
            if ( v15.QuadPart )
            {
              do
              {
                v2 = *(LARGE_INTEGER *)v15.QuadPart;
                if ( (*(_BYTE *)(v15.QuadPart + 10) & 1) != 0 )
                  MmUnmapLockedPages(*(PVOID *)(v15.QuadPart + 24), (PMDL)v15.QuadPart);
                ExFreePoolWithTag((PVOID)v15.QuadPart, 0x706D644Cu);
                v15 = v2;
              }
              while ( v2.QuadPart );
            }
            sub_14093C544((PVOID *)(a1 + 824), *(_DWORD *)(a1 + 832));
            while ( *(_QWORD *)(a1 + 800) < v7 )
              *(LARGE_INTEGER *)(*(_QWORD *)(a1 + 752) + 8LL * (*(_QWORD *)(a1 + 800))++) = v2;
          }
          goto LABEL_36;
        }
      }
      v16 = *(_QWORD *)(a1 + 848);
      if ( v16 )
      {
        v17 = *(_QWORD *)(a1 + 840);
        if ( v7 >= v17 )
        {
          if ( v7 - v17 + 1 == v16 )
          {
            v18 = *(LARGE_INTEGER *)(a1 + 856);
            if ( v18.QuadPart )
            {
              do
              {
                v2 = *(LARGE_INTEGER *)v18.QuadPart;
                if ( (*(_BYTE *)(v18.QuadPart + 10) & 1) != 0 )
                  MmUnmapLockedPages(*(PVOID *)(v18.QuadPart + 24), (PMDL)v18.QuadPart);
                ExFreePoolWithTag((PVOID)v18.QuadPart, 0x706D644Cu);
                v18 = v2;
              }
              while ( v2.QuadPart );
            }
            sub_14093C544((PVOID *)(a1 + 864), *(_DWORD *)(a1 + 872));
            while ( *(_QWORD *)(a1 + 840) < v7 )
              *(LARGE_INTEGER *)(*(_QWORD *)(a1 + 752) + 8LL * (*(_QWORD *)(a1 + 840))++) = v2;
          }
          goto LABEL_36;
        }
      }
      sub_14096ED20(*(_QWORD *)(*(_QWORD *)(a1 + 752) + 8 * v7), (unsigned int)dword_140C0CBE8);
      v12 = *(_QWORD *)(a1 + 752);
    }
    *(LARGE_INTEGER *)(v12 + 8 * v7) = v2;
LABEL_36:
    CurrentThread = i;
  }
  v19 = RtlNumberOfSetBitsEx((_QWORD *)(a1 + 544));
  v20 = *(_DWORD *)(a1 + 1080);
  v21 = v19;
  if ( v20 )
  {
    v22 = *(_OWORD *)(a1 + 1056);
    *(_QWORD *)&v35 = *(_QWORD *)(a1 + 1072);
    v36 = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(a1 + 56) = &v34;
    v34 = v22;
    DWORD2(v35) = v20;
  }
  v23 = *(_DWORD *)(a1 + 1032);
  if ( v23 )
  {
    v24 = *(_OWORD *)(a1 + 1008);
    *(_QWORD *)&v38 = *(_QWORD *)(a1 + 1024);
    v39 = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(a1 + 56) = &v37;
    v37 = v24;
    DWORD2(v38) = v23;
  }
  v9 = sub_14093E294(v3, a1);
  if ( v9 >= 0 )
  {
    v25 = *(unsigned int *)(a1 + 984);
    v26 = ByteOffset;
    *(_DWORD *)(v1 + 4176) |= 0x10u;
    *(_QWORD *)(v1 + 4000) = v26.QuadPart - v25;
    *(_DWORD *)(v1 + 0x2000) = 1347241043;
    *(_DWORD *)(v1 + 8196) = 1347245380;
    *(_QWORD *)(v1 + 8232) = v21;
    if ( *(_BYTE *)(a1 + 976) == LOBYTE(v2.LowPart) )
    {
      ByteOffset = v2;
    }
    else
    {
      v27.QuadPart = *(unsigned int *)(a1 + 984);
      ByteOffset = v27;
      Pool2 = (_DWORD *)ExAllocatePool2(64LL, (LARGE_INTEGER)v27.QuadPart, 1886217292LL);
      v5 = Pool2;
      if ( !Pool2 )
      {
        v9 = -1073741670;
        goto LABEL_52;
      }
      v9 = sub_14055E720(v1, Pool2, *(_DWORD *)(a1 + 984));
      if ( v9 < 0 )
      {
LABEL_51:
        ExFreePoolWithTag(v5, 0);
        goto LABEL_52;
      }
    }
    v9 = sub_14093D4CC(v3, (PVOID)v1, *(_DWORD *)(v1 + 8224), &ByteOffset, a1, v2.QuadPart);
    if ( *(_BYTE *)(a1 + 976) != LOBYTE(v2.LowPart) )
    {
      v29 = *(_DWORD *)(a1 + 984);
      ByteOffset = v2;
      v9 = sub_14093D4CC(v3, v5, v29, &ByteOffset, a1, 1);
    }
    if ( v5 )
      goto LABEL_51;
  }
LABEL_52:
  sub_14093C2FC(a1);
  return (unsigned int)v9;
}
