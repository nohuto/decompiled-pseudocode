/*
 * XREFs of ?RuntimeClassInitialize@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@QEAAJPEAX@Z @ 0x140020EE4
 * Callers:
 *     ??$MakeAndInitialize@VAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UIAudioDeviceBrokerDevice@2345@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAPEAX@Z @ 0x140021330 (--$MakeAndInitialize@VAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UIAudioDeviceBroke.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x14001F888 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?KsSendProperty@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJPEAUKSIDENTIFIER@@KPEAXIPEAK@Z @ 0x1400210A0 (-KsSendProperty@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJPEAUKSIDENTIFIER@@K.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x14004EC84 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?InitializeEvents@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJXZ @ 0x14007A4C8 (-InitializeEvents@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJXZ.c)
 */

__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::RuntimeClassInitialize(
        void **this,
        void *a2)
{
  HANDLE CurrentProcess; // rbx
  HANDLE v5; // rax
  const char *v6; // r9
  int v8; // ebx
  __int64 v9; // rdx
  unsigned int v10; // [rsp+20h] [rbp-48h]
  KSIDENTIFIER v11; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v13; // [rsp+78h] [rbp+10h] BYREF

  if ( !a2 )
  {
    v8 = -2147467261;
    v9 = 2115LL;
    goto LABEL_7;
  }
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    this + 14,
    0LL);
  CurrentProcess = GetCurrentProcess();
  v5 = GetCurrentProcess();
  if ( DuplicateHandle(v5, a2, CurrentProcess, this + 14, 0, 0, 2u) )
  {
    v13 = 0;
    *(&v11.Alignment + 2) = 0x100000003LL;
    v11.Set = GUID_c034fdb0_ff75_47c8_aa3c_ee46716b50c6;
    if ( Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::KsSendProperty(
           (Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *)this,
           &v11,
           0x18u,
           this + 15,
           0x10u,
           &v13) < 0 )
      goto LABEL_4;
    if ( v13 >= 0x10 )
    {
      *((_BYTE *)this + 136) = 1;
LABEL_4:
      if ( !*((_BYTE *)this + 136) )
        return 0LL;
      v8 = Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::InitializeEvents(this);
      if ( v8 >= 0 )
        return 0LL;
      v9 = 2140LL;
      goto LABEL_7;
    }
    v8 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x87C,
      (unsigned int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
      (const char *)0x80004005LL,
      v10);
    v9 = 2134LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (unsigned int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
      (const char *)(unsigned int)v8,
      v10);
    return (unsigned int)v8;
  }
  return wil::details::in1diag3::Return_GetLastError(
           retaddr,
           (void *)0x850,
           (unsigned int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
           v6);
}
