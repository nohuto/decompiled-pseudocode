/*
 * XREFs of sub_1402D8724 @ 0x1402D8724
 * Callers:
 *     sub_14074A178 @ 0x14074A178 (sub_14074A178.c)
 *     sub_140B11EBC @ 0x140B11EBC (sub_140B11EBC.c)
 * Callees:
 *     sub_1402D86CC @ 0x1402D86CC (sub_1402D86CC.c)
 *     sub_1402D8764 @ 0x1402D8764 (sub_1402D8764.c)
 *     sub_1405FEC4C @ 0x1405FEC4C (sub_1405FEC4C.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

char __fastcall sub_1402D8724(__int64 a1)
{
  unsigned __int64 v2; // rcx
  _QWORD *v3; // rax
  __int64 Pool2; // rax

  v2 = *(_QWORD *)(a1 + 88);
  if ( v2 )
  {
    v3 = sub_1402D86CC(v2);
    if ( v3 )
      v3[6] = a1;
  }
  if ( !(unsigned __int8)sub_1402D8764(a1) )
    return 0;
  Pool2 = ExAllocatePool2(64LL, 256LL, 1229940310LL);
  if ( !Pool2 )
    return 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL) = Pool2;
  sub_1405FEC4C(a1);
  return 1;
}
