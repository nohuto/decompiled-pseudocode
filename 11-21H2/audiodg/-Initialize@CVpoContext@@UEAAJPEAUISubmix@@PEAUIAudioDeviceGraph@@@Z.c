/*
 * XREFs of ?Initialize@CVpoContext@@UEAAJPEAUISubmix@@PEAUIAudioDeviceGraph@@@Z @ 0x140061980
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Add@?$CSimpleMap@KPEAVCVpoContext@@V?$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@QEAAHAEBKAEBQEAVCVpoContext@@@Z @ 0x14006160C (-Add@-$CSimpleMap@KPEAVCVpoContext@@V-$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@QEAAH.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVpoContext::Initialize(
        CVpoContext *this,
        __int64 (__fastcall ***a2)(struct ISubmix *, GUID *, int *),
        struct IAudioDeviceGraph *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 (__fastcall **v8)(struct ISubmix *, GUID *, int *); // rax
  int v9; // eax
  unsigned int v10; // edi
  int v12[2]; // [rsp+20h] [rbp-48h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  char *v15; // [rsp+88h] [rbp+20h] BYREF

  *((_DWORD *)this + 20) = _InterlockedIncrement((volatile signed __int32 *)&CVpoContext::s_VpoContextId);
  EnterCriticalSection(&CVpoContext::s_csMapVpoContext);
  v13 = &CVpoContext::s_csMapVpoContext;
  v15 = (char *)this - 8;
  ATL::CSimpleMap<unsigned long,CVpoContext *,ATL::CSimpleMapEqualHelper<unsigned long,CVpoContext *>>::Add(
    v6,
    (_DWORD *)this + 20,
    &v15);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v13);
  v7 = 0LL;
  *(_QWORD *)v12 = 0LL;
  if ( !a2 )
    goto LABEL_5;
  v8 = *a2;
  *(_QWORD *)v12 = 0LL;
  v9 = (*v8)((struct ISubmix *)a2, &GUID_cc56354c_5984_4beb_b60f_04b87fd5f8ee, v12);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v7 = *(_QWORD *)v12;
LABEL_5:
    *((_QWORD *)this + 8) = v7;
    *((_QWORD *)this + 9) = a3;
    v10 = 0;
    goto LABEL_6;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3A,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\vpocontext.cpp",
    (const char *)(unsigned int)v9);
LABEL_6:
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)v12);
  return v10;
}
