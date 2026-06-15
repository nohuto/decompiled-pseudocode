/*
 * XREFs of ??1CAPOProcessingHostObject@@UEAA@XZ @ 0x14001DC0C
 * Callers:
 *     ??_ECAPOProcessingHostObject@@UEAAPEAXI@Z @ 0x14001DCB0 (--_ECAPOProcessingHostObject@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400265D0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x14002DA28 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?ShutdownWorkQueue@CAPOProcessingHostObject@@AEAAJXZ @ 0x1400683E4 (-ShutdownWorkQueue@CAPOProcessingHostObject@@AEAAJXZ.c)
 */

void __fastcall CAPOProcessingHostObject::~CAPOProcessingHostObject(CAPOProcessingHostObject *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  bool v3; // zf
  std::_Ref_count_base *v4; // rcx
  int v5; // eax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 40);
  *(_QWORD *)this = &CAPOProcessingHostObject::`vftable';
  EnterCriticalSection((LPCRITICAL_SECTION)this + 1);
  v3 = *((_QWORD *)this + 10) == 0LL;
  v8 = v2;
  if ( !v3 )
  {
    v5 = CAPOProcessingHostObject::ShutdownWorkQueue(this);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3E,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghostobject.cpp",
        (const char *)(unsigned int)v5,
        v6);
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v8);
  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 11);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  DeleteCriticalSection(v2);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 4);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 3);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 2);
  *((_DWORD *)this + 3) = -1073741823;
}
