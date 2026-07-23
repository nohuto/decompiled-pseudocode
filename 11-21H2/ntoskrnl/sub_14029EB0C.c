/*
 * XREFs of sub_14029EB0C @ 0x14029EB0C
 * Callers:
 *     sub_1406FC148 @ 0x1406FC148 (sub_1406FC148.c)
 *     sub_1407092C0 @ 0x1407092C0 (sub_1407092C0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14029EB0C(int a1, _QWORD *a2, _QWORD *a3, __int64 *a4)
{
  __int64 result; // rax

  a2[1] = 0LL;
  if ( a1 == 1 )
  {
    *a3 = 2013265920LL;
    result = (__int64)&qword_140C4F398;
    *a2 = &qword_140C4F398;
    if ( a4 )
    {
      result = qword_140C4F3A8;
      goto LABEL_6;
    }
  }
  else
  {
    if ( a1 == 2 )
    {
      *a2 = &unk_140C4F340;
      result = (__int64)&qword_140C4F398;
      a2[1] = &qword_140C4F398;
    }
    else
    {
      if ( a1 != 3 )
      {
        *a2 = &qword_140C4F308;
        result = 0x7FFFFFFF0000LL;
        *a3 = 0x7FFFFFFF0000LL;
        if ( !a4 )
          return result;
        result = qword_140C4F318;
        goto LABEL_6;
      }
      result = (__int64)&unk_140C4F340;
      *a2 = &unk_140C4F340;
    }
    *a3 = 2013265920LL;
    if ( a4 )
    {
      result = qword_140C4F380;
LABEL_6:
      *a4 = result;
    }
  }
  return result;
}
