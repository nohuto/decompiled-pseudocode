/*
 * XREFs of sub_1403857EC @ 0x1403857EC
 * Callers:
 *     sub_14071C610 @ 0x14071C610 (sub_14071C610.c)
 * Callees:
 *     sub_140240DB4 @ 0x140240DB4 (sub_140240DB4.c)
 *     sub_14024E884 @ 0x14024E884 (sub_14024E884.c)
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     sub_1402A1A20 @ 0x1402A1A20 (sub_1402A1A20.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     sub_1402A2DE8 @ 0x1402A2DE8 (sub_1402A2DE8.c)
 *     sub_1402A386C @ 0x1402A386C (sub_1402A386C.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     sub_1402A3F9C @ 0x1402A3F9C (sub_1402A3F9C.c)
 *     sub_1402A6AB0 @ 0x1402A6AB0 (sub_1402A6AB0.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x14030F1E0 (MmDoesFileHaveUserWritableReferences.c)
 *     sub_140376950 @ 0x140376950 (sub_140376950.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1404173E4 @ 0x1404173E4 (sub_1404173E4.c)
 *     sub_140542AEC @ 0x140542AEC (sub_140542AEC.c)
 *     sub_1406BE148 @ 0x1406BE148 (sub_1406BE148.c)
 *     sub_14071CAB0 @ 0x14071CAB0 (sub_14071CAB0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1403857EC(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v7; // r15d
  unsigned int v11; // ebx
  __int64 v12; // rsi
  int v13; // r11d
  _QWORD *v14; // r14
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 *i; // r14
  __int64 *v18; // rcx
  _QWORD *v19; // r14
  __int64 v20; // rcx
  _QWORD *v21; // rax
  SECTION_OBJECT_POINTERS *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // ecx
  int v27; // eax
  struct _KTHREAD *CurrentThread; // rcx
  int v29; // ecx
  __int64 v30; // r15
  __int64 v31; // r8
  _QWORD *v32; // r12
  _QWORD *m; // r15
  _QWORD *n; // rax
  PVOID *v35; // r15
  _QWORD *v36; // r12
  _QWORD *j; // r15
  _QWORD *k; // rax
  _QWORD *v39; // r15
  unsigned int v41; // [rsp+44h] [rbp-E4h] BYREF
  _QWORD *v42; // [rsp+48h] [rbp-E0h] BYREF
  PVOID P; // [rsp+50h] [rbp-D8h] BYREF
  _QWORD v44[2]; // [rsp+58h] [rbp-D0h] BYREF
  __int64 v45; // [rsp+68h] [rbp-C0h] BYREF
  __int64 v46; // [rsp+70h] [rbp-B8h]
  __int64 v47; // [rsp+78h] [rbp-B0h]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+80h] [rbp-A8h] BYREF
  _QWORD *v49; // [rsp+A0h] [rbp-88h]
  __int64 v50; // [rsp+A8h] [rbp-80h]
  unsigned int *v51; // [rsp+B0h] [rbp-78h]
  __int64 v52; // [rsp+B8h] [rbp-70h]
  _QWORD *v53; // [rsp+C0h] [rbp-68h]
  __int64 v54; // [rsp+C8h] [rbp-60h]
  __int64 *v55; // [rsp+D0h] [rbp-58h]
  __int64 v56; // [rsp+D8h] [rbp-50h]

  v7 = a4;
  v41 = a4;
  v11 = 0;
  LODWORD(v44[0]) = 0;
  P = 0LL;
  v12 = *a1;
  if ( !*a1 )
  {
    v12 = sub_1406BE148(a1, a2);
    *a1 = v12;
  }
  v44[1] = v12;
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v12 + 152));
  if ( (*(_DWORD *)(v12 + 144) & 0x10000) != 0 && *(_BYTE *)a2 == 13 && sub_1402A3F9C(v12, *(_QWORD *)(a2 + 48), &P) )
  {
    if ( (v13 & 0x20000) != 0 )
    {
      v14 = P;
      sub_1402A386C((__int64)P);
      v15 = v14[7];
      v16 = (_QWORD *)v14[8];
      if ( *(_QWORD **)(v15 + 8) != v14 + 7 || (_QWORD *)*v16 != v14 + 7 )
        __fastfail(3u);
      *v16 = v15;
      *(_QWORD *)(v15 + 8) = v16;
      if ( *(_QWORD *)(v12 + 120) == v12 + 120 )
        *(_DWORD *)(v12 + 144) &= 0xFFFCFFFF;
      if ( v14[5] )
        sub_140240DB4(v12, (__int64)v14);
      ExFreePoolWithTag(v14, 0);
      P = 0LL;
      sub_1402A2DE8(v12);
      goto LABEL_14;
    }
    for ( i = *(__int64 **)(v12 + 88); i != (__int64 *)(v12 + 88); i = (__int64 *)*i )
    {
      v18 = i;
      if ( !*((_BYTE *)i + 53) )
      {
        i = (__int64 *)i[1];
        sub_14024E884(v18);
      }
    }
    v19 = P;
    sub_1402A386C((__int64)P);
    v20 = v19[7];
    v21 = (_QWORD *)v19[8];
    if ( *(_QWORD **)(v20 + 8) != v19 + 7 || (_QWORD *)*v21 != v19 + 7 )
      __fastfail(3u);
    *v21 = v20;
    *(_QWORD *)(v20 + 8) = v21;
    if ( *(_QWORD *)(v12 + 120) == v12 + 120 )
      *(_DWORD *)(v12 + 144) &= 0xFFFCFFFF;
    if ( v19[5] )
      sub_140240DB4(v12, (__int64)v19);
    ExFreePoolWithTag(v19, 0);
    P = 0LL;
    sub_1402A2DE8(v12);
    v7 = v41;
  }
  if ( !(unsigned __int8)sub_14071CAB0(a6, a7) )
    goto LABEL_14;
  LODWORD(v42) = a6 & 0x1000;
  if ( (a6 & 0x1000) != 0 )
  {
    v22 = *(SECTION_OBJECT_POINTERS **)(*(_QWORD *)(a2 + 48) + 40LL);
    if ( v22 )
    {
      if ( MmDoesFileHaveUserWritableReferences(v22) )
      {
        v23 = *(_QWORD *)(a3 + 24);
        *(_DWORD *)(v23 + 8) = 0;
        *(_DWORD *)(v23 + 12) |= 4u;
        if ( (unsigned int)dword_140C038D8 > 5 && sub_1402A2000((__int64)&dword_140C038D8, 0x400000000000LL) )
        {
          v44[0] = 1LL;
          v49 = v44;
          v50 = 8LL;
          v41 = a6;
          v51 = &v41;
          v52 = v25;
          LODWORD(v42) = *(_DWORD *)(v12 + 144);
          v53 = &v42;
          v54 = v25;
          v45 = 0x1000000LL;
          v55 = &v45;
          v56 = 8LL;
          sub_1402A1A20((__int64)&dword_140C038D8, (unsigned __int8 *)&word_14002A9F2, v24, 6u, &v48);
        }
        goto LABEL_14;
      }
    }
  }
  if ( a6 == 200 )
  {
    *(_QWORD *)v12 = a3;
    *(_QWORD *)(v12 + 8) = *(_QWORD *)(a2 + 48);
    *(_DWORD *)(v12 + 144) = *(_DWORD *)(v12 + 144) & 0x20 | 0xC8;
    goto LABEL_103;
  }
  v26 = *(_DWORD *)(v12 + 144);
  if ( (v26 & 0x91) == 0 )
  {
    if ( (v26 & 0x7000) == 0 || (v26 & 0x1F00F00) != 0 || *(_QWORD *)(v12 + 72) != v12 + 72 )
    {
      if ( (a6 & 0x10000) != 0 )
        goto LABEL_42;
      goto LABEL_101;
    }
    if ( (a6 & 0x10000) != 0 )
      goto LABEL_42;
    if ( (a6 & 0x7000) == 0 || *(_BYTE *)(*(_QWORD *)(a2 + 48) + 73LL) && (a6 & 0x2000) != 0 )
    {
LABEL_14:
      v11 = -1073741598;
LABEL_102:
      *(_DWORD *)(a3 + 48) = v11;
      IofCompleteRequest((PIRP)a3, 1);
      goto LABEL_103;
    }
    v29 = v26 & 0x1F0FFDF;
    if ( v29 == 4096 )
    {
      if ( ((a6 - 20544) & 0xFFFFDFFF) != 0 )
        goto LABEL_14;
      v36 = (_QWORD *)(v12 + 40);
      for ( j = *(_QWORD **)(v12 + 40); j != v36; j = (_QWORD *)*j )
      {
        v45 = j[2];
        if ( !sub_1402A6AB0(*(_QWORD *)(a2 + 48), *(_QWORD *)(v45 + 48), 0) )
        {
LABEL_90:
          v11 = -1073741598;
          goto LABEL_102;
        }
      }
      if ( v41 <= 1 || (a5 & 1) != 0 )
      {
        for ( k = (_QWORD *)*v36; ; k = (_QWORD *)*v39 )
        {
          v42 = k;
          if ( k == v36 )
            break;
          v39 = (_QWORD *)k[1];
          sub_140542AEC(*v39, 533LL, a6 & 0x7000);
        }
LABEL_54:
        *(_QWORD *)v12 = a3;
        *(_QWORD *)(v12 + 8) = *(_QWORD *)(a2 + 48);
        sub_140240DB4(v12, 0LL);
        *(_QWORD *)(v12 + 16) = *((_QWORD *)KeGetCurrentThread() + 23);
        CurrentThread = KeGetCurrentThread();
        *(_QWORD *)(v12 + 24) = CurrentThread;
        ObfReferenceObjectWithTag(CurrentThread, 0x746C6644u);
        *(_BYTE *)(v12 + 32) = 0;
        *(_DWORD *)(v12 + 144) = a6 | *(_DWORD *)(v12 + 144) & 0x20;
        ObfReferenceObjectWithTag(*(PVOID *)(a2 + 48), 0x746C6644u);
        *(_BYTE *)(*(_QWORD *)(a3 + 184) + 3LL) |= 1u;
        *(_QWORD *)(a3 + 56) = v12;
        *(_BYTE *)(a3 + 69) = KeAcquireQueuedSpinLock(7uLL);
        if ( *(_BYTE *)(a3 + 68) )
        {
          sub_140376950(a3, 1, 1);
        }
        else
        {
          _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)sub_140376930);
          KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
        }
        v11 = 259;
        goto LABEL_103;
      }
    }
    else
    {
      if ( v29 != 12288 )
      {
        if ( (v29 == 20544 || v29 == 28736 && a6 == 28736)
          && ((a6 - 20544) & 0xFFFFDFFF) == 0
          && sub_1402A6AB0(*(_QWORD *)(a2 + 48), *(_QWORD *)(v12 + 8), 0) )
        {
          v46 = *(_QWORD *)v12;
          v30 = v46;
          *(_BYTE *)(v30 + 69) = KeAcquireQueuedSpinLock(7uLL);
          _InterlockedExchange64((volatile __int64 *)(v30 + 104), 0LL);
          KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v30 + 69));
          if ( *(_BYTE *)(v46 + 68) )
          {
            *(_QWORD *)(v30 + 56) = 0LL;
            *(_DWORD *)(v30 + 48) = -1073741536;
          }
          else
          {
            v31 = *(_QWORD *)(v46 + 24);
            v47 = v31;
            *(_OWORD *)v31 = 0LL;
            *(_QWORD *)(v31 + 16) = 0LL;
            *(_DWORD *)v31 = 1572865;
            *(_DWORD *)(v31 + 4) = (*(_DWORD *)(v12 + 144) >> 12) & 7;
            *(_DWORD *)(v31 + 8) = ((_DWORD)v42 != 0) | (a6 >> 12) & 6;
            *(_QWORD *)(v30 + 56) = 24LL;
            *(_DWORD *)(v30 + 48) = 533;
          }
          IofCompleteRequest((PIRP)v30, 1);
          *(_QWORD *)v12 = 0LL;
          ObfDereferenceObjectWithTag(*(PVOID *)(v12 + 8), 0x746C6644u);
          *(_QWORD *)(v12 + 8) = 0LL;
          goto LABEL_54;
        }
        goto LABEL_14;
      }
      if ( a6 != 28736 )
        goto LABEL_14;
      v32 = (_QWORD *)(v12 + 56);
      for ( m = *(_QWORD **)(v12 + 56); m != v32; m = (_QWORD *)*m )
      {
        if ( !sub_1402A6AB0(*(_QWORD *)(a2 + 48), m[3], 0) )
          goto LABEL_90;
        if ( m[7] )
        {
          v11 = -1073741597;
          goto LABEL_102;
        }
      }
      if ( v41 <= 1 || (a5 & 1) != 0 )
      {
        for ( n = (_QWORD *)*v32; ; n = *v35 )
        {
          v42 = n;
          if ( n == v32 )
            break;
          v35 = (PVOID *)n[1];
          sub_1404173E4(*v35, 0, 0, 0);
        }
        goto LABEL_54;
      }
    }
    v11 = -1073741598;
    goto LABEL_102;
  }
  if ( (v26 & 0x10) != 0 && (a6 & 0x7000) != 0
    || (v26 & 0x80u) != 0 && !sub_1402A6AB0(*(_QWORD *)(a2 + 48), *(_QWORD *)(v12 + 8), 0) )
  {
    goto LABEL_41;
  }
  v27 = *(_DWORD *)(v12 + 144) & 0x1F0FFDF;
  if ( v27 == 16 || v27 == 4096 || v27 == 4112 )
    sub_140542AEC(*(_QWORD *)(v12 + 40), 0LL, 0LL);
  if ( v7 <= 1 || (*(_DWORD *)(v12 + 144) & 1) == 0 || (a5 & 1) != 0 )
  {
    if ( !*(_BYTE *)(*(_QWORD *)(a2 + 48) + 73LL) || (a6 & 0x2000) == 0 )
      goto LABEL_54;
LABEL_41:
    if ( (a6 & 0x10000) != 0 )
    {
LABEL_42:
      v11 = -1073739511;
      goto LABEL_103;
    }
    goto LABEL_14;
  }
LABEL_101:
  v11 = -1073741598;
  if ( a3 )
    goto LABEL_102;
LABEL_103:
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v12 + 152));
  return v11;
}
