/*
 * XREFs of ??1CDWMDisplay@@AEAA@XZ @ 0x18003DE98
 * Callers:
 *     ?Release@CDWMDisplay@@QEBAKXZ @ 0x18003DE08 (-Release@CDWMDisplay@@QEBAKXZ.c)
 *     ?IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z @ 0x18003E6AC (-IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDWMDisplay::~CDWMDisplay(CDWMDisplay *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 1) = 0LL;
  }
}
