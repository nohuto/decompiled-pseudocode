/*
 * XREFs of ?GetAt@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@@Z @ 0x1802302A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180160FD0 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::GetAt(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // rbp
  int v6; // ebx
  __int64 v7; // rax
  __int128 v8; // xmm2
  __int128 v9; // xmm3
  __int64 v10; // xmm0_8
  RTL_SRWLOCK *v11; // rcx
  int v13; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v14; // [rsp+58h] [rbp+20h] BYREF

  v3 = a2;
  *(_OWORD *)a3 = 0LL;
  *(_OWORD *)(a3 + 16) = 0LL;
  *(_OWORD *)(a3 + 32) = 0LL;
  *(_QWORD *)(a3 + 48) = 0LL;
  XWinRT::SerializingLockPolicy::Read(&v14, (RTL_SRWLOCK *)(a1 + 72), &v13);
  v6 = v13;
  if ( v13 >= 0 )
  {
    if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 40) )
    {
      v6 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v6 >= 0 )
    {
      v7 = *(_QWORD *)(a1 + 56);
      v6 = 0;
      v8 = *(_OWORD *)(56 * v3 + v7 + 16);
      v9 = *(_OWORD *)(56 * v3 + v7 + 32);
      v10 = *(_QWORD *)(56 * v3 + v7 + 48);
      *(_OWORD *)a3 = *(_OWORD *)(56 * v3 + v7);
      *(_OWORD *)(a3 + 16) = v8;
      *(_OWORD *)(a3 + 32) = v9;
      *(_QWORD *)(a3 + 48) = v10;
    }
  }
  if ( v14 )
  {
    v11 = v14 + 1;
    if ( LODWORD(v14->Ptr) == 1 )
      --LODWORD(v11->Ptr);
    else
      ReleaseSRWLockShared(v11);
  }
  if ( v6 >= 0 )
    return 0;
  return (unsigned int)v6;
}
