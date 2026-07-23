/*
 * XREFs of sub_140B277F4 @ 0x140B277F4
 * Callers:
 *     sub_140851A60 @ 0x140851A60 (sub_140851A60.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_140779C10 @ 0x140779C10 (sub_140779C10.c)
 *     sub_140859618 @ 0x140859618 (sub_140859618.c)
 */

__int64 __fastcall sub_140B277F4(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  void *v3; // rbx

  v2 = sub_140779C10(a2, 0x746C6644u);
  v3 = v2;
  if ( v2 )
  {
    sub_140859618((__int64)v2);
    ObfDereferenceObjectWithTag(v3, 0x746C6644u);
  }
  return 1LL;
}
