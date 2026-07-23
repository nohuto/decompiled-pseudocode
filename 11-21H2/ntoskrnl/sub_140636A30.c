/*
 * XREFs of sub_140636A30 @ 0x140636A30
 * Callers:
 *     sub_140635B80 @ 0x140635B80 (sub_140635B80.c)
 *     sub_1406360C0 @ 0x1406360C0 (sub_1406360C0.c)
 *     sub_140636A64 @ 0x140636A64 (sub_140636A64.c)
 * Callees:
 *     sub_140460CEC @ 0x140460CEC (sub_140460CEC.c)
 */

char __fastcall sub_140636A30(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 v4; // rax

  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 48), 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  v4 = v2 - 1;
  if ( v3 )
  {
    if ( v4 )
      __fastfail(0xEu);
    LOBYTE(v4) = sub_140460CEC(a1, (_SLIST_ENTRY *)a2);
  }
  return v4;
}
