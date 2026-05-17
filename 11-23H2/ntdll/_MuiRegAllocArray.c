/*
 * XREFs of _MuiRegAllocArray @ 0x180015CD8
 * Callers:
 *     _RtlpMuiRegAddNeutralLanguage @ 0x180009F98 (_RtlpMuiRegAddNeutralLanguage.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x180015B98 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18008E5F8 (RtlpLoadInstallLanguageFallback.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x180112698 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x180113674 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     _RtlpMuiRegValidateInstalled @ 0x180115980 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 */

__int64 __fastcall MuiRegAllocArray(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rcx

  result = 0LL;
  v3 = 2LL * a2;
  if ( v3 <= 0xFFFFFFFF )
  {
    if ( (_DWORD)v3 )
      return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, (unsigned int)v3);
  }
  return result;
}
