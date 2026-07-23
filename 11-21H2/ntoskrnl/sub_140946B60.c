/*
 * XREFs of sub_140946B60 @ 0x140946B60
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402DCF44 @ 0x1402DCF44 (sub_1402DCF44.c)
 *     sub_140947C9C @ 0x140947C9C (sub_140947C9C.c)
 */

__int64 __fastcall sub_140946B60(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  if ( a2 < *(_DWORD *)(a1 + 4) )
  {
    byte_140C54EB8 = 0;
    sub_140947C9C();
    return sub_1402DCF44(*((PVOID *)qword_140C46278 + 4), 14, 0, 0LL, 0LL, 0LL, 0LL);
  }
  else
  {
    byte_140C54EB8 = 1;
  }
  return result;
}
