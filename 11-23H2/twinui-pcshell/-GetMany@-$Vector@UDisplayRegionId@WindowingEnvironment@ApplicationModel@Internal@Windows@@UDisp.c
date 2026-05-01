/*
 * XREFs of ?GetMany@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAUDisplayRegionId@WindowingEnvironment@ApplicationModel@25@PEAI@Z @ 0x1804C5540
 * Callers:
 *     <none>
 * Callees:
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180046D70 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C8FA4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1801C8FB0 (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _DWORD *a4,
        unsigned int *a5)
{
  size_t v5; // r15
  _DWORD *v6; // r14
  unsigned int v9; // ebp
  unsigned int v10; // r12d
  int v11; // ebx
  unsigned int v12; // edx
  __int64 v13; // rcx
  unsigned int v14; // eax
  __int64 v15; // rcx
  RTL_SRWLOCK *v16; // rcx
  unsigned int i; // ecx
  void *Block; // [rsp+20h] [rbp-48h]
  RTL_SRWLOCK *v20; // [rsp+28h] [rbp-40h] BYREF
  int v21; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v22; // [rsp+80h] [rbp+18h]

  v5 = a3;
  v22 = 0;
  v6 = a4;
  v21 = 0;
  v9 = 0;
  v10 = 0;
  if ( a3 )
    memset_0(a4, 0, 4LL * a3);
  Block = 0LL;
  *a5 = 0;
  XWinRT::SerializingLockPolicy::Read(&v20, (RTL_SRWLOCK *)(a1 + 120), &v21);
  if ( !*(_DWORD *)(a1 + 96) || (Block = operator new[](v5, (const struct std::nothrow_t *)&std::nothrow)) != 0LL )
  {
    v11 = v21;
  }
  else
  {
    v11 = -2147024882;
    RoOriginateError(2147942414LL, 0LL);
  }
  if ( v11 >= 0 )
  {
    v10 = *(_DWORD *)(a1 + 88);
    if ( a2 > v10 )
    {
      v11 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v11 >= 0 && (_DWORD)v5 )
    {
      v12 = a2;
      if ( *(_DWORD *)(a1 + 96) )
      {
        do
        {
          if ( v12 >= v10 )
            break;
          v11 = 0;
          v13 = v12++;
          v14 = v22 + 1;
          *v6++ = *(_DWORD *)(*(_QWORD *)(a1 + 104) + 4 * v13);
          v22 = v14;
        }
        while ( v14 < (unsigned int)v5 );
      }
      else
      {
        do
        {
          if ( v12 >= v10 )
            break;
          v11 = 0;
          v15 = v12;
          ++v9;
          ++v12;
          *v6++ = *(_DWORD *)(*(_QWORD *)(a1 + 104) + 4 * v15);
        }
        while ( v9 < (unsigned int)v5 );
      }
    }
  }
  if ( v20 )
  {
    v16 = v20 + 1;
    if ( LODWORD(v20->Ptr) == 1 )
      --LODWORD(v16->Ptr);
    else
      ReleaseSRWLockShared(v16);
  }
  if ( v11 >= 0 )
  {
    if ( v22 )
    {
      for ( i = 0; i < (unsigned int)v5; ++i )
      {
        if ( i + a2 >= v10 )
          break;
        v11 = 0;
        ++v9;
      }
    }
    *a5 = v9;
  }
  operator delete[](Block);
  return (unsigned int)v11;
}
