/*
 * XREFs of ??_GWin32PrimaryAppProxy@@UEAAPEAXI@Z @ 0x1805A7740
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

Win32PrimaryAppProxy *__fastcall Win32PrimaryAppProxy::`scalar deleting destructor'(
        Win32PrimaryAppProxy *this,
        char a2)
{
  std::wstring::_Tidy_deallocate((__int64)this + 8);
  *(_QWORD *)this = &PrimaryAppProxyBase::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
