/*
 * XREFs of ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVAudioDeviceModule@Devices@Media@Windows@@@567@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x140084770
 * Callers:
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVAudioDeviceModule@Devices@Media@Windows@@@567@@Details@WRL@Microsoft@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x140031EB0 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IVector@PEAVAud.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::IIterable<Windows::Media::Devices::AudioDeviceModule *>>::GetIids(
        __int64 a1,
        _DWORD *a2,
        GUID **a3)
{
  unsigned int v3; // ebx
  GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (GUID *)CoTaskMemAlloc(0x30uLL);
  if ( v6 )
  {
    *v6 = GUID_325cb078_f603_522b_8afe_04b0bfcfa0e9;
    v6[1] = GUID_00000038_0000_0000_c000_000000000046;
    v6[2] = GUID_7eeb51c3_d70e_548a_85c2_3cf71b4a124c;
    *a2 = 3;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
