/*
 * XREFs of sub_1404183A0 @ 0x1404183A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140731680 @ 0x140731680 (sub_140731680.c)
 */

__int64 __fastcall sub_1404183A0(__int64 a1)
{
  return sub_140731680(*(PDEVICE_OBJECT *)(a1 + 8), *(PIRP *)a1, 0, 0, 1);
}
