/*
 * XREFs of ?OnApplicationViewChanged@KioskPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1804F1340
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$SecondaryAppLaunched@PEBG@CustomShellHostTelemetry@@SAX$$QEAPEBG@Z @ 0x1804EF008 (--$SecondaryAppLaunched@PEBG@CustomShellHostTelemetry@@SAX$$QEAPEBG@Z.c)
 *     ?AddViewToKioskPositioner@KioskPositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1804EF8BC (-AddViewToKioskPositioner@KioskPositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?IsOperableView@Win32ViewOperationPolicy@@QEAA_NPEAUIApplicationView@@@Z @ 0x1804F0D80 (-IsOperableView@Win32ViewOperationPolicy@@QEAA_NPEAUIApplicationView@@@Z.c)
 *     ?IsWin32ApplicationView@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1804F1150 (-IsWin32ApplicationView@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?MaximizeWin32View@KioskPositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1804F1190 (-MaximizeWin32View@KioskPositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?RemoveView@ApplicationViewCollection@@QEAA_NPEAUIApplicationView@@@Z @ 0x1804F1A48 (-RemoveView@ApplicationViewCollection@@QEAA_NPEAUIApplicationView@@@Z.c)
 *     ?ShouldHandleView@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1804F1F74 (-ShouldHandleView@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall KioskPositioner::OnApplicationViewChanged(
        __int64 a1,
        struct IApplicationView *a2,
        int a3,
        const char *a4)
{
  __int64 v6; // rdx
  __int64 *v7; // rcx
  __int64 v8; // rax
  bool IsWin32ApplicationView; // si
  const wchar_t *v10; // rax
  KioskPositioner *v11; // rcx
  Win32ViewOperationPolicy *v12; // rcx
  __int64 result; // rax
  const wchar_t *v14; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v15[9]; // [rsp+38h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  try
  {
    if ( a3 )
    {
      if ( a3 == 1 )
      {
        v6 = a1 - 136;
        v7 = *(__int64 **)(a1 + 504);
        v8 = *v7;
        v15[0] = off_1806625F8;
        v15[1] = v6;
        v15[7] = v15;
        (*(void (__fastcall **)(__int64 *, struct IApplicationView *, _QWORD, _QWORD *))(v8 + 24))(
          v7,
          a2,
          *(_QWORD *)(a1 + 72),
          v15);
        ApplicationViewCollection::RemoveView((ApplicationViewCollection *)(a1 + 512), a2);
      }
    }
    else
    {
      IsWin32ApplicationView = KioskPositioner::IsWin32ApplicationView((KioskPositioner *)a1, a2);
      if ( !*(_BYTE *)(a1 + 498)
        && !(*(unsigned __int8 (__fastcall **)(_QWORD, struct IApplicationView *))(**(_QWORD **)(a1 + 504) + 8LL))(
              *(_QWORD *)(a1 + 504),
              a2) )
      {
        *(_BYTE *)(a1 + 498) = 1;
        v10 = L"Win32";
        if ( !IsWin32ApplicationView )
          v10 = L"UWP";
        v14 = v10;
        CustomShellHostTelemetry::SecondaryAppLaunched<unsigned short const *>((__int64 *)&v14);
      }
      if ( IsWin32ApplicationView && KioskPositioner::ShouldHandleView((KioskPositioner *)(a1 - 136), a2) )
      {
        KioskPositioner::AddViewToKioskPositioner(v11, a2);
        if ( Win32ViewOperationPolicy::IsOperableView(
               v12,
               (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))a2) )
        {
          KioskPositioner::MaximizeWin32View((KioskPositioner *)(a1 - 136), a2);
        }
      }
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x349,
                           (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
                           a4);
  }
  return result;
}
