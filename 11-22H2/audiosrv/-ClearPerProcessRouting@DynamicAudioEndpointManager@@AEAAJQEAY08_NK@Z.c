/*
 * XREFs of ?ClearPerProcessRouting@DynamicAudioEndpointManager@@AEAAJQEAY08_NK@Z @ 0x18013EF88
 * Callers:
 *     ?RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_NQEAY08_N@Z @ 0x18013FEAC (-RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_NQEAY08_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PublishChangeNotification@@YAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEBGK@Z @ 0x18013FAC0 (-PublishChangeNotification@@YAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_i.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DynamicAudioEndpointManager::ClearPerProcessRouting(
        DynamicAudioEndpointManager *this,
        bool (*const a2)[9],
        unsigned int a3)
{
  HRESULT v5; // eax
  unsigned int v6; // ebx
  int v7; // ebx
  int v8; // edi
  bool *v9; // rsi
  int v10; // eax
  int v11; // r14d
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  LPVOID v14; // [rsp+50h] [rbp+8h] BYREF

  v14 = 0LL;
  v5 = CoCreateInstance(
         &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
         0LL,
         0x17u,
         &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
         &v14);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = 0;
    while ( 2 )
    {
      v8 = 0;
      v9 = (bool *)a2;
      do
      {
        if ( *v9 )
        {
          v10 = PublishChangeNotification((unsigned int)v7, (unsigned int)v8, &String2, a3);
          v11 = v10;
          if ( v10 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x47,
              (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
              (const char *)(unsigned int)v10);
            v6 = v11;
            goto LABEL_10;
          }
        }
        ++v8;
        ++v9;
      }
      while ( v8 < 9 );
      ++v7;
      ++a2;
      if ( v7 < 2 )
        continue;
      break;
    }
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A,
      (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)(unsigned int)v5);
  }
LABEL_10:
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v14);
  return v6;
}
