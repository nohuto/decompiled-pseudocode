/*
 * XREFs of KeQueryEffectivePriorityThread @ 0x140385140
 * Callers:
 *     <none>
 * Callees:
 *     sub_140266BBC @ 0x140266BBC (sub_140266BBC.c)
 *     sub_140577B4C @ 0x140577B4C (sub_140577B4C.c)
 */

__int64 __fastcall KeQueryEffectivePriorityThread(ULONG_PTR a1)
{
  bool v2; // zf
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 120) & 0x400000) != 0 )
    sub_140577B4C(a1);
  v2 = !sub_140266BBC(a1, 0LL);
  result = 1LL;
  if ( v2 )
    return (unsigned int)*(char *)(a1 + 195);
  return result;
}
