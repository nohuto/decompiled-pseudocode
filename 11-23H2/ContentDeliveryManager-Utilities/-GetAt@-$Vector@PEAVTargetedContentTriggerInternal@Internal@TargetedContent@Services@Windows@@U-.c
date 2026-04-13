/*
 * XREFs of ?GetAt@?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUITargetedContentTriggerInternal@2TargetedContent@Services@5@@Z @ 0x1800913D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18003B0B0 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     ??$Construct@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@detail@1@V231@@Z @ 0x18007AA38 (--$Construct@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV-.c)
 *     ?Release@ReferencedGitCookie@?$GitStorageType@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@detail@XWinRT@@QEAAKXZ @ 0x180083280 (-Release@ReferencedGitCookie@-$GitStorageType@UITargetedContentTriggerInternal@Internal@Targeted.c)
 *     ??$Destroy@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Z @ 0x18008C2B0 (--$Destroy@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Interfac.c)
 *     ?Localize@ReferencedGitCookie@?$GitStorageType@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@detail@XWinRT@@QEAAJPEAPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Z @ 0x1800929F4 (-Localize@ReferencedGitCookie@-$GitStorageType@UITargetedContentTriggerInternal@Internal@Targete.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,0,1,0>>::GetAt(
        __int64 a1,
        unsigned int a2,
        __int64 *a3)
{
  __int64 v4; // r15
  volatile signed __int32 *v6; // rdi
  char v7; // r14
  int v8; // ebx
  volatile signed __int32 *v10; // [rsp+20h] [rbp-48h] BYREF
  char v11; // [rsp+28h] [rbp-40h]
  __m128i v12[3]; // [rsp+30h] [rbp-38h] BYREF
  int v13; // [rsp+70h] [rbp+8h] BYREF
  RTL_SRWLOCK *v14; // [rsp+80h] [rbp+18h] BYREF

  v4 = a2;
  *a3 = 0LL;
  v6 = 0LL;
  v10 = 0LL;
  v7 = 0;
  v11 = 0;
  XWinRT::SerializingLockPolicy::Read(&v14, (RTL_SRWLOCK *)(a1 + 104), &v13);
  v8 = v13;
  if ( v13 >= 0 )
  {
    if ( (unsigned int)v4 >= *(_DWORD *)(a1 + 72) )
    {
      v8 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v8 >= 0 )
    {
      XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal>(a3);
      v12[0] = *(__m128i *)(*(_QWORD *)(a1 + 88) + 16 * v4);
      v8 = XWinRT::InterfaceLifetimeTraits::Construct<ContentManagement::IAppInstallInfoRecord>((__int64)&v10, v12);
      v7 = v11;
      v6 = v10;
    }
  }
  if ( v14 )
  {
    if ( LODWORD(v14->Ptr) == 1 )
      --LODWORD(v14[1].Ptr);
    else
      ReleaseSRWLockShared(v14 + 1);
  }
  if ( v8 >= 0 )
  {
    *a3 = 0LL;
    v8 = 0;
    if ( v7 )
    {
      v8 = XWinRT::detail::GitStorageType<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal>::ReferencedGitCookie::Localize(
             v6,
             a3);
      if ( v8 >= 0 )
        XWinRT::detail::GitStorageType<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal>::ReferencedGitCookie::Release(v6);
    }
    else
    {
      *a3 = (__int64)v6;
    }
  }
  return (unsigned int)v8;
}
