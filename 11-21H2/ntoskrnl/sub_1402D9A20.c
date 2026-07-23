/*
 * XREFs of sub_1402D9A20 @ 0x1402D9A20
 * Callers:
 *     sub_1407615BC @ 0x1407615BC (sub_1407615BC.c)
 *     sub_140970A74 @ 0x140970A74 (sub_140970A74.c)
 *     sub_140B04F8C @ 0x140B04F8C (sub_140B04F8C.c)
 *     sub_140B058D4 @ 0x140B058D4 (sub_140B058D4.c)
 *     sub_140B0A4A8 @ 0x140B0A4A8 (sub_140B0A4A8.c)
 *     sub_140B52040 @ 0x140B52040 (sub_140B52040.c)
 * Callees:
 *     sub_14075AEA4 @ 0x14075AEA4 (sub_14075AEA4.c)
 */

__int64 __fastcall sub_1402D9A20(void *a1)
{
  _DWORD *v1; // rax

  v1 = (_DWORD *)sub_14075AEA4(a1);
  if ( v1 && *v1 >= 0x94u )
    return (v1[36] >> 20) & 1;
  else
    return 0LL;
}
