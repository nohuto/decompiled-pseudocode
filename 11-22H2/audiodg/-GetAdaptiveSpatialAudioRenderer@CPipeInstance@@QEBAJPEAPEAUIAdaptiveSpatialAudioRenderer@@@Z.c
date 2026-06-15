/*
 * XREFs of ?GetAdaptiveSpatialAudioRenderer@CPipeInstance@@QEBAJPEAPEAUIAdaptiveSpatialAudioRenderer@@@Z @ 0x14001FE20
 * Callers:
 *     ?RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z @ 0x14001FCC4 (-RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z.c)
 *     ?GetSpatialResourcePoolSize@CAudioDeviceGraph@@UEAAJPEAI0PEAH@Z @ 0x14005FCF0 (-GetSpatialResourcePoolSize@CAudioDeviceGraph@@UEAAJPEAI0PEAH@Z.c)
 *     ?GetSpatialResourceRevocationTime@CAudioDeviceGraph@@UEAAJPEA_J@Z @ 0x14005FDC0 (-GetSpatialResourceRevocationTime@CAudioDeviceGraph@@UEAAJPEA_J@Z.c)
 *     ?GetSpatialUtilization@CAudioDeviceGraph@@UEAAJPEAI00@Z @ 0x14005FE70 (-GetSpatialUtilization@CAudioDeviceGraph@@UEAAJPEAI00@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionInstance@@PEAPEAUIAudioProcessingObject@@2@Z @ 0x14002B47C (-GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionI.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x14005CE3C (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPipeInstance::GetAdaptiveSpatialAudioRenderer(
        CPipeInstance *this,
        struct IAdaptiveSpatialAudioRenderer **a2)
{
  unsigned int v4; // ebx
  char *v6; // [rsp+28h] [rbp-70h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  struct IAudioProcessingObject *v8; // [rsp+A8h] [rbp+10h] BYREF

  v8 = 0LL;
  *a2 = 0LL;
  CPipeInstance::GetAPONodeAndConnection(this, &GUID_24bdc606_d710_4d62_be35_be665fbc3e00, 0LL, 0LL, &v8, 0LL);
  if ( v8 )
  {
    v4 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, struct IAdaptiveSpatialAudioRenderer **))v8->lpVtbl->QueryInterface)(
           v8,
           &GUID_24bdc606_d710_4d62_be35_be665fbc3e00,
           a2);
  }
  else if ( *((_DWORD *)this + 28) != 1 || *((_DWORD *)this + 3) || *((_DWORD *)this + 32) )
  {
    v4 = -2147023728;
  }
  else
  {
    LODWORD(v6) = *((_DWORD *)this + 40);
    v4 = -2147023728;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x12E9,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
      (const char *)0x80070490LL,
      (int)"Could not find ASAR in device pipe for EndpointId: {%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
      v6,
      *((unsigned __int16 *)this + 82),
      *((unsigned __int16 *)this + 83),
      *((unsigned __int8 *)this + 168),
      *((unsigned __int8 *)this + 169),
      *((unsigned __int8 *)this + 170),
      *((unsigned __int8 *)this + 171),
      *((unsigned __int8 *)this + 172),
      *((unsigned __int8 *)this + 173),
      *((unsigned __int8 *)this + 174),
      *((unsigned __int8 *)this + 175));
  }
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v8);
  return v4;
}
