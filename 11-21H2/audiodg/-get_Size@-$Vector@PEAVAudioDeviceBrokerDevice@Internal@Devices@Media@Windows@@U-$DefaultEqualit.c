/*
 * XREFs of ?get_Size@?$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@U?$DefaultVectorOptions@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@@Internal@Collections@Foundation@Windows@@UEAAJPEAI@Z @ 0x14002AA30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>>::get_Size(
        __int64 a1,
        _DWORD *a2)
{
  RTL_SRWLOCK *v2; // rbx
  bool v3; // zf
  RTL_SRWLOCK *v6; // rcx
  RTL_SRWLOCK *v7; // rcx

  *a2 = 0;
  v2 = (RTL_SRWLOCK *)(a1 + 72);
  v3 = *(_DWORD *)(a1 + 72) == 1;
  v6 = (RTL_SRWLOCK *)(a1 + 80);
  if ( v3 )
  {
    if ( SLODWORD(v6->Ptr) >= 0 )
      ++LODWORD(v6->Ptr);
  }
  else
  {
    AcquireSRWLockShared(v6);
  }
  *a2 = *(_DWORD *)(a1 + 40);
  if ( v2 )
  {
    v7 = v2 + 1;
    if ( LODWORD(v2->Ptr) == 1 )
      --LODWORD(v7->Ptr);
    else
      ReleaseSRWLockShared(v7);
  }
  return 0LL;
}
