/*
 * XREFs of ??$?0$0IA@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0IA@G@Z @ 0x18010A098
 * Callers:
 *     _lambda_16e39da7052e4c67737ceb9c18ac8be9_::operator() @ 0x180109928 (_lambda_16e39da7052e4c67737ceb9c18ac8be9_--operator().c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18010A144 (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802E6814 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

HSTRING_HEADER *__fastcall Microsoft::WRL::Wrappers::HStringReference::HStringReference(
        HSTRING_HEADER *hstringHeader,
        PCWSTR sourceString,
        unsigned int a3)
{
  unsigned __int64 v5; // rbx
  unsigned int v6; // eax

  v5 = -1LL;
  do
    ++v5;
  while ( sourceString[v5] );
  if ( v5 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, (int)sourceString, a3);
    JUMPOUT(0x1802B4DA2LL);
  }
  v6 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v5);
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(hstringHeader, sourceString, v6, v5);
  return hstringHeader;
}
