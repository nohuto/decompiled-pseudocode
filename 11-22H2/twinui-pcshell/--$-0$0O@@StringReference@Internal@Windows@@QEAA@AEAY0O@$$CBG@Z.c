/*
 * XREFs of ??$?0$0O@@StringReference@Internal@Windows@@QEAA@AEAY0O@$$CBG@Z @ 0x1805B1F74
 * Callers:
 *     ?TryGetSnapId@CDesktopPositioner@@AEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18003A55C (-TryGetSnapId@CDesktopPositioner@@AEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     <none>
 */

HSTRING *__fastcall Windows::Internal::StringReference::StringReference(
        HSTRING *string,
        const unsigned __int16 (*a2)[14])
{
  if ( WindowsCreateStringReference(L"SnapWindow.Id", 0xDu, (HSTRING_HEADER *)(string + 1), string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  return string;
}
