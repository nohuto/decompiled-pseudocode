/*
 * XREFs of sub_1402D56F4 @ 0x1402D56F4
 * Callers:
 *     sub_1402BA130 @ 0x1402BA130 (sub_1402BA130.c)
 *     sub_1402D3E44 @ 0x1402D3E44 (sub_1402D3E44.c)
 *     sub_1402D4530 @ 0x1402D4530 (sub_1402D4530.c)
 *     sub_1402F8040 @ 0x1402F8040 (sub_1402F8040.c)
 *     sub_1402F8420 @ 0x1402F8420 (sub_1402F8420.c)
 * Callees:
 *     sub_140232968 @ 0x140232968 (sub_140232968.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 */

void __fastcall sub_1402D56F4(__int64 *Object)
{
  if ( (Object[51] & 0x400) != 0 && sub_140232968(*(volatile signed __int32 **)(Object[2] + 8), Object + 77) )
  {
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
    *((_DWORD *)Object + 102) &= ~0x400u;
  }
  *((_DWORD *)Object + 102) &= ~0x200u;
}
