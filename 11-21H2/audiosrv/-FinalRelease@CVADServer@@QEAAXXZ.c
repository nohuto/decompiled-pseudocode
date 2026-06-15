/*
 * XREFs of ?FinalRelease@CVADServer@@QEAAXXZ @ 0x180009EE0
 * Callers:
 *     ??_E?$CComObject@VCVADServer@@@ATL@@UEAAPEAXI@Z @ 0x18001C580 (--_E-$CComObject@VCVADServer@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000ABEC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z @ 0x180015D90 (-RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?RemoveAll@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXXZ @ 0x18003ED24 (-RemoveAll@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C7E10 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CVADServer::FinalRelease(CVADServer *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  std::_Ref_count_base *v3; // rsi
  volatile signed __int32 *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdx
  struct CAudioStream *v9; // rdx
  char *v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 456);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 456));
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 63);
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  v4 = (volatile signed __int32 *)*((_QWORD *)this + 20);
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4 + 6, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 104LL))(v4);
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( *((_QWORD *)this + 24) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 224));
    v10 = (char *)this + 224;
    v9 = (struct CAudioStream *)*((_QWORD *)this + 24);
    if ( *((_QWORD *)v9 + 6) )
    {
      if ( *((_BYTE *)this + 188) )
      {
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 232LL))(*((_QWORD *)this + 21));
        v9 = (struct CAudioStream *)*((_QWORD *)this + 24);
      }
      CAudioSession::RemoveStream(*((CAudioSession **)this + 21), v9, 1);
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((char *)this + 192);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v10);
  }
  v5 = *((_QWORD *)this + 21);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    *((_QWORD *)this + 21) = 0LL;
  }
  *((_QWORD *)this + 19) = 0LL;
  EnterCriticalSection(&g_csVadList);
  v6 = g_VADServerList;
  if ( g_VADServerList )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)v6;
      if ( *(CVADServer **)(v6 + 16) == this )
        break;
      v6 = *(_QWORD *)v6;
      if ( !v7 )
        goto LABEL_17;
    }
    if ( v6 == g_VADServerList )
      g_VADServerList = *(_QWORD *)v6;
    else
      **(_QWORD **)(v6 + 8) = v7;
    v8 = *(_QWORD *)(v6 + 8);
    if ( v6 == qword_1801C1A08 )
      qword_1801C1A08 = *(_QWORD *)(v6 + 8);
    else
      *(_QWORD *)(*(_QWORD *)v6 + 8LL) = v8;
    *(_QWORD *)v6 = qword_1801C1A20;
    qword_1801C1A20 = v6;
    if ( !--qword_1801C1A10 )
      ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::RemoveAll(&g_VADServerList, v8);
  }
LABEL_17:
  LeaveCriticalSection(&g_csVadList);
}
