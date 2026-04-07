/*
 * XREFs of ??1CDWMDisplay@@AEAA@XZ @ 0x180054AC0
 * Callers:
 *     ?Release@CDWMDisplay@@QEBAKXZ @ 0x180054A64 (-Release@CDWMDisplay@@QEBAKXZ.c)
 *     ?IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z @ 0x180056BB4 (-IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
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
