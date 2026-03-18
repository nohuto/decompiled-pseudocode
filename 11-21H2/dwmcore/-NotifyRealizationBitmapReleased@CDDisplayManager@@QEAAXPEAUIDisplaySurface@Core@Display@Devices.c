/*
 * XREFs of ?NotifyRealizationBitmapReleased@CDDisplayManager@@QEAAXPEAUIDisplaySurface@Core@Display@Devices@Windows@@@Z @ 0x180287B8C
 * Callers:
 *     ??1CDxHandleBitmapRealization@@MEAA@XZ @ 0x1800659A4 (--1CDxHandleBitmapRealization@@MEAA@XZ.c)
 *     ?ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ @ 0x1802A4430 (-ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDDisplayManager::NotifyRealizationBitmapReleased(
        CDDisplayManager *this,
        struct Windows::Devices::Display::Core::IDisplaySurface *a2)
{
  _QWORD *v2; // rdi
  _QWORD *i; // rbx

  v2 = (_QWORD *)*((_QWORD *)&xmmword_1803D39E8 + 1);
  for ( i = (_QWORD *)xmmword_1803D39E8; i != v2; ++i )
    (**(void (__fastcall ***)(_QWORD, struct Windows::Devices::Display::Core::IDisplaySurface *))*i)(*i, a2);
}
