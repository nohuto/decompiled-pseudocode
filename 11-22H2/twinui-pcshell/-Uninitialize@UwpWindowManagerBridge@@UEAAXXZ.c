/*
 * XREFs of ?Uninitialize@UwpWindowManagerBridge@@UEAAXXZ @ 0x180177540
 * Callers:
 *     <none>
 * Callees:
 *     ?IsBamoEnabled@@YA_NXZ @ 0x1800D2E84 (-IsBamoEnabled@@YA_NXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180177BB4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall UwpWindowManagerBridge::Uninitialize(wil::details **this, void *a2)
{
  int v3; // eax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::SetEvent(this[36], a2);
  if ( IsBamoEnabled() )
  {
    v3 = (*(__int64 (__fastcall **)(wil::details *))(*(_QWORD *)this[34] + 240LL))(this[34]);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xBD,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)v3,
        v4);
  }
}
