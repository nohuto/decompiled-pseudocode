/*
 * XREFs of ?GetPreferredInputFormat@CAPOWrapperSrv@@UEAAJPEAUtWAVEFORMATEX@@PEAPEAU2@@Z @ 0x14006EB80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002A38 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$CComPtr@UIAudioEndpoint@@@ATL@@QEAA@XZ @ 0x14000DE14 (--1-$CComPtr@UIAudioEndpoint@@@ATL@@QEAA@XZ.c)
 *     ??0?$CComQIPtr@UIAPOPreferredFormatSupport@@$1?_GUID_45ebff37_f274_4272_9d0d_2c48cea9b7c7@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x14000E54C (--0-$CComQIPtr@UIAPOPreferredFormatSupport@@$1-_GUID_45ebff37_f274_4272_9d0d_2c48cea9b7c7@@3U__s.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x1400210E4 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     CreateAudioMediaType_Unsafe @ 0x14002A2C0 (CreateAudioMediaType_Unsafe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAPOWrapperSrv::GetPreferredInputFormat(CAPOWrapperSrv *this, struct tWAVEFORMATEX *a2, LPVOID *a3)
{
  __int64 v6; // rdx
  unsigned int v7; // ebx
  int cbSize; // edx
  int v9; // eax
  void (__fastcall ***v10)(_QWORD, GUID *, _QWORD *); // rdx
  int v11; // eax
  const struct tWAVEFORMATEX *v12; // rax
  int v13; // eax
  LPVOID pv; // [rsp+20h] [rbp-10h] BYREF
  struct IAudioMediaType *v16; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v18; // [rsp+60h] [rbp+30h] BYREF
  __int64 v19; // [rsp+68h] [rbp+38h] BYREF

  if ( a3 )
  {
    *a3 = 0LL;
    if ( !a2 )
    {
      v6 = 518LL;
      goto LABEL_3;
    }
    cbSize = a2->cbSize;
    v16 = 0LL;
    v9 = CreateAudioMediaType_Unsafe(a2, cbSize + 18, &v16);
    v7 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x20D,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
        (const char *)(unsigned int)v9);
LABEL_20:
      ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>((__int64 *)&v16);
      return v7;
    }
    v18 = 0LL;
    v10 = (void (__fastcall ***)(_QWORD, GUID *, _QWORD *))*((_QWORD *)this + 12);
    if ( v10 )
    {
      ATL::CComQIPtr<IAPOPreferredFormatSupport,&__s_GUID const _GUID_45ebff37_f274_4272_9d0d_2c48cea9b7c7>::CComQIPtr<IAPOPreferredFormatSupport,&__s_GUID const _GUID_45ebff37_f274_4272_9d0d_2c48cea9b7c7>(
        &v19,
        v10);
      if ( v19 )
      {
        v11 = (*(__int64 (__fastcall **)(__int64, struct IAudioMediaType *, __int64 *))(*(_QWORD *)v19 + 24LL))(
                v19,
                v16,
                &v18);
        v7 = v11;
        if ( v11 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x215,
            (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
            (const char *)(unsigned int)v11);
          wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v19);
LABEL_12:
          ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(&v18);
          goto LABEL_20;
        }
      }
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v19);
      if ( v18 )
      {
        v12 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 40LL))(v18);
        if ( !v12 )
        {
          v7 = -2004287480;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x21C,
            (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
            (const char *)0x88890008LL);
          goto LABEL_12;
        }
        pv = 0LL;
        v13 = CloneWaveFormat(v12, (struct tWAVEFORMATEX **)&pv);
        v7 = v13;
        if ( v13 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x21F,
            (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
            (const char *)(unsigned int)v13);
          CoTaskMemFree(pv);
          goto LABEL_12;
        }
        *a3 = pv;
        CoTaskMemFree(0LL);
      }
    }
    ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(&v18);
    v7 = 0;
    goto LABEL_20;
  }
  v6 = 515LL;
LABEL_3:
  v7 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
    (const char *)0x80070057LL);
  return v7;
}
