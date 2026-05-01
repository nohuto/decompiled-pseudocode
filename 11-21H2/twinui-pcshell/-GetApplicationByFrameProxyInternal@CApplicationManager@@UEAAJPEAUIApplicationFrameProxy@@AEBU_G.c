/*
 * XREFs of ?GetApplicationByFrameProxyInternal@CApplicationManager@@UEAAJPEAUIApplicationFrameProxy@@AEBU_GUID@@PEAPEAX@Z @ 0x180128780
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall CApplicationManager::GetApplicationByFrameProxyInternal(
        CApplicationManager *this,
        struct IApplicationFrameProxy *a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rbx
  int v10; // r15d
  int v11; // eax
  int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 (__fastcall ***v15)(_QWORD, GUID *, _QWORD); // rcx
  __int64 (__fastcall ***v16)(_QWORD, const struct _GUID *, void **); // rcx
  __int64 v18; // [rsp+20h] [rbp-28h] BYREF
  __int64 v19[4]; // [rsp+28h] [rbp-20h] BYREF
  __int64 (__fastcall ***v20)(_QWORD, const struct _GUID *, void **); // [rsp+90h] [rbp+48h] BYREF
  __int64 v21; // [rsp+98h] [rbp+50h] BYREF
  const struct _GUID *v22; // [rsp+A0h] [rbp+58h]
  __int64 v23; // [rsp+A8h] [rbp+60h] BYREF

  v22 = a3;
  *a4 = 0LL;
  v20 = 0LL;
  v19[1] = (__int64)a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IApplicationFrameProxy *))(*(_QWORD *)a2 + 8LL))(a2);
  v20 = 0LL;
  v19[2] = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( *((_QWORD *)this + 50) )
  {
    while ( 1 )
    {
      v19[0] = 0LL;
      v9 = *(_QWORD *)(*((_QWORD *)this + 49) + 8 * v8);
      v18 = v9;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      v10 = -1;
      v23 = 0LL;
      v11 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v9)(
              v9,
              &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
              &v23);
      v12 = 0;
      if ( v11 >= 0 )
      {
        v21 = 0LL;
        if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v23 + 496LL))(v23, &v21) >= 0 )
          v10 = ((*(unsigned __int8 (__fastcall **)(__int64, struct IApplicationFrameProxy *))(*(_QWORD *)v21 + 232LL))(
                   v21,
                   a2) != 0)
              - 1;
        v13 = v21;
        if ( v21 )
        {
          v21 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
      v14 = v23;
      if ( v23 )
      {
        v23 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v19);
      if ( !v10 )
        break;
      if ( (unsigned __int64)++v8 >= *((_QWORD *)this + 50) )
        goto LABEL_25;
    }
    v7 = v8;
  }
  else
  {
LABEL_25:
    v12 = -2147319765;
  }
  if ( v12 >= 0 )
  {
    v15 = *(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD))(*((_QWORD *)this + 49) + 8 * v7);
    v12 = (**v15)(v15, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v20);
  }
  if ( a2 )
    (*(void (__fastcall **)(struct IApplicationFrameProxy *))(*(_QWORD *)a2 + 16LL))(a2);
  if ( v12 >= 0 )
    v12 = (**v20)(v20, v22, a4);
  v16 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, const struct _GUID *, void **)))(*v16)[2])(v16);
  }
  return (unsigned int)v12;
}
