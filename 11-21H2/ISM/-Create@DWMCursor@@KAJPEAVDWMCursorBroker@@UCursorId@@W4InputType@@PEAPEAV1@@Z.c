/*
 * XREFs of ?Create@DWMCursor@@KAJPEAVDWMCursorBroker@@UCursorId@@W4InputType@@PEAPEAV1@@Z @ 0x1800293AC
 * Callers:
 *     ?CreateCursor@DWMCursorBroker@@UEAAJPEAUDeviceInfo@@KPEAPEAUICursor@@@Z @ 0x180028F10 (-CreateCursor@DWMCursorBroker@@UEAAJPEAUDeviceInfo@@KPEAPEAUICursor@@@Z.c)
 * Callees:
 *     ??0DWMCursor@@IEAA@PEAVDWMCursorBroker@@W4InputType@@UCursorId@@@Z @ 0x180029C10 (--0DWMCursor@@IEAA@PEAVDWMCursorBroker@@W4InputType@@UCursorId@@@Z.c)
 *     ?RegisterForTestCommandMessage@TestCommandHost@@SAXW4TestCommandMessageType@@PEAXQ6A_N1PEAUTestCommandMessageDataHeader@@@ZAEAVCommandRegistrationToken@1@@Z @ 0x18002D8B4 (-RegisterForTestCommandMessage@TestCommandHost@@SAXW4TestCommandMessageType@@PEAXQ6A_N1PEAUTestC.c)
 *     ?CheckAndUpdateRasterizationScale@DWMCursor@@AEAAJ_N@Z @ 0x18002DA20 (-CheckAndUpdateRasterizationScale@DWMCursor@@AEAAJ_N@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18002E38C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@QEAAX_NW4.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180036848 (-IsEdition@@YA_N_K@Z.c)
 *     ?RegisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z @ 0x1800392A8 (-RegisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007FD5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMCursor::Create(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  void *v8; // rax
  __int64 v9; // rcx
  void *v10; // rdi
  __int64 v11; // rbx
  int v12; // eax
  int v13; // eax
  unsigned int v15; // ebx
  __int64 v16; // rdx
  int v17; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !a4 )
  {
    v15 = -2147024809;
    v16 = 110LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
      (const char *)v15,
      v17);
    return v15;
  }
  *a4 = 0LL;
  v8 = malloc(0x170uLL);
  v10 = v8;
  if ( v8 )
    memset_0(v8, 0, 0x170uLL);
  if ( v10 )
    v11 = DWMCursor::DWMCursor(v10, a1, a3, a2);
  else
    v11 = 0LL;
  if ( !v11 )
  {
    v15 = -2147024882;
    v16 = 123LL;
    goto LABEL_17;
  }
  TestCommandHost::RegisterForTestCommandMessage(
    v9,
    v11,
    lambda_c739a78b7ff0a2fdc5f9b94b3ac1dde9_::_lambda_invoker_cdecl_,
    v11 + 128);
  v12 = DWMCursor::CheckAndUpdateRasterizationScale((DWMCursor *)v11, 0);
  if ( v12 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x35,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
      (const char *)(unsigned int)v12,
      v17);
  v13 = DWMCursorBroker::RegisterCursor(*(DWMCursorBroker **)(v11 + 32), (struct DWMCursor *)v11);
  *(_BYTE *)(v11 + 49) = v13 >= 0;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x37,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
      (const char *)(unsigned int)v13,
      v17);
  }
  else if ( !IsEdition(0x3DDA1uLL) )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDWMCursor>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_DesktopDWMCursor>::GetImpl'::`2'::impl,
      0LL);
  }
  *a4 = v11;
  return 0LL;
}
