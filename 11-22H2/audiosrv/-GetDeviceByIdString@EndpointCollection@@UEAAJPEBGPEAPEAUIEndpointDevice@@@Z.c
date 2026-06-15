/*
 * XREFs of ?GetDeviceByIdString@EndpointCollection@@UEAAJPEBGPEAPEAUIEndpointDevice@@@Z @ 0x180002890
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall EndpointCollection::GetDeviceByIdString(
        EndpointCollection *this,
        char *a2,
        struct IEndpointDevice **a3)
{
  unsigned int v6; // ebx
  struct IEndpointDevice *v7; // rcx
  int v8; // r14d
  int v9; // eax
  int v10; // eax
  void *v11; // rax
  unsigned __int16 *v12; // rcx
  int v13; // edx
  int v14; // r8d
  struct IEndpointDevice *v16; // rcx
  __int64 v17; // [rsp+20h] [rbp-10h] BYREF
  __int64 v18; // [rsp+28h] [rbp-8h] BYREF
  struct IEndpointDevice *v19; // [rsp+68h] [rbp+38h] BYREF
  LPVOID pv; // [rsp+78h] [rbp+48h] BYREF

  v6 = 0;
  v18 = 0LL;
  v7 = 0LL;
  v19 = 0LL;
  v8 = 0;
  if ( a2 )
  {
    if ( a3 )
    {
      *a3 = 0LL;
      v9 = (*(__int64 (__fastcall **)(EndpointCollection *, __int64 *))(*(_QWORD *)this + 64LL))(this, &v18);
      v7 = v19;
      if ( v9 >= 0 )
      {
        while ( 1 )
        {
          if ( v7 )
          {
            v19 = 0LL;
            (*(void (__fastcall **)(struct IEndpointDevice *))(*(_QWORD *)v7 + 16LL))(v7);
          }
          v9 = (*(__int64 (__fastcall **)(__int64, struct IEndpointDevice **))(*(_QWORD *)v18 + 24LL))(v18, &v19);
          v7 = v19;
          if ( v9 < 0 )
            break;
          if ( !v19 )
            goto LABEL_19;
          v17 = 0LL;
          pv = 0LL;
          v10 = (*(__int64 (__fastcall **)(struct IEndpointDevice *, __int64 *))(*(_QWORD *)v19 + 24LL))(v19, &v17);
          if ( v10 < 0
            || (v10 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v17 + 40LL))(v17, &pv), v10 < 0) )
          {
            v6 = v10;
            CoTaskMemFree(pv);
            pv = 0LL;
            wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v17);
            v7 = v19;
            goto LABEL_20;
          }
          v11 = pv;
          v12 = (unsigned __int16 *)pv;
          do
          {
            v13 = *(unsigned __int16 *)((char *)v12 + a2 - (_BYTE *)pv);
            v14 = *v12 - v13;
            if ( v14 )
              break;
            ++v12;
          }
          while ( v13 );
          if ( !v14 )
          {
            v8 = 1;
            v16 = v19;
            *a3 = v19;
            if ( v16 )
            {
              (*(void (__fastcall **)(struct IEndpointDevice *))(*(_QWORD *)v16 + 8LL))(v16);
              v11 = pv;
            }
          }
          CoTaskMemFree(v11);
          pv = 0LL;
          if ( v17 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
          v7 = v19;
          if ( !v19 )
          {
            if ( !v8 )
            {
LABEL_19:
              v6 = -2147023728;
              goto LABEL_20;
            }
            goto LABEL_20;
          }
          if ( v8 )
            goto LABEL_20;
        }
      }
      v6 = v9;
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
LABEL_20:
  if ( v7 )
    (*(void (__fastcall **)(struct IEndpointDevice *))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  return v6;
}
