/*
 * XREFs of ??R_lambda_cdc67ce79880dc59329b171674cbd71c_@@QEBA@XZ @ 0x1400817AC
 * Callers:
 *     ?GetMany@?$SimpleVectorIterator@UEventRegistrationToken@@V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UPodLifetimeTraits@XWinRT@@UIntVersionTag@8@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUEventRegistrationToken@@PEAI@Z @ 0x140085240 (-GetMany@-$SimpleVectorIterator@UEventRegistrationToken@@V-$Vector@UEventRegistrationToken@@UEve.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall _lambda_cdc67ce79880dc59329b171674cbd71c_::operator()(__int64 a1)
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
      *(_QWORD *)(*v4 + 8 * v2) = 0LL;
      v2 = (unsigned int)(v2 + 1);
      result = *v1;
    }
    while ( (unsigned int)v2 < **v1 );
  }
  *result = 0;
  return result;
}
