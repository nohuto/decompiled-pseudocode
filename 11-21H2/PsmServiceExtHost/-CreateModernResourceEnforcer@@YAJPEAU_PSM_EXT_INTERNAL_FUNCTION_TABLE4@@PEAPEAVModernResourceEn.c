/*
 * XREFs of ?CreateModernResourceEnforcer@@YAJPEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@PEAPEAVModernResourceEnforcer@@@Z @ 0x18004822C
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x180048C40 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     ?Init@ModernResourceEnforcer@@IEAAJPEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@@Z @ 0x1800482A0 (-Init@ModernResourceEnforcer@@IEAAJPEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@@Z.c)
 *     ??0ModernResourceEnforcer@@IEAA@XZ @ 0x180048350 (--0ModernResourceEnforcer@@IEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004F84C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CreateModernResourceEnforcer(
        struct _PSM_EXT_INTERNAL_FUNCTION_TABLE4 *a1,
        struct ModernResourceEnforcer **a2)
{
  ModernResourceEnforcer *v4; // rax
  ModernResourceEnforcer *v5; // rax
  struct ModernResourceEnforcer *v6; // rbx
  int v7; // edi

  v4 = (ModernResourceEnforcer *)operator new(0x130uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 && (v5 = ModernResourceEnforcer::ModernResourceEnforcer(v4), (v6 = v5) != 0LL) )
  {
    v7 = ModernResourceEnforcer::Init(v5, a1);
    if ( v7 < 0 )
      (*(void (__fastcall **)(struct ModernResourceEnforcer *))(*(_QWORD *)v6 + 16LL))(v6);
    else
      *a2 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
