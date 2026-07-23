/*
 * XREFs of sub_1402DB0B8 @ 0x1402DB0B8
 * Callers:
 *     sub_1402DAEB0 @ 0x1402DAEB0 (sub_1402DAEB0.c)
 * Callees:
 *     sub_1402DB190 @ 0x1402DB190 (sub_1402DB190.c)
 */

__int64 __fastcall sub_1402DB0B8(int a1, __int64 a2, unsigned int a3)
{
  int v3; // r14d
  BOOL v5; // ebp
  unsigned __int16 *v6; // rsi
  int v7; // ebx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rsi
  __int64 result; // rax

  v3 = a2;
  v5 = (xmmword_140D06920 & 0x20000000000LL) == 0;
  v6 = *(unsigned __int16 **)(a2 + 8LL * a3 + 56);
  if ( v6 )
  {
    v7 = a3 << 12;
    if ( v6[3] == 3 )
      result = sub_1402DB190(
                 a1,
                 v7,
                 a2,
                 (_DWORD)qword_140C4F420,
                 (__int64)(v6 + 4),
                 1,
                 1,
                 (xmmword_140D06920 & 0x20000000000LL) == 0);
    v8 = (unsigned __int64)(v6 + 6);
    v9 = (unsigned __int64)v6 + *v6 + 12;
    while ( v8 < v9 )
    {
      result = sub_1402DB190(a1, v7, v3, (_DWORD)qword_140C4F420, v8, 1, 0, v5);
      v8 += 4LL;
    }
  }
  return result;
}
