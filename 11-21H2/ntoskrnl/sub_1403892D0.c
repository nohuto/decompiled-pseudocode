/*
 * XREFs of sub_1403892D0 @ 0x1403892D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140281870 @ 0x140281870 (sub_140281870.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_140389334 @ 0x140389334 (sub_140389334.c)
 */

__int64 __fastcall sub_1403892D0(int a1, struct _EX_RUNDOWN_REF **a2, __int64 a3, ULONG_PTR *a4)
{
  struct _EX_RUNDOWN_REF *v6; // r8
  struct _EX_RUNDOWN_REF *v7; // rax
  signed __int64 v9; // rax
  signed __int64 v10; // rtt

  if ( !a1 )
    return sub_140389334(a2, a3, a4);
  if ( a1 != 1 )
    return 0LL;
  v6 = *a2;
  if ( *a2 )
  {
    _m_prefetchw(&qword_140C2BD40);
    v9 = qword_140C2BD40;
    if ( ((unsigned __int64)v6 ^ qword_140C2BD40) >= 0xF )
    {
LABEL_11:
      sub_1402AD030(v6);
    }
    else
    {
      while ( 1 )
      {
        v10 = v9;
        v9 = _InterlockedCompareExchange64(&qword_140C2BD40, v9 + 1, v9);
        if ( v10 == v9 )
          break;
        if ( ((unsigned __int64)v6 ^ v9) >= 0xF )
          goto LABEL_11;
      }
    }
    *a2 = 0LL;
    return 0LL;
  }
  v7 = sub_140281870(&qword_140C2BD40);
  if ( !v7 )
    return 0LL;
  *a2 = v7;
  *a4 = v7[1].Count;
  return 1LL;
}
