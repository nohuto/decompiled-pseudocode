/*
 * XREFs of sub_1407DABA4 @ 0x1407DABA4
 * Callers:
 *     sub_140882180 @ 0x140882180 (sub_140882180.c)
 * Callees:
 *     sub_1402F5718 @ 0x1402F5718 (sub_1402F5718.c)
 *     sub_1407DABF0 @ 0x1407DABF0 (sub_1407DABF0.c)
 *     sub_1407DBAC0 @ 0x1407DBAC0 (sub_1407DBAC0.c)
 */

__int64 sub_1407DABA4()
{
  int v0; // ebx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  v0 = sub_1407DABF0(&v2);
  if ( v0 >= 0 )
  {
    ++dword_140C4EC90;
    qword_140C4EA20 = sub_1402F5718();
    sub_1407DBAC0(v2);
  }
  return (unsigned int)v0;
}
