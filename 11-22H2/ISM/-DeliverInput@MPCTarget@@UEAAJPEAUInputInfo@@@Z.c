/*
 * XREFs of ?DeliverInput@MPCTarget@@UEAAJPEAUInputInfo@@@Z @ 0x18011B1C0
 * Callers:
 *     ?DeliverInput@MPCFocusTarget@@UEAAJPEAUInputInfo@@@Z @ 0x18011A570 (-DeliverInput@MPCFocusTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180026950 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180033458 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180040ACC (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIMPCInputObjectProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMPCInputObjectProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18011A894 (--$As@UIMPCInputObjectProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UI.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x18011AD14 (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     GetHandEventType @ 0x18011B478 (GetHandEventType.c)
 *     GetInputEventType @ 0x18011B4DC (GetInputEventType.c)
 *     IsSubscribedForEventType @ 0x18011B5B0 (IsSubscribedForEventType.c)
 *     IsSubscribedForEventType_0 @ 0x18011B63C (IsSubscribedForEventType_0.c)
 *     ?MPCTarget_DeliverInput_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAULegacyInputInfo@@J@Z @ 0x18011B7D4 (-MPCTarget_DeliverInput_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAULegacyInputInfo@@J@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCTarget::DeliverInput(MPCTarget *this, struct InputInfo *a2, __int64 a3, const char *a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdi
  const char *v10; // r9
  __int64 v11; // rbx
  void (__fastcall *v12)(__int64, int *, _QWORD, char *, _OWORD *); // rsi
  unsigned int HandEventType; // eax
  __int64 InputEventType; // rbx
  unsigned int v15; // ebx
  __int64 v16; // rcx
  ISMTracing *v17; // rcx
  int v19; // [rsp+40h] [rbp-19h] BYREF
  __int64 v20; // [rsp+48h] [rbp-11h] BYREF
  __int64 v21; // [rsp+50h] [rbp-9h] BYREF
  _OWORD v22[3]; // [rsp+58h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  if ( (*(_DWORD *)a2 & 0x662600) == 0 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x10F,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpctarget.cpp",
      a4);
  if ( (*(_DWORD *)a2 & 0x42600) == 0
    || (*(unsigned __int8 (__fastcall **)(MPCTarget *))(*(_QWORD *)this + 80LL))(this) && *((_BYTE *)a2 + 3002) )
  {
    return 0LL;
  }
  v6 = *((_QWORD *)this + 4);
  if ( !v6 )
    v6 = *((_QWORD *)this + 3);
  wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(&v21, v6);
  v20 = 0LL;
  v8 = *(_QWORD *)(v21 + 488);
  v9 = *(_QWORD *)(v21 + 496);
  if ( v8 == v9 )
    goto LABEL_25;
  do
  {
    if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IMPCInputObjectProxy>(
                (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v8 + 8),
                &v20) >= 0 )
      break;
    v8 += 16LL;
  }
  while ( v8 != v9 );
  if ( !v20 )
  {
LABEL_25:
    v15 = -2147417853;
  }
  else
  {
    v19 = *((_DWORD *)a2 + 18);
    v22[0] = *(_OWORD *)((char *)a2 + 312);
    v22[1] = *(_OWORD *)((char *)a2 + 328);
    v22[2] = *(_OWORD *)((char *)a2 + 344);
    switch ( *(_DWORD *)a2 )
    {
      case 0x200:
        if ( (unsigned __int8)IsSubscribedForEventType_0(*((unsigned int *)a2 + 16)) && !*((_BYTE *)a2 + 928) )
        {
          v11 = v20;
          v12 = *(void (__fastcall **)(__int64, int *, _QWORD, char *, _OWORD *))(*(_QWORD *)v20 + 24LL);
          HandEventType = GetHandEventType(*((unsigned int *)a2 + 16));
          v12(v11, &v19, HandEventType, (char *)a2 + 936, v22);
        }
        break;
      case 0x40000:
        if ( (unsigned __int8)IsSubscribedForEventType(4LL, v20) )
          (*(void (__fastcall **)(__int64, int *, char *, char *, _OWORD *))(*(_QWORD *)v20 + 32LL))(
            v20,
            &v19,
            (char *)a2 + 2504,
            (char *)a2 + 2512,
            v22);
        break;
      case 0x400:
      case 0x2000:
        InputEventType = (unsigned int)GetInputEventType(*((unsigned int *)a2 + 17));
        if ( (unsigned __int8)IsSubscribedForEventType(InputEventType, v20) )
          (*(void (__fastcall **)(__int64, int *, _QWORD, char *, _QWORD, _OWORD *))(*(_QWORD *)v20 + 40LL))(
            v20,
            &v19,
            (unsigned int)InputEventType,
            (char *)a2 + 2256,
            *((_QWORD *)a2 + 2),
            v22);
        break;
      default:
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x171,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpctarget.cpp",
          v10);
    }
    v15 = 0;
  }
  if ( ISMTracing::IsEnabled(v7) )
  {
    wil::details::static_lazy<ISMTracing>::get(v16, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCTarget_DeliverInput_(v17, this, a2, v15);
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v20);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v21);
  return v15;
}
