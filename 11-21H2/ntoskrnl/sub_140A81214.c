/*
 * XREFs of sub_140A81214 @ 0x140A81214
 * Callers:
 *     sub_140A934D8 @ 0x140A934D8 (sub_140A934D8.c)
 *     sub_140A9391C @ 0x140A9391C (sub_140A9391C.c)
 *     sub_140A93A60 @ 0x140A93A60 (sub_140A93A60.c)
 * Callees:
 *     sub_14029C6DC @ 0x14029C6DC (sub_14029C6DC.c)
 *     sub_1402FDA80 @ 0x1402FDA80 (sub_1402FDA80.c)
 *     sub_140583D08 @ 0x140583D08 (sub_140583D08.c)
 *     sub_1405A216C @ 0x1405A216C (sub_1405A216C.c)
 *     sub_1406EB784 @ 0x1406EB784 (sub_1406EB784.c)
 *     sub_1406F5AF0 @ 0x1406F5AF0 (sub_1406F5AF0.c)
 *     sub_1406F5B50 @ 0x1406F5B50 (sub_1406F5B50.c)
 *     sub_14096A1D0 @ 0x14096A1D0 (sub_14096A1D0.c)
 */

__int64 __fastcall sub_140A81214(_QWORD *a1, int *a2, unsigned int a3)
{
  struct _KTHREAD *v3; // rsi
  int v7; // ebx
  ULONG_PTR v8; // rcx
  int v9; // eax

  v3 = 0LL;
  if ( (dword_140D06880 & 0x30) == 0x10 )
  {
    v3 = sub_1406F5B50();
    a1 = sub_1402FDA80(a1[6], 1);
  }
  v7 = sub_140583D08((__int64)a1);
  if ( v7 >= 0 )
  {
    if ( sub_14029C6DC() && sub_1406EB784() )
      v9 = sub_1405A216C(v8, a2, a3);
    else
      v9 = sub_14096A1D0((__int64)a1, a2, a3);
    v7 = v9;
  }
  if ( v3 )
    sub_1406F5AF0((__int64)v3);
  return (unsigned int)v7;
}
