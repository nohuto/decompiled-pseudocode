/*
 * XREFs of ?OnRIMAsyncPnpWorkNotificationSemaphoreStatic@RIMDeviceCollection@@CAJPEAXK0@Z @ 0x1800BC550
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800BC3A8 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCBB0 (-_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall RIMDeviceCollection::OnRIMAsyncPnpWorkNotificationSemaphoreStatic(_QWORD *a1, __int64 a2, void *a3)
{
  __int64 v3; // r9
  __int64 v4; // rdx
  int v5; // eax
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (_DWORD)a2 )
  {
    v3 = 2147549183LL;
    v4 = 572LL;
    goto LABEL_7;
  }
  if ( !a1 )
  {
    v3 = 2147942487LL;
    v4 = 562LL;
LABEL_7:
    wil::details::in1diag3::Log_Hr(
      retaddr,
      v4,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)v3);
    return 0LL;
  }
  v5 = RIMOnAsyncPnpWorkNotification(a1[10], a2, a3);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_NtStatus(
      retaddr,
      (void *)0x237,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)(unsigned int)v5,
      v7);
  return 0LL;
}
