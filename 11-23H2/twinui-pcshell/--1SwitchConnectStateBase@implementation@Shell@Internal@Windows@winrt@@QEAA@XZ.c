/*
 * XREFs of ??1SwitchConnectStateBase@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180731358
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@USwitchConnectedState@implementation@Shell@Internal@Windows@winrt@@@std@@EEAAXXZ @ 0x180733740 (-_Destroy@-$_Ref_count_obj2@USwitchConnectedState@implementation@Shell@Internal@Windows@winrt@@@.c)
 *     ?_Destroy@?$_Ref_count_obj2@USwitchRecoveringState@implementation@Shell@Internal@Windows@winrt@@@std@@EEAAXXZ @ 0x1807337C0 (-_Destroy@-$_Ref_count_obj2@USwitchRecoveringState@implementation@Shell@Internal@Windows@winrt@@.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectStateBase::~SwitchConnectStateBase(
        winrt::Windows::Internal::Shell::implementation::SwitchConnectStateBase *this)
{
  __int64 *v2; // rcx
  std::_Ref_count_base *v3; // rcx

  v2 = (__int64 *)((char *)this + 24);
  if ( *v2 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v2);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 2);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  if ( *(_QWORD *)this )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this);
}
