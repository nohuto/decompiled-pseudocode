/*
 * XREFs of ?GetMany@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAUEventRegistrationToken@@PEAI@Z @ 0x140078A80
 * Callers:
 *     <none>
 * Callees:
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x14002A850 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     ??_V@YAXPEAX@Z @ 0x14002FC80 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002FC8C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1400309B4 (memset_0.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _QWORD *a4,
        unsigned int *a5)
{
  unsigned int v5; // ebp
  unsigned int v7; // r13d
  unsigned int v8; // r15d
  _QWORD *v9; // r14
  size_t v12; // rbx
  int v13; // ebx
  unsigned int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // rcx
  RTL_SRWLOCK *v17; // rcx
  unsigned int i; // ecx
  RTL_SRWLOCK *v20; // [rsp+20h] [rbp-48h] BYREF
  void *Block; // [rsp+70h] [rbp+8h]
  int v22; // [rsp+80h] [rbp+18h] BYREF

  v5 = 0;
  v22 = 0;
  v7 = 0;
  v8 = 0;
  v9 = a4;
  v12 = a3;
  if ( a3 )
    memset_0(a4, 0, 8LL * a3);
  Block = 0LL;
  *a5 = 0;
  XWinRT::SerializingLockPolicy::Read(&v20, (RTL_SRWLOCK *)(a1 + 72), &v22);
  if ( !*(_DWORD *)(a1 + 48) || (Block = operator new[](v12, (const struct std::nothrow_t *)&std::nothrow)) != 0LL )
  {
    v13 = v22;
  }
  else
  {
    v13 = -2147024882;
    RoOriginateError(2147942414LL, 0LL);
  }
  if ( v13 >= 0 )
  {
    v8 = *(_DWORD *)(a1 + 40);
    if ( a2 > v8 )
    {
      v13 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v13 >= 0 && a3 )
    {
      v14 = a2;
      if ( *(_DWORD *)(a1 + 48) )
      {
        do
        {
          if ( v14 >= v8 )
            break;
          v13 = 0;
          v15 = v14;
          ++v7;
          ++v14;
          *v9++ = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8 * v15);
        }
        while ( v7 < a3 );
      }
      else
      {
        do
        {
          if ( v14 >= v8 )
            break;
          v13 = 0;
          v16 = v14;
          ++v5;
          ++v14;
          *v9++ = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8 * v16);
        }
        while ( v5 < a3 );
      }
    }
  }
  if ( v20 )
  {
    v17 = v20 + 1;
    if ( LODWORD(v20->Ptr) == 1 )
      --LODWORD(v17->Ptr);
    else
      ReleaseSRWLockShared(v17);
  }
  if ( v13 >= 0 )
  {
    if ( v7 )
    {
      for ( i = 0; i < a3; ++i )
      {
        if ( i + a2 >= v8 )
          break;
        v13 = 0;
        ++v5;
      }
    }
    *a5 = v5;
  }
  operator delete[](Block);
  return (unsigned int)v13;
}
