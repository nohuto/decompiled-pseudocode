/*
 * XREFs of sub_14091A9EC @ 0x14091A9EC
 * Callers:
 *     sub_140924D00 @ 0x140924D00 (sub_140924D00.c)
 *     sub_140924E08 @ 0x140924E08 (sub_140924E08.c)
 * Callees:
 *     sub_14079B0D0 @ 0x14079B0D0 (sub_14079B0D0.c)
 *     sub_14091AAA0 @ 0x14091AAA0 (sub_14091AAA0.c)
 */

__int64 __fastcall sub_14091A9EC(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4, int a5, _DWORD *a6)
{
  int v6; // ebx
  __int64 v7; // rdi
  __int64 v12; // rsi
  __int64 result; // rax

  v6 = 0;
  v7 = 0LL;
  *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL) = *(_DWORD *)(a2 + 16);
  if ( *(_DWORD *)(a2 + 20) )
  {
    while ( 1 )
    {
      v12 = *(unsigned int *)(a3 + 8 * v7 + 4);
      if ( !(unsigned __int8)sub_14079B0D0(
                               BugCheckParameter2,
                               *(unsigned int *)(a3 + 8 * v7),
                               *(_DWORD *)(a3 + 8 * v7 + 4),
                               4) )
        return 3221225626LL;
      sub_14091AAA0(BugCheckParameter2);
      a4 += v12;
      v6 += v12;
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= *(_DWORD *)(a2 + 20) )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    result = 1073741833LL;
    *a6 = v6;
  }
  return result;
}
