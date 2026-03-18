/*
 * XREFs of CmpValueEnumStackInitialize @ 0x140A257E8
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x140616604 (CmpGetValueCountForKeyNodeStack.c)
 *     CmEnumerateValueFromLayeredKey @ 0x140A13C14 (CmEnumerateValueFromLayeredKey.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140A25E84 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     memset @ 0x140435400 (memset.c)
 *     CmpValueEnumStackEntryInitialize @ 0x14061680C (CmpValueEnumStackEntryInitialize.c)
 */

__int64 __fastcall CmpValueEnumStackInitialize(_DWORD *a1)
{
  __int64 v2; // rdi
  _OWORD *v3; // rbx
  __int64 result; // rax

  memset(a1 + 1, 0, 0x54uLL);
  *a1 = -1;
  v2 = 2LL;
  v3 = a1 + 4;
  do
  {
    result = CmpValueEnumStackEntryInitialize(v3);
    v3 += 2;
    --v2;
  }
  while ( v2 );
  return result;
}
