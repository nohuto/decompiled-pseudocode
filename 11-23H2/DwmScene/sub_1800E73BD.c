/*
 * XREFs of sub_1800E73BD @ 0x1800E73BD
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004EA28 @ 0x18004EA28 (sub_18004EA28.c)
 */

__int64 __fastcall sub_1800E73BD(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return sub_18004EA28(*(void ***)(a2 + 40));
  }
  return result;
}
