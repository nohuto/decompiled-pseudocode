/*
 * XREFs of ?Render@Display@Engine@Spectre@@QEAAXXZ @ 0x180057B28
 * Callers:
 *     ?Render@SpectreRenderer@@EEAAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@_N2@Z @ 0x180018F90 (-Render@SpectreRenderer@@EEAAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@_N2@Z.c)
 *     ?RenderDisplays@Engine@1Spectre@@IEAAXXZ @ 0x18003633C (-RenderDisplays@Engine@1Spectre@@IEAAXXZ.c)
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180011C7C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??4?$atomic@_N@std@@QEAA_N_N@Z @ 0x180040168 (--4-$atomic@_N@std@@QEAA_N_N@Z.c)
 *     ?RenderInternal@Display@Engine@Spectre@@AEAAXXZ @ 0x180057BA4 (-RenderInternal@Display@Engine@Spectre@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::Display::Render(Spectre::Engine::Display *this)
{
  struct _Mtx_internal_imp_t *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  if ( *((_BYTE *)this + 433) )
  {
    v2 = (Spectre::Engine::Display *)((char *)this + 128);
    std::_Mutex_base::lock((Spectre::Engine::Display *)((char *)this + 128));
    if ( *((_DWORD *)this + 9) )
    {
      LOBYTE(v3) = 1;
      std::atomic<bool>::operator=((__int64)this + 120, v3, v4, v5);
      _Cnd_signal((Spectre::Engine::Display *)((char *)this + 208));
    }
    else
    {
      Spectre::Engine::Display::RenderInternal(this);
    }
    _Mtx_unlock(v2);
  }
}
