/*
 * XREFs of sub_1409E48B8 @ 0x1409E48B8
 * Callers:
 *     NtTraceControl @ 0x1407954F0 (NtTraceControl.c)
 *     sub_140817CD8 @ 0x140817CD8 (sub_140817CD8.c)
 * Callees:
 *     sub_140797594 @ 0x140797594 (sub_140797594.c)
 *     sub_1407981E8 @ 0x1407981E8 (sub_1407981E8.c)
 *     sub_1409EDE68 @ 0x1409EDE68 (sub_1409EDE68.c)
 */

__int64 __fastcall sub_1409E48B8(__int64 a1, unsigned int a2, unsigned __int16 a3, __int64 a4)
{
  __int64 v6; // rax
  unsigned int *v7; // rdi
  unsigned int v8; // ebx

  v6 = sub_140797594(a1, a2, 0);
  v7 = (unsigned int *)v6;
  if ( v6 )
  {
    v8 = sub_1409EDE68(v6, a3, a4);
    sub_1407981E8(v7, 0);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v8;
}
