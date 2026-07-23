/*
 * XREFs of sub_1407424F0 @ 0x1407424F0
 * Callers:
 *     CallbackRoutine @ 0x140741CF0 (CallbackRoutine.c)
 *     sub_14091C5C4 @ 0x14091C5C4 (sub_14091C5C4.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406885A4 @ 0x1406885A4 (sub_1406885A4.c)
 *     sub_14071B350 @ 0x14071B350 (sub_14071B350.c)
 *     sub_14071F430 @ 0x14071F430 (sub_14071F430.c)
 *     sub_140742834 @ 0x140742834 (sub_140742834.c)
 *     sub_140AB41E0 @ 0x140AB41E0 (sub_140AB41E0.c)
 *     sub_140AB41FC @ 0x140AB41FC (sub_140AB41FC.c)
 *     sub_140AB4218 @ 0x140AB4218 (sub_140AB4218.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB4370 @ 0x140AB4370 (sub_140AB4370.c)
 *     sub_140AB4550 @ 0x140AB4550 (sub_140AB4550.c)
 *     sub_140AB4580 @ 0x140AB4580 (sub_140AB4580.c)
 */

__int64 __fastcall sub_1407424F0(__int64 a1, __int64 a2, _DWORD *a3, _BYTE *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  char v9; // bp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  struct _EX_RUNDOWN_REF *v14; // rdi
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  struct _EX_RUNDOWN_REF *v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // edi
  __int64 v26; // r8
  ULONG_PTR v27; // rsi
  __int64 v28; // rcx
  struct _EX_RUNDOWN_REF *v30; // rbx
  struct _EX_RUNDOWN_REF *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // [rsp+20h] [rbp-78h] BYREF
  _OWORD v37[3]; // [rsp+28h] [rbp-70h] BYREF

  *a4 = 0;
  *a3 = 0;
  memset(v37, 0, sizeof(v37));
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireFastMutexUnsafe(&stru_140C49100);
  v9 = 1;
  *(_DWORD *)(a2 + 48) |= 1u;
  ExReleaseFastMutexUnsafe(&stru_140C49100);
  KeLeaveCriticalRegion();
  if ( *(_QWORD *)(a2 + 16) == a2 + 16 )
  {
    *a4 = 1;
    return 0;
  }
  sub_140AB4550(v37);
  sub_140AB4370(v11, v10, v12);
  v36 = 0LL;
  while ( 1 )
  {
    v13 = sub_140AB4218(a2 + 16, &v36, 0LL);
    if ( !v13 )
      break;
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 48) + 32LL) + 4152LL) == a1 )
      ++*a3;
  }
  v14 = *(struct _EX_RUNDOWN_REF **)(a1 + 80);
  if ( v14 )
  {
    v30 = v14 + 205;
    if ( sub_140347810(v14 + 205) )
    {
      sub_140AB4260(v28, v17, v18, v19);
      v25 = sub_140742834(v14);
      v31 = v30;
LABEL_26:
      sub_1402AD030(v31);
      goto LABEL_22;
    }
    v25 = 0;
    goto LABEL_21;
  }
  for ( i = 0LL; ; i = v20 )
  {
    v16 = sub_14071B350(i);
    v20 = (struct _EX_RUNDOWN_REF *)v16;
    if ( !v16 )
      break;
    if ( v16[519] == a1 )
    {
      v21 = *((unsigned int *)v16 + 40);
      if ( (v21 & 2) == 0 )
      {
        v22 = *(unsigned int *)(a2 + 112);
        if ( (_DWORD)v22 )
        {
          v21 = 0LL;
          while ( v16 != *(__int64 **)(a2 + 8 * v21 + 120) )
          {
            v21 = (unsigned int)(v21 + 1);
            if ( (unsigned int)v21 >= (unsigned int)v22 )
              goto LABEL_10;
          }
        }
        sub_140AB4260(v21, v22, v18, v19);
        v25 = sub_140742834(v20);
        if ( v25 < 0 )
        {
          v31 = v20 + 205;
          goto LABEL_26;
        }
        sub_140AB4370(v24, v23, v26);
      }
    }
LABEL_10:
    ;
  }
  v27 = qword_140C02770;
  v28 = *(unsigned int *)(*(_QWORD *)(qword_140C02770 + 64) + 144LL);
  if ( (v28 & 1) != 0 )
    goto LABEL_20;
  sub_140AB41FC(qword_140C02770);
  ExAcquirePushLockExclusiveEx(v27 + 80, 0LL);
  v25 = sub_14071F430(v27, 0, 32, 0);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v27 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v27 + 80);
  sub_1402AFC00(v27 + 80);
  if ( v25 >= 0 )
  {
    *(_DWORD *)(*(_QWORD *)(v27 + 64) + 144LL) |= 1u;
    sub_140AB41E0(v27);
    sub_140AB4260(v33, v32, v34, v35);
    v9 = 0;
    if ( (int)sub_1406885A4(v27, 0) < 0 )
    {
      v25 = -1073741670;
      goto LABEL_22;
    }
LABEL_20:
    v25 = 0;
    if ( !v9 )
      goto LABEL_22;
    goto LABEL_21;
  }
  sub_140AB41E0(v27);
LABEL_21:
  sub_140AB4260(v28, v17, v18, v19);
LABEL_22:
  sub_140AB4580(v37);
  return (unsigned int)v25;
}
