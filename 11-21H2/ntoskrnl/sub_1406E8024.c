/*
 * XREFs of sub_1406E8024 @ 0x1406E8024
 * Callers:
 *     sub_14066FED4 @ 0x14066FED4 (sub_14066FED4.c)
 *     sub_140A082E4 @ 0x140A082E4 (sub_140A082E4.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14085939C @ 0x14085939C (sub_14085939C.c)
 */

__int64 __fastcall sub_1406E8024(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  _BOOL8 v6; // rdi
  __int64 v7; // rax
  __int64 result; // rax

  v6 = (unsigned int)(a2 - 2) <= 1;
  v7 = *(_QWORD *)(a1 + 8 * v6 + 64);
  if ( v7 )
  {
    *a4 = v7;
    return 0LL;
  }
  result = sub_14085939C(*(unsigned int *)(a1 + 16), a2, *(_QWORD *)(a1 + 24));
  if ( (int)result >= 0 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v6 + 64), 0LL, 0LL) )
      ZwClose(0LL);
    *a4 = *(_QWORD *)(a1 + 8 * v6 + 64);
    return 0LL;
  }
  return result;
}
