/*
 * XREFs of ??$?0$0DM@@StringReference@Internal@Windows@@QEAA@AEAY0DM@$$CBG@Z @ 0x1801AC23C
 * Callers:
 *     _lambda_a6d0d909e7d7253cd78b9137e9e20418_::operator() @ 0x1801F8148 (_lambda_a6d0d909e7d7253cd78b9137e9e20418_--operator().c)
 *     _lambda_7f99cf75152af1ff2ebde7d1303c0d37_::operator() @ 0x1804E714C (_lambda_7f99cf75152af1ff2ebde7d1303c0d37_--operator().c)
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
