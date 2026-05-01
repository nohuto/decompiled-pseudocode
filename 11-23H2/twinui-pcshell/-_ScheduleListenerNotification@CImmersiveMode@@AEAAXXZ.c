/*
 * XREFs of ?_ScheduleListenerNotification@CImmersiveMode@@AEAAXXZ @ 0x180044388
 * Callers:
 *     ?ValidateActivationAndBroadcastChanged@CImmersiveMode@@UEAAXW4ZBID@@@Z @ 0x18017D060 (-ValidateActivationAndBroadcastChanged@CImmersiveMode@@UEAAXW4ZBID@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_57bd800a23f6990551f71dd05caf20c5___ @ 0x18004447C (Windows--Internal--ComTaskPool--QueueTask__lambda_57bd800a23f6990551f71dd05caf20c5___.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_GZBAND_NOTIFICATION_DATA@@QEAAPEAXI@Z @ 0x1803A7D34 (--_GZBAND_NOTIFICATION_DATA@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CImmersiveMode::_ScheduleListenerNotification(CImmersiveMode *this)
{
  ZBAND_NOTIFICATION_DATA *v2; // rbx
  _QWORD *v3; // rdi
  ZBAND_NOTIFICATION_DATA *v4; // rax
  unsigned int v5; // edx
  __int64 v6; // rdx
  __int64 v7; // rcx
  ZBAND_NOTIFICATION_DATA *v8; // rcx
  _QWORD *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = (ZBAND_NOTIFICATION_DATA *)*((_QWORD *)this + 44);
  v3 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
  {
    v4 = v2;
    v2 = 0LL;
    v3[1] = v4;
    *v3 = &CRefCountedObject<CAutoMemPtr<ZBAND_NOTIFICATION_DATA>>::`vftable';
    *((_DWORD *)v3 + 4) = 0;
  }
  else
  {
    v3 = 0LL;
  }
  v9 = v3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
  if ( v3 )
  {
    *((_QWORD *)this + 44) = 0LL;
    v9 = v3;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
    Windows::Internal::ComTaskPool::QueueTask__lambda_57bd800a23f6990551f71dd05caf20c5___(
      v7,
      v6,
      LODWORD(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr),
      &v9);
    if ( v9 )
      (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
  }
  else
  {
    v8 = (ZBAND_NOTIFICATION_DATA *)*((_QWORD *)this + 44);
    if ( v8 )
      ZBAND_NOTIFICATION_DATA::`scalar deleting destructor'(v8, v5);
  }
  if ( v3 )
    (*(void (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
  if ( v2 )
    ZBAND_NOTIFICATION_DATA::`scalar deleting destructor'(v2, v5);
}
