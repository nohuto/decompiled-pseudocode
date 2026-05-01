/*
 * XREFs of ?HampWakeContextTryUpdateActivityState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@PEAU_HAM_HOST_WAKE_CONTEXT_WORKER_STATE@@@Z @ 0x18000FFF4
 * Callers:
 *     ?HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000FE00 (-HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180003A28 (-HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     ?HamSrvStartActivityAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180039380 (-HamSrvStartActivityAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_AC.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ?HamSrvCreateActivityInternal@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x18007187C (-HamSrvCreateActivityInternal@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K.c)
 *     ?HampWakeContextCloseActivity@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x180080BF4 (-HampWakeContextCloseActivity@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeContextTreeCompareByActivityId@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x180080D04 (-HampWakeContextTreeCompareByActivityId@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?HampWakeManagerAcquireLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x180080D24 (-HampWakeManagerAcquireLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?HampWakeManagerReleaseLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x180080EFC (-HampWakeManagerReleaseLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 */

void __fastcall HampWakeContextTryUpdateActivityState(
        struct _HAM_HOST_WAKE_CONTEXT *a1,
        struct _HAM_HOST_WAKE_CONTEXT_WORKER_STATE *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct _RTL_BALANCED_NODE **v9; // r14
  unsigned __int64 v10; // rdi
  int v11; // r15d
  unsigned __int64 v12; // rax
  __int64 v13; // [rsp+20h] [rbp-E0h] BYREF
  int v14; // [rsp+28h] [rbp-D8h]
  int v15; // [rsp+134h] [rbp+34h]
  __int64 v16; // [rsp+160h] [rbp+60h]
  __int64 v17; // [rsp+168h] [rbp+68h]
  __int128 v18; // [rsp+170h] [rbp+70h]
  __int64 v19; // [rsp+180h] [rbp+80h]
  int v20; // [rsp+190h] [rbp+90h]

  if ( ((*((_BYTE *)a1 + 160) & 2) != 0) == ((*((_BYTE *)a2 + 32) & 2) != 0) )
    return;
  if ( (*((_BYTE *)a2 + 32) & 2) == 0 )
    goto LABEL_26;
  HampActivityPropertiesInitialize(L"WakeReference", &word_1800B66B4, (struct _HAM_ACTIVITY_PROPERTIES *)&v13);
  v15 = 0;
  v4 = 1LL;
  v13 |= 0x40400042400uLL;
  v5 = 2LL;
  v14 |= 8u;
  v17 = 0LL;
  v19 = 0LL;
  v6 = v16;
  v18 = 0LL;
  do
  {
    v6 |= v4++;
    --v5;
  }
  while ( v5 );
  v20 &= 0xFFFFFFDC;
  v7 = *((_QWORD *)a1 + 7);
  v16 = v6 | 0x2C;
  if ( (int)HamSrvCreateActivityInternal(
              *(struct _HAM_CLIENT_CONTEXT **)(v7 + 8),
              *((_QWORD *)a1 + 21),
              (struct _HAM_ACTIVITY_PROPERTIES *)&v13,
              (unsigned __int64 *)a1 + 11) < 0 )
    goto LABEL_27;
  HampWakeManagerAcquireLockExclusive(*((struct _HAM_WAKE_REFERENCE_MANAGER **)a1 + 7));
  if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 3) <= 1 )
    __fastfail(0xEu);
  v9 = (struct _RTL_BALANCED_NODE **)(*((_QWORD *)a1 + 7) + 80LL);
  v10 = (unsigned __int64)*v9;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 7) + 88LL) & 1) != 0 )
  {
    if ( v10 )
      v10 ^= (unsigned __int64)v9;
  }
  LOBYTE(v8) = 0;
  v11 = *(_BYTE *)(*((_QWORD *)a1 + 7) + 88LL) & 1;
  if ( v10 )
  {
    while ( 1 )
    {
      if ( (int)HampWakeContextTreeCompareByActivityId((char *)a1 + 88, (struct _RTL_BALANCED_NODE *)v10) < 0 )
      {
        v12 = *(_QWORD *)v10;
        if ( v11 )
        {
          if ( !v12 )
            goto LABEL_24;
          v12 ^= v10;
        }
        if ( !v12 )
        {
LABEL_24:
          LOBYTE(v8) = 0;
          break;
        }
      }
      else
      {
        v12 = *(_QWORD *)(v10 + 8);
        if ( v11 )
        {
          if ( !v12 )
            goto LABEL_18;
          v12 ^= v10;
        }
        if ( !v12 )
        {
LABEL_18:
          LOBYTE(v8) = 1;
          break;
        }
      }
      v10 = v12;
    }
  }
  RtlRbInsertNodeEx(v9, v10, v8, (char *)a1 + 64);
  HampWakeManagerReleaseLockExclusive(*((struct _HAM_WAKE_REFERENCE_MANAGER **)a1 + 7));
  if ( (int)HamSrvStartActivityAsync(*(_QWORD *)(*((_QWORD *)a1 + 7) + 8LL), *((_QWORD *)a1 + 11), 0LL, 0LL, v13, v14) < 0 )
  {
LABEL_26:
    HampWakeContextCloseActivity(a1);
LABEL_27:
    *((_QWORD *)a2 + 2) = 0LL;
    *((_QWORD *)a2 + 3) = 0LL;
    *((_BYTE *)a2 + 32) &= ~2u;
  }
}
