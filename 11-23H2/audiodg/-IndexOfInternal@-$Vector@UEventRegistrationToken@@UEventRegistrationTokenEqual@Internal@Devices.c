/*
 * XREFs of ?IndexOfInternal@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEAAJPEAUEventRegistrationToken@@IU6@PEAIPEAE@Z @ 0x140087550
 * Callers:
 *     ?IndexOf@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJUEventRegistrationToken@@PEAIPEAE@Z @ 0x140087290 (-IndexOf@-$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@W.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>::IndexOfInternal(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3,
        __int64 a4,
        unsigned int *a5,
        _BYTE *a6)
{
  unsigned int v6; // ecx

  v6 = 0;
  if ( a3 )
  {
    while ( a4 != *a2 )
    {
      ++v6;
      ++a2;
      if ( v6 >= a3 )
        return 0LL;
    }
    *a6 = 1;
    *a5 = v6;
  }
  return 0LL;
}
