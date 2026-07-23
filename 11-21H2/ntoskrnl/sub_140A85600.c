/*
 * XREFs of sub_140A85600 @ 0x140A85600
 * Callers:
 *     <none>
 * Callees:
 *     sub_140203D88 @ 0x140203D88 (sub_140203D88.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405FE868 @ 0x1405FE868 (sub_1405FE868.c)
 *     sub_140A83888 @ 0x140A83888 (sub_140A83888.c)
 *     sub_140A83B84 @ 0x140A83B84 (sub_140A83B84.c)
 *     sub_140A83CA4 @ 0x140A83CA4 (sub_140A83CA4.c)
 *     sub_140A880B0 @ 0x140A880B0 (sub_140A880B0.c)
 *     sub_140A88430 @ 0x140A88430 (sub_140A88430.c)
 *     sub_140A88738 @ 0x140A88738 (sub_140A88738.c)
 */

PSLIST_ENTRY __fastcall sub_140A85600(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdx
  PSLIST_ENTRY result; // rax
  PSLIST_ENTRY v5; // rbx
  __int64 v6; // r8

  sub_140A83CA4(2u);
  sub_140A88738(a1);
  v2 = sub_140A88430(a1);
  result = (PSLIST_ENTRY)sub_14042A5E0(a1, v3);
  if ( v2 )
  {
    _InterlockedExchange((volatile __int32 *)(v2 + 188), 0);
    result = (PSLIST_ENTRY)sub_1405FE868(v2, 0LL, 0LL);
    v5 = result;
    if ( result )
    {
      sub_140A83888(v2);
      sub_140A83B84(v2, (int)v5[3].Next);
      if ( v5[6].Next )
        sub_140A880B0(v2);
      return sub_140203D88((__int64)&unk_140D58A80, v5, v6);
    }
  }
  return result;
}
