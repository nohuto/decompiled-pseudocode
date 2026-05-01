/*
 * XREFs of ShouldLoadLastFloatingPosition @ 0x180230042
 * Callers:
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IEPEAIPEAURect@Foundation@8@PEAE@Z @ 0x180483510 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     <none>
 */

char __fastcall ShouldLoadLastFloatingPosition(__int64 a1)
{
  char result; // al

  result = 1;
  if ( *(_DWORD *)a1 != 1 || !*(_BYTE *)(a1 + 40) && !*(_BYTE *)(a1 + 41) || *(_BYTE *)(a1 + 46) )
    return 0;
  return result;
}
