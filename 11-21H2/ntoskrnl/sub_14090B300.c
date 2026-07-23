/*
 * XREFs of sub_14090B300 @ 0x14090B300
 * Callers:
 *     <none>
 * Callees:
 *     sub_140536FB4 @ 0x140536FB4 (sub_140536FB4.c)
 *     sub_1405383E4 @ 0x1405383E4 (sub_1405383E4.c)
 *     sub_14053842C @ 0x14053842C (sub_14053842C.c)
 */

char __fastcall sub_14090B300(_DWORD *a1)
{
  __int64 i; // rdx
  unsigned __int64 v3; // r14
  unsigned __int64 j; // r8
  char *v5; // rax
  char *v6; // rbp
  _WORD *v7; // rax
  _WORD *v8; // rbx

  if ( *a1 == 1 && qword_140D017E8 )
  {
    for ( i = 0LL; ; i = (__int64)v8 )
    {
      v7 = (_WORD *)sub_14053842C(qword_140D017E8, i);
      v8 = v7;
      if ( !v7 )
        break;
      if ( *v7 == 1 )
      {
        v3 = (unsigned __int64)v7 + (unsigned __int16)v7[1];
        for ( j = 0LL; ; j = (unsigned __int64)v6 )
        {
          v5 = (char *)sub_1405383E4((unsigned __int64)(v8 + 12), v3, j);
          v6 = v5;
          if ( !v5 )
            break;
          if ( sub_140536FB4((__int64)a1, v5) )
            return 1;
        }
      }
    }
  }
  return 0;
}
