/*
 * XREFs of ??$?0$0DM@@StringReference@Internal@Windows@@QEAA@AEAY0DM@$$CBG@Z @ 0x180022A68
 * Callers:
 *     _lambda_5c5493d934288f02b1cda8463f34ddab_::operator() @ 0x180022920 (_lambda_5c5493d934288f02b1cda8463f34ddab_--operator().c)
 *     _lambda_fca2146b189bf76e53bab88150684c56_::operator() @ 0x180413CC0 (_lambda_fca2146b189bf76e53bab88150684c56_--operator().c)
 * Callees:
 *     <none>
 */

HSTRING *__fastcall Windows::Internal::StringReference::StringReference(
        HSTRING *string,
        const unsigned __int16 (*a2)[60])
{
  if ( WindowsCreateStringReference(
         L"Windows.Internal.CapabilityAccess.AppLaunchCapabilityAccess",
         0x3Bu,
         (HSTRING_HEADER *)(string + 1),
         string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  return string;
}
