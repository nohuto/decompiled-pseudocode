/*
 * XREFs of AudioDGGetVpoFromVpoContext @ 0x140062030
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140004168 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x140051790 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ?FindKey@?$CSimpleMap@KPEAVCVpoContext@@V?$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@QEBAHAEBK@Z @ 0x140061944 (-FindKey@-$CSimpleMap@KPEAVCVpoContext@@V-$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@Q.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioDGGetVpoFromVpoContext(__int64 a1, int a2, __int64 a3, unsigned int a4, __int64 *a5)
{
  __int64 v7; // rcx
  int Key; // eax
  __int64 v9; // rdi
  unsigned int v10; // ebx
  __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v17; // [rsp+30h] [rbp-20h] BYREF
  __int64 v18; // [rsp+38h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  int v21; // [rsp+78h] [rbp+28h] BYREF

  v21 = a2;
  v17 = 0LL;
  v18 = 0LL;
  EnterCriticalSection(&CVpoContext::s_csMapVpoContext);
  v19 = &CVpoContext::s_csMapVpoContext;
  Key = ATL::CSimpleMap<unsigned long,CVpoContext *,ATL::CSimpleMapEqualHelper<unsigned long,CVpoContext *>>::FindKey(
          v7,
          &v21);
  if ( Key == -1 )
  {
    v9 = 0LL;
  }
  else
  {
    if ( Key < 0 || Key >= (int)qword_1400C16A0 )
    {
      ATL::_AtlRaiseException(0xC000008C);
      JUMPOUT(0x140062242LL);
    }
    v9 = *(_QWORD *)(qword_1400C1698 + 8LL * Key);
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v19);
  if ( v9 )
  {
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(v9 + 80) + 16LL) + 24LL))(
            *(_QWORD *)(v9 + 80) + 16LL,
            a4,
            &v18);
    v10 = v13;
    if ( v13 < 0 )
    {
      v12 = 99LL;
LABEL_15:
      v11 = (unsigned int)v13;
      goto LABEL_16;
    }
    v14 = *(_QWORD *)(v9 + 72);
    if ( v14 )
    {
      v13 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v14 + 200LL))(
              v14,
              a3,
              a4,
              v18,
              &v17);
      v10 = v13;
      if ( v13 < 0 )
      {
        v12 = 104LL;
        goto LABEL_15;
      }
    }
    else
    {
      v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v18 + 24LL))(v18, 0LL, &v17);
      v10 = v13;
      if ( v13 < 0 )
      {
        v12 = 108LL;
        goto LABEL_15;
      }
    }
    v15 = v17;
    v17 = 0LL;
    *a5 = v15;
    v10 = 0;
    goto LABEL_18;
  }
  v10 = -2147023728;
  v11 = 2147943568LL;
  v12 = 96LL;
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\vpocontext.cpp",
    (const char *)v11);
LABEL_18:
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v18);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v17);
  return v10;
}
