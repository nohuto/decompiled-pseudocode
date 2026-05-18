/*
 * XREFs of sub_18001D37C @ 0x18001D37C
 * Callers:
 *     sub_18001CE60 @ 0x18001CE60 (sub_18001CE60.c)
 *     sub_1800E47F3 @ 0x1800E47F3 (sub_1800E47F3.c)
 * Callees:
 *     <none>
 */

int __fastcall sub_18001D37C(__int64 a1)
{
  int result; // eax

  result = InitOnceComplete(*(LPINIT_ONCE *)a1, *(_DWORD *)(a1 + 8), 0LL);
  if ( !result )
  {
    result = o_abort();
    __debugbreak();
  }
  return result;
}
