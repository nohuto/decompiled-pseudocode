/*
 * XREFs of ??1Tween@Tweening@Utils@Spectre@@QEAA@XZ @ 0x180091EF0
 * Callers:
 *     ??_GTween@Tweening@Utils@Spectre@@QEAAPEAXI@Z @ 0x18009201C (--_GTween@Tweening@Utils@Spectre@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18001DD9C (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ??1?$unique_ptr@VITweenable@Tweening@Utils@Spectre@@U?$default_delete@VITweenable@Tweening@Utils@Spectre@@@std@@@std@@QEAA@XZ @ 0x180091ED0 (--1-$unique_ptr@VITweenable@Tweening@Utils@Spectre@@U-$default_delete@VITweenable@Tweening@Utils.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Spectre::Utils::Tweening::Tween::~Tween(Spectre::Utils::Tweening::Tween *this, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  std::_Func_class<void,>::_Tidy((__int64)this + 104, a2);
  v4 = *((_QWORD *)this + 12);
  if ( v4 )
  {
    LOBYTE(v3) = v4 != (_QWORD)this + 40;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 32LL))(v4, v3);
    *((_QWORD *)this + 12) = 0LL;
  }
  std::unique_ptr<Spectre::Utils::Tweening::ITweenable>::~unique_ptr<Spectre::Utils::Tweening::ITweenable>((_QWORD *)this + 4);
  std::unique_ptr<Spectre::Utils::Tweening::ExponentialEaseInOutCurve>::~unique_ptr<Spectre::Utils::Tweening::ExponentialEaseInOutCurve>((__int64 *)this);
}
