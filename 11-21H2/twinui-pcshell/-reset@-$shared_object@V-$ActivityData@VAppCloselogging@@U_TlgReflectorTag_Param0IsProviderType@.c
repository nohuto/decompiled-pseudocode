/*
 * XREFs of ?reset@?$shared_object@V?$ActivityData@VAppCloselogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAppCloselogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1803014A8
 * Callers:
 *     ??1?$ActivityBase@VAppCloselogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1802FF5A4 (--1-$ActivityBase@VAppCloselogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Destroy@?$ActivityBase@VAppCloselogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1802FF918 (-Destroy@-$ActivityBase@VAppCloselogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1?$ActivityData@VAppCloselogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAppCloselogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1802FF5E0 (--1-$ActivityData@VAppCloselogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@VApp.c)
 */

void __fastcall wil::details::shared_object<wil::ActivityBase<AppCloselogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<AppCloselogging,_TlgReflectorTag_Param0IsProviderType>>::reset(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 *v3; // rdi

  v2 = *a1;
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      v3 = *a1;
      if ( *a1 )
      {
        wil::ActivityBase<AppCloselogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<AppCloselogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<AppCloselogging,_TlgReflectorTag_Param0IsProviderType>((__int64)(v3 + 2));
        operator delete((void *)v3);
      }
    }
    *a1 = 0LL;
  }
}
