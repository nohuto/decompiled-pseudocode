/*
 * XREFs of ??1BaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ @ 0x1800AE578
 * Callers:
 *     ??_GBamoConnection@ISMBamos_AutoBamos@@MEAAPEAXI@Z @ 0x1800593C0 (--_GBamoConnection@ISMBamos_AutoBamos@@MEAAPEAXI@Z.c)
 *     ??1MPCManagerConnection@@UEAA@XZ @ 0x1800AE740 (--1MPCManagerConnection@@UEAA@XZ.c)
 *     ??_EBamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@UEAAPEAXI@Z @ 0x1800AE7B0 (--_EBamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@UEAAPEAXI@Z.c)
 *     ??_GAnimationDataProviderConnection@@UEAAPEAXI@Z @ 0x18010E5A0 (--_GAnimationDataProviderConnection@@UEAAPEAXI@Z.c)
 *     ??_GInputSystemServerConnection@@UEAAPEAXI@Z @ 0x1801220A0 (--_GInputSystemServerConnection@@UEAAPEAXI@Z.c)
 *     ??1InputSystemInternalClientConnection@@UEAA@XZ @ 0x18013C00C (--1InputSystemInternalClientConnection@@UEAA@XZ.c)
 *     ??1MPCManagerClientConnection@@UEAA@XZ @ 0x180177D78 (--1MPCManagerClientConnection@@UEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VBamoInputAttemptedDeliveryClientProxyImpl@BamoImpl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180014870 (--1-$com_ptr_t@VBamoInputAttemptedDeliveryClientProxyImpl@BamoImpl@@Uerr_returncode_policy@wil@@.c)
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x1800276A0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800318B4 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x180054B38 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x180055588 (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::~BaseBamoConnectionImpl(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this)
{
  __int64 v2; // rax
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx
  void *v5; // rdx
  wil::details *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  const char *v9; // r9
  Microsoft::BamoImpl::BamoImplObject *v10; // rcx

  *(_QWORD *)this = &Microsoft::BamoImpl::BaseBamoConnectionImpl::`vftable';
  v2 = *((_QWORD *)this + 28);
  if ( v2 )
  {
    v3 = *(_QWORD **)(v2 + 528);
    *(_QWORD *)(v2 + 528) = 0LL;
    *((_QWORD *)this + 28) = 0LL;
    if ( v3 )
    {
      do
      {
        v4 = (_QWORD *)v3[66];
        operator delete(v3);
        v3 = v4;
      }
      while ( v4 );
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
  std::vector<Windows::UI::Color>::_Tidy((__int64)this + 192);
  v6 = (wil::details *)*((_QWORD *)this + 16);
  *((_QWORD *)this + 16) = 0LL;
  if ( v6 )
    wil::details::FreeProcessHeap(v6, v5);
  wil::com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>::~com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>((__int64 *)this + 15);
  v10 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 13);
  if ( v10 )
    Microsoft::BamoImpl::BamoImplObject::Release(v10, v7, v8, v9);
  wil::com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>::~com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>((__int64 *)this + 11);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 10);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 9);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 8);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 7);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 6);
}
