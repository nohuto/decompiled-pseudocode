/*
 * XREFs of sub_140292A04 @ 0x140292A04
 * Callers:
 *     sub_14020EC24 @ 0x14020EC24 (sub_14020EC24.c)
 *     sub_140292350 @ 0x140292350 (sub_140292350.c)
 *     sub_140292884 @ 0x140292884 (sub_140292884.c)
 *     sub_14035C1C0 @ 0x14035C1C0 (sub_14035C1C0.c)
 * Callees:
 *     sub_140292A40 @ 0x140292A40 (sub_140292A40.c)
 */

__int64 __fastcall sub_140292A04(__int64 a1)
{
  __int64 result; // rax

  result = sub_140292A40(*(_QWORD *)(a1 + 576));
  if ( (_DWORD)result == ((*(unsigned __int8 *)(a1 + 2) >> 3) & 1) )
    _InterlockedXor((volatile signed __int32 *)a1, 0x80000u);
  return result;
}
