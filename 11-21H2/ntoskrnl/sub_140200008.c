/*
 * XREFs of sub_140200008 @ 0x140200008
 * Callers:
 *     sub_14065A44C @ 0x14065A44C (sub_14065A44C.c)
 * Callees:
 *     sub_140721CE0 @ 0x140721CE0 (sub_140721CE0.c)
 *     sub_140AB41E0 @ 0x140AB41E0 (sub_140AB41E0.c)
 */

void __fastcall sub_140200008(__int64 a1)
{
  __int16 i; // bx
  __int64 v3; // rax

  for ( i = *(_WORD *)(a1 + 2); i >= 0; --i )
  {
    v3 = sub_140721CE0(a1, (unsigned __int16)i);
    sub_140AB41E0(*(_QWORD *)(v3 + 32));
  }
}
