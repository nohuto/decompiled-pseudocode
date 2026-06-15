/*
 * XREFs of ?IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0009_0001@@PEBUtWAVEFORMATEX@@1PEAPEAU3@@Z @ 0x140025D90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x140019CB0 (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x140025F08 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     CreateAudioMediaType_Unsafe @ 0x140031A30 (CreateAudioMediaType_Unsafe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x140051A78 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CAPOWrapperSrv::IsAudioFormatSupportedRemote(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        struct tWAVEFORMATEX **a5)
{
  __int64 v6; // r8
  struct tWAVEFORMATEX *v7; // rbx
  __int64 v9; // rdx
  __int64 v12; // rcx
  int v13; // edi
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  int v17; // esi
  const struct tWAVEFORMATEX *v18; // rax
  _DWORD *v20; // rcx
  struct tWAVEFORMATEX *v21; // [rsp+30h] [rbp-41h] BYREF
  __int64 v22; // [rsp+38h] [rbp-39h] BYREF
  __int64 v23; // [rsp+40h] [rbp-31h] BYREF
  __int64 v24; // [rsp+48h] [rbp-29h] BYREF
  _BYTE v25[32]; // [rsp+50h] [rbp-21h] BYREF
  struct tWAVEFORMATEX **v26; // [rsp+70h] [rbp-1h]
  int v27; // [rsp+78h] [rbp+7h]
  int v28; // [rsp+7Ch] [rbp+Bh]

  v6 = 0LL;
  v7 = 0LL;
  v23 = 0LL;
  v9 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v24 = 0LL;
  if ( a3 )
  {
    v13 = CreateAudioMediaType_Unsafe(a3, (unsigned int)*(unsigned __int16 *)(a3 + 16) + 18, &v24);
    if ( v13 < 0 )
      goto LABEL_20;
    v9 = v24;
    v6 = v23;
  }
  if ( a4 )
  {
    v13 = CreateAudioMediaType_Unsafe(a4, (unsigned int)*(unsigned __int16 *)(a4 + 16) + 18, &v23);
    if ( v13 < 0 )
      goto LABEL_20;
    v9 = v24;
    v6 = v23;
  }
  v14 = a1 + 8;
  v15 = *(_QWORD *)(a1 + 8);
  if ( a2 )
    v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(v15 + 64))(v14, v9, v6, &v22);
  else
    v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(v15 + 56))(v14, v9, v6, &v22);
  v13 = v16;
  if ( v16 >= 0 )
  {
    v17 = v16;
    if ( !v22 )
      goto LABEL_14;
    v18 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 40LL))(v22);
    if ( v18 )
    {
      v13 = CloneWaveFormat(v18, &v21);
      if ( v13 >= 0 )
      {
        *a5 = v21;
LABEL_14:
        if ( v17 )
          v13 = v17;
        goto LABEL_16;
      }
      v7 = v21;
    }
    else
    {
      v13 = -2004287480;
    }
  }
LABEL_20:
  v20 = (_DWORD *)wil::details::static_lazy<AudioDgTelemetryProvider>::get(
                    v12,
                    _lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_)[1];
  if ( *v20 > 2u )
  {
    v28 = 0;
    v26 = &v21;
    LODWORD(v21) = v13;
    v27 = 4;
    tlgWriteTransfer_EtwEventWriteTransfer((_DWORD)v20, (unsigned int)&unk_1400A6D1C, 0, 0, 3, (__int64)v25);
  }
LABEL_16:
  CoTaskMemFree(v7);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v22);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v23);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v24);
  return (unsigned int)v13;
}
