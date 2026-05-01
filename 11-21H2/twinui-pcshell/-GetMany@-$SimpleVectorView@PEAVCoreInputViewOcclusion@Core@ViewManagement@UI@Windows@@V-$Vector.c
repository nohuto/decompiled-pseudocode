/*
 * XREFs of ?GetMany@?$SimpleVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@V?$Vector@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@U?$DefaultEqualityPredicate@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@U?$DefaultVectorOptions@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUICoreInputViewOcclusion@Core@ViewManagement@UI@5@PEAI@Z @ 0x180471020
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??R_lambda_9762676fb0a7448ff3e446c940c4a4b4_@@QEBAXXZ @ 0x18046F9E4 (--R_lambda_9762676fb0a7448ff3e446c940c4a4b4_@@QEBAXXZ.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *,Windows::Foundation::Collections::Internal::Vector<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>,XWinRT::IntVersionTag,0>::GetMany(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5)
{
  __int64 v5; // r10
  int v7; // ebx
  _DWORD *v8; // rsi
  int v9; // eax
  _QWORD *v11[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = a4;
  v5 = 0LL;
  if ( (_DWORD)a3 )
  {
    while ( 1 )
    {
      *(_QWORD *)(a4 + 8 * v5) = 0LL;
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= (unsigned int)a3 )
        break;
      a4 = v12;
    }
  }
  *a5 = 0;
  v7 = *(_DWORD *)(a1 + 48);
  v8 = *(_DWORD **)(a1 + 40);
  v11[0] = &a5;
  v11[1] = &v12;
  if ( v7 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(_DWORD *, __int64, __int64, __int64, _DWORD *))(*(_QWORD *)v8 + 128LL))(
           v8,
           a2,
           a3,
           v12,
           a5);
    v7 = v9;
    if ( *(_DWORD *)(a1 + 52) != v8[22] )
    {
      *(_DWORD *)(a1 + 48) = -2147483636;
      if ( v9 < 0 )
      {
        RoTransformError((unsigned int)v9, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        _lambda_9762676fb0a7448ff3e446c940c4a4b4_::operator()(v11);
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v7, 0LL);
  }
  return (unsigned int)v7;
}
