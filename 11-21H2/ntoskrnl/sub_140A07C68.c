/*
 * XREFs of sub_140A07C68 @ 0x140A07C68
 * Callers:
 *     NtCreateCrossVmEvent @ 0x1409FB760 (NtCreateCrossVmEvent.c)
 * Callees:
 *     sub_1403614E0 @ 0x1403614E0 (sub_1403614E0.c)
 *     sub_1403614FC @ 0x1403614FC (sub_1403614FC.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140A07C68(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  struct _EX_RUNDOWN_REF *v7; // rdi
  int v9; // ebx
  __int64 v11; // [rsp+40h] [rbp-28h] BYREF

  v11 = 0LL;
  v7 = (struct _EX_RUNDOWN_REF *)qword_140C10D18;
  if ( !a6 )
    v7 = (struct _EX_RUNDOWN_REF *)qword_140C10D20;
  if ( sub_1403614FC(v7) )
  {
    v9 = sub_14042A5E0(&v11, a2);
    if ( v9 >= 0 )
      *a1 = v11;
    sub_1403614E0(v7);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return (unsigned int)v9;
}
