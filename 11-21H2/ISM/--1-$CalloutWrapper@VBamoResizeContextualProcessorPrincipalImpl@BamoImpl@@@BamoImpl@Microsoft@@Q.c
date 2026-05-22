/*
 * XREFs of ??1?$CalloutWrapper@VBamoResizeContextualProcessorPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180143318
 * Callers:
 *     ?CancelResize@BamoResizeContextualProcessorPrincipalImpl@BamoImpl@@QEAAJII@Z @ 0x1801433F0 (-CancelResize@BamoResizeContextualProcessorPrincipalImpl@BamoImpl@@QEAAJII@Z.c)
 *     _BamoImpl::BamoResizeContextualProcessorPrincipalImpl::CancelResize_::_1_::dtor$0 @ 0x18014355F (_BamoImpl--BamoResizeContextualProcessorPrincipalImpl--CancelResize_--_1_--dtor$0.c)
 *     ?OnDisconnectedThunk@BamoResizeContextualProcessorStubImpl@BamoImpl@@UEAAJXZ @ 0x1801435B0 (-OnDisconnectedThunk@BamoResizeContextualProcessorStubImpl@BamoImpl@@UEAAJXZ.c)
 *     _BamoImpl::BamoResizeContextualProcessorStubImpl::OnDisconnectedThunk_::_1_::dtor$0 @ 0x180143614 (_BamoImpl--BamoResizeContextualProcessorStubImpl--OnDisconnectedThunk_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedThunk@BamoResizeContextualProcessorStubImpl@BamoImpl@@UEAAJXZ @ 0x1801436C0 (-OnPropertiesRefreshedThunk@BamoResizeContextualProcessorStubImpl@BamoImpl@@UEAAJXZ.c)
 *     _BamoImpl::BamoResizeContextualProcessorStubImpl::OnPropertiesRefreshedThunk_::_1_::dtor$0 @ 0x180143724 (_BamoImpl--BamoResizeContextualProcessorStubImpl--OnPropertiesRefreshedThunk_--_1_--dtor$0.c)
 *     ?StartAnimation@BamoResizeContextualProcessorPrincipalImpl@BamoImpl@@QEAAJII@Z @ 0x18014385C (-StartAnimation@BamoResizeContextualProcessorPrincipalImpl@BamoImpl@@QEAAJII@Z.c)
 *     _BamoImpl::BamoResizeContextualProcessorPrincipalImpl::StartAnimation_::_1_::dtor$0 @ 0x1801439CB (_BamoImpl--BamoResizeContextualProcessorPrincipalImpl--StartAnimation_--_1_--dtor$0.c)
 *     ?StartResize@BamoResizeContextualProcessorPrincipalImpl@BamoImpl@@QEAAJII@Z @ 0x180143A04 (-StartResize@BamoResizeContextualProcessorPrincipalImpl@BamoImpl@@QEAAJII@Z.c)
 *     _BamoImpl::BamoResizeContextualProcessorPrincipalImpl::StartResize_::_1_::dtor$0 @ 0x180143B73 (_BamoImpl--BamoResizeContextualProcessorPrincipalImpl--StartResize_--_1_--dtor$0.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18004665C (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoResizeContextualProcessorPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoResizeContextualProcessorPrincipalImpl>(
        __int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( (*(_BYTE *)(a1 + 16) & 2) != 0 )
    {
      v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v2 - 16) + 48LL))(v2 - 16);
      if ( v3 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x87,
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v3,
          v5);
    }
  }
  if ( *(_QWORD *)a1 )
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)a1);
  return wil::com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>::~com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>((__int64 *)(a1 + 8));
}
