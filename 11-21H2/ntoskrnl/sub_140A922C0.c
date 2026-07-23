/*
 * XREFs of sub_140A922C0 @ 0x140A922C0
 * Callers:
 *     sub_140AA6270 @ 0x140AA6270 (sub_140AA6270.c)
 *     sub_140AA6400 @ 0x140AA6400 (sub_140AA6400.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_140A811E4 @ 0x140A811E4 (sub_140A811E4.c)
 *     sub_140A92010 @ 0x140A92010 (sub_140A92010.c)
 */

_BOOL8 __fastcall sub_140A922C0(_QWORD *a1)
{
  PVOID v1; // rax
  BOOL v2; // ebx
  PVOID v3; // r8

  v1 = sub_140A92010(a1);
  v2 = sub_140A811E4((__int64)v1);
  ObfDereferenceObjectWithTag(v3, 0x49667256u);
  return v2;
}
