/*
 * XREFs of sub_140811518 @ 0x140811518
 * Callers:
 *     sub_1407655BC @ 0x1407655BC (sub_1407655BC.c)
 * Callees:
 *     sub_1403A6ED8 @ 0x1403A6ED8 (sub_1403A6ED8.c)
 */

char __fastcall sub_140811518(__int64 a1, int a2, int **a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  const wchar_t *v6; // r9
  int *v7; // rax
  int v8; // edx

  v4 = 0LL;
  v5 = *(_QWORD *)(a1 + 152);
  if ( v5 )
    v4 = *(_QWORD *)(*(_QWORD *)(v5 + 312) + 40LL);
  v6 = *(const wchar_t **)(v4 + 48);
  v7 = *a3;
  v8 = **a3;
  if ( a2 == 3 )
  {
    if ( (byte_140C0DD4C & 1) != 0 )
      LOBYTE(v7) = sub_1403A6ED8(a1, (const EVENT_DESCRIPTOR *)qword_140010290, (const GUID *)(a1 + 88), v6, v8);
  }
  else
  {
    if ( a2 != 5 )
      __fastfail(5u);
    LOBYTE(v7) = byte_140C0DD4B;
    if ( byte_140C0DD4B < 0 )
      LOBYTE(v7) = sub_1403A6ED8(a1, (const EVENT_DESCRIPTOR *)qword_14003B5D0, (const GUID *)(a1 + 88), v6, v8);
  }
  return (char)v7;
}
