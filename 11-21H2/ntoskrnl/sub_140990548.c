/*
 * XREFs of sub_140990548 @ 0x140990548
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_1405D04CC @ 0x1405D04CC (sub_1405D04CC.c)
 *     sub_1405D0870 @ 0x1405D0870 (sub_1405D0870.c)
 *     sub_1409936AC @ 0x1409936AC (sub_1409936AC.c)
 *     sub_140993798 @ 0x140993798 (sub_140993798.c)
 *     sub_1409A0450 @ 0x1409A0450 (sub_1409A0450.c)
 */

__int64 __fastcall sub_140990548(__int64 a1)
{
  __int64 v2; // r9
  __int16 v3; // ax
  _WORD v5[2]; // [rsp+30h] [rbp-18h] BYREF
  int v6; // [rsp+34h] [rbp-14h]
  __int64 v7; // [rsp+38h] [rbp-10h]

  v6 = 0;
  sub_1409936AC();
  sub_1405D04CC(*(_DWORD *)a1);
  if ( *(_DWORD *)a1 )
  {
    if ( *(_DWORD *)a1 == 1 )
    {
      sub_140993798(*(unsigned __int16 *)(a1 + 12), a1 + 14, *(unsigned int *)(a1 + 8), 0LL);
      sub_1409A0450(*(unsigned __int16 *)(a1 + 12), a1 + 14, *(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 4), 0);
      sub_1402D66A8((ULONG_PTR)&qword_140C22200);
      HIBYTE(word_140C22211) = 1;
      sub_1402935D0((ULONG_PTR)&qword_140C22200);
    }
  }
  else
  {
    LOBYTE(v2) = 1;
    sub_140993798(*(unsigned __int16 *)(a1 + 12), a1 + 14, *(unsigned int *)(a1 + 8), v2);
    sub_1409A0450(*(unsigned __int16 *)(a1 + 12), a1 + 14, *(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 4), 1);
    v3 = 2 * *(_WORD *)(a1 + 12);
    v7 = a1 + 14;
    v5[0] = v3;
    v5[1] = v3;
    sub_1405D0870((__int64)v5, (void *)(a1 + 4));
  }
  return 0LL;
}
