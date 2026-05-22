/*
 * XREFs of ?ReadTexture@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Resource@@@Z @ 0x1800F77F4
 * Callers:
 *     ?ReadTexture@CSurfaceFactory@DirectComposition@@QEAAXPEAUIUnknown@@@Z @ 0x1800FBA6C (-ReadTexture@CSurfaceFactory@DirectComposition@@QEAAXPEAUIUnknown@@@Z.c)
 * Callees:
 *     ??1SwapDeviceContextState@DirectComposition@@QEAA@XZ @ 0x180035000 (--1SwapDeviceContextState@DirectComposition@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ??0SwapDeviceContextState@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z @ 0x18009B9F4 (--0SwapDeviceContextState@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CDxDevice::ReadTexture(DirectComposition::CDevice **this, struct ID3D11Resource *a2)
{
  struct ID3D11ResourceVtbl *lpVtbl; // rax
  __int64 v5; // rcx
  DirectComposition::CDevice *v6; // rcx
  __int64 v7; // [rsp+40h] [rbp-19h] BYREF
  __int64 v8; // [rsp+48h] [rbp-11h] BYREF
  const struct DirectComposition::CDxDevice *v9[2]; // [rsp+50h] [rbp-9h] BYREF
  _BYTE v10[16]; // [rsp+60h] [rbp+7h] BYREF
  _BYTE v11[28]; // [rsp+70h] [rbp+17h] BYREF
  int v12; // [rsp+8Ch] [rbp+33h]
  int v13; // [rsp+90h] [rbp+37h]
  int v14; // [rsp+94h] [rbp+3Bh]
  int v15; // [rsp+98h] [rbp+3Fh]

  DirectComposition::SwapDeviceContextState::SwapDeviceContextState(v9, this);
  lpVtbl = a2->lpVtbl;
  v7 = 0LL;
  ((void (__fastcall *)(struct ID3D11Resource *, GUID *, __int64 *))lpVtbl->QueryInterface)(
    a2,
    &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
    &v8);
  v5 = v8;
  if ( v8 )
  {
    (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v8 + 80LL))(v8, v11);
    v6 = this[3];
    v13 = 0;
    v15 = 0;
    v12 = 3;
    v14 = 0x20000;
    if ( (*(int (__fastcall **)(DirectComposition::CDevice *, _BYTE *, _QWORD, __int64 *))(*(_QWORD *)v6 + 40LL))(
           v6,
           v11,
           0LL,
           &v7) >= 0 )
    {
      (*(void (__fastcall **)(DirectComposition::CDevice *, __int64, __int64))(*(_QWORD *)this[9] + 376LL))(
        this[9],
        v7,
        v8);
      if ( (*(int (__fastcall **)(DirectComposition::CDevice *, __int64, _QWORD, __int64, _DWORD, _BYTE *))(*(_QWORD *)this[9] + 112LL))(
             this[9],
             v7,
             0LL,
             1LL,
             0,
             v10) >= 0 )
      {
        __debugbreak();
        (*(void (__fastcall **)(DirectComposition::CDevice *, __int64, _QWORD))(*(_QWORD *)this[9] + 120LL))(
          this[9],
          v7,
          0LL);
      }
    }
    v5 = v8;
  }
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    v5 = v8;
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  DirectComposition::SwapDeviceContextState::~SwapDeviceContextState((DirectComposition::SwapDeviceContextState *)v9);
}
