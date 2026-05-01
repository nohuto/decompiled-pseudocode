/*
 * XREFs of ?IndexOf@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@5@PEAIPEAE@Z @ 0x18000CCB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@detail@XWinRT@@QEAA@XZ @ 0x18000E238 (--0-$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@detail@XWinRT@@QEA.c)
 *     ?IndexOfInternal@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@AEAAJPEAV?$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@detail@XWinRT@@IPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@5@PEAIPEAE@Z @ 0x18000EC7C (-IndexOfInternal@-$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U-$DefaultE.c)
 *     ??$Destroy@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UIInspectable@@@detail@1@@Z @ 0x18000F98C (--$Destroy@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV-$GitStorageType@UIInspectable.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004BBAC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x18004BBC4 (--_V@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::IndexOf(
        __int64 a1,
        int a2,
        _DWORD *a3,
        _BYTE *a4)
{
  __int64 v5; // r15
  int v6; // r12d
  _BYTE *v8; // rsi
  __int64 v9; // rbp
  RTL_SRWLOCK *v10; // rbx
  RTL_SRWLOCK *v11; // rcx
  int v12; // edi
  RTL_SRWLOCK *v13; // rcx
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // rax
  _BYTE *v16; // rax
  char *i; // r12
  unsigned int v18; // r15d
  char v19; // al
  _BYTE *v20; // rbx
  __m128i v22; // [rsp+30h] [rbp-58h]
  RTL_SRWLOCK *v23; // [rsp+90h] [rbp+8h]

  v5 = (__int64)a3;
  v6 = a2;
  *a3 = 0;
  *a4 = 0;
  v8 = 0LL;
  v9 = 0LL;
  v10 = (RTL_SRWLOCK *)(a1 + 104);
  v23 = (RTL_SRWLOCK *)(a1 + 104);
  v11 = (RTL_SRWLOCK *)(a1 + 112);
  if ( LODWORD(v10->Ptr) == 1 )
  {
    if ( SLODWORD(v11->Ptr) >= 0 )
      ++LODWORD(v11->Ptr);
  }
  else
  {
    AcquireSRWLockShared(v11);
  }
  v12 = 0;
  if ( *(_DWORD *)(a1 + 80) )
  {
    v14 = *(unsigned int *)(a1 + 72);
    v15 = 16 * v14;
    if ( !is_mul_ok(v14, 0x10uLL) )
      v15 = -1LL;
    v16 = operator new[](v15, (const struct std::nothrow_t *)&std::nothrow);
    v8 = v16;
    if ( v16 )
    {
      for ( i = v16; v14; --v14 )
      {
        XWinRT::detail::GitStorageType<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>::GitStorageType<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>(i);
        i += 16;
      }
      v6 = a2;
    }
    else
    {
      v8 = 0LL;
    }
    if ( v8 )
    {
      v18 = 0;
      if ( *(_DWORD *)(a1 + 72) )
      {
        v12 = 0;
        do
        {
          v22 = *(__m128i *)(*(_QWORD *)(a1 + 88) + 16LL * v18);
          v19 = _mm_cvtsi128_si32(_mm_srli_si128(v22, 8));
          v8[16 * v18 + 8] = v19;
          if ( v19 )
          {
            *(_QWORD *)&v8[16 * v18] = v22.m128i_i64[0];
            _InterlockedIncrement((volatile signed __int32 *)v22.m128i_i64[0]);
          }
          else
          {
            LODWORD(v13) = v22.m128i_i32[0];
            *(_QWORD *)&v8[16 * v18] = v22.m128i_i64[0];
            if ( v22.m128i_i64[0] )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v22.m128i_i64[0] + 8LL))(v22.m128i_i64[0]);
          }
          v9 = (unsigned int)(v9 + 1);
          ++v18;
        }
        while ( v18 < *(_DWORD *)(a1 + 72) );
        v10 = v23;
      }
    }
    else
    {
      v12 = -2147024882;
    }
    v5 = (__int64)a3;
  }
  else
  {
    v12 = Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::IndexOfInternal(
            -1,
            *(_QWORD *)(a1 + 88),
            *(_DWORD *)(a1 + 72),
            v6,
            v5,
            (__int64)a4);
  }
  if ( v10 )
  {
    v13 = v10 + 1;
    if ( LODWORD(v10->Ptr) == 1 )
      --LODWORD(v13->Ptr);
    else
      ReleaseSRWLockShared(v13);
  }
  if ( v12 < 0 )
  {
    if ( !(_DWORD)v9 )
      goto LABEL_35;
  }
  else
  {
    if ( !(_DWORD)v9 )
      goto LABEL_35;
    v12 = Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::IndexOfInternal(
            (_DWORD)v13,
            (_DWORD)v8,
            v9,
            v6,
            v5,
            (__int64)a4);
  }
  v20 = v8;
  do
  {
    XWinRT::InterfaceLifetimeTraits::Destroy<IInspectable>(v20);
    v20 += 16;
    --v9;
  }
  while ( v9 );
LABEL_35:
  operator delete[](v8);
  return (unsigned int)v12;
}
