/*
 * XREFs of ContentManagement::ExecuteHandlerByEventPolicy__lambda_929976d9f769b9ae6bfa1e1f0592e0ca___ @ 0x18004C834
 * Callers:
 *     ?ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@W4EventNotificationType@2@@Z @ 0x18005B880 (-ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180042F60 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _anonymous_namespace_::PlacementHealth::HandleEvent_1_std::shared_ptr_ContentDeliveryManager::Background::CorrelationVectorWrapper___ @ 0x18004CFC8 (_anonymous_namespace_--PlacementHealth--HandleEvent_1_std--shared_ptr_ContentDeliveryManager--Ba.c)
 *     _anonymous_namespace_::PlacementHealth::HandleEvent_9_ @ 0x18004D19C (_anonymous_namespace_--PlacementHealth--HandleEvent_9_.c)
 *     ??0?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAA@AEBV01@@Z @ 0x180051B10 (--0-$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAA@AEBV01@@.c)
 *     _lambda_929976d9f769b9ae6bfa1e1f0592e0ca_::operator() @ 0x180053B6C (_lambda_929976d9f769b9ae6bfa1e1f0592e0ca_--operator().c)
 *     _anonymous_namespace_::GetImpressionEventExpirationTime @ 0x180058850 (_anonymous_namespace_--GetImpressionEventExpirationTime.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180060494 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ContentManagement::ExecuteHandlerByEventPolicy__lambda_929976d9f769b9ae6bfa1e1f0592e0ca___(
        LPCWCH lpString1,
        __int64 a2,
        HSTRING a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  int v11; // eax
  int v12; // eax
  int v13; // eax
  __int64 v14; // rbx
  std::_Ref_count_base *v15; // rcx
  int v17; // eax
  unsigned int v18; // ebx
  std::_Ref_count_base *v19; // rcx
  int v20; // eax
  std::_Ref_count_base *v21; // rcx
  int v22; // eax
  std::_Ref_count_base *v23; // rcx
  _BYTE v24[8]; // [rsp+30h] [rbp-20h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  int v27; // [rsp+88h] [rbp+38h] BYREF

  LOBYTE(v27) = 0;
  if ( a4 <= 0xB )
  {
    v11 = 2053;
    if ( _bittest(&v11, a4) )
    {
      if ( a2 )
      {
        v12 = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD, __int64, _BYTE *))(*(_QWORD *)a2 + 48LL))(
                a2,
                a3,
                a4,
                a5,
                v24);
        if ( v12 >= 0 )
        {
          if ( v24[0] )
          {
            v13 = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD, __int64, int *))(*(_QWORD *)a2 + 64LL))(
                    a2,
                    a3,
                    a4,
                    a5,
                    &v27);
            if ( v13 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x11D,
                (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
                (const char *)(unsigned int)v13);
            if ( !(_BYTE)v27 )
              goto LABEL_12;
            goto LABEL_17;
          }
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x118,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
            (const char *)(unsigned int)v12);
        }
      }
      if ( a4 )
      {
        if ( a4 == 2 )
          anonymous_namespace_::PlacementHealth::HandleEvent_9_(lpString1);
      }
      else
      {
        GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
        WindowsGetStringRawBuffer(a3, 0LL);
        anonymous_namespace_::GetImpressionEventExpirationTime(lpString1);
      }
    }
  }
LABEL_17:
  v17 = lambda_929976d9f769b9ae6bfa1e1f0592e0ca_::operator()(a6, a4);
  v18 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12B,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v17);
    v19 = *(std::_Ref_count_base **)(a7 + 8);
    if ( v19 )
      std::_Ref_count_base::_Decref(v19);
    return v18;
  }
  if ( a2 )
  {
    v20 = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD, __int64))(*(_QWORD *)a2 + 56LL))(a2, a3, a4, a5);
    v18 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x12E,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)v20);
      v21 = *(std::_Ref_count_base **)(a7 + 8);
      if ( v21 )
        std::_Ref_count_base::_Decref(v21);
      return v18;
    }
  }
  if ( (_BYTE)v27 )
  {
    v22 = lambda_929976d9f769b9ae6bfa1e1f0592e0ca_::operator()(a6, 12LL);
    v18 = v22;
    if ( v22 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x134,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)v22);
      v23 = *(std::_Ref_count_base **)(a7 + 8);
      if ( v23 )
        std::_Ref_count_base::_Decref(v23);
      return v18;
    }
  }
LABEL_12:
  v14 = a7;
  std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>(
    &SystemTimeAsFileTime,
    a7);
  anonymous_namespace_::PlacementHealth::HandleEvent_1_std::shared_ptr_ContentDeliveryManager::Background::CorrelationVectorWrapper___(lpString1);
  v15 = *(std::_Ref_count_base **)(v14 + 8);
  if ( v15 )
    std::_Ref_count_base::_Decref(v15);
  return 0LL;
}
