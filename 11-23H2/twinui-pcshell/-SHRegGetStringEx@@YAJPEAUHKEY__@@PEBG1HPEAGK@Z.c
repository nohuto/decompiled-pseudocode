/*
 * XREFs of ?SHRegGetStringEx@@YAJPEAUHKEY__@@PEBG1HPEAGK@Z @ 0x18018D6DC
 * Callers:
 *     ?EnsureCurrentlyRegisteredUriHandlerLaunchedForFirstRun@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@CAX_N_JAEBVCorrelationVector@@@Z @ 0x180098AF8 (-EnsureCurrentlyRegisteredUriHandlerLaunchedForFirstRun@MeetAndChatManager@implementation@Shell@.c)
 *     ?IsWebSearchProviderInstalledLatest@@YA_NXZ @ 0x1801ED9B4 (-IsWebSearchProviderInstalledLatest@@YA_NXZ.c)
 *     ?GetRegistryKeyStringValue@CopilotButtonHelpers@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG00@Z @ 0x1802637D4 (-GetRegistryKeyStringValue@CopilotButtonHelpers@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$a.c)
 *     ?EnsureEnterpriseLayoutFilePath@TaskbarLayoutPolicyManager@@AEAAJXZ @ 0x1803E6520 (-EnsureEnterpriseLayoutFilePath@TaskbarLayoutPolicyManager@@AEAAJXZ.c)
 *     ?EnsureOEMLayoutFilePath@TaskbarLayoutPolicyManager@@AEAAJXZ @ 0x1803E678C (-EnsureOEMLayoutFilePath@TaskbarLayoutPolicyManager@@AEAAJXZ.c)
 *     ?SHRegGetString@@YAJPEAUHKEY__@@PEBG1PEAGK@Z @ 0x1803E844C (-SHRegGetString@@YAJPEAUHKEY__@@PEBG1PEAGK@Z.c)
 *     ?IsChinaCTAPolicyEnabled@MeetAndChatHelpers@@YA_NXZ @ 0x1806BE608 (-IsChinaCTAPolicyEnabled@MeetAndChatHelpers@@YA_NXZ.c)
 *     _lambda_21d9478fa7481aa5ac8b815bdb34bba5_::operator() @ 0x1806CBCEC (_lambda_21d9478fa7481aa5ac8b815bdb34bba5_--operator().c)
 *     ?_MatchesPreviousFailure@CCriticalFailureHandler@@AEBA_NJPEBGIPEA_K1@Z @ 0x18073D61C (-_MatchesPreviousFailure@CCriticalFailureHandler@@AEBA_NJPEBGIPEA_K1@Z.c)
 * Callees:
 *     <none>
 */

LSTATUS __fastcall SHRegGetStringEx(
        HKEY a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        DWORD a4,
        unsigned __int16 *a5,
        unsigned int a6)
{
  unsigned int v6; // ebx
  LSTATUS result; // eax

  v6 = a6;
  if ( a6 > 0x7FFFFFFF )
  {
    result = 534;
LABEL_4:
    *a5 = 0;
    goto LABEL_5;
  }
  a6 *= 2;
  result = RegGetValueW(a1, a2, a3, a4, 0LL, a5, &a6);
  if ( !result )
    return result;
  if ( v6 )
    goto LABEL_4;
LABEL_5:
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
