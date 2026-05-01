/*
 * XREFs of ?Attach@?$ComPtr@VCPinnedListEnum@@@WRL@Microsoft@@QEAAXPEAVCPinnedListEnum@@@Z @ 0x180752A4C
 * Callers:
 *     ?EnumAllObjects@CPinnedList@@QEAAJPEAPEAUIEnumFullIDList@@@Z @ 0x180753B1C (-EnumAllObjects@CPinnedList@@QEAAJPEAPEAUIEnumFullIDList@@@Z.c)
 *     ?EnumObjects@CPinnedList@@UEAAJPEAPEAUIEnumFullIDList@@@Z @ 0x180753C30 (-EnumObjects@CPinnedList@@UEAAJPEAPEAUIEnumFullIDList@@@Z.c)
 * Callees:
 *     ?Release@CPinnedListEnum@@UEAAKXZ @ 0x18075A4F0 (-Release@CPinnedListEnum@@UEAAKXZ.c)
 */

unsigned int __fastcall Microsoft::WRL::ComPtr<CPinnedListEnum>::Attach(CPinnedListEnum **a1, CPinnedListEnum *a2)
{
  CPinnedListEnum *v4; // rcx
  unsigned int result; // eax

  v4 = *a1;
  if ( v4 )
    result = CPinnedListEnum::Release(v4);
  *a1 = a2;
  return result;
}
