/*
 * XREFs of sub_140808480 @ 0x140808480
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_140809180 @ 0x140809180 (sub_140809180.c)
 *     sub_1408091FC @ 0x1408091FC (sub_1408091FC.c)
 *     sub_140809310 @ 0x140809310 (sub_140809310.c)
 */

__int64 __fastcall sub_140808480(__int64 a1)
{
  char v3; // bl
  _OWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_QWORD *)(a1 + 64) == *(_QWORD *)(a1 + 32) )
  {
    sub_1402935D0((ULONG_PTR)&qword_140C21D20);
    v3 = sub_140809180();
    sub_1402D66A8((ULONG_PTR)&qword_140C21D20);
    if ( v3 )
    {
      memset(v4, 0, sizeof(v4));
      LODWORD(v4[0]) = 3;
      sub_140809310(a1, v4);
    }
  }
  else
  {
    sub_1408091FC();
  }
  return 0LL;
}
