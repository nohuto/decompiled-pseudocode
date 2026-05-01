/*
 * XREFs of ??1GameConfigInfo@@QEAA@XZ @ 0x1803D4A3C
 * Callers:
 *     _BroadcastDVRComponent::OnApplicationViewChangedTask_::_1_::dtor$2 @ 0x1802B7BAE (_BroadcastDVRComponent--OnApplicationViewChangedTask_--_1_--dtor$2.c)
 *     _BroadcastDVRComponent::OnGameModeEnableChangeTask_::_1_::dtor$2 @ 0x1803DA2F2 (_BroadcastDVRComponent--OnGameModeEnableChangeTask_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall GameConfigInfo::~GameConfigInfo(GameConfigInfo *this)
{
  HSTRING v1; // rcx

  v1 = (HSTRING)*((_QWORD *)this + 4);
  if ( v1 )
    WindowsDeleteString(v1);
}
