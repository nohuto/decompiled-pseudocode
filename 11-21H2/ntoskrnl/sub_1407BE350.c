/*
 * XREFs of sub_1407BE350 @ 0x1407BE350
 * Callers:
 *     CcCopyWriteEx @ 0x140226550 (CcCopyWriteEx.c)
 *     sub_14028F324 @ 0x14028F324 (sub_14028F324.c)
 *     CcCopyReadEx @ 0x14032A8C0 (CcCopyReadEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1407BE350(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 *i; // rcx

  result = 0LL;
  for ( i = qword_140016300; a1 > *i; i += 6 )
  {
    if ( a1 <= i[1] )
    {
      result = (unsigned int)(result + 1);
      goto LABEL_5;
    }
    if ( a1 <= i[2] )
    {
      result = (unsigned int)(result + 2);
      goto LABEL_5;
    }
    if ( a1 <= i[3] )
    {
      result = (unsigned int)(result + 3);
      goto LABEL_5;
    }
    if ( a1 <= i[4] )
    {
      result = (unsigned int)(result + 4);
      goto LABEL_5;
    }
    if ( a1 <= i[5] )
    {
      result = (unsigned int)(result + 5);
LABEL_5:
      if ( (unsigned int)result >= 0xC )
        return result;
      break;
    }
    result = (unsigned int)(result + 6);
    if ( (unsigned int)result >= 0xC )
      return result;
  }
  ++*(_QWORD *)(a2 + 8 * result);
  *(_QWORD *)(a3 + 8 * result) += a1;
  return result;
}
