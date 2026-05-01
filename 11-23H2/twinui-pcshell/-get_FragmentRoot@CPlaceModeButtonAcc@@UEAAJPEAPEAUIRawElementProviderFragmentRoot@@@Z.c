/*
 * XREFs of ?get_FragmentRoot@CPlaceModeButtonAcc@@UEAAJPEAPEAUIRawElementProviderFragmentRoot@@@Z @ 0x1805F77A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CPlaceModeButtonAcc::get_FragmentRoot(
        CPlaceModeButtonAcc *this,
        struct IRawElementProviderFragmentRoot **a2)
{
  __int64 result; // rax
  __int64 (__fastcall ***v3)(_QWORD, GUID *, struct IRawElementProviderFragmentRoot **); // rcx

  *a2 = 0LL;
  result = 2147746305LL;
  v3 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IRawElementProviderFragmentRoot **))*((_QWORD *)this + 7);
  if ( v3 )
    return (**v3)(v3, &GUID_620ce2a5_ab8f_40a9_86cb_de3c75599b58, a2);
  return result;
}
