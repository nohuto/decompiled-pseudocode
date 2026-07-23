/*
 * XREFs of sub_1407762E4 @ 0x1407762E4
 * Callers:
 *     sub_140777D40 @ 0x140777D40 (sub_140777D40.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     sub_140773030 @ 0x140773030 (sub_140773030.c)
 *     ?_Getint@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0HHAEAH@Z_0 @ 0x1407731E8 (-_Getint@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@A_ea_1407731E8.c)
 *     sub_140776E5C @ 0x140776E5C (sub_140776E5C.c)
 *     sub_140777C60 @ 0x140777C60 (sub_140777C60.c)
 *     sub_140777CF0 @ 0x140777CF0 (sub_140777CF0.c)
 *     sub_1407792B4 @ 0x1407792B4 (sub_1407792B4.c)
 *     sub_140779800 @ 0x140779800 (sub_140779800.c)
 *     sub_140779850 @ 0x140779850 (sub_140779850.c)
 *     sub_14077A8E0 @ 0x14077A8E0 (sub_14077A8E0.c)
 *     sub_14077B0A4 @ 0x14077B0A4 (sub_14077B0A4.c)
 *     sub_14077B394 @ 0x14077B394 (sub_14077B394.c)
 */

__int64 __fastcall sub_1407762E4(PERESOURCE Resource, KSPIN_LOCK a2)
{
  __int64 v2; // rax
  int v5; // ebx
  int *v6; // r12
  struct _KTHREAD *v7; // rax
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // ecx
  int v11; // eax
  void *v12; // rsi
  ULONG_PTR v13; // rsi
  __int64 *v15; // rsi
  unsigned int i; // r14d
  __int64 *v17; // r13
  __int64 v18; // rax
  int v19; // r9d
  __int128 v20; // xmm0
  __int64 v21; // rax
  int v22; // eax
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *SpinLock; // rcx
  const wchar_t *v25; // rsi
  __int64 v26; // rax
  const wchar_t *j; // r14
  __int64 v28; // rax
  int v29; // eax
  void *v30; // r14
  __int64 v31; // rax
  struct _KTHREAD *v32; // rax
  __int64 v33; // [rsp+20h] [rbp-B9h]
  char v34; // [rsp+30h] [rbp-A9h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-A1h] BYREF
  __int64 v36; // [rsp+40h] [rbp-99h] BYREF
  _OWORD v37[2]; // [rsp+48h] [rbp-91h] BYREF
  __int128 v38; // [rsp+68h] [rbp-71h]
  int *v39; // [rsp+78h] [rbp-61h]
  __int128 v40; // [rsp+80h] [rbp-59h] BYREF
  __int128 v41; // [rsp+90h] [rbp-49h]
  _WORD v42[40]; // [rsp+A0h] [rbp-39h] BYREF

  v2 = *(_QWORD *)(a2 + 24);
  BugCheckParameter2 = 0LL;
  v36 = 0LL;
  LOBYTE(v2) = *(_BYTE *)(v2 + 40) & 1;
  v39 = 0LL;
  v34 = v2;
  v5 = 0;
  v6 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  memset(v37, 0, sizeof(v37));
  v38 = 0LL;
  if ( !(_BYTE)v2 )
    goto LABEL_2;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceSharedLite(Resource, 1u);
  ExAcquireFastMutex((PFAST_MUTEX)&Resource[1]);
  if ( (HIDWORD(Resource[2].OwnerTable) & 2) != 0 )
  {
    v5 = -1073741670;
  }
  else
  {
    SpinLock = (PERESOURCE *)Resource[1].SpinLock;
    if ( *SpinLock != (PERESOURCE)&Resource[1].Address )
      __fastfail(3u);
    *(_QWORD *)a2 = (char *)Resource + 192;
    *(_QWORD *)(a2 + 8) = SpinLock;
    *SpinLock = (PERESOURCE)a2;
    Resource[1].SpinLock = a2;
    ++LODWORD(Resource[2].OwnerTable);
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 212));
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&Resource[1]);
  if ( v5 >= 0 )
  {
LABEL_2:
    v7 = KeGetCurrentThread();
    --*((_WORD *)v7 + 242);
    ExAcquirePushLockExclusiveEx(a2 + 64, 0LL);
    v8 = *(_QWORD *)(a2 + 24);
    v9 = *(_DWORD *)(v8 + 20);
    if ( !v9 )
    {
      v15 = &qword_1400010C0;
      v5 = -1073741823;
      for ( i = 0; i < 6; ++i )
      {
        v17 = v15;
        if ( *(_DWORD *)v15 == *(_DWORD *)&Resource[2].ActiveCount )
        {
          v18 = v15[1];
          v19 = *((_DWORD *)v15 + 4);
          v20 = *(_OWORD *)v18;
          LODWORD(v41) = *(_DWORD *)(v18 + 16);
          v21 = *(_QWORD *)(a2 + 24);
          v40 = v20;
          v5 = std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(
                 *(_DWORD *)(v21 + 80),
                 *(_DWORD **)(v21 + 88),
                 (__int64)&v40,
                 v19,
                 (__int64)v37);
          if ( v5 != -1073741823 )
            break;
        }
        v15 += 4;
      }
      if ( v5 < 0 )
      {
        if ( v5 != -1073741823 )
          goto LABEL_12;
        v5 = sub_140779850(*(unsigned int *)&Resource[2].ActiveCount, sub_140779290, a2);
        if ( v5 < 0 )
          goto LABEL_12;
      }
      else
      {
        if ( DWORD2(v38) != *((_DWORD *)v17 + 5) )
          goto LABEL_10;
        if ( DWORD2(v38) == 13 )
        {
          v5 = sub_140773030(v39, v42);
          if ( v5 < 0 )
            goto LABEL_12;
          v6 = (int *)v42;
        }
        else if ( DWORD2(v38) == 18 )
        {
          v6 = v39;
        }
        v22 = sub_14077B0A4(*((unsigned int *)v17 + 6), v6, &BugCheckParameter2);
        v5 = v22;
        if ( v22 == -1073741772 )
          goto LABEL_10;
        if ( v22 < 0 )
          goto LABEL_12;
        v5 = sub_14077A8E0(*((unsigned int *)v17 + 7), BugCheckParameter2, sub_140779290, a2, v33);
        sub_14077B394((PVOID)BugCheckParameter2);
      }
      goto LABEL_9;
    }
    v10 = v9 - 1;
    if ( v10 )
    {
      if ( v10 == 1 )
      {
        v25 = *(const wchar_t **)(v8 + 32);
        while ( 2 )
        {
          if ( *v25 )
          {
            v26 = -1LL;
            do
              ++v26;
            while ( v25[v26] );
            for ( j = &v25[v26 + 1]; *j; j += v28 + 1 )
            {
              if ( !wcsicmp(v25, j) )
                goto LABEL_59;
              v28 = -1LL;
              do
                ++v28;
              while ( j[v28] );
            }
            v29 = sub_14077B0A4(*(unsigned int *)&Resource[2].ActiveCount, v25, &BugCheckParameter2);
            v5 = v29;
            if ( v29 == -1073741772 )
            {
              v5 = 0;
            }
            else
            {
              if ( v29 < 0 )
                goto LABEL_12;
              v30 = (void *)BugCheckParameter2;
              if ( (unsigned __int8)sub_140779800(BugCheckParameter2) )
                v5 = sub_1407792B4(a2, v30);
              sub_14077B394(v30);
              BugCheckParameter2 = 0LL;
              if ( v5 < 0 )
              {
LABEL_12:
                v13 = a2 + 64;
                ExReleasePushLockEx(a2 + 64, 0LL);
                sub_1402F9540((__int64)KeGetCurrentThread());
                if ( v5 >= 0 )
                  goto LABEL_13;
                goto LABEL_64;
              }
            }
LABEL_59:
            v31 = -1LL;
            do
              ++v31;
            while ( v25[v31] );
            v25 += v31 + 1;
            continue;
          }
          goto LABEL_9;
        }
      }
    }
    else
    {
      v11 = sub_14077B0A4(*(unsigned int *)&Resource[2].ActiveCount, *(_QWORD *)(v8 + 24), &BugCheckParameter2);
      v5 = v11;
      if ( v11 != -1073741772 )
      {
        if ( v11 < 0 )
          goto LABEL_12;
        v12 = (void *)BugCheckParameter2;
        if ( (unsigned __int8)sub_140779800(BugCheckParameter2) )
          v5 = sub_1407792B4(a2, v12);
        sub_14077B394(v12);
LABEL_9:
        if ( v5 < 0 )
          goto LABEL_12;
      }
    }
LABEL_10:
    v5 = sub_140777C60(0LL, 0LL, 0LL, &v36);
    if ( v5 >= 0 )
    {
      sub_140777CF0(a2, v36);
      *(_DWORD *)(a2 + 216) |= 0x20u;
    }
    goto LABEL_12;
  }
  v13 = a2 + 64;
LABEL_64:
  v32 = KeGetCurrentThread();
  --*((_WORD *)v32 + 242);
  ExAcquirePushLockExclusiveEx(v13, 0LL);
  *(_DWORD *)(a2 + 216) |= 1u;
  sub_140776E5C(a2);
  ExReleasePushLockEx(v13, 0LL);
  sub_1402F9540((__int64)KeGetCurrentThread());
LABEL_13:
  if ( v34 )
  {
    ExReleaseResourceLite(Resource);
    sub_1402F9540((__int64)KeGetCurrentThread());
  }
  return (unsigned int)v5;
}
