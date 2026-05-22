/*
 * XREFs of ?DeliverInput@MPCTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1800F33A0
 * Callers:
 *     ?DeliverInput@MPCFocusTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1800F2C10 (-DeliverInput@MPCFocusTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014738 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002BBF0 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180090CA0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ??$As@UIMPCInputObjectProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMPCInputObjectProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800F2E8C (--$As@UIMPCInputObjectProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UI.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x1800F3104 (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     GetHandEventType @ 0x1800F3824 (GetHandEventType.c)
 *     GetInputEventType @ 0x1800F3888 (GetInputEventType.c)
 *     IsSubscribedForEventType @ 0x1800F38F0 (IsSubscribedForEventType.c)
 *     IsSubscribedForEventType_0 @ 0x1800F397C (IsSubscribedForEventType_0.c)
 *     ?MPCTarget_DeliverInput_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAULegacyInputInfo@@J@Z @ 0x1800F3B14 (-MPCTarget_DeliverInput_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAULegacyInputInfo@@J@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HandUpdatesIgnoreRenderingReports@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800F3D3C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HandUpdatesIgnoreRenderingReports@@@detai.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCTarget::DeliverInput(MPCTarget *this, struct InputInfo *a2, __int64 a3, const char *a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdi
  const char *v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rbx
  void (__fastcall *v13)(__int64, int *, _QWORD, char *, _OWORD *); // rsi
  unsigned int HandEventType; // eax
  __int64 InputEventType; // rbx
  unsigned int v16; // ebx
  __int64 v17; // rcx
  ISMTracing *v18; // rcx
  int v20; // [rsp+40h] [rbp-19h] BYREF
  __int64 v21; // [rsp+48h] [rbp-11h] BYREF
  __int64 v22; // [rsp+50h] [rbp-9h] BYREF
  _OWORD v23[3]; // [rsp+58h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  if ( (*(_DWORD *)a2 & 0x662600) == 0 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      248LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpctarget.cpp",
      a4);
  if ( (*(_DWORD *)a2 & 0x42600) == 0
    || (*(unsigned __int8 (__fastcall **)(MPCTarget *))(*(_QWORD *)this + 80LL))(this) && *((_BYTE *)a2 + 3002) )
  {
    return 0LL;
  }
  v6 = *((_QWORD *)this + 4);
  if ( !v6 )
    v6 = *((_QWORD *)this + 3);
  wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(&v22, v6);
  v21 = 0LL;
  v8 = *(_QWORD *)(v22 + 488);
  v9 = *(_QWORD *)(v22 + 496);
  if ( v8 == v9 )
    goto LABEL_25;
  do
  {
    if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IMPCInputObjectProxy>(
                (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v8 + 8),
                &v21) >= 0 )
      break;
    v8 += 16LL;
  }
  while ( v8 != v9 );
  if ( !v21 )
  {
LABEL_25:
    v16 = -2147417853;
  }
  else
  {
    v20 = *((_DWORD *)a2 + 18);
    v23[0] = *(_OWORD *)((char *)a2 + 312);
    v23[1] = *(_OWORD *)((char *)a2 + 328);
    v23[2] = *(_OWORD *)((char *)a2 + 344);
    switch ( *(_DWORD *)a2 )
    {
      case 0x200:
        if ( (unsigned __int8)IsSubscribedForEventType_0(*((unsigned int *)a2 + 16)) )
        {
          LOBYTE(v11) = 1;
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_HandUpdatesIgnoreRenderingReports>::ReportUsage(
            &`wil::Feature<__WilFeatureTraits_Feature_HandUpdatesIgnoreRenderingReports>::GetImpl'::`2'::impl,
            v11);
          if ( !*((_BYTE *)a2 + 928) )
          {
            v12 = v21;
            v13 = *(void (__fastcall **)(__int64, int *, _QWORD, char *, _OWORD *))(*(_QWORD *)v21 + 24LL);
            HandEventType = GetHandEventType(*((unsigned int *)a2 + 16));
            v13(v12, &v20, HandEventType, (char *)a2 + 936, v23);
          }
        }
        break;
      case 0x40000:
        if ( (unsigned __int8)IsSubscribedForEventType(4LL, v21) )
          (*(void (__fastcall **)(__int64, int *, char *, char *, _OWORD *))(*(_QWORD *)v21 + 32LL))(
            v21,
            &v20,
            (char *)a2 + 2504,
            (char *)a2 + 2512,
            v23);
        break;
      case 0x400:
      case 0x2000:
        InputEventType = (unsigned int)GetInputEventType(*((unsigned int *)a2 + 17));
        if ( (unsigned __int8)IsSubscribedForEventType(InputEventType, v21) )
          (*(void (__fastcall **)(__int64, int *, _QWORD, char *, _QWORD, _OWORD *))(*(_QWORD *)v21 + 40LL))(
            v21,
            &v20,
            (unsigned int)InputEventType,
            (char *)a2 + 2256,
            *((_QWORD *)a2 + 2),
            v23);
        break;
      default:
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          350LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpctarget.cpp",
          v10);
    }
    v16 = 0;
  }
  if ( ISMTracing::IsEnabled(v7) )
  {
    wil::details::static_lazy<ISMTracing>::get(v17, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCTarget_DeliverInput_(v18, this, a2, v16);
  }
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease(&v21);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v22);
  return v16;
}
