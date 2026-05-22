/*
 * XREFs of ?ShouldSelectClient@ShellGesturesProcessor@@AEAA_NAEBV?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@W4InputType@@@Z @ 0x180150F80
 * Callers:
 *     ?OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x18000A5E0 (-OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcess.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     wil::init_once_nothrow__lambda_5074a8db83a03a7ac14dcc5db321bd88___ @ 0x1800FA3A8 (wil--init_once_nothrow__lambda_5074a8db83a03a7ac14dcc5db321bd88___.c)
 *     ?GetTouchEnabled@BamoShellGesturesClientProxy@@UEAA_NXZ @ 0x18014F770 (-GetTouchEnabled@BamoShellGesturesClientProxy@@UEAA_NXZ.c)
 *     ?GetTouchpadEnabled@BamoShellGesturesClientProxy@@UEAA_NXZ @ 0x18014F7B0 (-GetTouchpadEnabled@BamoShellGesturesClientProxy@@UEAA_NXZ.c)
 */

char __fastcall ShellGesturesProcessor::ShouldSelectClient(__int64 a1, __int64 *a2, int a3)
{
  __int64 v4; // rcx
  bool TouchEnabled; // al
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // edi
  __int64 v10; // rax
  int inited; // eax
  int v14; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v16; // [rsp+40h] [rbp+18h] BYREF

  v4 = *a2;
  if ( (a3 & 8) != 0 )
  {
    TouchEnabled = BamoShellGesturesClientProxy::GetTouchEnabled((BamoShellGesturesClientProxy *)(v4 + 8));
  }
  else
  {
    if ( (a3 & 0x1000000) == 0 )
      return 0;
    TouchEnabled = BamoShellGesturesClientProxy::GetTouchpadEnabled((BamoShellGesturesClientProxy *)(v4 + 8));
  }
  if ( TouchEnabled )
  {
    v7 = *(_QWORD *)(a1 + 16);
    v8 = *(_QWORD *)(v7 + 128);
    if ( !v8 || v8 == *(_QWORD *)(*a2 + 160) )
    {
      v9 = *(_DWORD *)(v7 + 136);
      v10 = *a2;
      if ( v9
         ? v9 == *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(v10 + 32) + 16LL) + 8LL))(*(_QWORD *)(*(_QWORD *)(v10 + 32) + 16LL))
                           + 32)
         : *(_BYTE *)(v10 + 152) )
      {
        return 1;
      }
      inited = wil::init_once_nothrow__lambda_5074a8db83a03a7ac14dcc5db321bd88___(v8, v7, &v16);
      if ( inited < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x256,
          (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/win32_helpers.h",
          (const char *)(unsigned int)inited,
          v14);
      if ( byte_180243288 )
        return 1;
    }
  }
  return 0;
}
