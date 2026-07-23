/*
 * XREFs of sub_1405BF6B4 @ 0x1405BF6B4
 * Callers:
 *     sub_1405BCBC4 @ 0x1405BCBC4 (sub_1405BCBC4.c)
 *     sub_140968388 @ 0x140968388 (sub_140968388.c)
 * Callees:
 *     sub_14082AFE0 @ 0x14082AFE0 (sub_14082AFE0.c)
 */

__int64 __fastcall sub_1405BF6B4(ULONG_PTR *a1)
{
  __int64 result; // rax

  while ( 1 )
  {
    result = sub_14082AFE0();
    if ( !(_DWORD)result )
      break;
    if ( a1 == &StartContext )
      return 1LL;
    a1 = **(ULONG_PTR ***)(a1[22] + 56);
  }
  return result;
}
