/*
 * XREFs of ??1?$ComPtr@VCCortanaShownEventArgs@@@WRL@Microsoft@@QEAA@XZ @ 0x18038E1C4
 * Callers:
 *     ?Show@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180045B90 (-Show@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experie.c)
 *     ?OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z @ 0x18009E7E0 (-OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UICortanaShownEventArgs@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002D910 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UICortanaShownEven.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CCortanaShownEventArgs>::~ComPtr<CCortanaShownEventArgs>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::ICortanaShownEventArgs>::Release(result);
  }
  return result;
}
