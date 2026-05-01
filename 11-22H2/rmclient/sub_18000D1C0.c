/*
 * XREFs of sub_18000D1C0 @ 0x18000D1C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FCC0 @ 0x18000FCC0 (sub_18000FCC0.c)
 */

char __fastcall sub_18000D1C0(__int64 a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, __int64 *a5, _DWORD *a6)
{
  char v7; // al
  char v8; // dl

  if ( **(_QWORD **)(a1 + 8) < **(_QWORD **)(a1 + 16)
    || (v7 = sub_18000FCC0(*(_QWORD *)(a1 + 24), *a2, *a3, *a4, *a5, *a6), v8 = 0, v7) )
  {
    v8 = 1;
    ++**(_QWORD **)(a1 + 8);
  }
  return v8;
}
