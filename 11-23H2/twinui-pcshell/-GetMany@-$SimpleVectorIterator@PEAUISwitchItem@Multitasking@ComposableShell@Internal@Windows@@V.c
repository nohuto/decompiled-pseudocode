/*
 * XREFs of ?GetMany@?$SimpleVectorIterator@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@V?$Vector@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4785@U?$DefaultVectorOptions@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4785@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4785@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUISwitchItem@Multitasking@ComposableShell@25@PEAI@Z @ 0x180790AE0
 * Callers:
 *     <none>
 * Callees:
 *     ??R_lambda_09841987dba45c8edd6476dd9e5c3313_@@QEBAJIPEAI@Z @ 0x180790494 (--R_lambda_09841987dba45c8edd6476dd9e5c3313_@@QEBAJIPEAI@Z.c)
 *     ??R_lambda_a8bd5c8389c1c183dde573e2ed9b3467_@@QEBA@XZ @ 0x180790514 (--R_lambda_a8bd5c8389c1c183dde573e2ed9b3467_@@QEBA@XZ.c)
 */

__int64 Windows::Foundation::Collections::Internal::SimpleVectorIterator<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *,Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *>,XWinRT::IntVersionTag,0>::GetMany(
        __int64 a1,
        unsigned int a2,
        ...)
{
  __int64 i; // rcx
  int v4; // ebx
  __int64 v5; // r15
  bool v6; // zf
  unsigned __int32 v7; // r14d
  signed __int32 v8; // eax
  __int64 v10; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v11[2]; // [rsp+28h] [rbp-40h] BYREF
  _QWORD v12[6]; // [rsp+38h] [rbp-30h] BYREF
  signed __int32 v13; // [rsp+A0h] [rbp+38h] BYREF
  unsigned int v14; // [rsp+A8h] [rbp+40h] BYREF
  __int64 v15; // [rsp+B0h] [rbp+48h] BYREF
  va_list va; // [rsp+B0h] [rbp+48h]
  _DWORD *v17; // [rsp+B8h] [rbp+50h] BYREF
  va_list va1; // [rsp+B8h] [rbp+50h]
  va_list va2; // [rsp+C0h] [rbp+58h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v15 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v17 = va_arg(va2, _DWORD *);
  v14 = a2;
  *v17 = 0;
  for ( i = 0LL; (unsigned int)i < v14; i = (unsigned int)(i + 1) )
    *(_QWORD *)(v15 + 8 * i) = 0LL;
  v4 = *(_DWORD *)(a1 + 48);
  v5 = *(_QWORD *)(a1 + 32);
  va_copy((va_list)v11, va1);
  va_copy((va_list)&v11[1], va);
  if ( v4 >= 0 )
  {
    v6 = *(_BYTE *)(a1 + 56) == 0;
    v12[0] = &v10;
    v7 = *(_DWORD *)(a1 + 40);
    v12[1] = &v14;
    va_copy((va_list)&v12[2], va);
    va_copy((va_list)&v12[3], va1);
    v10 = a1;
    if ( v6 )
    {
      while ( 1 )
      {
        v4 = _lambda_09841987dba45c8edd6476dd9e5c3313_::operator()((__int64)v12, v7, &v13);
        if ( v4 < 0 )
          break;
        v8 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 40), v13, v7);
        v6 = v7 == v8;
        v7 = v8;
        if ( v6 )
          break;
        _lambda_a8bd5c8389c1c183dde573e2ed9b3467_::operator()(v11);
      }
    }
    else
    {
      v4 = _lambda_09841987dba45c8edd6476dd9e5c3313_::operator()((__int64)v12, v7, (_DWORD *)(a1 + 40));
    }
    if ( *(_DWORD *)(a1 + 52) != *(_DWORD *)(v5 + 88) )
    {
      *(_DWORD *)(a1 + 48) = -2147483636;
      if ( v4 < 0 )
      {
        RoTransformError((unsigned int)v4, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        _lambda_a8bd5c8389c1c183dde573e2ed9b3467_::operator()(v11);
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v4, 0LL);
  }
  return (unsigned int)v4;
}
