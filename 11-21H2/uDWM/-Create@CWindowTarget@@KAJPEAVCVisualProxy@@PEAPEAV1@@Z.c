/*
 * XREFs of ?Create@CWindowTarget@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z @ 0x1801074F0
 * Callers:
 *     ?CloneVisualTree@CWindowTarget@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1801073C0 (-CloneVisualTree@CWindowTarget@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180010664 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CVisual@@IEAA@XZ @ 0x180026FFC (--0CVisual@@IEAA@XZ.c)
 *     memset_0 @ 0x180060F40 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Attach@?$ComPtr@VCWindowTarget@@@WRL@Microsoft@@QEAAXPEAVCWindowTarget@@@Z @ 0x180107388 (-Attach@-$ComPtr@VCWindowTarget@@@WRL@Microsoft@@QEAAXPEAVCWindowTarget@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowTarget::Create(struct CVisualProxy *a1, struct CWindowTarget **a2)
{
  unsigned int v4; // esi
  CVisual *v5; // rax
  CVisual *v6; // rbx
  struct CWindowTarget *v7; // rax
  CBaseObject *v9; // [rsp+60h] [rbp+18h] BYREF
  CVisual *v10; // [rsp+68h] [rbp+20h]

  v4 = 0;
  v9 = 0LL;
  v5 = (CVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                    WPF::g_pProcessHeap,
                    248LL);
  v6 = v5;
  v10 = v5;
  if ( v5 )
  {
    memset_0(v5, 0, 0xF8uLL);
    CVisual::CVisual(v6);
    *(_QWORD *)v6 = &CWindowTarget::`vftable';
  }
  else
  {
    v6 = 0LL;
  }
  Microsoft::WRL::ComPtr<CWindowTarget>::Attach(&v9, v6);
  v7 = v9;
  if ( v9 )
  {
    *((_QWORD *)v9 + 2) = a1;
    if ( a1 )
    {
      _InterlockedIncrement((volatile signed __int32 *)a1 + 2);
      v7 = v9;
    }
    v9 = 0LL;
    *a2 = v7;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x1Au);
  }
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v9);
  return v4;
}
