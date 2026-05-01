/*
 * XREFs of ShouldSaveLastFloatingPosition @ 0x1802DE9C4
 * Callers:
 *     ?HandleDragEnded@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIURect@Foundation@Windows@@PEAW4MoveAnimationType@Text@Shell@Internal@5@PEAIPEAU345@PEAW4ShellRequestType@7895@@Z @ 0x180532900 (-HandleDragEnded@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIURect@Foundation@Windows@@PEAW4MoveA.c)
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IEPEAIPEAURect@Foundation@8@PEAE@Z @ 0x180535540 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     <none>
 */

char __fastcall ShouldSaveLastFloatingPosition(__int64 a1)
{
  char result; // al

  result = 1;
  if ( *(_DWORD *)a1 != 1 || !*(_BYTE *)(a1 + 40) && !*(_BYTE *)(a1 + 41) )
    return 0;
  return result;
}
