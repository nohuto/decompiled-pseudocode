/*
 * XREFs of ??1BaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ @ 0x180097C48
 * Callers:
 *     ??1MPCManagerConnection@@UEAA@XZ @ 0x180097E18 (--1MPCManagerConnection@@UEAA@XZ.c)
 *     ??_EBamoConnection@MPCManagerBamo_AutoBamos@@UEAAPEAXI@Z @ 0x180097E90 (--_EBamoConnection@MPCManagerBamo_AutoBamos@@UEAAPEAXI@Z.c)
 *     ??_EBamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@UEAAPEAXI@Z @ 0x180097EE0 (--_EBamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@UEAAPEAXI@Z.c)
 *     ??_GAnimationDataProviderConnection@@UEAAPEAXI@Z @ 0x1800F44A0 (--_GAnimationDataProviderConnection@@UEAAPEAXI@Z.c)
 *     ??_GInputSystemServerConnection@@UEAAPEAXI@Z @ 0x180106730 (--_GInputSystemServerConnection@@UEAAPEAXI@Z.c)
 *     ??1InputSystemInternalClientConnection@@UEAA@XZ @ 0x1801206C0 (--1InputSystemInternalClientConnection@@UEAA@XZ.c)
 *     ??1MPCManagerClientConnection@@UEAA@XZ @ 0x180158B1C (--1MPCManagerClientConnection@@UEAA@XZ.c)
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x180003620 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002BBF0 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VBamoInputAttemptedDeliveryClientProxyImpl@BamoImpl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004662C (--1-$com_ptr_t@VBamoInputAttemptedDeliveryClientProxyImpl@BamoImpl@@Uerr_returncode_policy@wil@@.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x1800484B8 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x18004957C (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::~BaseBamoConnectionImpl(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this)
{
  void *v2; // rdx
  wil::details *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  const char *v6; // r9
  Microsoft::BamoImpl::BamoImplObject *v7; // rcx

  *(_QWORD *)this = &Microsoft::BamoImpl::BaseBamoConnectionImpl::`vftable';
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
  std::vector<Windows::UI::Color>::_Tidy((__int64)this + 192);
  v3 = (wil::details *)*((_QWORD *)this + 16);
  *((_QWORD *)this + 16) = 0LL;
  if ( v3 )
    wil::details::FreeProcessHeap(v3, v2);
  wil::com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>::~com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>((__int64 *)this + 15);
  v7 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 13);
  if ( v7 )
    Microsoft::BamoImpl::BamoImplObject::Release(v7, v4, v5, v6);
  wil::com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>::~com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>((__int64 *)this + 11);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 10);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 9);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 8);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 7);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 6);
}
