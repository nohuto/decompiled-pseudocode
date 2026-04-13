/*
 * XREFs of ??$_Cleanup@UIInspectable@@I@Detail@Collections@Foundation@Windows@@YAXQEAPEAUIInspectable@@I@Z @ 0x1800DB9B0
 * Callers:
 *     ?GetMany@?$IIterator_impl@PEAUIInspectable@@$00@Collections@Foundation@Windows@@UEAAJIPEAPEAUIInspectable@@PEAI@Z @ 0x1800DE6D0 (-GetMany@-$IIterator_impl@PEAUIInspectable@@$00@Collections@Foundation@Windows@@UEAAJIPEAPEAUIIn.c)
 *     ?GetMany@?$IVectorView_impl@PEAUIInspectable@@$00@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIInspectable@@PEAI@Z @ 0x1800DE7C0 (-GetMany@-$IVectorView_impl@PEAUIInspectable@@$00@Collections@Foundation@Windows@@UEAAJIIPEAPEAU.c)
 *     ?GetMany@?$IVector_impl@PEAUIInspectable@@$00@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIInspectable@@PEAI@Z @ 0x1800DE8C0 (-GetMany@-$IVector_impl@PEAUIInspectable@@$00@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIIns.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Detail::_Cleanup<IInspectable,unsigned int>(
        _QWORD *a1,
        unsigned int a2)
{
  __int64 v3; // rdi
  __int64 result; // rax

  if ( a2 )
  {
    v3 = a2;
    do
    {
      result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
      *a1++ = 0LL;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
