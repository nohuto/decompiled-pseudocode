/*
 * XREFs of ?BringISMUptodate@CActivationObjectManager@@QEBAXXZ @ 0x1C00C4AF4
 * Callers:
 *     _lambda_e0b5bc6a6e53c9aba0ac2786547e6048_::_lambda_invoker_cdecl_ @ 0x1C00C5F80 (_lambda_e0b5bc6a6e53c9aba0ac2786547e6048_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?NotifySystemSateChanged@CActivationObjectManager@@AEBAXPEBVCActivationObject@@W4ACTIVATION_OBJECT_NOTIFICATION_ACTION@@U_tagActivationObjectNotificationForegroundData@@@Z @ 0x1C00918F8 (-NotifySystemSateChanged@CActivationObjectManager@@AEBAXPEBVCActivationObject@@W4ACTIVATION_OBJE.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0096098 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0096270 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 */

void __fastcall CActivationObjectManager::BringISMUptodate(CActivationObjectManager *this)
{
  unsigned __int64 *v2; // rsi
  unsigned __int64 i; // rdi
  unsigned __int64 v4; // rcx
  __int128 v5; // [rsp+20h] [rbp-58h] BYREF
  __int64 v6; // [rsp+30h] [rbp-48h]
  __int128 v7; // [rsp+38h] [rbp-40h]
  __int64 v8; // [rsp+50h] [rbp-28h]

  CPushLock::AcquireLockShared((CActivationObjectManager *)((char *)this + 16));
  v2 = (unsigned __int64 *)*((_QWORD *)this + 1);
  for ( i = (unsigned __int64)v2; ; CActivationObjectManager::NotifySystemSateChanged(v4, i - 8, 0, (unsigned int *)&v5) )
  {
    v4 = i;
    if ( !i )
      break;
    i = *(_QWORD *)i;
    if ( (i & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      i = *(_QWORD *)v4;
    if ( (i & 1) != 0 )
      break;
LABEL_6:
    if ( !i )
      goto LABEL_5;
    v5 = 0LL;
    v8 = 0LL;
    v6 = 0LL;
    LODWORD(v7) = 0;
  }
  ++v2;
  v4 = (unsigned __int64)*((unsigned int *)this + 1) >> 5;
  while ( (unsigned __int64)v2 < *((_QWORD *)this + 1) + 8 * v4 )
  {
    i = *v2;
    if ( (*v2 & 1) == 0 )
      goto LABEL_6;
    ++v2;
  }
LABEL_5:
  CPushLock::ReleaseLock((CActivationObjectManager *)((char *)this + 16));
}
