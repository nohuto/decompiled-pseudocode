/*
 * XREFs of ?UpdateFocusPids@GameControllerRawInputProvider@@AEAAJXZ @ 0x180034484
 * Callers:
 *     ??0GameControllerRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z @ 0x1800333D8 (--0GameControllerRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z.c)
 *     ??1GameControllerRawInputProvider@@UEAA@XZ @ 0x1800B387C (--1GameControllerRawInputProvider@@UEAA@XZ.c)
 *     ?SetGameControllerMpcFocusOverride@@YAXK@Z @ 0x1800B472C (-SetGameControllerMpcFocusOverride@@YAXK@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014738 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?GameControllerRawInputProvider_UpdateFocusPids_@ISMTracing@@QEAAXAEBK000000@Z @ 0x180034C3C (-GameControllerRawInputProvider_UpdateFocusPids_@ISMTracing@@QEAAXAEBK000000@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18007DEDC (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800B4708 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

int __fastcall GameControllerRawInputProvider::UpdateFocusPids(GameControllerRawInputProvider *this)
{
  const unsigned int *v2; // rdi
  unsigned int v3; // edx
  __int64 v4; // rcx
  char *v5; // rcx
  unsigned int v6; // eax
  int v7; // eax
  __int64 v8; // rcx
  _DWORD *v9; // rcx
  ISMTracing *v10; // rcx
  const char *v12; // r9
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  unsigned int v15; // [rsp+60h] [rbp+20h] BYREF
  unsigned int v16; // [rsp+68h] [rbp+28h] BYREF
  unsigned int InBuffer; // [rsp+70h] [rbp+30h] BYREF
  unsigned int v18; // [rsp+78h] [rbp+38h] BYREF

  v2 = (const unsigned int *)((char *)this + 152);
  v3 = *((_DWORD *)this + 38);
  if ( !v3 )
  {
    v3 = *((_DWORD *)this + 39);
    if ( !v3 )
      v3 = *((_DWORD *)this + 37);
  }
  InBuffer = v3;
  v4 = *((_QWORD *)this + 7);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 64LL))(v4);
  v5 = (char *)*((_QWORD *)this + 9);
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL
    && !DeviceIoControl(v5, 0x40001C28u, &InBuffer, 4u, 0LL, 0, 0LL, 0LL) )
  {
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x326,
             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrol"
                           "lerrawinputprovider.cpp",
             v12);
  }
  v6 = *v2;
  if ( !*v2 )
    v6 = *((_DWORD *)this + 37);
  v16 = v6;
  v7 = RtlPublishWnfStateData(WNF_SHEL_FOCUS_CHANGE, 0LL, &v16, 4LL);
  if ( v7 < 0 )
  {
    v13 = 834LL;
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)v13,
             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrol"
                           "lerrawinputprovider.cpp",
             (const char *)(unsigned int)v7,
             0);
  }
  if ( *v2 )
    v8 = 0LL;
  else
    v8 = *((unsigned int *)this + 39);
  v15 = v8;
  v18 = *((_DWORD *)this + 40);
  if ( (_DWORD)v8 != v18 )
  {
    v7 = RtlPublishWnfStateData(WNF_SHEL_GAMECONTROLLER_FOCUS_INFO, 0LL, &v15, 4LL);
    if ( v7 >= 0 )
    {
      *((_DWORD *)this + 40) = v15;
      goto LABEL_15;
    }
    v13 = 860LL;
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)v13,
             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrol"
                           "lerrawinputprovider.cpp",
             (const char *)(unsigned int)v7,
             0);
  }
LABEL_15:
  v9 = (_DWORD *)wil::details::static_lazy<ISMTracing>::get(
                   v8,
                   _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
  if ( v9 )
  {
    if ( *v9 )
    {
      wil::details::static_lazy<ISMTracing>::get(
        (__int64)v9,
        _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      ISMTracing::GameControllerRawInputProvider_UpdateFocusPids_(
        v10,
        (const unsigned int *)this + 37,
        v2,
        (const unsigned int *)this + 39,
        &v18,
        &InBuffer,
        &v16,
        &v15);
    }
  }
  return 0;
}
