/*
 * XREFs of KeFreeInitializationCode @ 0x140B17BF4
 * Callers:
 *     KeInitSystem @ 0x140B4DED4 (KeInitSystem.c)
 * Callees:
 *     KiSwInterruptPresent @ 0x140B679C0 (KiSwInterruptPresent.c)
 *     MmDiscardDriverSection @ 0x140B74914 (MmDiscardDriverSection.c)
 *     MmStrongCodeGuaranteesEnforced @ 0x140B75E70 (MmStrongCodeGuaranteesEnforced.c)
 */

__int64 KeFreeInitializationCode()
{
  __int64 result; // rax

  result = MmStrongCodeGuaranteesEnforced();
  if ( !(_DWORD)result )
  {
    result = KiSwInterruptPresent();
    if ( (int)result < 0 && !__30 )
      return MmDiscardDriverSection(sub_140B121A0);
  }
  return result;
}
