/*
 * XREFs of ?AllocateCommonBuffer@FxDmaEnabler@@QEAAX_KPEAPEAXPEAT_LARGE_INTEGER@@@Z @ 0x1C001AD04
 * Callers:
 *     ?AllocateCommonBuffer@FxCommonBuffer@@QEAAJ_K@Z @ 0x1C0020304 (-AllocateCommonBuffer@FxCommonBuffer@@QEAAJ_K@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qi @ 0x1C001C060 (WPP_IFR_SF_qi.c)
 */

void __fastcall FxDmaEnabler::AllocateCommonBuffer(
        FxDmaEnabler *this,
        unsigned __int64 Length,
        void **BufferVA,
        _LARGE_INTEGER *BufferPA)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  _LARGE_INTEGER *v5; // r10
  const void *globals; // rax
  __int64 level; // rdx
  unsigned int v8; // r8d

  m_Globals = this->m_Globals;
  *BufferVA = 0LL;
  v5 = BufferPA;
  BufferPA->QuadPart = 0LL;
  if ( Length > 0xFFFFFFFF )
  {
    globals = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qi(m_Globals, level, v8, 0x1Cu, WPP_FxDmaEnabler_cpp_Traceguids, globals, level);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  else
  {
    LOBYTE(BufferPA) = 1;
    *BufferVA = this->m_SimplexAdapterInfo.AdapterObject->DmaOperations->AllocateCommonBuffer(
                  this->m_SimplexAdapterInfo.AdapterObject,
                  Length,
                  v5,
                  BufferPA);
  }
}
