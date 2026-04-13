/*
 * XREFs of ??_Glocale@std@@QEAAPEAXI@Z @ 0x180059CF4
 * Callers:
 *     ?_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z @ 0x18000524C (-_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z.c)
 *     ??1?$basic_streambuf@GU?$char_traits@G@std@@@std@@UEAA@XZ @ 0x180057CC0 (--1-$basic_streambuf@GU-$char_traits@G@std@@@std@@UEAA@XZ.c)
 *     ??1?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAA@XZ @ 0x180057D30 (--1-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAA@XZ.c)
 *     ??_E?$basic_streambuf@_WU?$char_traits@_W@std@@@std@@UEAAPEAXI@Z @ 0x180059930 (--_E-$basic_streambuf@_WU-$char_traits@_W@std@@@std@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
std::locale *__fastcall std::locale::`scalar deleting destructor'(std::locale *this, char a2)
{
  __int64 v4; // rcx
  void (__fastcall ***v5)(_QWORD, __int64); // rax

  v4 = *(_QWORD *)this;
  if ( v4 )
  {
    v5 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    if ( v5 )
      (**v5)(v5, 1LL);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
