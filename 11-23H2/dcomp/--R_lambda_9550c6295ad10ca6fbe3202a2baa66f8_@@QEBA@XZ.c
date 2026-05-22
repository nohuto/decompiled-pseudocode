/*
 * XREFs of ??R_lambda_9550c6295ad10ca6fbe3202a2baa66f8_@@QEBA@XZ @ 0x180170320
 * Callers:
 *     ?GetMany@?$SimpleVectorIterator@MU?$IVector@M@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@M@Internal@234@UNoVersionTag@6234@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIPEAMPEAI@Z @ 0x180170BC0 (-GetMany@-$SimpleVectorIterator@MU-$IVector@M@Collections@Foundation@Windows@@U-$DefaultLifetime.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall _lambda_9550c6295ad10ca6fbe3202a2baa66f8_::operator()(__int64 a1)
{
  _DWORD **v1; // r8
  __int64 v2; // rdx
  _DWORD *result; // rax
  _QWORD *v4; // r9

  v1 = *(_DWORD ***)a1;
  v2 = 0LL;
  result = **(_DWORD ***)a1;
  if ( *result )
  {
    v4 = *(_QWORD **)(a1 + 8);
    do
    {
      *(_DWORD *)(*v4 + 4 * v2) = 0;
      v2 = (unsigned int)(v2 + 1);
      result = *v1;
    }
    while ( (unsigned int)v2 < **v1 );
  }
  *result = 0;
  return result;
}
