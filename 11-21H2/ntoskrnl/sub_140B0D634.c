/*
 * XREFs of sub_140B0D634 @ 0x140B0D634
 * Callers:
 *     sub_140B0C394 @ 0x140B0C394 (sub_140B0C394.c)
 *     sub_140B0C87C @ 0x140B0C87C (sub_140B0C87C.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140B0D634(_QWORD **a1, __int64 a2)
{
  _QWORD *v2; // rax
  char v3; // r8

  v2 = *a1;
  v3 = 0;
  while ( v2 )
  {
    if ( *(v2 - 1) == a2 )
      return 1;
    v2 = (_QWORD *)*v2;
  }
  return v3;
}
