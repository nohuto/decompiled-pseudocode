/*
 * XREFs of ?OnRIMPnpEventStatic@RIMDeviceCollection@@CAJPEAXK0@Z @ 0x1800D5630
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800595B0 (-_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180097878 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall RIMDeviceCollection::OnRIMPnpEventStatic(_QWORD *a1, __int64 a2, void *a3)
{
  __int64 v3; // r9
  __int64 v4; // rdx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (_DWORD)a2 )
  {
    v3 = 2147549183LL;
    v4 = 472LL;
    goto LABEL_7;
  }
  if ( !a1 )
  {
    v3 = 2147942487LL;
    v4 = 462LL;
LABEL_7:
    wil::details::in1diag3::Log_Hr(
      retaddr,
      v4,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)v3);
    return 0LL;
  }
  v5 = RIMOnPnpNotification(a1[10], a2, a3);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_NtStatus(
      retaddr,
      (void *)0x1D3,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)(unsigned int)v5);
  return 0LL;
}
