/*
 * XREFs of ?GetPlaceModeButton@CDragVisualAcc@@UEAAXIPEAPEAUIRawElementProviderFragment@@@Z @ 0x1805F63B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDragVisualAcc::GetPlaceModeButton(
        CDragVisualAcc *this,
        unsigned int a2,
        struct IRawElementProviderFragment **a3)
{
  int v3; // eax
  void (__fastcall ***v4)(_QWORD, GUID *); // rcx

  *a3 = 0LL;
  if ( *((_DWORD *)this + 4) == 2 )
  {
    v3 = *((_DWORD *)this + 46);
    if ( v3 )
    {
      if ( a2 <= v3 - 1 )
      {
        v4 = *(void (__fastcall ****)(_QWORD, GUID *))(*((_QWORD *)this + 22) + 8LL * a2);
        (**v4)(v4, &GUID_f7063da8_8359_439c_9297_bbc5299a7d87);
      }
    }
  }
}
