/*
 * XREFs of ContentManagement::ExecuteHandlerByEventPolicy__lambda_929976d9f769b9ae6bfa1e1f0592e0ca___ @ 0x180052028
 * Callers:
 *     ?ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@W4EventNotificationType@2@@Z @ 0x180061BA0 (-ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _anonymous_namespace_::PlacementHealth::HandleEvent_1_std::shared_ptr_ContentDeliveryManager::Background::CorrelationVectorWrapper___ @ 0x1800526D8 (_anonymous_namespace_--PlacementHealth--HandleEvent_1_std--shared_ptr_ContentDeliveryManager--Ba.c)
 *     _anonymous_namespace_::PlacementHealth::HandleEvent_9_ @ 0x180052998 (_anonymous_namespace_--PlacementHealth--HandleEvent_9_.c)
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 *     _lambda_929976d9f769b9ae6bfa1e1f0592e0ca_::operator() @ 0x18005898C (_lambda_929976d9f769b9ae6bfa1e1f0592e0ca_--operator().c)
 *     _anonymous_namespace_::GetImpressionEventExpirationTime @ 0x18005DDE0 (_anonymous_namespace_--GetImpressionEventExpirationTime.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006940C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Reset0@?$_Ptr_base@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAAXPEAVCorrelationVectorWrapper@Background@ContentDeliveryManager@@PEAV_Ref_count_base@2@@Z @ 0x1800696B0 (-_Reset0@-$_Ptr_base@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAAXPEA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ContentManagement::ExecuteHandlerByEventPolicy__lambda_929976d9f769b9ae6bfa1e1f0592e0ca___(
        void *Src,
        __int64 a2,
        HSTRING a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7)
{
  __int64 *v11; // r14
  int v12; // eax
  int v13; // eax
  int v14; // eax
  __int64 v15; // r8
  __int64 v16; // rdx
  unsigned int v17; // ebx
  int v19; // eax
  __int64 v20; // rdx
  int v21; // [rsp+30h] [rbp-20h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+38h] [rbp-18h] BYREF
  __int128 v23; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  int v25; // [rsp+98h] [rbp+48h] BYREF

  LOBYTE(v25) = 0;
  v11 = a7;
  if ( a4 <= 0xB )
  {
    v12 = 2053;
    if ( _bittest(&v12, a4) )
    {
      if ( a2 )
      {
        v13 = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD, __int64))(*(_QWORD *)a2 + 48LL))(a2, a3, a4, a5);
        if ( v13 >= 0 )
        {
          if ( (_BYTE)v21 )
          {
            v14 = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD, __int64))(*(_QWORD *)a2 + 64LL))(a2, a3, a4, a5);
            if ( v14 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x11D,
                (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
                (const char *)(unsigned int)v14,
                (int)&v25);
            if ( !(_BYTE)v25 )
              goto LABEL_12;
            goto LABEL_18;
          }
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x118,
            (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
            (const char *)(unsigned int)v13,
            (int)&v21);
        }
      }
      if ( a4 )
      {
        if ( a4 == 2 )
          anonymous_namespace_::PlacementHealth::HandleEvent_9_(Src);
      }
      else
      {
        GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
        WindowsGetStringRawBuffer(a3, 0LL);
        anonymous_namespace_::GetImpressionEventExpirationTime(Src);
      }
    }
  }
LABEL_18:
  v19 = lambda_929976d9f769b9ae6bfa1e1f0592e0ca_::operator()(a6, a4);
  v17 = v19;
  if ( v19 < 0 )
  {
    v20 = 299LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v19);
    goto LABEL_15;
  }
  if ( a2 )
  {
    v19 = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD, __int64))(*(_QWORD *)a2 + 56LL))(a2, a3, a4, a5);
    v17 = v19;
    if ( v19 < 0 )
    {
      v20 = 302LL;
      goto LABEL_23;
    }
  }
  if ( (_BYTE)v25 )
  {
    v19 = lambda_929976d9f769b9ae6bfa1e1f0592e0ca_::operator()(a6, 12LL);
    v17 = v19;
    if ( v19 < 0 )
    {
      v20 = 308LL;
      goto LABEL_23;
    }
  }
LABEL_12:
  v23 = 0LL;
  v15 = v11[1];
  v16 = *v11;
  if ( v15 )
    _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
  std::_Ptr_base<ContentDeliveryManager::Background::CorrelationVectorWrapper>::_Reset0(&v23, v16);
  anonymous_namespace_::PlacementHealth::HandleEvent_1_std::shared_ptr_ContentDeliveryManager::Background::CorrelationVectorWrapper___(Src);
  v17 = 0;
LABEL_15:
  std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>(v11);
  return v17;
}
