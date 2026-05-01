/*
 * XREFs of ??$?0$0CL@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0CL@$$CBG@Z @ 0x1803AAF0C
 * Callers:
 *     ?RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801068D4 (-RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 */

HSTRING_HEADER *__fastcall Microsoft::WRL::Wrappers::HStringReference::HStringReference(
        HSTRING_HEADER *this,
        const WCHAR *a2)
{
  this[1].Reserved.Reserved1 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(this, a2, 0x2Bu, 0x2Au);
  return this;
}
