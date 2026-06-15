/*
 * XREFs of ?AddEndpointPropertyChangeNotificationClient@CAPOProcessingHost@@AEAAJPEAUAUDIO_ENDPOINT_PROPERTY_CHANGE_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x14006C15C
 * Callers:
 *     ?RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z @ 0x1400227E0 (-RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetEndpointNotificationHandler@CAPOProcessingHost@@AEAAJPEAUIMMDevice@@PEAPEAVCAPOEndpointNotificationsHandler@@@Z @ 0x14006CC7C (-GetEndpointNotificationHandler@CAPOProcessingHost@@AEAAJPEAUIMMDevice@@PEAPEAVCAPOEndpointNotif.c)
 *     ?AddEndpointPropertyChangeNotificationClient@CAPOEndpointNotificationsHandler@@QEAAXPEAVCAPOProcessingHostObject@@@Z @ 0x140071868 (-AddEndpointPropertyChangeNotificationClient@CAPOEndpointNotificationsHandler@@QEAAXPEAVCAPOProc.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAPOProcessingHost::AddEndpointPropertyChangeNotificationClient(
        CAPOProcessingHost *this,
        struct IMMDevice **a2,
        struct CAPOProcessingHostObject *a3)
{
  struct IMMDevice *v5; // rdx
  unsigned int v6; // ebx
  int EndpointNotificationHandler; // eax
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  _BYTE *v9; // r14
  __int64 v10; // rcx
  HRESULT Instance; // eax
  HRESULT v12; // ebp
  int v13; // eax
  unsigned int v14; // edi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  CAPOEndpointNotificationsHandler *v17; // [rsp+58h] [rbp+10h] BYREF
  char *v18; // [rsp+68h] [rbp+20h]

  v5 = *a2;
  if ( v5 )
  {
    v17 = 0LL;
    EndpointNotificationHandler = CAPOProcessingHost::GetEndpointNotificationHandler(this, v5, &v17);
    v6 = EndpointNotificationHandler;
    if ( EndpointNotificationHandler < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB1,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
        (const char *)(unsigned int)EndpointNotificationHandler);
LABEL_20:
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v17);
      return v6;
    }
    CAPOEndpointNotificationsHandler::AddEndpointPropertyChangeNotificationClient(v17, a3);
    v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
    v18 = (char *)this + 32;
    v9 = (char *)this + 72;
    if ( !*((_BYTE *)this + 72) )
    {
      v10 = *((_QWORD *)this + 3);
      *((_QWORD *)this + 3) = 0LL;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      Instance = CoCreateInstance(
                   &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
                   0LL,
                   0x17u,
                   &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                   (LPVOID *)this + 3);
      v12 = Instance;
      if ( Instance < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB8,
          (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
          (const char *)(unsigned int)Instance);
        if ( this != (CAPOProcessingHost *)-32LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
        v6 = v12;
        goto LABEL_20;
      }
      v13 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)this + 3) + 48LL))(
              *((_QWORD *)this + 3),
              ((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
      v14 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB9,
          (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
          (const char *)(unsigned int)v13);
        if ( v8 )
          LeaveCriticalSection(v8);
        v6 = v14;
        goto LABEL_20;
      }
      *v9 = 1;
    }
    if ( v8 )
      LeaveCriticalSection(v8);
    v6 = 0;
    goto LABEL_20;
  }
  v6 = -2147467261;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xAE,
    (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
    (const char *)0x80004003LL);
  return v6;
}
