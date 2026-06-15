/*
 * XREFs of ?SendCommand@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAUIAudioDeviceModule@345@PEAUIBuffer@Streams@Storage@5@PEAPEAU7895@@Z @ 0x14007E990
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@Z @ 0x140073E40 (--4-$com_ptr_t@UIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@Uerr_returncode_policy@.c)
 */

__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::SendCommand(
        Windows::Media::Devices::Internal::AudioDeviceBroker *this,
        struct Windows::Media::Devices::IAudioDeviceModule *a2,
        struct Windows::Storage::Streams::IBuffer *a3,
        struct Windows::Storage::Streams::IBuffer **a4)
{
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r9
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = 0LL;
  if ( a2 )
  {
    if ( a3 )
    {
      if ( a4 )
      {
        wil::com_ptr_t<Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice,wil::err_returncode_policy>::operator=(
          &v13,
          *((_QWORD *)a2 + 12));
        if ( v13 )
        {
          v10 = (*(__int64 (__fastcall **)(__int64, struct Windows::Media::Devices::IAudioDeviceModule *, struct Windows::Storage::Streams::IBuffer *, struct Windows::Storage::Streams::IBuffer **))(*(_QWORD *)v13 + 56LL))(
                  v13,
                  a2,
                  a3,
                  a4);
          v7 = v10;
          if ( v10 >= 0 )
          {
            v7 = 0;
            goto LABEL_13;
          }
          v9 = (unsigned int)v10;
          v8 = 1559LL;
        }
        else
        {
          v7 = -2147467261;
          v8 = 1556LL;
          v9 = 2147500035LL;
        }
      }
      else
      {
        v7 = -2147467261;
        v8 = 1552LL;
        v9 = 2147500035LL;
      }
    }
    else
    {
      v7 = -2147024809;
      v8 = 1551LL;
      v9 = 2147942487LL;
    }
  }
  else
  {
    v7 = -2147024809;
    v8 = 1550LL;
    v9 = 2147942487LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
    (const char *)v9);
LABEL_13:
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v13);
  return v7;
}
