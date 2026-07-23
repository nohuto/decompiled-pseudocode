/*
 * XREFs of sub_1406D88A4 @ 0x1406D88A4
 * Callers:
 *     sub_1407841FC @ 0x1407841FC (sub_1407841FC.c)
 * Callees:
 *     sub_1406D8994 @ 0x1406D8994 (sub_1406D8994.c)
 *     sub_1407838E0 @ 0x1407838E0 (sub_1407838E0.c)
 *     sub_140784160 @ 0x140784160 (sub_140784160.c)
 *     sub_1408119C4 @ 0x1408119C4 (sub_1408119C4.c)
 *     sub_1409DED88 @ 0x1409DED88 (sub_1409DED88.c)
 */

__int64 __fastcall sub_1406D88A4(_DWORD *BugCheckParameter2, char a2)
{
  int v4; // ecx
  int v5; // edi
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // r14d
  int v11; // eax

  if ( a2 )
  {
    v4 = BugCheckParameter2[22];
    v5 = 2;
    BugCheckParameter2[22] = v4 + 1;
  }
  else
  {
    v4 = BugCheckParameter2[23];
    v5 = 4;
    BugCheckParameter2[23] = v4 + 1;
  }
  if ( v4 || (v5 & BugCheckParameter2[4]) != 0 )
  {
    if ( !a2 && (v5 & BugCheckParameter2[4]) != 0 )
      sub_1409DED88(BugCheckParameter2);
    return 0;
  }
  else
  {
    sub_140784160((ULONG_PTR)BugCheckParameter2);
    BugCheckParameter2[4] |= v5;
    do
    {
      LOBYTE(v7) = a2;
      LOBYTE(v6) = a2 != 0 ? 4 : 6;
      v10 = sub_1406D8994(v6, BugCheckParameter2, v7);
      if ( a2 )
        v11 = BugCheckParameter2[22];
      else
        v11 = BugCheckParameter2[23];
      if ( v11 )
        break;
      LOBYTE(v9) = a2;
      LOBYTE(v8) = a2 != 0 ? 5 : 7;
      v10 = sub_1406D8994(v8, BugCheckParameter2, v9);
    }
    while ( a2 ? BugCheckParameter2[22] : BugCheckParameter2[23] );
    BugCheckParameter2[4] &= ~v5;
    if ( !a2 )
      sub_1408119C4(BugCheckParameter2);
    sub_1407838E0(&off_140C037C0, BugCheckParameter2);
  }
  return v10;
}
