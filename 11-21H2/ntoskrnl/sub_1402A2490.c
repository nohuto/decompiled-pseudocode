/*
 * XREFs of sub_1402A2490 @ 0x1402A2490
 * Callers:
 *     sub_14039F3B0 @ 0x14039F3B0 (sub_14039F3B0.c)
 *     sub_140542834 @ 0x140542834 (sub_140542834.c)
 *     sub_14071C610 @ 0x14071C610 (sub_14071C610.c)
 * Callees:
 *     sub_140240DB4 @ 0x140240DB4 (sub_140240DB4.c)
 *     sub_14024E6F0 @ 0x14024E6F0 (sub_14024E6F0.c)
 *     sub_14024E884 @ 0x14024E884 (sub_14024E884.c)
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     sub_1402A1A20 @ 0x1402A1A20 (sub_1402A1A20.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     sub_1402A2DE8 @ 0x1402A2DE8 (sub_1402A2DE8.c)
 *     sub_1402A2E8C @ 0x1402A2E8C (sub_1402A2E8C.c)
 *     sub_1402A386C @ 0x1402A386C (sub_1402A386C.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     sub_1402A3F9C @ 0x1402A3F9C (sub_1402A3F9C.c)
 *     sub_1402A6AB0 @ 0x1402A6AB0 (sub_1402A6AB0.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x14030F1E0 (MmDoesFileHaveUserWritableReferences.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1404173E4 @ 0x1404173E4 (sub_1404173E4.c)
 *     sub_14054268C @ 0x14054268C (sub_14054268C.c)
 *     sub_140542AEC @ 0x140542AEC (sub_140542AEC.c)
 *     sub_1406BE148 @ 0x1406BE148 (sub_1406BE148.c)
 *     sub_14071CAB0 @ 0x14071CAB0 (sub_14071CAB0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1402A2490(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        char a6,
        char a7,
        unsigned int a8)
{
  __int64 v10; // r12
  unsigned int v12; // ebx
  char v13; // r13
  __int64 v14; // r14
  char v15; // si
  int v16; // r11d
  _QWORD *v17; // rbx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 *i; // rsi
  __int64 *v21; // rcx
  _QWORD *v22; // rsi
  __int64 v23; // rcx
  _QWORD *v24; // rax
  SECTION_OBJECT_POINTERS *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // r8
  int v28; // ecx
  int v29; // eax
  int v30; // eax
  __int64 *m; // rbx
  __int64 *n; // rbx
  _QWORD *v33; // rbx
  _QWORD *v34; // r13
  int v35; // eax
  _QWORD *v36; // rax
  _QWORD *v37; // rcx
  __int64 v38; // rdx
  int v39; // eax
  int v40; // eax
  int v41; // ecx
  int v42; // eax
  _QWORD *v43; // rbx
  _QWORD *j; // rbx
  int v45; // eax
  __int64 *k; // rbx
  __int64 v47; // rdx
  _QWORD *v48; // rax
  _QWORD *v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rdx
  char v53; // [rsp+44h] [rbp-E4h]
  PVOID P; // [rsp+48h] [rbp-E0h] BYREF
  unsigned int v55; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v56; // [rsp+58h] [rbp-D0h] BYREF
  PFAST_MUTEX FastMutex; // [rsp+60h] [rbp-C8h]
  __int64 v58; // [rsp+68h] [rbp-C0h] BYREF
  __int64 v59; // [rsp+70h] [rbp-B8h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-B0h]
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+80h] [rbp-A8h] BYREF
  __int64 *v62; // [rsp+A0h] [rbp-88h]
  __int64 v63; // [rsp+A8h] [rbp-80h]
  int *v64; // [rsp+B0h] [rbp-78h]
  __int64 v65; // [rsp+B8h] [rbp-70h]
  __int64 *v66; // [rsp+C0h] [rbp-68h]
  __int64 v67; // [rsp+C8h] [rbp-60h]
  __int64 *v68; // [rsp+D0h] [rbp-58h]
  __int64 v69; // [rsp+D8h] [rbp-50h]

  v10 = a2;
  v56 = a2;
  v58 = a5;
  v12 = 0;
  P = 0LL;
  FastMutex = 0LL;
  v53 = 0;
  v13 = 0;
  v14 = *a1;
  if ( !*a1 )
  {
    v14 = sub_1406BE148();
    *a1 = v14;
  }
  v15 = a7;
  if ( !a7 && a4 != 0x10000 )
  {
    FastMutex = *(PFAST_MUTEX *)(v14 + 152);
    ExAcquireFastMutexUnsafe(FastMutex);
    v53 = 1;
  }
  if ( (*(_DWORD *)(v14 + 144) & 0x10000) != 0
    && *(_BYTE *)v10 == 13
    && (unsigned __int8)sub_1402A3F9C(v14, *(_QWORD *)(v10 + 48), &P) )
  {
    if ( (v16 & 0x20000) != 0 )
    {
      v17 = P;
      sub_1402A386C(P);
      v18 = v17[7];
      v19 = (_QWORD *)v17[8];
      if ( *(_QWORD **)(v18 + 8) != v17 + 7 || (_QWORD *)*v19 != v17 + 7 )
        __fastfail(3u);
      *v19 = v18;
      *(_QWORD *)(v18 + 8) = v19;
      if ( *(_QWORD *)(v14 + 120) == v14 + 120 )
        *(_DWORD *)(v14 + 144) &= 0xFFFCFFFF;
      if ( v17[5] )
        sub_140240DB4(v14, (__int64)v17);
      ExFreePoolWithTag(v17, 0);
      P = 0LL;
      sub_1402A2DE8(v14);
LABEL_144:
      v12 = -1073741598;
LABEL_145:
      *(_DWORD *)(a3 + 48) = -1073741598;
      IofCompleteRequest((PIRP)a3, 1);
      goto LABEL_146;
    }
    for ( i = *(__int64 **)(v14 + 88); i != (__int64 *)(v14 + 88); i = (__int64 *)*i )
    {
      v21 = i;
      if ( !*((_BYTE *)i + 53) || a4 != 12288 )
      {
        i = (__int64 *)i[1];
        sub_14024E884(v21);
      }
    }
    v22 = P;
    sub_1402A386C(P);
    v23 = v22[7];
    v24 = (_QWORD *)v22[8];
    if ( *(_QWORD **)(v23 + 8) != v22 + 7 || (_QWORD *)*v24 != v22 + 7 )
      __fastfail(3u);
    *v24 = v23;
    *(_QWORD *)(v23 + 8) = v24;
    if ( *(_QWORD *)(v14 + 120) == v14 + 120 )
      *(_DWORD *)(v14 + 144) &= 0xFFFCFFFF;
    if ( v22[5] )
      sub_140240DB4(v14, (__int64)v22);
    ExFreePoolWithTag(v22, 0);
    P = 0LL;
    sub_1402A2DE8(v14);
    v10 = v56;
    v15 = a7;
  }
  if ( !(unsigned __int8)sub_14071CAB0(a4, a8) )
    goto LABEL_144;
  if ( (a4 & 0x1000) != 0 || a4 == 0x10000 )
  {
    v25 = *(SECTION_OBJECT_POINTERS **)(*(_QWORD *)(v10 + 48) + 40LL);
    if ( v25 )
    {
      if ( MmDoesFileHaveUserWritableReferences(v25) )
      {
        if ( a4 == 0x10000 )
        {
          v12 = -1073741598;
          goto LABEL_146;
        }
        v26 = *(_QWORD *)(a3 + 24);
        *(_DWORD *)(v26 + 8) = 0;
        *(_DWORD *)(v26 + 12) |= 4u;
        if ( (unsigned int)dword_140C038D8 > 5 && sub_1402A2000((__int64)&dword_140C038D8, 0x400000000000LL) )
        {
          v59 = 1LL;
          v62 = &v59;
          v63 = 8LL;
          v55 = a4;
          v64 = (int *)&v55;
          v65 = 4LL;
          LODWORD(v56) = *(_DWORD *)(v14 + 144);
          v66 = &v56;
          v67 = 4LL;
          v58 = 0x1000000LL;
          v68 = &v58;
          v69 = 8LL;
          sub_1402A1A20((__int64)&dword_140C038D8, (unsigned __int8 *)&byte_14002AA68, v27, 6u, &v61);
        }
        goto LABEL_144;
      }
    }
  }
  if ( !v15 && (*(_DWORD *)(v14 + 144) & 0x40) != 0 )
  {
LABEL_44:
    if ( a4 == 0x10000 )
    {
      v12 = -1073739511;
      goto LABEL_146;
    }
    goto LABEL_144;
  }
  if ( a4 == 16 )
  {
    v39 = *(_DWORD *)(v14 + 144);
    if ( (v39 & 1) == 0 )
    {
      v40 = v39 & 0x1F0FFDF;
      if ( v40 != 16 && v40 != 4096 && v40 != 4112 )
        goto LABEL_144;
    }
    goto LABEL_105;
  }
  if ( a4 == 4096 )
  {
LABEL_105:
    if ( !v15 )
    {
      v41 = *(_DWORD *)(v14 + 144);
      if ( (v41 & 1) == 0 )
      {
        v42 = v41 & 0x1F0FFDF;
        if ( (v41 & 0x1F0FFDF) != 0x10
          && v42 != 4096
          && v42 != 4112
          && v42 != 12288
          && v42 != 45056
          && v42 != 1060864
          && v42 != 8400896
          && (v41 & 0x10000) == 0 )
        {
          goto LABEL_144;
        }
      }
      v43 = *(_QWORD **)(v14 + 56);
      if ( v43 != (_QWORD *)(v14 + 56) )
        goto LABEL_118;
      if ( *(_QWORD *)(v14 + 72) != v14 + 72 )
      {
        while ( v43 != (_QWORD *)(v14 + 56) )
        {
LABEL_118:
          if ( (unsigned __int8)sub_1402A6AB0(*(_QWORD *)(v10 + 48), v43[3], 0LL) )
            goto LABEL_144;
          v43 = (_QWORD *)*v43;
        }
        for ( j = *(_QWORD **)(v14 + 72); j != (_QWORD *)(v14 + 72); j = (_QWORD *)*j )
        {
          if ( (unsigned __int8)sub_1402A6AB0(*(_QWORD *)(v10 + 48), j[3], 0LL) )
            goto LABEL_144;
        }
      }
      v45 = *(_DWORD *)(v14 + 144) & 0x1F0FFDF;
      if ( v45 == 16 || v45 == 4096 || v45 == 4112 || v45 == 45056 )
      {
        for ( k = *(__int64 **)(v14 + 40); k != (__int64 *)(v14 + 40); k = (__int64 *)*k )
        {
          v47 = k[2];
          if ( (*(_DWORD *)(v47 + 24) == 590400 || *(_QWORD *)(v47 + 48) != *(_QWORD *)(v10 + 48))
            && (unsigned __int8)sub_1402A6AB0(*(_QWORD *)(v10 + 48), *(_QWORD *)(v47 + 48), 0LL) )
          {
            sub_140542AEC(*(_QWORD *)k[1], 533LL, a4 & 0x7000);
            break;
          }
        }
      }
    }
    *(_BYTE *)(*(_QWORD *)(a3 + 184) + 3LL) |= 1u;
    *(_DWORD *)(a3 + 48) = 0;
    v48 = (_QWORD *)(a3 + 168);
    v49 = (_QWORD *)(v14 + 40);
    v50 = *(_QWORD *)(v14 + 40);
    if ( *(_QWORD *)(v50 + 8) != v14 + 40 )
      __fastfail(3u);
    *v48 = v50;
    *(_QWORD *)(a3 + 176) = v49;
    *(_QWORD *)(v50 + 8) = v48;
    *v49 = v48;
    *(_QWORD *)(a3 + 56) = v14;
    sub_1402A2DE8(v14);
    if ( a6 )
      ObfReferenceObjectWithTag(*(PVOID *)(v10 + 48), 0x746C6644u);
    *(_BYTE *)(a3 + 69) = KeAcquireQueuedSpinLock(7uLL);
    if ( *(_BYTE *)(a3 + 68) )
    {
      LOBYTE(v51) = 1;
      sub_14054268C(a3, v51);
    }
    else
    {
      _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)sub_140542AD0);
      KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
    }
    v13 = 1;
    v12 = 259;
LABEL_143:
    if ( v13 )
      goto LABEL_146;
    goto LABEL_144;
  }
  if ( a4 != 12288 && a4 != 0x10000 )
    goto LABEL_143;
  if ( !v15 )
  {
    v28 = *(_DWORD *)(v14 + 144);
    if ( (v28 & 1) == 0 )
    {
      v29 = v28 & 0x1F0FFDF;
      if ( (v28 & 0x1F0FFDF) != 0x1000
        && v29 != 12288
        && v29 != 45056
        && v29 != 1060864
        && v29 != 8400896
        && (v28 & 0x10000) == 0 )
      {
        goto LABEL_44;
      }
    }
  }
  if ( *(_BYTE *)(*(_QWORD *)(v10 + 48) + 73LL) )
    goto LABEL_44;
  if ( !v15 )
  {
    v30 = *(_DWORD *)(v14 + 144) & 0x1F0FFDF;
    if ( v30 == 4096 || v30 == 45056 )
    {
      for ( m = *(__int64 **)(v14 + 40); m != (__int64 *)(v14 + 40); m = (__int64 *)*m )
      {
        if ( (unsigned __int8)sub_1402A6AB0(*(_QWORD *)(v10 + 48), *(_QWORD *)(m[2] + 48), 0LL) )
        {
          if ( a4 == 0x10000 )
          {
            v12 = -1073741597;
            goto LABEL_146;
          }
          sub_140542AEC(*(_QWORD *)m[1], 533LL, 12288LL);
          break;
        }
      }
    }
    if ( (((*(_DWORD *)(v14 + 144) & 0x1F0FFDF) - 12288) & 0xFFFF7FFF) == 0 )
    {
      for ( n = *(__int64 **)(v14 + 56); n != (__int64 *)(v14 + 56); n = (__int64 *)*n )
      {
        if ( (unsigned __int8)sub_1402A6AB0(*(_QWORD *)(v10 + 48), n[3], 0LL) && !n[7] )
        {
          if ( a4 == 0x10000 )
          {
            v12 = -1073741597;
            goto LABEL_146;
          }
          sub_1404173E4(*(PVOID *)n[1], 0, 0, 0);
          break;
        }
      }
    }
    v33 = *(_QWORD **)(v14 + 72);
    if ( v33 != (_QWORD *)(v14 + 72) )
    {
      while ( v33 != (_QWORD *)(v14 + 72) )
      {
        if ( (unsigned __int8)sub_1402A6AB0(*(_QWORD *)(v10 + 48), v33[3], 0LL) )
        {
          v12 = -1073741598;
          if ( a4 == 0x10000 )
            goto LABEL_146;
          goto LABEL_145;
        }
        v33 = (_QWORD *)*v33;
      }
    }
  }
  v34 = (_QWORD *)v58;
  *(_QWORD *)(*(_QWORD *)v58 + 32LL) = *((_QWORD *)KeGetCurrentThread() + 23);
  *(_QWORD *)(*v34 + 24LL) = *(_QWORD *)(v10 + 48);
  v35 = sub_1402A2E8C(v14 + 56, *v34);
  v12 = v35;
  if ( v35 >= 0 )
  {
    if ( a4 == 0x10000 )
    {
      v36 = (_QWORD *)(*v34 + 56LL);
      v37 = (_QWORD *)(v14 + 120);
      v38 = *(_QWORD *)(v14 + 120);
      if ( *(_QWORD *)(v38 + 8) != v14 + 120 )
        __fastfail(3u);
      *v36 = v38;
      v36[1] = v37;
      *(_QWORD *)(v38 + 8) = v36;
      *v37 = v36;
      v12 = 0;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      *(_QWORD *)(*v34 + 40LL) = CurrentThread;
      ObfReferenceObjectWithTag(*(PVOID *)(*v34 + 40LL), 0x746C6644u);
      *(_QWORD *)(*v34 + 16LL) = a3;
      *(_BYTE *)(*(_QWORD *)(a3 + 184) + 3LL) |= 1u;
      v12 = 259;
      *(_DWORD *)(a3 + 48) = 0;
      *(_QWORD *)(a3 + 56) = v14;
      if ( a6 )
        ObfReferenceObjectWithTag(*(PVOID *)(*v34 + 24LL), 0x746C6644u);
      *(_BYTE *)(a3 + 69) = KeAcquireQueuedSpinLock(7uLL);
      if ( *(_BYTE *)(a3 + 68) )
      {
        if ( a6 && a7 )
          sub_14024E6F0(a3, 1, 0);
        else
          sub_14024E6F0(a3, 1, 1);
      }
      else
      {
        _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)sub_14024E6D0);
        KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
        v12 = 259;
      }
    }
    *v34 = 0LL;
    sub_1402A2DE8(v14);
    if ( a4 == 0x10000 )
      *(_DWORD *)(v14 + 144) |= 0x10000u;
  }
  else if ( a4 != 0x10000 )
  {
    *(_DWORD *)(a3 + 48) = v35;
    IofCompleteRequest((PIRP)a3, 1);
  }
LABEL_146:
  if ( v53 && a4 != 0x10000 )
    ExReleaseFastMutexUnsafe(FastMutex);
  return v12;
}
