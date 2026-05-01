/*
 * XREFs of ?GetMany@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@5@PEAI@Z @ 0x18000D040
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@detail@XWinRT@@QEAA@XZ @ 0x18000E07C (--0-$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@detail@XWinRT@@QEA.c)
 *     ?ResolveDemand@?$StorageTempTraits@V?$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@detail@XWinRT@@PEAUIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@V123@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@8@@XWinRT@@SAJPEAV?$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@detail@2@PEAPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Z @ 0x18000E090 (-ResolveDemand@-$StorageTempTraits@V-$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Ga.c)
 *     ??$Destroy@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UIInspectable@@@detail@1@@Z @ 0x18000F80C (--$Destroy@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV-$GitStorageType@UIInspectable.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004ACBC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x18004ACD4 (--_V@YAXPEAX@Z.c)
 *     memset_0 @ 0x18004B744 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _QWORD *a4,
        unsigned int *a5)
{
  _QWORD *v5; // r13
  __int64 v7; // rdx
  unsigned int v8; // esi
  unsigned int v9; // r14d
  unsigned __int64 v10; // rbp
  char *v11; // r15
  _DWORD *v12; // rbx
  RTL_SRWLOCK *v13; // rcx
  int v14; // edi
  unsigned __int64 v15; // rax
  char *v16; // rax
  char *v17; // r13
  unsigned int v18; // edi
  char *v19; // rbx
  unsigned int v20; // r13d
  char v21; // al
  unsigned int v22; // ebp
  unsigned int v23; // r14d
  __int64 i; // rbx
  __int64 v25; // rbx
  char *v26; // rbx
  __int64 v27; // rsi
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-70h]
  _DWORD *v30; // [rsp+40h] [rbp-68h]
  __m128i v31; // [rsp+50h] [rbp-58h]
  __m128i v32; // [rsp+50h] [rbp-58h]
  unsigned int v35; // [rsp+C0h] [rbp+18h]

  v5 = a4;
  v7 = a1;
  v8 = 0;
  v9 = 0;
  v35 = 0;
  v10 = a3;
  if ( a3 )
  {
    memset_0(a4, 0, 8LL * a3);
    v7 = a1;
  }
  *a5 = 0;
  v11 = 0LL;
  v12 = (_DWORD *)(v7 + 104);
  v30 = (_DWORD *)(v7 + 104);
  v13 = (RTL_SRWLOCK *)(v7 + 112);
  SRWLock = (PSRWLOCK)(v7 + 112);
  if ( *(_DWORD *)(v7 + 104) == 1 )
  {
    if ( SLODWORD(v13->Ptr) >= 0 )
      ++LODWORD(v13->Ptr);
  }
  else
  {
    AcquireSRWLockShared(v13);
    v7 = a1;
  }
  v14 = 0;
  if ( *(_DWORD *)(v7 + 80) )
  {
    v15 = 16 * v10;
    if ( !is_mul_ok(v10, 0x10uLL) )
      v15 = -1LL;
    v16 = (char *)operator new[](v15, (const struct std::nothrow_t *)&std::nothrow);
    v11 = v16;
    if ( v16 )
    {
      if ( a3 )
      {
        v17 = v16;
        do
        {
          XWinRT::detail::GitStorageType<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>::GitStorageType<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>(v17);
          v17 += 16;
          --v10;
        }
        while ( v10 );
        v5 = a4;
      }
    }
    else
    {
      v11 = 0LL;
    }
    if ( !v11 )
    {
      v14 = -2147024882;
LABEL_21:
      RoOriginateError((unsigned int)v14, 0LL);
      goto LABEL_41;
    }
    v7 = a1;
  }
  v35 = *(_DWORD *)(v7 + 72);
  if ( a2 > v35 )
  {
    v14 = -2147483637;
    goto LABEL_21;
  }
  if ( !*(_DWORD *)(v7 + 80) )
  {
    if ( !a3 )
      goto LABEL_41;
    v22 = a2;
    v23 = *(_DWORD *)(v7 + 72);
    while ( 1 )
    {
      if ( v22 >= v23 )
      {
LABEL_40:
        v9 = 0;
        v5 = a4;
        goto LABEL_41;
      }
      v32 = *(__m128i *)(*(_QWORD *)(v7 + 88) + 16LL * v22);
      v14 = 0;
      if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v32, 8)) )
        break;
      *v5 = v32.m128i_i64[0];
      if ( !v32.m128i_i64[0] )
        goto LABEL_38;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32.m128i_i64[0] + 8LL))(v32.m128i_i64[0]);
LABEL_39:
      ++v8;
      ++v22;
      ++v5;
      v7 = a1;
      if ( v8 >= a3 )
        goto LABEL_40;
    }
    *v5 = 0LL;
    v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, _QWORD *))(*(_QWORD *)qword_180062E68 + 40LL))(
            qword_180062E68,
            *(unsigned int *)(v32.m128i_i64[0] + 4),
            &GUID_735924d3_811f_4494_b69c_c641a0c61543,
            v5);
LABEL_38:
    if ( v14 < 0 )
      goto LABEL_40;
    goto LABEL_39;
  }
  if ( a3 )
  {
    v18 = a2;
    v19 = v11;
    v20 = *(_DWORD *)(v7 + 72);
    do
    {
      if ( v18 >= v20 )
        break;
      v31 = *(__m128i *)(*(_QWORD *)(v7 + 88) + 16LL * v18);
      v21 = _mm_cvtsi128_si32(_mm_srli_si128(v31, 8));
      v19[8] = v21;
      if ( v21 )
      {
        *(_QWORD *)v19 = v31.m128i_i64[0];
        _InterlockedIncrement((volatile signed __int32 *)v31.m128i_i64[0]);
      }
      else
      {
        *(_QWORD *)v19 = v31.m128i_i64[0];
        if ( v31.m128i_i64[0] )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v31.m128i_i64[0] + 8LL))(v31.m128i_i64[0]);
          v7 = a1;
        }
      }
      ++v9;
      ++v18;
      v19 += 16;
    }
    while ( v9 < a3 );
    v12 = v30;
    v5 = a4;
  }
  v14 = 0;
LABEL_41:
  if ( v12 )
  {
    if ( *v12 == 1 )
      --LODWORD(SRWLock->Ptr);
    else
      ReleaseSRWLockShared(SRWLock);
  }
  if ( v14 < 0 )
  {
LABEL_54:
    if ( v8 )
    {
      v25 = v8;
      do
      {
        if ( *v5 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 16LL))(*v5);
          *v5 = 0LL;
        }
        ++v5;
        --v25;
      }
      while ( v25 );
    }
    if ( v8 < v9 )
    {
      v26 = &v11[16 * v8];
      v27 = v9 - v8;
      do
      {
        XWinRT::InterfaceLifetimeTraits::Destroy<IInspectable>(v26);
        v26 += 16;
        --v27;
      }
      while ( v27 );
    }
  }
  else
  {
    if ( v9 )
    {
      for ( i = 0LL; (unsigned int)i < a3; i = (unsigned int)(i + 1) )
      {
        if ( (unsigned int)i + a2 >= v35 )
          break;
        v14 = XWinRT::StorageTempTraits<XWinRT::detail::GitStorageType<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry *,XWinRT::detail::GitStorageType<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>>::ResolveDemand(
                &v11[16 * (unsigned int)i],
                &v5[i]);
        if ( v14 < 0 )
          goto LABEL_54;
        ++v8;
      }
    }
    *a5 = v8;
  }
  operator delete[](v11);
  return (unsigned int)v14;
}
