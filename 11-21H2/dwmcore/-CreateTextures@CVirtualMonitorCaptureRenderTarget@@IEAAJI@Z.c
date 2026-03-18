/*
 * XREFs of ?CreateTextures@CVirtualMonitorCaptureRenderTarget@@IEAAJI@Z @ 0x1801C5BCC
 * Callers:
 *     ?ProcessBindData@CVirtualMonitorCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VIRTUALMONITORCAPTURERENDERTARGET_BINDDATA@@@Z @ 0x1801C5F2C (-ProcessBindData@CVirtualMonitorCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VIRT.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x18002D294 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E98E4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@?$vector@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@@std@@QEAAPEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1801C3D2C (--$_Emplace_reallocate@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX.c)
 *     ?GetD3DDeviceNoRef@CDeviceManager@CCaptureRenderTarget@@QEAAPEAVCD3DDevice@@AEBU_LUID@@PEAUIFlipProducer@@@Z @ 0x1801C4B90 (-GetD3DDeviceNoRef@CDeviceManager@CCaptureRenderTarget@@QEAAPEAVCD3DDevice@@AEBU_LUID@@PEAUIFlip.c)
 */

__int64 __fastcall CVirtualMonitorCaptureRenderTarget::CreateTextures(
        CVirtualMonitorCaptureRenderTarget *this,
        unsigned int a2)
{
  unsigned int v4; // ebx
  _QWORD *v5; // rax
  struct IFlipProducer *v6; // r8
  struct CD3DDevice *D3DDeviceNoRef; // rax
  __int64 *v8; // r15
  int v9; // esi
  int v10; // eax
  __int64 v11; // rax
  __int64 (__fastcall *v12)(__int64 *, _DWORD *, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rbx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // eax
  _QWORD *v17; // rdx
  __int64 v18; // rcx
  unsigned int v20; // [rsp+28h] [rbp-29h]
  __int64 v21; // [rsp+38h] [rbp-19h] BYREF
  __int64 (__fastcall ***v22)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-11h] BYREF
  void *v23; // [rsp+48h] [rbp-9h] BYREF
  void *v24; // [rsp+50h] [rbp-1h] BYREF
  _DWORD v25[12]; // [rsp+58h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v4 = 0;
  v5 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, void **))(**(_QWORD **)(*((_QWORD *)this + 2) + 264LL) + 40LL))(
                   *(_QWORD *)(*((_QWORD *)this + 2) + 264LL),
                   &v24);
  v6 = (struct IFlipProducer *)*((_QWORD *)this + 245);
  *((_QWORD *)this + 235) = *v5;
  D3DDeviceNoRef = CCaptureRenderTarget::CDeviceManager::GetD3DDeviceNoRef(
                     (struct CD3DDevice **)this + 234,
                     (const struct _LUID *)this + 235,
                     v6);
  if ( D3DDeviceNoRef )
  {
    v8 = (__int64 *)*((_QWORD *)D3DDeviceNoRef + 69);
    v9 = 0;
    if ( a2 )
    {
      while ( 1 )
      {
        v10 = *((_DWORD *)this + 523);
        v22 = 0LL;
        v21 = 0LL;
        v25[6] = 0;
        v25[7] = 0;
        v25[9] = 0;
        v25[0] = v10;
        v25[1] = *((_DWORD *)this + 524);
        v11 = *v8;
        v25[2] = 1;
        v25[3] = 1;
        v25[4] = 87;
        v12 = *(__int64 (__fastcall **)(__int64 *, _DWORD *, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(v11 + 40);
        v25[5] = 1;
        v25[8] = 40;
        v25[10] = 2050;
        wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset((__int64 *)&v22);
        v13 = v12(v8, v25, 0LL, &v22);
        v4 = v13;
        if ( v13 < 0 )
          break;
        v15 = v21;
        v21 = 0LL;
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        v16 = (**v22)(v22, &GUID_30961379_4609_4a41_998e_54fe567ee0c1, &v21);
        v4 = v16;
        if ( v16 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x4E8,
            (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/com.h",
            (const char *)(unsigned int)v16);
          MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0LL, v4, 0xCDu);
          goto LABEL_17;
        }
        v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, void **))(*(_QWORD *)v21 + 104LL))(
                v21,
                0LL,
                0x10000000LL,
                0LL,
                &v24);
        v4 = v13;
        if ( v13 < 0 )
        {
          v20 = 206;
          goto LABEL_16;
        }
        v17 = (_QWORD *)*((_QWORD *)this + 252);
        v23 = v24;
        if ( v17 == *((_QWORD **)this + 253) )
        {
          std::vector<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::_Emplace_reallocate<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>(
            (__int64 *)this + 251,
            (__int64)v17,
            &v23);
        }
        else
        {
          v23 = 0LL;
          *v17 = v24;
          *((_QWORD *)this + 252) += 8LL;
        }
        wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v23);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v21);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v22);
        if ( ++v9 >= a2 )
          return v4;
      }
      v20 = 203;
LABEL_16:
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, v13, v20);
LABEL_17:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v21);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v22);
    }
  }
  return v4;
}
