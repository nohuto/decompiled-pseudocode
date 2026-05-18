/*
 * XREFs of sub_1800DF3E4 @ 0x1800DF3E4
 * Callers:
 *     sub_1800E0478 @ 0x1800E0478 (sub_1800E0478.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall sub_1800DF3E4(__int64 **a1, __int64 **a2)
{
  __int64 *v2; // rax
  __int64 *v4; // rcx
  __int64 *v5; // r9
  __int64 *v6; // r10
  __int64 *v7; // rbx
  __int64 *i; // rax

  v2 = *a1;
  *a2 = *a1;
  if ( *((_BYTE *)v2 + 25) )
  {
    *a1 = (__int64 *)v2[2];
    return a2;
  }
  v4 = (__int64 *)*v2;
  if ( !*(_BYTE *)(*v2 + 25) )
  {
    for ( i = (__int64 *)v4[2]; !*((_BYTE *)i + 25); i = (__int64 *)i[2] )
      v4 = i;
LABEL_13:
    *a1 = v4;
    return a2;
  }
  v4 = (__int64 *)v2[1];
  if ( !*((_BYTE *)v4 + 25) )
  {
    v5 = v2;
    v6 = v2;
    do
    {
      v7 = v4;
      v2 = v6;
      if ( v5 != (__int64 *)*v4 )
        break;
      *a1 = v4;
      v5 = v4;
      v4 = (__int64 *)v4[1];
      v6 = v7;
      v2 = v5;
    }
    while ( !*((_BYTE *)v4 + 25) );
  }
  if ( !*((_BYTE *)v2 + 25) )
    goto LABEL_13;
  return a2;
}
