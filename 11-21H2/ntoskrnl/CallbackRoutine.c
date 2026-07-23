/*
 * XREFs of CallbackRoutine @ 0x140741CF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140223A20 @ 0x140223A20 (sub_140223A20.c)
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14068934C @ 0x14068934C (sub_14068934C.c)
 *     sub_1406893EC @ 0x1406893EC (sub_1406893EC.c)
 *     sub_1406E2798 @ 0x1406E2798 (sub_1406E2798.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_140742190 @ 0x140742190 (sub_140742190.c)
 *     sub_140742230 @ 0x140742230 (sub_140742230.c)
 *     sub_140742300 @ 0x140742300 (sub_140742300.c)
 *     sub_14074244C @ 0x14074244C (sub_14074244C.c)
 *     sub_1407424F0 @ 0x1407424F0 (sub_1407424F0.c)
 *     sub_1407426B8 @ 0x1407426B8 (sub_1407426B8.c)
 *     sub_140742C78 @ 0x140742C78 (sub_140742C78.c)
 *     sub_14091BA74 @ 0x14091BA74 (sub_14091BA74.c)
 */

__int64 __fastcall CallbackRoutine(
        PKENLISTMENT EnlistmentObject,
        _DWORD *RMContext,
        PVOID TransactionContext,
        ULONG TransactionNotification,
        PLARGE_INTEGER TmVirtualClock,
        ULONG ArgumentLength,
        PVOID Argument)
{
  char v8; // r13
  __int64 v11; // rdx
  int v12; // ebx
  NTSTATUS v13; // eax
  struct _KTHREAD *CurrentThread; // rax
  int v15; // eax
  __int64 v16; // rcx
  char v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v21; // eax
  char v22; // r15
  NTSTATUS OnlyEnlistment_0; // eax
  UNICODE_STRING *p_UnicodeString; // rcx
  char v25; // [rsp+40h] [rbp-71h] BYREF
  char v26; // [rsp+41h] [rbp-70h]
  char v27; // [rsp+42h] [rbp-6Fh]
  PVOID Key; // [rsp+48h] [rbp-69h] BYREF
  int v29; // [rsp+50h] [rbp-61h] BYREF
  int v30; // [rsp+54h] [rbp-5Dh]
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-59h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-49h]
  __int128 v33; // [rsp+70h] [rbp-41h] BYREF
  __int128 v34; // [rsp+80h] [rbp-31h]
  _OWORD v35[2]; // [rsp+90h] [rbp-21h] BYREF

  Key = 0LL;
  Handle = 0LL;
  v27 = 0;
  v25 = 0;
  v33 = 0LL;
  v29 = 0;
  v8 = 0;
  v34 = 0LL;
  UnicodeString = 0LL;
  v26 = 1;
  memset(v35, 0, sizeof(v35));
  sub_140347770((__int64)&v33);
  if ( !(unsigned __int8)sub_140742190(RMContext) )
  {
    v12 = -1073741811;
    goto LABEL_84;
  }
  if ( (RMContext[26] & 8) != 0 )
    goto LABEL_83;
  if ( TransactionNotification == 256 )
  {
    v13 = sub_14091BA74(RMContext, v11, Argument);
    goto LABEL_6;
  }
  if ( (TransactionNotification & 0xE) == 0 )
  {
LABEL_83:
    v12 = 0;
    goto LABEL_84;
  }
  v12 = TmReferenceEnlistmentKey_0(EnlistmentObject, &Key);
  if ( v12 )
    goto LABEL_84;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireFastMutexUnsafe(&stru_140C49100);
  v15 = *((_DWORD *)Key + 12);
  if ( (v15 & 8) != 0 )
  {
    switch ( TransactionNotification )
    {
      case 2u:
        *((_DWORD *)Key + 12) = v15 | 1;
        ExReleaseFastMutexUnsafe(&stru_140C49100);
        KeLeaveCriticalRegion();
        v13 = TmPrepareComplete_0(EnlistmentObject, 0LL);
        break;
      case 4u:
        *((_DWORD *)Key + 12) = v15 | 4;
        ExReleaseFastMutexUnsafe(&stru_140C49100);
        KeLeaveCriticalRegion();
        TmCommitComplete_0(EnlistmentObject, 0LL);
        goto LABEL_84;
      case 8u:
        *((_DWORD *)Key + 12) = v15 | 2;
        ExReleaseFastMutexUnsafe(&stru_140C49100);
        KeLeaveCriticalRegion();
        v13 = TmRollbackComplete_0(EnlistmentObject, 0LL);
        break;
      default:
LABEL_84:
        sub_14022EA30((__int64 *)&v33);
        return (unsigned int)v12;
    }
LABEL_6:
    v12 = v13;
    goto LABEL_84;
  }
  ExReleaseFastMutexUnsafe(&stru_140C49100);
  KeLeaveCriticalRegion();
  v16 = qword_140C02770;
  if ( RMKey != RMContext )
    v16 = *((_QWORD *)RMContext + 10);
  if ( qword_140D3B208 && (int)sub_140742C78(*(_QWORD *)(v16 + 1544), &UnicodeString) >= 0 )
  {
    sub_140223A20((unsigned __int64)v35, 0x20000uLL);
    v34 = *(_OWORD *)((char *)Key + 88);
  }
  if ( (struct _KTHREAD *)qword_140D3B258 == KeGetCurrentThread() )
  {
    v17 = 0;
  }
  else
  {
    sub_1406893EC();
    v17 = 1;
  }
  if ( (unsigned __int8)sub_140742190(RMContext) )
  {
    switch ( TransactionNotification )
    {
      case 2u:
        v21 = sub_1407424F0(RMContext, Key, &v29, &v25);
        break;
      case 4u:
        v21 = sub_1407426B8(v19, Key, &v29);
        break;
      case 8u:
        v21 = sub_1406E2798((__int64)Key, &v29);
        break;
      default:
        v12 = -1073741811;
        v30 = -1073741811;
        goto LABEL_46;
    }
    v30 = v21;
    v12 = v21;
    if ( v21 >= 0 || TransactionNotification == 4 )
    {
      v30 = v21;
      if ( *((PVOID *)Key + 2) == (char *)Key + 16 || v21 < 0 )
      {
        v26 = 0;
      }
      else
      {
        v12 = sub_140742230((int)RMContext);
        if ( TransactionNotification != 2 )
          v12 = 0;
      }
      v27 = 1;
      if ( TransactionNotification == 4 )
        goto LABEL_48;
    }
    if ( TransactionNotification == 8 )
    {
LABEL_48:
      v22 = v25;
LABEL_49:
      if ( *((_QWORD *)Key + 9) )
        Handle = (HANDLE)*((_QWORD *)Key + 10);
      if ( (*((_DWORD *)Key + 12) & 0x20) != 0 && (int)sub_14074244C(RMContext, v18, 0LL) >= 0 )
        *((_DWORD *)Key + 12) &= ~0x20u;
      if ( v12 >= 0 || TransactionNotification != 4 )
      {
        v12 = sub_1406E2798((__int64)Key, &v29);
        sub_140742300(RMContext, Key, TransactionNotification);
      }
LABEL_57:
      TmDereferenceEnlistmentKey_0(EnlistmentObject, 0LL);
      if ( v17 )
        sub_14068934C();
      if ( v27 == 1 )
      {
        switch ( TransactionNotification )
        {
          case 2u:
            if ( v22 == 1 )
              OnlyEnlistment_0 = TmReadOnlyEnlistment_0(EnlistmentObject, 0LL);
            else
              OnlyEnlistment_0 = TmPrepareComplete_0(EnlistmentObject, 0LL);
            break;
          case 4u:
            TmCommitComplete_0(EnlistmentObject, 0LL);
            goto LABEL_69;
          case 8u:
            OnlyEnlistment_0 = TmRollbackComplete_0(EnlistmentObject, 0LL);
            break;
          default:
            goto LABEL_69;
        }
        v12 = OnlyEnlistment_0;
      }
LABEL_69:
      if ( Handle )
        ZwClose(Handle);
      switch ( TransactionNotification )
      {
        case 2u:
          v8 = 31;
          break;
        case 4u:
          v8 = 30;
          break;
        case 8u:
          v8 = 32;
          break;
      }
      if ( qword_140D3B208 && v8 )
      {
        if ( !UnicodeString.Buffer )
          goto LABEL_84;
        p_UnicodeString = &UnicodeString;
        LOBYTE(p_UnicodeString) = v8;
        sub_14042A5E0(p_UnicodeString, v35);
      }
      if ( UnicodeString.Buffer )
        RtlFreeUnicodeString(&UnicodeString);
      goto LABEL_84;
    }
LABEL_46:
    v22 = v25;
    if ( v25 != 1 )
      goto LABEL_57;
    goto LABEL_49;
  }
  if ( v17 )
    sub_14068934C();
  TmDereferenceEnlistmentKey_0(EnlistmentObject, 0LL);
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  return 3221225485LL;
}
