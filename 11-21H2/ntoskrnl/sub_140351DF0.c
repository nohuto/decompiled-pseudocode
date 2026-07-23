/*
 * XREFs of sub_140351DF0 @ 0x140351DF0
 * Callers:
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     sub_140353BB0 @ 0x140353BB0 (sub_140353BB0.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 */

__int64 __fastcall sub_140351DF0(__int64 a1, ULONG_PTR a2, __int64 a3, int a4)
{
  int v8; // r8d
  __int64 result; // rax

  if ( *(__int64 *)a1 < 0 )
  {
    *(_BYTE *)a1 |= 2u;
    _enable();
    sub_14034EE30(a1);
    _disable();
  }
  v8 = *(_DWORD *)(a1 + 88);
  result = 0LL;
  *(_DWORD *)(a1 + 88) = 0;
  *(_BYTE *)(a1 + 17) = 0;
  *(_QWORD *)a1 = 0LL;
  if ( a4 )
  {
    result = *(unsigned __int8 *)(a1 + 16);
    *(_BYTE *)(a2 + 792) |= 1 << result;
  }
  _enable();
  if ( v8 )
    return sub_14022B568(a2, a3, v8);
  return result;
}
