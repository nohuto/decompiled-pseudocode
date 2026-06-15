/*
 * XREFs of ?AcquirePhoneCallResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z @ 0x180109F40
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800026F0 (--1-$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800084A0 (--3@YAXPEAX@Z.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005A820 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     WPP_SF_D @ 0x1800C61CC (WPP_SF_D.c)
 *     ?AcquireResourceHandle@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KKHPEA_K@Z @ 0x18010A13C (-AcquireResourceHandle@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KKHPEA_K@Z.c)
 *     ?AddHead@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBUResourceHandleInfo@@@Z @ 0x18010A3BC (-AddHead@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAA.c)
 *     WPP_SF_dI @ 0x18010E87C (WPP_SF_dI.c)
 *     ?GetPhoneCallResourceConsumption@CConstraintModel@@QEAAJW4ConsumerState@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x180158C80 (-GetPhoneCallResourceConsumption@CConstraintModel@@QEAAJW4ConsumerState@@PEAKPEAPEAU_ResourceInf.c)
 */

__int64 __fastcall CConstraintModelResourceManager::AcquirePhoneCallResource(
        CConstraintModelResourceManager *this,
        unsigned __int64 *a2)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rsi
  int v6; // edi
  __int64 v7; // r8
  int v8; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-D0h] BYREF
  char v11; // [rsp+38h] [rbp-C8h]
  LPCRITICAL_SECTION v12; // [rsp+40h] [rbp-C0h] BYREF
  char v13; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v14; // [rsp+50h] [rbp-B0h] BYREF
  int v15; // [rsp+58h] [rbp-A8h]
  int v16; // [rsp+16Ch] [rbp+6Ch]
  int v17; // [rsp+518h] [rbp+418h]
  __int64 v18[5]; // [rsp+528h] [rbp+428h] BYREF
  unsigned int v19; // [rsp+560h] [rbp+460h] BYREF
  struct _ResourceInfo *v20; // [rsp+568h] [rbp+468h] BYREF
  unsigned __int64 v21; // [rsp+570h] [rbp+470h] BYREF

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&v12,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 24));
  *a2 = 0LL;
  v4 = *((_QWORD *)this + 2);
  v5 = 0LL;
  v19 = 0;
  v20 = 0LL;
  v21 = 0LL;
  v6 = CConstraintModel::GetPhoneCallResourceConsumption(v4, 0LL, &v19, &v20);
  if ( v6 < 0 )
    goto LABEL_13;
  if ( !v19 )
    goto LABEL_7;
  memset_0(&v14, 0, 0x4D8uLL);
  v18[0] = 0LL;
  v8 = CConstraintModelResourceManager::AcquireResourceHandle(this, v20, v19, 1u, 0, &v21);
  v5 = v21;
  v6 = v8;
  if ( v8 >= 0 )
  {
    ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
      (__int64)&lpCriticalSection,
      (struct _RTL_CRITICAL_SECTION *)this + 3);
    v16 = 0;
    v15 = 1;
    v17 = 1;
    v14 = v5;
    ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::AddHead((char *)this + 160, &v14);
    v16 = 1;
    ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::AddHead((char *)this + 160, &v14);
    if ( v11 )
      LeaveCriticalSection(lpCriticalSection);
  }
  wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>::~com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>(v18);
  if ( v6 < 0 )
  {
LABEL_13:
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x14u,
        (__int64)&WPP_57553648dc9d3a5078fc664d84c702c1_Traceguids,
        v6);
    }
  }
  else
  {
LABEL_7:
    *a2 = v5;
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_dI(*((_QWORD *)WPP_GLOBAL_Control + 2), 19LL, v7, 1LL, v5);
    }
  }
  if ( v20 )
    operator delete(v20);
  if ( v13 )
    LeaveCriticalSection(v12);
  return (unsigned int)v6;
}
