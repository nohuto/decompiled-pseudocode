/*
 * XREFs of sub_18008377C @ 0x18008377C
 * Callers:
 *     sub_180044C30 @ 0x180044C30 (sub_180044C30.c)
 *     sub_1800834AC @ 0x1800834AC (sub_1800834AC.c)
 * Callees:
 *     sub_180082034 @ 0x180082034 (sub_180082034.c)
 */

__int64 __fastcall sub_18008377C(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 i; // r9

  result = sub_180082034(a1, a2);
  for ( i = 0LL; i < 0x10; ++i )
    *(_DWORD *)(result + 4 * i) = *(_DWORD *)(a3 + 4 * i);
  return result;
}
