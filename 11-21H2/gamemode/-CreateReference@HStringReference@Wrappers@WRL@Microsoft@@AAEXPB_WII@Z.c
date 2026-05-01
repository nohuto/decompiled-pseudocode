/*
 * XREFs of ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AAEXPB_WII@Z @ 0x10005A95
 * Callers:
 *     ??$?0PB_W@HStringReference@Wrappers@WRL@Microsoft@@QAE@ABQB_WUDummy@Details@23@@Z @ 0x1000595B (--$-0PB_W@HStringReference@Wrappers@WRL@Microsoft@@QAE@ABQB_WUDummy@Details@23@@Z.c)
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YGXJK@Z @ 0x10005A81 (-RaiseException@Details@WRL@Microsoft@@YGXJK@Z.c)
 */

void __thiscall Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        HSTRING_HEADER *hstringHeader,
        PCWSTR sourceString,
        unsigned int a3,
        UINT32 length)
{
  UINT32 v4; // edx
  void *StringReference; // eax

  v4 = length;
  if ( length >= a3 )
    v4 = a3 - 1;
  StringReference = (void *)WindowsCreateStringReference(sourceString, v4, hstringHeader, (HSTRING *)&hstringHeader[1]);
  if ( (int)StringReference < 0 )
  {
    Microsoft::WRL::Details::RaiseException(StringReference);
    JUMPOUT(0x10005AC5);
  }
}
