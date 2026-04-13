/*
 * XREFs of ??$_VectorReplaceAll@U?$IVector_impl@PEAUIInspectable@@$00@Collections@Foundation@Windows@@PEAUIInspectable@@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IVector_impl@PEAUIInspectable@@$00@123@IPEAPEAUIInspectable@@@Z @ 0x1800C6394
 * Callers:
 *     ?ReplaceAll@?$IVector_impl@PEAUIInspectable@@$00@Collections@Foundation@Windows@@UEAAJIPEAPEAUIInspectable@@@Z @ 0x1800CB440 (-ReplaceAll@-$IVector_impl@PEAUIInspectable@@$00@Collections@Foundation@Windows@@UEAAJIPEAPEAUII.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Detail::_VectorReplaceAll<Windows::Foundation::Collections::IVector_impl<IInspectable *,1>,IInspectable *>(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  int v6; // esi
  __int64 i; // rbx

  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL))(a1);
  if ( v6 >= 0 )
  {
    for ( i = 0LL; (unsigned int)i < a2; i = (unsigned int)(i + 1) )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 104LL))(a1, *(_QWORD *)(a3 + 8 * i));
      if ( v6 < 0 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL))(a1);
        return (unsigned int)v6;
      }
    }
  }
  return (unsigned int)v6;
}
