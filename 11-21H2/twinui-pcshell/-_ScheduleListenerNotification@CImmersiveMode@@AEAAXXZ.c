/*
 * XREFs of ?_ScheduleListenerNotification@CImmersiveMode@@AEAAXXZ @ 0x180020934
 * Callers:
 *     ?ValidateActivationAndBroadcastChanged@CImmersiveMode@@UEAAXW4ZBID@@@Z @ 0x18013A680 (-ValidateActivationAndBroadcastChanged@CImmersiveMode@@UEAAXW4ZBID@@@Z.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_57bd800a23f6990551f71dd05caf20c5_____lambda_57bd800a23f6990551f71dd05caf20c5___ @ 0x180020AA0 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_57bd800a23f69.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180126630 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_GZBAND_NOTIFICATION_DATA@@QEAAPEAXI@Z @ 0x1802EF4F4 (--_GZBAND_NOTIFICATION_DATA@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CImmersiveMode::_ScheduleListenerNotification(CImmersiveMode *this)
{
  ZBAND_NOTIFICATION_DATA *v2; // rbx
  unsigned int v3; // edx
  _QWORD *v4; // rsi
  ZBAND_NOTIFICATION_DATA *v5; // rax
  unsigned int Ptr; // ebp
  __int64 *v7; // rax
  __int64 v8; // rdi
  ZBAND_NOTIFICATION_DATA *v9; // rcx
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v11; // [rsp+58h] [rbp+10h] BYREF

  v2 = (ZBAND_NOTIFICATION_DATA *)*((_QWORD *)this + 44);
  v4 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = v2;
    v2 = 0LL;
    v4[1] = v5;
    *v4 = &CRefCountedObject<CAutoMemPtr<ZBAND_NOTIFICATION_DATA>>::`vftable';
    *((_DWORD *)v4 + 4) = 0;
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v4 + 8LL))(v4);
    *((_QWORD *)this + 44) = 0LL;
    v11 = v4;
    (*(void (__fastcall **)(_QWORD *))(*v4 + 8LL))(v4);
    Ptr = (unsigned int)CApplicationManagerUtility::g_pIAMGlobals[13].Ptr;
    v7 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_57bd800a23f6990551f71dd05caf20c5_____lambda_57bd800a23f6990551f71dd05caf20c5___(
                      &v10,
                      &v11);
    v8 = *v7;
    *v7 = 0LL;
    if ( v10 )
    {
      v10 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release();
    }
    SHTaskPoolQueueTask(3LL, 2LL, Ptr, 0LL, v8, 0LL);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    if ( v11 )
      (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
  }
  else
  {
    v9 = (ZBAND_NOTIFICATION_DATA *)*((_QWORD *)this + 44);
    if ( v9 )
      ZBAND_NOTIFICATION_DATA::`scalar deleting destructor'(v9, v3);
  }
  if ( v4 )
    (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
  if ( v2 )
    ZBAND_NOTIFICATION_DATA::`scalar deleting destructor'(v2, v3);
}
