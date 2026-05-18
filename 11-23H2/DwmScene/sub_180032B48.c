/*
 * XREFs of sub_180032B48 @ 0x180032B48
 * Callers:
 *     sub_18003699C @ 0x18003699C (sub_18003699C.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall sub_180032B48(__int64 ***a1)
{
  __int64 *result; // rax
  __int64 **v2; // rcx
  __int64 *i; // rcx
  __int64 *v4; // rdx

  result = **a1;
  while ( !*((_BYTE *)result + 25) )
  {
    *((_DWORD *)result + 10) = -8388609;
    *(__int64 *)((char *)result + 44) = 2139095039LL;
    result[7] = 0LL;
    v2 = (__int64 **)result[2];
    if ( *((_BYTE *)v2 + 25) )
    {
      for ( i = (__int64 *)result[1]; !*((_BYTE *)i + 25) && result == (__int64 *)i[2]; i = (__int64 *)i[1] )
        result = i;
      result = i;
    }
    else
    {
      v4 = *v2;
      for ( result = (__int64 *)result[2]; !*((_BYTE *)v4 + 25); v4 = (__int64 *)*v4 )
        result = v4;
    }
  }
  return result;
}
