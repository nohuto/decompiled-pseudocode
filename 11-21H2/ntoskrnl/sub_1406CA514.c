/*
 * XREFs of sub_1406CA514 @ 0x1406CA514
 * Callers:
 *     sub_14053EBD8 @ 0x14053EBD8 (sub_14053EBD8.c)
 *     sub_14067BE48 @ 0x14067BE48 (sub_14067BE48.c)
 *     sub_14068A7FC @ 0x14068A7FC (sub_14068A7FC.c)
 *     sub_14068B1C8 @ 0x14068B1C8 (sub_14068B1C8.c)
 *     sub_14068B3E0 @ 0x14068B3E0 (sub_14068B3E0.c)
 *     sub_1406C9FA0 @ 0x1406C9FA0 (sub_1406C9FA0.c)
 *     sub_140742E3C @ 0x140742E3C (sub_140742E3C.c)
 *     sub_1409120AC @ 0x1409120AC (sub_1409120AC.c)
 *     sub_140918C40 @ 0x140918C40 (sub_140918C40.c)
 *     sub_140918E48 @ 0x140918E48 (sub_140918E48.c)
 * Callees:
 *     sub_1402A4320 @ 0x1402A4320 (sub_1402A4320.c)
 *     sub_1402F5718 @ 0x1402F5718 (sub_1402F5718.c)
 *     sub_1406CA588 @ 0x1406CA588 (sub_1406CA588.c)
 */

void __fastcall sub_1406CA514(__int64 a1)
{
  int v2; // eax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  if ( !*(_BYTE *)(a1 + 195) && !*(_DWORD *)(a1 + 104) )
  {
    *(_QWORD *)(a1 + 4136) = sub_1402F5718();
    sub_1406CA588();
  }
  v2 = *(_DWORD *)(a1 + 160);
  *(_BYTE *)(a1 + 195) = 1;
  if ( (v2 & 2) == 0 )
  {
    v3 = *(_QWORD *)(a1 + 4136) + 10000000LL * (unsigned int)dword_140C0C620;
    sub_1402A4320(0, (unsigned __int64 *)&v3, 0);
  }
}
