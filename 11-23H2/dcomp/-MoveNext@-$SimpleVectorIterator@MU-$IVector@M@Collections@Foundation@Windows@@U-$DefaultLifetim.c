/*
 * XREFs of ?MoveNext@?$SimpleVectorIterator@MU?$IVector@M@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@M@Internal@234@UNoVersionTag@6234@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x180171330
 * Callers:
 *     <none>
 * Callees:
 *     ??R_lambda_42cf37998c643a75e85d92a62c47960a_@@QEBAJXZ @ 0x1801702C8 (--R_lambda_42cf37998c643a75e85d92a62c47960a_@@QEBAJXZ.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<float,Windows::Foundation::Collections::IVector<float>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<float>,Windows::Foundation::Collections::Internal::NoVersionTag,0>::MoveNext(
        __int64 a1,
        _BYTE *a2)
{
  int v2; // ebx
  __int64 v4[5]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v5; // [rsp+50h] [rbp+8h] BYREF
  _BYTE *v6; // [rsp+58h] [rbp+10h] BYREF

  v6 = a2;
  *a2 = 0;
  v2 = *(_DWORD *)(a1 + 48);
  v5 = &v6;
  v4[1] = (__int64)&v6;
  v4[2] = (__int64)&v5;
  v4[0] = a1;
  if ( v2 >= 0 )
    return (unsigned int)_lambda_42cf37998c643a75e85d92a62c47960a_::operator()(v4);
  else
    RoOriginateError((unsigned int)v2, 0LL);
  return (unsigned int)v2;
}
