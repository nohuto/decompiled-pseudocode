/*
 * XREFs of ?First@?$SimpleVectorView@MU?$IVector@M@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@M@Internal@234@UNoVersionTag@6234@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IIterator@M@345@@Z @ 0x180170910
 * Callers:
 *     <none>
 * Callees:
 *     ??R_lambda_b64d5e8cb4740f7264a8fd534515b94f_@@QEBAJXZ @ 0x180170350 (--R_lambda_b64d5e8cb4740f7264a8fd534515b94f_@@QEBAJXZ.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<float,Windows::Foundation::Collections::IVector<float>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<float>,Windows::Foundation::Collections::Internal::NoVersionTag,0>::First(
        __int64 a1,
        _QWORD *a2)
{
  int v2; // ebx
  __int64 v4[3]; // [rsp+20h] [rbp-18h] BYREF
  _QWORD *v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = a2;
  *a2 = 0LL;
  v2 = *(_DWORD *)(a1 + 32);
  v4[0] = a1 - 16;
  v4[1] = (__int64)&v5;
  if ( v2 >= 0 )
    return (unsigned int)_lambda_b64d5e8cb4740f7264a8fd534515b94f_::operator()(v4);
  else
    RoOriginateError((unsigned int)v2, 0LL);
  return (unsigned int)v2;
}
