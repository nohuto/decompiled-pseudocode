/*
 * XREFs of ?GetPath@VolumeHelpers@@YAJPEAUIMMDevice@@PEAPEAUIPartsList@@@Z @ 0x180045964
 * Callers:
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x18004493C (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 *     ?MakeRealControl@BluetoothMute@BluetoothControls@@SAPEAVIMuteControlHandler@@PEAUIMMDevice@@PEAUIControlChangeNotify@@@Z @ 0x1800638B8 (-MakeRealControl@BluetoothMute@BluetoothControls@@SAPEAVIMuteControlHandler@@PEAUIMMDevice@@PEAU.c)
 *     ?MakeRealControl@BluetoothVolume@BluetoothControls@@SAPEAVIVolumeControlHandler@@PEAUIMMDevice@@PEAUIControlChangeNotify@@@Z @ 0x180063968 (-MakeRealControl@BluetoothVolume@BluetoothControls@@SAPEAVIVolumeControlHandler@@PEAUIMMDevice@@.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180004224 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?InitKsDataFormat@@YAXPEATKSDATAFORMAT@@PEAUtWAVEFORMATEX@@@Z @ 0x180045AEC (-InitKsDataFormat@@YAXPEATKSDATAFORMAT@@PEAUtWAVEFORMATEX@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall VolumeHelpers::GetPath(VolumeHelpers *this, struct IMMDevice *a2, struct IPartsList **a3)
{
  int v3; // esi
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rax
  int v10; // edi
  int v11; // eax
  struct tWAVEFORMATEX *v13; // [rsp+38h] [rbp-11h] BYREF
  char v14; // [rsp+40h] [rbp-9h]
  KSDATAFORMAT v15; // [rsp+50h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]
  struct tWAVEFORMATEX *pv; // [rsp+B0h] [rbp+67h]
  void *v18; // [rsp+B8h] [rbp+6Fh] BYREF
  __int64 v19; // [rsp+C0h] [rbp+77h] BYREF

  v3 = (int)a2;
  a2->lpVtbl = 0LL;
  v5 = *(_QWORD *)this;
  v19 = 0LL;
  v6 = (*(__int64 (__fastcall **)(VolumeHelpers *, GUID *, __int64))(v5 + 24))(
         this,
         &GUID_e749ccff_bf18_4e45_9c2b_fbf8ee730029,
         23LL);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x125,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
      (const char *)(unsigned int)v6,
      (int)&v19);
  }
  else
  {
    v18 = 0LL;
    v8 = (*(__int64 (__fastcall **)(VolumeHelpers *, void **))(*(_QWORD *)this + 40LL))(this, &v18);
    v7 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x127,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
        (const char *)(unsigned int)v8,
        (int)&v19);
    }
    else
    {
      pv = 0LL;
      v9 = *(_QWORD *)g_PolicyConfig;
      v13 = 0LL;
      v14 = 1;
      v10 = (*(__int64 (__fastcall **)(CPolicyConfig *, void *, _QWORD, struct tWAVEFORMATEX **))(v9 + 32))(
              g_PolicyConfig,
              v18,
              0LL,
              &v13);
      if ( v14 )
        pv = v13;
      if ( v10 < 0 )
      {
        v7 = -2004287484;
        if ( v10 != -2004287484 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x129,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
            (const char *)(unsigned int)v10,
            (int)&v19);
          v7 = v10;
        }
      }
      else
      {
        InitKsDataFormat(&v15, pv);
        v11 = (*(__int64 (__fastcall **)(__int64, KSDATAFORMAT *, __int64))(*(_QWORD *)v19 + 24LL))(v19, &v15, 64LL);
        if ( v11 != -2147467262 && v11 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x131,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
            (const char *)(unsigned int)v11,
            v3);
        v7 = 0;
      }
      if ( pv )
        CoTaskMemFree(pv);
    }
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v18);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
  return v7;
}
