/*
 * XREFs of ?GetDeviceByInterfacePath@EndpointCollection@@UEAAJPEBGPEAPEAUIEndpointDevice@@@Z @ 0x1801638E0
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyTo@?$CComPtrBase@UIEndpointDevice@@@ATL@@QEAAJPEAPEAUIEndpointDevice@@@Z @ 0x180004D60 (-CopyTo@-$CComPtrBase@UIEndpointDevice@@@ATL@@QEAAJPEAPEAUIEndpointDevice@@@Z.c)
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@?$CComPtrBase@UIPart@@@ATL@@QEAAXXZ @ 0x1800487E0 (-Release@-$CComPtrBase@UIPart@@@ATL@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall EndpointCollection::GetDeviceByInterfacePath(
        EndpointCollection *this,
        char *a2,
        struct IEndpointDevice **a3)
{
  int v5; // edi
  int v6; // ebx
  __int64 v7; // rcx
  unsigned __int16 *v8; // rax
  int v9; // r8d
  int v10; // ecx
  void (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-20h] BYREF
  __int64 v13; // [rsp+28h] [rbp-18h] BYREF
  __int64 v14[2]; // [rsp+30h] [rbp-10h] BYREF
  LPVOID pv; // [rsp+68h] [rbp+28h] BYREF
  __int64 v16; // [rsp+78h] [rbp+38h] BYREF

  v14[0] = 0LL;
  v16 = 0LL;
  v5 = 0;
  if ( a2 )
  {
    if ( a3 )
    {
      *a3 = 0LL;
      v6 = (*(__int64 (__fastcall **)(EndpointCollection *, __int64 *))(*(_QWORD *)this + 64LL))(this, v14);
      if ( v6 >= 0 )
      {
        do
        {
          ATL::CComPtrBase<IPart>::Release(&v16);
          v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14[0] + 24LL))(v14[0], &v16);
          if ( v6 < 0 )
            break;
          if ( !v16 )
            goto LABEL_19;
          v12 = 0LL;
          pv = 0LL;
          v6 = (*(__int64 (__fastcall **)(__int64, void (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v16 + 24LL))(
                 v16,
                 &v12);
          if ( v6 < 0 )
          {
            CoTaskMemFree(pv);
            pv = 0LL;
            wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v12);
            break;
          }
          v7 = 0LL;
          v13 = 0LL;
          if ( v12 )
          {
            (**v12)(v12, &GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21, &v13);
            v7 = v13;
          }
          v6 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v7 + 96LL))(v7, &pv);
          if ( v6 >= 0 )
          {
            v8 = (unsigned __int16 *)pv;
            do
            {
              v9 = *(unsigned __int16 *)((char *)v8 + a2 - (_BYTE *)pv);
              v10 = *v8 - v9;
              if ( v10 )
                break;
              ++v8;
            }
            while ( v9 );
            if ( !v10 )
            {
              v5 = 1;
              ATL::CComPtrBase<IEndpointDevice>::CopyTo(&v16, a3);
            }
          }
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v13);
          CoTaskMemFree(pv);
          pv = 0LL;
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v12);
          if ( !v16 )
          {
            if ( v5 )
              break;
LABEL_19:
            v6 = -2147023728;
            break;
          }
        }
        while ( !v5 );
      }
    }
    else
    {
      v6 = -2147467261;
    }
  }
  else
  {
    v6 = -2147024809;
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v16);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(v14);
  return (unsigned int)v6;
}
