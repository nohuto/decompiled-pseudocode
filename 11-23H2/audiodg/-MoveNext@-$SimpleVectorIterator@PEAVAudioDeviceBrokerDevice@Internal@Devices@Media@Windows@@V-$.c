/*
 * XREFs of ?MoveNext@?$SimpleVectorIterator@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@V?$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@U?$DefaultVectorOptions@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x1400889A0
 * Callers:
 *     <none>
 * Callees:
 *     ??R_lambda_2bcda90c2be21ba0d8fba1c4633a033a_@@QEBAJXZ @ 0x1400811D8 (--R_lambda_2bcda90c2be21ba0d8fba1c4633a033a_@@QEBAJXZ.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>,XWinRT::IntVersionTag,0>::MoveNext(
        __int64 a1,
        _BYTE *a2)
{
  int v2; // ebx
  __int64 v4; // rsi
  int v5; // eax
  __int64 v7[5]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE **v8; // [rsp+50h] [rbp+8h] BYREF
  _BYTE *v9; // [rsp+58h] [rbp+10h] BYREF

  v9 = a2;
  *a2 = 0;
  v2 = *(_DWORD *)(a1 + 48);
  v4 = *(_QWORD *)(a1 + 32);
  v8 = &v9;
  v7[1] = (__int64)&v9;
  v7[2] = (__int64)&v8;
  v7[0] = a1;
  if ( v2 >= 0 )
  {
    v5 = _lambda_2bcda90c2be21ba0d8fba1c4633a033a_::operator()(v7);
    v2 = v5;
    if ( *(_DWORD *)(a1 + 52) != *(_DWORD *)(v4 + 88) )
    {
      *(_DWORD *)(a1 + 48) = -2147483636;
      if ( v5 < 0 )
      {
        RoTransformError((unsigned int)v5, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        **v8 = 0;
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v2, 0LL);
  }
  return (unsigned int)v2;
}
