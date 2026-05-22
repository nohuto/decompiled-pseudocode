/*
 * XREFs of ?TraceCurrentState@VirtualTouchpadControllerProxy@@SAXXZ @ 0x180154084
 * Callers:
 *     ?Callback@InputTraceLogging@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x18012BD30 (-Callback@InputTraceLogging@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x1800A5868 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x1800B6B74 (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x1800B6C88 (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 *     ?GetPrimaryClickZone@BamoVirtualTouchpadControllerProxy@@UEAAAEBUPhysicalClickZone@Input@Internal@UI@Windows@@XZ @ 0x1801529E0 (-GetPrimaryClickZone@BamoVirtualTouchpadControllerProxy@@UEAAAEBUPhysicalClickZone@Input@Interna.c)
 *     ?GetSecondaryClickZone@BamoVirtualTouchpadControllerProxy@@UEAAAEBUPhysicalClickZone@Input@Internal@UI@Windows@@XZ @ 0x180152A10 (-GetSecondaryClickZone@BamoVirtualTouchpadControllerProxy@@UEAAAEBUPhysicalClickZone@Input@Inter.c)
 *     ?GetSize@BamoVirtualTouchpadControllerProxy@@UEAAAEBUVirtualTouchpadSize@Input@Internal@UI@Windows@@XZ @ 0x180152A40 (-GetSize@BamoVirtualTouchpadControllerProxy@@UEAAAEBUVirtualTouchpadSize@Input@Internal@UI@Windo.c)
 *     ?VirtualTouchpadController@VirtualTouchpad@InputTraceLogging@@SAXUVPTP_ID@@AEBUtagRECT@@AEBUtagVIRTUAL_PTP_CONFIG@@AEBUVirtualTouchpadSize@Input@Internal@UI@Windows@@AEBUPhysicalClickZone@789Windows@@4@Z @ 0x180154A68 (-VirtualTouchpadController@VirtualTouchpad@InputTraceLogging@@SAXUVPTP_ID@@AEBUtagRECT@@AEBUtagV.c)
 */

// Hidden C++ exception states: #wind=2
void VirtualTouchpadControllerProxy::TraceCurrentState(void)
{
  __int64 v0; // rdi
  __int64 *i; // rbx
  __int64 v2; // rcx
  struct Microsoft::Bamo::BaseBamoConnection *v3; // rdx
  const struct Windows::UI::Internal::Input::PhysicalClickZone *SecondaryClickZone; // rsi
  const struct Windows::UI::Internal::Input::PhysicalClickZone *PrimaryClickZone; // rbp
  const struct Windows::UI::Internal::Input::VirtualTouchpadSize *Size; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  const char *v10; // r9
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-58h] BYREF
  Microsoft::BamoImpl::BamoImplObject *v12[3]; // [rsp+38h] [rbp-50h] BYREF
  __int128 v13; // [rsp+50h] [rbp-38h] BYREF

  wil::EnterCriticalSection(&lpCriticalSection, &VirtualTouchpadControllerProxy::s_lock);
  v0 = qword_1802784E8;
  for ( i = *(__int64 **)qword_1802784E8; i != (__int64 *)v0; i = (__int64 *)*i )
  {
    v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(i[2] + 32) + 24LL) + 32LL);
    if ( *(int *)(v2 + 8) <= 0 )
      v3 = 0LL;
    else
      v3 = *(struct Microsoft::Bamo::BaseBamoConnection **)(v2 + 16);
    Microsoft::Bamo::Lock::Lock(v12, v3);
    SecondaryClickZone = BamoVirtualTouchpadControllerProxy::GetSecondaryClickZone((BamoVirtualTouchpadControllerProxy *)(i[2] + 8));
    PrimaryClickZone = BamoVirtualTouchpadControllerProxy::GetPrimaryClickZone((BamoVirtualTouchpadControllerProxy *)(i[2] + 8));
    Size = BamoVirtualTouchpadControllerProxy::GetSize((BamoVirtualTouchpadControllerProxy *)(i[2] + 8));
    v7 = i[2];
    if ( *(_BYTE *)(v7 + 228) )
      v13 = *(_OWORD *)(v7 + 212);
    else
      v13 = 0LL;
    InputTraceLogging::VirtualTouchpad::VirtualTouchpadController(
      *((unsigned int *)i + 6),
      &v13,
      v7 + 252,
      Size,
      PrimaryClickZone,
      SecondaryClickZone,
      lpCriticalSection);
    Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)v12, v8, v9, v10);
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
}
