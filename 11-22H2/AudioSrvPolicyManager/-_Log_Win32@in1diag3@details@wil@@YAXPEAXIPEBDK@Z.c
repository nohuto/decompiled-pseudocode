/*
 * XREFs of ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18001F03C
 * Callers:
 *     ?RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ @ 0x18001E5E8 (-RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ.c)
 *     ?RegisterSessionDisplayNotificationCallback@TSSession@@QEAAXXZ @ 0x180037224 (-RegisterSessionDisplayNotificationCallback@TSSession@@QEAAXXZ.c)
 * Callees:
 *     ??$ReportFailure_Win32@$01@details@wil@@YAJPEAXIPEBD110K@Z @ 0x18001B97C (--$ReportFailure_Win32@$01@details@wil@@YAJPEAXIPEBD110K@Z.c)
 */

void __fastcall wil::details::in1diag3::_Log_Win32(
        wil::details::in1diag3 *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  int v4; // [rsp+20h] [rbp-28h]
  wil::details *v5; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  LODWORD(v5) = (_DWORD)a4;
  wil::details::ReportFailure_Win32<2>((int)this, a2, a3, (__int64)a4, v4, retaddr, v5);
}
