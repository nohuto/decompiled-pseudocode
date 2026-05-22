/*
 * XREFs of ?IsTestSigningEnabled@KernelContextProvider@@SA_NXZ @ 0x180027040
 * Callers:
 *     ?UnregisterGestureDragClient@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@_KPEAVBamoDragManagerClientProxy@@@Z @ 0x180002700 (-UnregisterGestureDragClient@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@_KPEAVBamoDragMa.c)
 *     ?RegisterGestureDragClient@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@_KW4InputGestureSourceType@Input@Internal@UI@Windows@@W4InputType@4567@PEAVBamoDragManagerClientProxy@@@Z @ 0x18001A980 (-RegisterGestureDragClient@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@_KW4InputGestureSo.c)
 *     ??$ShouldSelectClient@VDragManagerClientProxy@@@ShellGesturesProcessor@@AEAA_NPEAVDragManagerClientProxy@@@Z @ 0x180074180 (--$ShouldSelectClient@VDragManagerClientProxy@@@ShellGesturesProcessor@@AEAA_NPEAVDragManagerCli.c)
 *     ??$ShouldSelectClient@VShellGesturesClientProxy@@@ShellGesturesProcessor@@AEAA_NPEAVShellGesturesClientProxy@@@Z @ 0x1800741CC (--$ShouldSelectClient@VShellGesturesClientProxy@@@ShellGesturesProcessor@@AEAA_NPEAVShellGesture.c)
 * Callees:
 *     wil::init_once_nothrow__lambda_5074a8db83a03a7ac14dcc5db321bd88___ @ 0x180026FA0 (wil--init_once_nothrow__lambda_5074a8db83a03a7ac14dcc5db321bd88___.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

char __fastcall KernelContextProvider::IsTestSigningEnabled(__int64 a1, __int64 a2)
{
  int inited; // eax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v6; // [rsp+30h] [rbp+8h] BYREF

  inited = wil::init_once_nothrow__lambda_5074a8db83a03a7ac14dcc5db321bd88___(a1, a2, &v6);
  if ( inited < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x266,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/win32_helpers.h",
      (const char *)(unsigned int)inited,
      v4);
  return byte_180277920;
}
