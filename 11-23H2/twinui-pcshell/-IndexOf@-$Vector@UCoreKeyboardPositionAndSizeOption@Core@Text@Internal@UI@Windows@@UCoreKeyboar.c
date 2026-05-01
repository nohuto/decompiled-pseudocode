/*
 * XREFs of ?IndexOf@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@PEAIPEAE@Z @ 0x180539470
 * Callers:
 *     <none>
 * Callees:
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180046D70 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C8FA4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1801C8FB0 (--_V@YAXPEAX@Z.c)
 *     ?IndexOfInternal@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEAAJPEAUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@IU678295@PEAIPEAE@Z @ 0x180539618 (-IndexOfInternal@-$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCor.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::IndexOf(
        __int64 a1,
        __int128 *a2,
        _DWORD *a3,
        _BYTE *a4)
{
  char *v8; // rsi
  int v9; // r15d
  RTL_SRWLOCK *v10; // rcx
  int v11; // ebx
  unsigned __int64 v12; // r8
  __int64 v13; // rdx
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  size_t v16; // rax
  unsigned int i; // edx
  __int64 v18; // rax
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v22; // [rsp+30h] [rbp-40h] BYREF
  __int128 v23; // [rsp+40h] [rbp-30h]
  __int128 v24; // [rsp+50h] [rbp-20h]
  __int64 v25; // [rsp+60h] [rbp-10h]
  int v26; // [rsp+B0h] [rbp+40h] BYREF
  RTL_SRWLOCK *v27; // [rsp+C0h] [rbp+50h] BYREF

  *a3 = 0;
  *a4 = 0;
  v8 = 0LL;
  v9 = 0;
  XWinRT::SerializingLockPolicy::Read(&v27, (RTL_SRWLOCK *)(a1 + 72), &v26);
  v11 = v26;
  if ( v26 >= 0 )
  {
    v12 = *(unsigned int *)(a1 + 40);
    if ( *(_DWORD *)(a1 + 48) )
    {
      v16 = 56 * v12;
      if ( !is_mul_ok(v12, 0x38uLL) )
        v16 = -1LL;
      v8 = (char *)operator new[](v16, (const struct std::nothrow_t *)&std::nothrow);
      if ( v8 )
      {
        for ( i = 0;
              i < *(_DWORD *)(a1 + 40);
              *(RTL_SRWLOCK *)&v8[(_QWORD)v10 + 48] = *(RTL_SRWLOCK *)((char *)v10 + v18 + 48) )
        {
          if ( v11 < 0 )
            break;
          v11 = 0;
          v10 = (RTL_SRWLOCK *)(56LL * i);
          v18 = *(_QWORD *)(a1 + 56);
          ++v9;
          ++i;
          *(_OWORD *)&v8[(_QWORD)v10] = *(_OWORD *)((char *)&v10->Ptr + v18);
          *(_OWORD *)&v8[(_QWORD)v10 + 16] = *(_OWORD *)((char *)&v10[2].Ptr + v18);
          *(_OWORD *)&v8[(_QWORD)v10 + 32] = *(_OWORD *)((char *)&v10[4].Ptr + v18);
        }
      }
      else
      {
        v11 = -2147024882;
      }
    }
    else
    {
      v13 = *(_QWORD *)(a1 + 56);
      v14 = a2[1];
      v22 = *a2;
      v15 = a2[2];
      v23 = v14;
      *(_QWORD *)&v14 = *((_QWORD *)a2 + 6);
      v24 = v15;
      v25 = v14;
      v11 = Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::IndexOfInternal(
              (_DWORD)v10,
              v13,
              v12,
              (unsigned int)&v22,
              (__int64)a3,
              (__int64)a4);
    }
  }
  if ( v27 )
  {
    v10 = v27 + 1;
    if ( LODWORD(v27->Ptr) == 1 )
      --LODWORD(v10->Ptr);
    else
      ReleaseSRWLockShared(v10);
  }
  if ( v11 >= 0 && v9 )
  {
    v19 = a2[1];
    v22 = *a2;
    v20 = a2[2];
    v23 = v19;
    *(_QWORD *)&v19 = *((_QWORD *)a2 + 6);
    v24 = v20;
    v25 = v19;
    v11 = Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::IndexOfInternal(
            (_DWORD)v10,
            (_DWORD)v8,
            v9,
            (unsigned int)&v22,
            (__int64)a3,
            (__int64)a4);
  }
  operator delete[](v8);
  return (unsigned int)v11;
}
