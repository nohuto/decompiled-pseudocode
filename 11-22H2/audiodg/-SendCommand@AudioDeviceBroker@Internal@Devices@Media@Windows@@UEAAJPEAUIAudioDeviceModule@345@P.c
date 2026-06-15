/*
 * XREFs of ?SendCommand@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAUIAudioDeviceModule@345@PEAUIBuffer@Streams@Storage@5@PEAPEAU7895@@Z @ 0x14008BDB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@UIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@Z @ 0x140080FCC (--4-$com_ptr_t@UIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@Uerr_returncode_policy@.c)
 */

__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::SendCommand(
        Windows::Media::Devices::Internal::AudioDeviceBroker *this,
        struct Windows::Media::Devices::IAudioDeviceModule *a2,
        struct Windows::Storage::Streams::IBuffer *a3,
        struct Windows::Storage::Streams::IBuffer **a4)
{
  unsigned int v7; // ebx
  __int64 v8; // rdx
  unsigned __int64 v9; // r9
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = 0LL;
  if ( !a2 )
  {
    v7 = -2147024809;
    v8 = 1471LL;
LABEL_8:
    v9 = v7;
    goto LABEL_9;
  }
  if ( !a3 )
  {
    v7 = -2147024809;
    v8 = 1472LL;
    goto LABEL_8;
  }
  if ( !a4 )
  {
    v8 = 1473LL;
LABEL_7:
    v7 = -2147467261;
    goto LABEL_8;
  }
  wil::com_ptr_t<Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice,wil::err_returncode_policy>::operator=(
    &v13,
    *((_QWORD *)a2 + 12));
  if ( !v13 )
  {
    v8 = 1477LL;
    goto LABEL_7;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, struct Windows::Media::Devices::IAudioDeviceModule *, struct Windows::Storage::Streams::IBuffer *, struct Windows::Storage::Streams::IBuffer **))(*(_QWORD *)v13 + 56LL))(
          v13,
          a2,
          a3,
          a4);
  v7 = v10;
  if ( v10 >= 0 )
  {
    v7 = 0;
    goto LABEL_15;
  }
  v9 = (unsigned int)v10;
  v8 = 1480LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
    (const char *)v9);
LABEL_15:
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v13);
  return v7;
}
