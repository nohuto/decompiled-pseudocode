/*
 * XREFs of _lambda_832391a72150fb7c7c8a8e9b809c8004_::operator() @ 0x1805B8A40
 * Callers:
 *     _lambda_832391a72150fb7c7c8a8e9b809c8004_::_lambda_invoker_cdecl_ @ 0x1805B7A80 (_lambda_832391a72150fb7c7c8a8e9b809c8004_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1805BCE54 (-InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 lambda_832391a72150fb7c7c8a8e9b809c8004_::operator()(__int64 a1, __int64 a2, TabletModePositioner *a3, ...)
{
  int inited; // eax
  int v5; // eax
  int v6; // eax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+10h]
  TabletModePositioner *v9; // [rsp+40h] [rbp+18h] BYREF
  __int64 v10; // [rsp+48h] [rbp+20h] BYREF
  __int64 v11; // [rsp+50h] [rbp+28h] BYREF
  void *v12; // [rsp+58h] [rbp+30h] BYREF
  va_list va; // [rsp+58h] [rbp+30h]
  va_list va1; // [rsp+60h] [rbp+38h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v12 = va_arg(va1, void *);
  v10 = a2;
  v9 = a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
  v12 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)va);
  inited = TabletModePositioner::InitLayoutOperationHelper(
             a3,
             &CLSID_PPIWin32VtcLayoutOperation,
             &GUID_7f4d2785_4b93_429e_9250_0e9670706fba,
             (void **)va);
  if ( inited < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA58,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)inited);
  v10 = 0LL;
  if ( (*(int (__fastcall **)(void *, __int64 *, __int64 *))(*(_QWORD *)v12 + 96LL))(v12, &v11, &v10) >= 0 )
  {
    if ( v11 )
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(**((_QWORD **)a3 + 57) + 40LL))(
             *((_QWORD **)a3 + 57),
             v11,
             -1LL);
      if ( v5 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xA5F,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v5);
    }
    if ( v10 )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(**((_QWORD **)a3 + 57) + 40LL))(
             *((_QWORD **)a3 + 57),
             v10,
             -1LL);
      if ( v6 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xA64,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v6);
    }
  }
  result = Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)va);
  if ( a3 )
    return (*(__int64 (__fastcall **)(TabletModePositioner *))(*(_QWORD *)a3 + 16LL))(a3);
  return result;
}
