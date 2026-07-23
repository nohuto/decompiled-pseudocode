/*
 * XREFs of sub_14020BDB0 @ 0x14020BDB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14020C0F0 @ 0x14020C0F0 (sub_14020C0F0.c)
 */

_BOOL8 __fastcall sub_14020BDB0(__int64 a1)
{
  char v1; // al
  __int64 v2; // rcx
  __int16 v3; // dx

  v1 = sub_14020C0F0(a1, 8LL);
  LOBYTE(v3) = 0;
  if ( v1 )
    v3 = *(_WORD *)(*(_QWORD *)(v2 + 200) + 60LL);
  return (v3 & 1) == 0;
}
