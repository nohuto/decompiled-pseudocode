/*
 * XREFs of ?Insert@?$HashMap@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@5@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@7895@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@7895@U?$DefaultLifetimeTraits@PEAUICompositionAnimationBase@Composition@UI@Windows@@@7895@U?$HashMapOptions@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@5@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@5@PEAE@Z @ 0x18002CCB0
 * Callers:
 *     ?Insert@Api@ImplicitAnimationCollection@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAUICompositionAnimationBase@345@PEAE@Z @ 0x18002CBC0 (-Insert@Api@ImplicitAnimationCollection@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAUIComposi.c)
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18002CF90 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$HashMapOptions@PEAUHSTRING__@@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@6@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18002CFAC (-RaiseEvent@-$HashMapOptions@PEAUHSTRING__@@W4SceneAttributeSemantic@Scenes@Composition@UI@Windo.c)
 *     ?Initialize@?$GitStorageType@UICompositionAnimationBase@Composition@UI@Windows@@@detail@XWinRT@@QEAAJPEAUICompositionAnimationBase@Composition@UI@Windows@@@Z @ 0x18002CFCC (-Initialize@-$GitStorageType@UICompositionAnimationBase@Composition@UI@Windows@@@detail@XWinRT@@.c)
 *     ?SetAt@?$XHashMap@PEAUHSTRING__@@V?$GitStorageType@UICompositionAnimationBase@Composition@UI@Windows@@@detail@XWinRT@@UKeyTraits@?$HashMap@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@5@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@7895@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@7895@U?$DefaultLifetimeTraits@PEAUICompositionAnimationBase@Composition@UI@Windows@@@7895@U?$HashMapOptions@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@5@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@V?$GitStorageType@UICompositionAnimationBase@Composition@UI@Windows@@@detail@XWinRT@@@4@@XWinRT@@QEAAJAEBQEAUHSTRING__@@AEBV?$GitStorageType@UICompositionAnimationBase@Composition@UI@Windows@@@detail@2@PEAPEAUTXPOSITION@2@@Z @ 0x1800362C8 (-SetAt@-$XHashMap@PEAUHSTRING__@@V-$GitStorageType@UICompositionAnimationBase@Composition@UI@Win.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memcmp_0 @ 0x1800A8120 (memcmp_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Release@ReferencedGitCookie@?$GitStorageType@UICompositionAnimationBase@Composition@UI@Windows@@@detail@XWinRT@@QEAAKXZ @ 0x18014CE8C (-Release@ReferencedGitCookie@-$GitStorageType@UICompositionAnimationBase@Composition@UI@Windows@.c)
 *     ?Release@Tag@SecureVersionTag@XWinRT@@QEAAJXZ @ 0x18014CED0 (-Release@Tag@SecureVersionTag@XWinRT@@QEAAJXZ.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,Windows::UI::Composition::ICompositionAnimationBase *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Composition::ICompositionAnimationBase *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,Windows::UI::Composition::ICompositionAnimationBase *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::Insert(
        __int64 a1,
        HSTRING a2,
        __int64 a3,
        _BYTE *a4)
{
  void *v4; // rsi
  _BYTE *v5; // r12
  HRESULT v9; // edi
  char v10; // r15
  char v11; // al
  void *v12; // r13
  _DWORD *v13; // r12
  __int64 v14; // rdi
  PCWSTR StringRawBuffer; // rax
  unsigned int v16; // r15d
  unsigned __int64 i; // rdx
  int v18; // ecx
  __int64 v19; // rsi
  __int64 v20; // rsi
  HSTRING v21; // rdi
  PCWSTR v22; // rax
  char v23; // r13
  _DWORD *v25; // rax
  _DWORD *v26; // rdi
  _BYTE v27[8]; // [rsp+30h] [rbp-50h] BYREF
  HSTRING newString; // [rsp+38h] [rbp-48h] BYREF
  void *v29[2]; // [rsp+40h] [rbp-40h] BYREF
  UINT32 length; // [rsp+50h] [rbp-30h] BYREF
  UINT32 v31; // [rsp+54h] [rbp-2Ch] BYREF
  UINT32 v32; // [rsp+58h] [rbp-28h] BYREF
  void *Buf1; // [rsp+60h] [rbp-20h]
  __int128 v34; // [rsp+68h] [rbp-18h] BYREF
  char v35; // [rsp+C0h] [rbp+40h]

  v4 = 0LL;
  v5 = a4;
  *a4 = 0;
  if ( !*(_BYTE *)(a1 + 184) )
    RoOriginateError(2147549183LL, 0LL);
  newString = 0LL;
  v9 = WindowsDuplicateString(a2, &newString);
  if ( v9 >= 0 )
  {
    v29[0] = 0LL;
    LOBYTE(v29[1]) = 0;
    v9 = XWinRT::detail::GitStorageType<Windows::UI::Composition::ICompositionAnimationBase>::Initialize(v29, a3);
    if ( v9 < 0 )
    {
      v10 = 0;
      v29[0] = 0LL;
      LOBYTE(v29[1]) = 0;
    }
    else
    {
      v10 = (char)v29[1];
      v4 = v29[0];
    }
    v11 = 0;
    v12 = 0LL;
    v35 = 0;
    if ( v9 < 0 )
    {
LABEL_22:
      if ( v11 )
      {
        XWinRT::detail::GitStorageType<Windows::UI::Composition::ICompositionAnimationBase>::ReferencedGitCookie::Release(v12);
      }
      else if ( v12 )
      {
        (*(void (__fastcall **)(void *))(*(_QWORD *)v12 + 16LL))(v12);
      }
      if ( v10 )
      {
        XWinRT::detail::GitStorageType<Windows::UI::Composition::ICompositionAnimationBase>::ReferencedGitCookie::Release(v4);
      }
      else if ( v4 )
      {
        (*(void (__fastcall **)(void *))(*(_QWORD *)v4 + 16LL))(v4);
      }
      if ( v9 >= 0 )
        v9 = Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,enum Windows::UI::Composition::Scenes::SceneAttributeSemantic,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>::RaiseEvent(
               (unsigned __int8)a4,
               *(unsigned __int8 *)(a1 + 185),
               a1,
               *v5 != 0 ? 3 : 1,
               a2);
      goto LABEL_30;
    }
    v13 = (_DWORD *)(a1 + 168);
    if ( *(_DWORD *)(a1 + 160) == 1 )
    {
      if ( !*v13 )
        *v13 = -268435456;
    }
    else
    {
      AcquireSRWLockExclusive((PSRWLOCK)(a1 + 168));
    }
    XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>(v27, *(unsigned __int8 *)(a1 + 186), a1 + 188);
    if ( **(int **)(a1 + 176) > 1 )
    {
      v25 = DefaultHeap::Alloc(4uLL);
      v26 = v25;
      if ( v25 )
      {
        *v25 = 1;
        XWinRT::SecureVersionTag::Tag::Release(*(XWinRT::SecureVersionTag::Tag **)(a1 + 176));
        *(_QWORD *)(a1 + 176) = v26;
      }
    }
    v14 = a1 + 72;
    StringRawBuffer = WindowsGetStringRawBuffer(newString, &length);
    v16 = -2128831035;
    for ( i = 0LL; i < 2 * (unsigned __int64)length; v16 = 16777619 * (v16 ^ v18) )
      v18 = *((unsigned __int8 *)StringRawBuffer + i++);
    v19 = *(_QWORD *)(a1 + 80);
    if ( v19 )
    {
      v20 = *(_QWORD *)(v19 + 8LL * (v16 % *(_DWORD *)(a1 + 96)));
      if ( v20 )
      {
        do
        {
          if ( *(_DWORD *)(v20 + 32) == v16 )
          {
            v21 = newString;
            Buf1 = (void *)WindowsGetStringRawBuffer(*(HSTRING *)v20, &v32);
            v22 = WindowsGetStringRawBuffer(v21, &v31);
            if ( v32 == v31 && !memcmp_0(Buf1, v22, 2LL * v31) )
            {
              v9 = 0;
              v34 = *(_OWORD *)(v20 + 8);
              v23 = BYTE8(v34);
              *(_OWORD *)(v20 + 8) = *(_OWORD *)v29;
              v4 = 0LL;
              v35 = v23;
              v12 = (void *)v34;
              v10 = 0;
              *a4 = 1;
              goto LABEL_18;
            }
          }
          v20 = *(_QWORD *)(v20 + 24);
        }
        while ( v20 );
        v14 = a1 + 72;
      }
    }
    if ( *(_QWORD *)(a1 + 88) == 0x7FFFFFFFLL )
    {
      v9 = -2147024882;
    }
    else
    {
      v9 = XWinRT::XHashMap<HSTRING__ *,XWinRT::detail::GitStorageType<Windows::UI::Composition::ICompositionAnimationBase>,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,Windows::UI::Composition::ICompositionAnimationBase *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Composition::ICompositionAnimationBase *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,Windows::UI::Composition::ICompositionAnimationBase *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<XWinRT::detail::GitStorageType<Windows::UI::Composition::ICompositionAnimationBase>>>::SetAt(
             v14,
             &newString,
             v29,
             &v34);
      if ( v9 >= 0 )
      {
        newString = 0LL;
        v4 = 0LL;
        v10 = 0;
LABEL_18:
        if ( a1 != -160 )
        {
          if ( *(_DWORD *)(a1 + 160) == 1 )
            *v13 += 0x10000000;
          else
            ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 168));
        }
        v5 = a4;
        v11 = v35;
        goto LABEL_22;
      }
    }
    v4 = v29[0];
    v10 = (char)v29[1];
    goto LABEL_18;
  }
LABEL_30:
  WindowsDeleteString(newString);
  return (unsigned int)v9;
}
