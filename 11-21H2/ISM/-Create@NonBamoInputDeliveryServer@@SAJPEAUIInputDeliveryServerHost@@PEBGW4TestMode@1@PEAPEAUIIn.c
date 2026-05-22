/*
 * XREFs of ?Create@NonBamoInputDeliveryServer@@SAJPEAUIInputDeliveryServerHost@@PEBGW4TestMode@1@PEAPEAUIInputDeliveryServer@@@Z @ 0x180047C84
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180035B8C (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180003B74 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ??$MakeAndInitialize@VNonBamoInputDeliveryServer@@UIInputDeliveryServer@@AEAPEAUIInputDeliveryServerHost@@AEAPEBGAEAW4TestMode@1@@Details@WRL@Microsoft@@YAJPEAPEAUIInputDeliveryServer@@AEAPEAUIInputDeliveryServerHost@@AEAPEBGAEAW4TestMode@NonBamoInputDeliveryServer@@@Z @ 0x18003BE1C (--$MakeAndInitialize@VNonBamoInputDeliveryServer@@UIInputDeliveryServer@@AEAPEAUIInputDeliverySe.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall NonBamoInputDeliveryServer::Create(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        struct IInputDeliveryServer **a4)
{
  __int64 v5; // rcx
  struct IInputDeliveryServer *v6; // rax
  int v7; // eax
  int v9[2]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v13; // [rsp+50h] [rbp+18h] BYREF

  v13 = a3;
  v12 = a2;
  v11 = a1;
  AcquireSRWLockExclusive(&NonBamoInputDeliveryServer::s_initLock);
  *(_QWORD *)v9 = &NonBamoInputDeliveryServer::s_initLock;
  v6 = NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer;
  if ( !NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer )
  {
    v7 = Microsoft::WRL::Details::MakeAndInitialize<NonBamoInputDeliveryServer,IInputDeliveryServer,IInputDeliveryServerHost * &,unsigned short const * &,enum NonBamoInputDeliveryServer::TestMode &>(
           v5,
           &v11,
           &v12,
           &v13);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x24,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
        (const char *)(unsigned int)v7,
        v9[0]);
    v6 = NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer;
  }
  *a4 = v6;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>((RTL_SRWLOCK **)v9);
  return 0LL;
}
