/*
 * XREFs of ?at@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAAAEAUguid@winrt@@_K@Z @ 0x1802E7F9A
 * Callers:
 *     ?SyncTabProxyWindows@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXW4AltTabFilterScope@MultiTasking@SystemSettings@@_K@Z @ 0x180034764 (-SyncTabProxyWindows@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXW4AltTabFilter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::deque<winrt::guid>::at(__int64 **a1, unsigned __int64 a2)
{
  __int64 v2; // rax

  if ( (unsigned __int64)a1[4] <= a2 )
  {
    std::_Xout_of_range("invalid deque<T> subscript");
    __debugbreak();
  }
  v2 = 0LL;
  if ( *a1 )
    v2 = **a1;
  return *(_QWORD *)(*(_QWORD *)(v2 + 8) + 8 * (((unsigned __int64)a1[3] + a2) & (*(_QWORD *)(v2 + 16) - 1LL)));
}
