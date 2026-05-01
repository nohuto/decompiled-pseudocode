/*
 * XREFs of ?add_ProcessDestroyed@?$produce@UProcessTracker@implementation@Shell@Internal@Windows@winrt@@UIProcessTracker@3456@@impl@winrt@@UEAAHPEAXPEAUevent_token@3@@Z @ 0x18027ED50
 * Callers:
 *     <none>
 * Callees:
 *     ?add@?$event@U?$EventHandler@I@Foundation@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBU?$EventHandler@I@Foundation@Windows@2@@Z @ 0x18027EBFC (-add@-$event@U-$EventHandler@I@Foundation@Windows@winrt@@@winrt@@QEAA-AUevent_token@2@AEBU-$Even.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::ProcessTracker,winrt::Windows::Internal::Shell::IProcessTracker>::add_ProcessDestroyed(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  v5 = a1 + 80;
  if ( !a1 )
    v5 = 96LL;
  try
  {
    winrt::event<winrt::Windows::Foundation::EventHandler<unsigned int>>::add((RTL_SRWLOCK *)v5, &v7, &v8);
    *a3 = v7;
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v7);
  }
  return result;
}
