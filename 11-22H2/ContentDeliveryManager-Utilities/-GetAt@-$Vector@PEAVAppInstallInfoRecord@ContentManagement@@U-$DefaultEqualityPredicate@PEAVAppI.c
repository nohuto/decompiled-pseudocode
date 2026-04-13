/*
 * XREFs of ?GetAt@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIAppInstallInfoRecord@ContentManagement@@@Z @ 0x18007FE20
 * Callers:
 *     <none>
 * Callees:
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18003B0B0 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     ??$Construct@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@detail@1@V231@@Z @ 0x18007AA88 (--$Construct@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV-.c)
 *     ??$Destroy@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIAppInstallInfoRecord@ContentManagement@@@Z @ 0x18007AB1C (--$Destroy@UIAppInstallInfoRecord@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAU.c)
 *     ?Localize@ReferencedGitCookie@?$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@detail@XWinRT@@QEAAJPEAPEAUIAppInstallInfoRecord@ContentManagement@@@Z @ 0x1800828A0 (-Localize@ReferencedGitCookie@-$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@detail.c)
 *     ?Release@ReferencedGitCookie@?$GitStorageType@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@detail@XWinRT@@QEAAKXZ @ 0x1800832D0 (-Release@ReferencedGitCookie@-$GitStorageType@UITargetedContentTriggerInternal@Internal@Targeted.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::GetAt(
        __int64 a1,
        unsigned int a2,
        __int64 *a3)
{
  __int64 v4; // r15
  __int64 v6; // rdi
  char v7; // r14
  int v8; // ebx
  __int64 v10; // [rsp+20h] [rbp-48h] BYREF
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
      XWinRT::InterfaceLifetimeTraits::Destroy<ContentManagement::IAppInstallInfoRecord>(a3);
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
      v8 = XWinRT::detail::GitStorageType<ContentManagement::IAppInstallInfoRecord>::ReferencedGitCookie::Localize(
             v6,
             a3);
      if ( v8 >= 0 )
        XWinRT::detail::GitStorageType<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal>::ReferencedGitCookie::Release(v6);
    }
    else
    {
      *a3 = v6;
    }
  }
  return (unsigned int)v8;
}
