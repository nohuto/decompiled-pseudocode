/*
 * XREFs of RtlStringCchCopyNW @ 0x180051588
 * Callers:
 *     SdbGetMergeRedirectPath @ 0x180051604 (SdbGetMergeRedirectPath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCchCopyNW(_WORD *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // r10
  __int64 result; // rax
  __int64 v6; // r9
  __int64 v7; // r8
  __int16 v8; // ax
  _WORD *v9; // rax

  v4 = a2;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
  {
    result = 3221225485LL;
    if ( !a2 )
      return result;
    goto LABEL_12;
  }
  if ( a4 > 0x7FFFFFFE )
  {
    result = 3221225485LL;
LABEL_12:
    *a1 = 0;
    return result;
  }
  v6 = a4 - a2;
  v7 = a3 - (_QWORD)a1;
  do
  {
    if ( !(v6 + v4) )
      break;
    v8 = *(_WORD *)((char *)a1 + v7);
    if ( !v8 )
      break;
    *a1++ = v8;
    --v4;
  }
  while ( v4 );
  v9 = a1 - 1;
  if ( v4 )
    v9 = a1;
  *v9 = 0;
  return v4 == 0 ? 0x80000005 : 0;
}
