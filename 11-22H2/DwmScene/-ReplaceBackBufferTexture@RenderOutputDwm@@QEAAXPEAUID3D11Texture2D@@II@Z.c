/*
 * XREFs of ?ReplaceBackBufferTexture@RenderOutputDwm@@QEAAXPEAUID3D11Texture2D@@II@Z @ 0x1800115D8
 * Callers:
 *     ?ClearResourceBindings@SpectreRenderer@@EEAAXXZ @ 0x180018260 (-ClearResourceBindings@SpectreRenderer@@EEAAXXZ.c)
 *     ?Render@SpectreRenderer@@EEAAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@_N2@Z @ 0x180018F90 (-Render@SpectreRenderer@@EEAAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@_N2@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ??4?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@QEAAAEAV012@PEAUID3D11Texture2D@@@Z @ 0x180010FD0 (--4-$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@QEAAAEAV012@PEAUID3D11Texture2D@@@Z.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ?GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A044 (-GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall RenderOutputDwm::ReplaceBackBufferTexture(
        RenderOutputDwm *this,
        struct ID3D11Texture2D *a2,
        unsigned int a3,
        unsigned int a4)
{
  unsigned int v8; // ecx
  unsigned int v9; // edi
  unsigned int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // [rsp+40h] [rbp-A8h] BYREF
  std::_Ref_count_base *v13; // [rsp+48h] [rbp-A0h]
  _BYTE v14[8]; // [rsp+50h] [rbp-98h] BYREF
  std::_Ref_count_base *v15; // [rsp+58h] [rbp-90h]
  _BYTE v16[16]; // [rsp+60h] [rbp-88h] BYREF
  _DWORD v17[12]; // [rsp+70h] [rbp-78h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(RenderOutputDwm *))(*(_QWORD *)this + 280LL))(this) )
  {
    if ( a3 < *((_DWORD *)this + 426) )
      a3 = *((_DWORD *)this + 426);
    if ( a4 < *((_DWORD *)this + 427) )
      a4 = *((_DWORD *)this + 427);
    v8 = *((_DWORD *)this + 428);
    v9 = a3 + v8 - 1 - (a3 + v8 - 1) % v8;
    v10 = a4 + v8 - 1 - (a4 + v8 - 1) % v8;
    a3 = (*(__int64 (__fastcall **)(RenderOutputDwm *))(*(_QWORD *)this + 80LL))(this);
    if ( a3 < v9 )
      a3 = v9;
    a4 = (*(__int64 (__fastcall **)(RenderOutputDwm *))(*(_QWORD *)this + 88LL))(this);
    if ( a4 < v10 )
      a4 = v10;
    if ( a4 * a3 - v10 * v9 >= (int)(float)((float)(int)(a4 * a3) * *((float *)this + 429)) )
    {
      a3 = v9;
      a4 = v10;
    }
  }
  else if ( a2 )
  {
    ((void (__fastcall *)(struct ID3D11Texture2D *, _DWORD *))a2->lpVtbl->GetDesc)(a2, v17);
    a3 = v17[0];
    a4 = v17[1];
  }
  if ( *((struct ID3D11Texture2D **)this + 212) != a2
    || a3 != (*(unsigned int (__fastcall **)(RenderOutputDwm *))(*(_QWORD *)this + 80LL))(this)
    || a4 != (*(unsigned int (__fastcall **)(RenderOutputDwm *))(*(_QWORD *)this + 88LL))(this) )
  {
    v11 = (*(__int64 (__fastcall **)(RenderOutputDwm *, _BYTE *))(*(_QWORD *)this + 376LL))(this, v14);
    std::weak_ptr<Spectre::Engine::RenderDevice>::lock(v11, &v12);
    if ( v15 )
      std::_Ref_count_base::_Decwref(v15);
    if ( v12 )
    {
      Spectre::Engine::Lockable::GetExclusiveLockIfNecessary((Spectre::Engine::Lockable *)(v12 + 24));
      Microsoft::WRL::ComPtr<ID3D11Texture2D>::operator=((__int64 *)this + 212, (__int64)a2);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 144LL))(v12, 0LL);
      std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v16);
    }
    if ( v13 )
      std::_Ref_count_base::_Decref(v13);
  }
}
