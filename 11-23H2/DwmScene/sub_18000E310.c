/*
 * XREFs of sub_18000E310 @ 0x18000E310
 * Callers:
 *     sub_18000DC40 @ 0x18000DC40 (sub_18000DC40.c)
 * Callees:
 *     sub_18000D6E4 @ 0x18000D6E4 (sub_18000D6E4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 sub_18000E310()
{
  __int64 i; // rbx
  __int64 v1; // rdi
  __int64 v2; // rdi
  DWORD CurrentThreadId; // r9d
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  i = 0LL;
  v1 = qword_1801D3230;
  if ( qword_1801D3230 )
  {
    if ( !*(_QWORD *)(qword_1801D3230 + 8) )
    {
      v5 = 0LL;
      if ( (int)sub_18000D6E4(*(_QWORD *)qword_1801D3230, &v5) >= 0 && !*(_QWORD *)(v1 + 8) )
        *(_QWORD *)(v1 + 8) = v5;
    }
    v2 = (*(_QWORD *)(v1 + 8) + 32LL) & -(__int64)(*(_QWORD *)(v1 + 8) != 0LL);
    if ( v2 )
    {
      CurrentThreadId = GetCurrentThreadId();
      for ( i = *(_QWORD *)(v2 + 8 * (CurrentThreadId % 0xAuLL) + 8); i; i = *(_QWORD *)(i + 8) )
      {
        if ( *(_DWORD *)i == CurrentThreadId )
        {
          i += 16LL;
          break;
        }
      }
      if ( i && !*(_QWORD *)(i + 8) )
        *(_QWORD *)(i + 8) = v2 + 4;
    }
  }
  return i;
}
