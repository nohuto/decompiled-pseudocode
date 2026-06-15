/*
 * XREFs of ?GetPreferredInputFormat@CAPOWrapperSrv@@UEAAJPEAUtWAVEFORMATEX@@PEAPEAU2@@Z @ 0x1400670D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140004168 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$CComQIPtr@UIAPOPreferredFormatSupport@@$1?_GUID_45ebff37_f274_4272_9d0d_2c48cea9b7c7@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x140017BBC (--0-$CComQIPtr@UIAPOPreferredFormatSupport@@$1-_GUID_45ebff37_f274_4272_9d0d_2c48cea9b7c7@@3U__s.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x140025F08 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CreateAudioMediaType_Unsafe @ 0x140031A30 (CreateAudioMediaType_Unsafe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAPOWrapperSrv::GetPreferredInputFormat(CAPOWrapperSrv *this, struct tWAVEFORMATEX *a2, LPVOID *a3)
{
  int AudioMediaType_Unsafe; // eax
  unsigned int v6; // ebx
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  void (__fastcall ***v9)(_QWORD, GUID *, _QWORD *); // rdx
  int v10; // eax
  const struct tWAVEFORMATEX *v11; // rax
  int v12; // eax
  struct IAudioMediaType *v14[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  LPVOID pv; // [rsp+58h] [rbp+28h] BYREF
  __int64 v17; // [rsp+68h] [rbp+38h] BYREF

  v14[0] = 0LL;
  v17 = 0LL;
  if ( !a2 || !a3 )
  {
    v6 = -2147024809;
    v8 = 535LL;
    goto LABEL_18;
  }
  AudioMediaType_Unsafe = CreateAudioMediaType_Unsafe(a2, (unsigned int)a2->cbSize + 18, v14);
  v6 = AudioMediaType_Unsafe;
  if ( AudioMediaType_Unsafe < 0 )
  {
    v7 = (unsigned int)AudioMediaType_Unsafe;
    v8 = 541LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
      (const char *)v7);
    goto LABEL_20;
  }
  v9 = (void (__fastcall ***)(_QWORD, GUID *, _QWORD *))*((_QWORD *)this + 12);
  if ( !v9 )
  {
LABEL_10:
    if ( v17 )
    {
      v11 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 40LL))(v17);
      if ( !v11 )
      {
        v6 = -2004287480;
        v8 = 555LL;
LABEL_18:
        v7 = v6;
        goto LABEL_19;
      }
      pv = 0LL;
      v12 = CloneWaveFormat(v11, (struct tWAVEFORMATEX **)&pv);
      v6 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x22E,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
          (const char *)(unsigned int)v12);
        CoTaskMemFree(pv);
        goto LABEL_20;
      }
      *a3 = pv;
      CoTaskMemFree(0LL);
    }
    v6 = 0;
    goto LABEL_20;
  }
  ATL::CComQIPtr<IAPOPreferredFormatSupport,&__s_GUID const _GUID_45ebff37_f274_4272_9d0d_2c48cea9b7c7>::CComQIPtr<IAPOPreferredFormatSupport,&__s_GUID const _GUID_45ebff37_f274_4272_9d0d_2c48cea9b7c7>(
    &pv,
    v9);
  if ( !pv
    || (v10 = (*(__int64 (__fastcall **)(LPVOID, struct IAudioMediaType *, __int64 *))(*(_QWORD *)pv + 24LL))(
                pv,
                v14[0],
                &v17),
        v6 = v10,
        v10 >= 0) )
  {
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&pv);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x224,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
    (const char *)(unsigned int)v10);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&pv);
LABEL_20:
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v17);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)v14);
  return v6;
}
