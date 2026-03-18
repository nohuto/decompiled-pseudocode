/*
 * XREFs of CAsyncTask_CD3DDevice::D3D12Resources_::Start__lambda_88358cf897930614284adb3422b4c545___ @ 0x18027C7BC
 * Callers:
 *     ?EnsureBeginCreateD3D12Resources@CD3DDevice@@AEAAJXZ @ 0x18027DC58 (-EnsureBeginCreateD3D12Resources@CD3DDevice@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180178750 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     _lambda_88358cf897930614284adb3422b4c545_::_lambda_88358cf897930614284adb3422b4c545_ @ 0x18027C964 (_lambda_88358cf897930614284adb3422b4c545_--_lambda_88358cf897930614284adb3422b4c545_.c)
 *     ??0?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@AEAA@$$QEAV?$function@$$A6AJPEAUD3D12Resources@CD3DDevice@@@Z@std@@@Z @ 0x18027C9D0 (--0-$CAsyncTask@UD3D12Resources@CD3DDevice@@@@AEAA@$$QEAV-$function@$$A6AJPEAUD3D12Resources@CD3.c)
 *     ??1?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@QEAA@XZ @ 0x18027CAB8 (--1-$CAsyncTask@UD3D12Resources@CD3DDevice@@@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWork@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_WORK@@@Z @ 0x18027F710 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThreadP.c)
 */

__int64 __fastcall CAsyncTask_CD3DDevice::D3D12Resources_::Start__lambda_88358cf897930614284adb3422b4c545___(
        __int64 a1,
        PTP_WORK **a2)
{
  char v2; // bl
  LPVOID v5; // rdi
  __int64 *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  PTP_WORK *v9; // rdi
  _QWORD *v10; // rdx
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r9
  PTP_WORK ThreadpoolWork; // rax
  const char *v15; // r9
  int LastError; // eax
  _BYTE v18[24]; // [rsp+28h] [rbp-80h] BYREF
  _QWORD v19[7]; // [rsp+40h] [rbp-68h] BYREF
  _QWORD *v20; // [rsp+78h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v2 = 0;
  v5 = DefaultHeap::Alloc(0x68uLL);
  if ( v5 )
  {
    v6 = (__int64 *)lambda_88358cf897930614284adb3422b4c545_::_lambda_88358cf897930614284adb3422b4c545_(v18, a1);
    v19[0] = off_1802C0300;
    v7 = *v6;
    *v6 = 0LL;
    v19[1] = v7;
    v8 = v6[1];
    v6[1] = 0LL;
    v19[2] = v8;
    v20 = v19;
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v6 + 1);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v6);
    v9 = (PTP_WORK *)CAsyncTask<CD3DDevice::D3D12Resources>::CAsyncTask<CD3DDevice::D3D12Resources>(v5, v19);
    v2 = 1;
  }
  else
  {
    v9 = 0LL;
  }
  if ( (v2 & 1) != 0 && v20 )
  {
    v10 = v19;
    LOBYTE(v10) = v20 != v19;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v20 + 32LL))(v20, v10);
  }
  if ( !v9 )
  {
    v11 = -2147024882;
    v12 = 52LL;
    v13 = 2147942414LL;
    goto LABEL_12;
  }
  ThreadpoolWork = CreateThreadpoolWork(
                     (PTP_WORK_CALLBACK)_lambda_a704c69ed083326e40d515dc4d6b076b_::_lambda_invoker_cdecl_,
                     v9,
                     0LL);
  wil::details::unique_storage<wil::details::resource_policy<_TP_WORK *,void (*)(_TP_WORK *),&public: static void wil::details::DestroyThreadPoolWork<0>::Destroy(_TP_WORK *),wistd::integral_constant<unsigned __int64,0>,_TP_WORK *,_TP_WORK *,0,std::nullptr_t>>::reset(
    v9,
    ThreadpoolWork);
  if ( *v9 )
  {
    SubmitThreadpoolWork(*v9);
    goto LABEL_15;
  }
  LastError = wil::details::in1diag3::Return_GetLastError(
                retaddr,
                (void *)0x51,
                (unsigned int)"onecoreuap\\Windows\\DWM\\dwmcore\\hw\\AsyncTask.h",
                v15);
  v11 = LastError;
  if ( LastError >= 0 )
  {
LABEL_15:
    *a2 = v9;
    return 0;
  }
  v13 = (unsigned int)LastError;
  v12 = 54LL;
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (int)"onecoreuap\\Windows\\DWM\\dwmcore\\hw\\AsyncTask.h",
    (const char *)v13);
  if ( v9 )
  {
    CAsyncTask<CD3DDevice::D3D12Resources>::~CAsyncTask<CD3DDevice::D3D12Resources>(v9);
    operator delete(v9);
  }
  return v11;
}
