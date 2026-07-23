/*
 * XREFs of sub_14033C424 @ 0x14033C424
 * Callers:
 *     sub_14024076C @ 0x14024076C (sub_14024076C.c)
 *     sub_1402715A0 @ 0x1402715A0 (sub_1402715A0.c)
 *     sub_140327C60 @ 0x140327C60 (sub_140327C60.c)
 *     sub_140339CA0 @ 0x140339CA0 (sub_140339CA0.c)
 *     sub_1406E97B4 @ 0x1406E97B4 (sub_1406E97B4.c)
 *     sub_1406F4A80 @ 0x1406F4A80 (sub_1406F4A80.c)
 *     sub_14096D038 @ 0x14096D038 (sub_14096D038.c)
 * Callees:
 *     sub_140251B4C @ 0x140251B4C (sub_140251B4C.c)
 *     sub_14033C4D0 @ 0x14033C4D0 (sub_14033C4D0.c)
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 */

__int64 __fastcall sub_14033C424(unsigned int a1)
{
  __int64 v2; // rsi
  BOOL v3; // ebp
  __int64 v4; // rbx

  v2 = 2LL * ((a1 & 1) == 0);
  v3 = (a1 & 1) == 0;
  v4 = (__int64)ExpInterlockedPopEntrySList((PSLIST_HEADER)&qword_140C4F040[v2 + 2100]);
  if ( v4 || (v4 = (__int64)ExpInterlockedPopEntrySList((PSLIST_HEADER)&qword_140C4F040[v2 + 2104])) != 0 )
  {
LABEL_2:
    sub_14033C4D0(v4, a1);
    return v4;
  }
  if ( (a1 & 4) == 0 )
  {
    v4 = sub_140251B4C(v3, 1u);
    if ( !v4 )
      return v4;
    goto LABEL_2;
  }
  return 0LL;
}
