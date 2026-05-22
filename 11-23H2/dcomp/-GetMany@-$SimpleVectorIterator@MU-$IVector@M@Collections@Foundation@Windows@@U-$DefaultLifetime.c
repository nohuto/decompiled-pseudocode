/*
 * XREFs of ?GetMany@?$SimpleVectorIterator@MU?$IVector@M@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@M@Internal@234@UNoVersionTag@6234@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIPEAMPEAI@Z @ 0x180170BC0
 * Callers:
 *     <none>
 * Callees:
 *     ??R_lambda_9550c6295ad10ca6fbe3202a2baa66f8_@@QEBA@XZ @ 0x180170320 (--R_lambda_9550c6295ad10ca6fbe3202a2baa66f8_@@QEBA@XZ.c)
 *     ??R_lambda_d9575af05d4aaa52d8dc854bea164b10_@@QEBAJIPEAI@Z @ 0x1801703F0 (--R_lambda_d9575af05d4aaa52d8dc854bea164b10_@@QEBAJIPEAI@Z.c)
 */

__int64 Windows::Foundation::Collections::Internal::SimpleVectorIterator<float,Windows::Foundation::Collections::IVector<float>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<float>,Windows::Foundation::Collections::Internal::NoVersionTag,0>::GetMany(
        __int64 a1,
        unsigned int a2,
        ...)
{
  __int64 i; // r8
  int v3; // ebx
  bool v5; // zf
  volatile signed __int32 *v6; // rdi
  unsigned __int32 v7; // esi
  signed __int32 v8; // eax
  __int64 v9; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v10[2]; // [rsp+28h] [rbp-40h] BYREF
  _QWORD v11[6]; // [rsp+38h] [rbp-30h] BYREF
  signed __int32 v12; // [rsp+90h] [rbp+28h] BYREF
  unsigned int v13; // [rsp+98h] [rbp+30h] BYREF
  __int64 v14; // [rsp+A0h] [rbp+38h] BYREF
  va_list va; // [rsp+A0h] [rbp+38h]
  _DWORD *v16; // [rsp+A8h] [rbp+40h] BYREF
  va_list va1; // [rsp+A8h] [rbp+40h]
  va_list va2; // [rsp+B0h] [rbp+48h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v14 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v16 = va_arg(va2, _DWORD *);
  v13 = a2;
  *v16 = 0;
  for ( i = 0LL; (unsigned int)i < v13; i = (unsigned int)(i + 1) )
    *(_DWORD *)(v14 + 4 * i) = 0;
  v3 = *(_DWORD *)(a1 + 48);
  va_copy((va_list)v10, va1);
  va_copy((va_list)&v10[1], va);
  if ( v3 >= 0 )
  {
    v5 = *(_BYTE *)(a1 + 56) == 0;
    v11[0] = &v9;
    v6 = (volatile signed __int32 *)(a1 + 40);
    v7 = *(_DWORD *)(a1 + 40);
    v11[1] = &v13;
    va_copy((va_list)&v11[2], va);
    va_copy((va_list)&v11[3], va1);
    v9 = a1;
    if ( v5 )
    {
      while ( 1 )
      {
        v3 = _lambda_d9575af05d4aaa52d8dc854bea164b10_::operator()((__int64)v11, v7, &v12);
        if ( v3 < 0 )
          break;
        v8 = _InterlockedCompareExchange(v6, v12, v7);
        v5 = v7 == v8;
        v7 = v8;
        if ( v5 )
          break;
        _lambda_9550c6295ad10ca6fbe3202a2baa66f8_::operator()((__int64)v10);
      }
    }
    else
    {
      return (unsigned int)_lambda_d9575af05d4aaa52d8dc854bea164b10_::operator()((__int64)v11, v7, (_DWORD *)(a1 + 40));
    }
  }
  else
  {
    RoOriginateError((unsigned int)v3, 0LL);
  }
  return (unsigned int)v3;
}
