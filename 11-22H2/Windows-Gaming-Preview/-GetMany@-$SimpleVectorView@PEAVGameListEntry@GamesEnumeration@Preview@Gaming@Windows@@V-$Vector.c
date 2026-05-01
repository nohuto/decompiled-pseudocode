/*
 * XREFs of ?GetMany@?$SimpleVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@V?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@5@PEAI@Z @ 0x18000F870
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,XWinRT::IntVersionTag,1>::GetMany(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        _DWORD *a5)
{
  __int64 i; // r10
  int v8; // ebx
  _DWORD *v9; // r15
  int v10; // eax
  __int64 j; // rbx
  __int64 v12; // rcx

  for ( i = 0LL; (unsigned int)i < a3; i = (unsigned int)(i + 1) )
    *(_QWORD *)(a4 + 8 * i) = 0LL;
  *a5 = 0;
  v8 = *(_DWORD *)(a1 + 80);
  v9 = *(_DWORD **)(a1 + 72);
  if ( v8 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 128LL))(*(_QWORD *)(a1 + 72));
    v8 = v10;
    if ( *(_DWORD *)(a1 + 84) != v9[30] )
    {
      *(_DWORD *)(a1 + 80) = -2147483636;
      if ( v10 < 0 )
      {
        RoTransformError((unsigned int)v10, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        for ( j = 0LL; (unsigned int)j < *a5; j = (unsigned int)(j + 1) )
        {
          v12 = *(_QWORD *)(a4 + 8 * j);
          if ( v12 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
          *(_QWORD *)(a4 + 8 * j) = 0LL;
        }
        *a5 = 0;
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v8, 0LL);
  }
  return (unsigned int)v8;
}
