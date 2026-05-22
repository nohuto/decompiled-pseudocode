/*
 * XREFs of ?Release@?$NestedWinRtImplements@VVisualIterator@Composition@UI@Windows@@U?$IIterator@PEAVVisual@Composition@UI@Windows@@@Collections@Foundation@4@@WRL2@Microsoft@@UEAAKXZ @ 0x180074D70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::VisualIterator,Windows::Foundation::Collections::IIterator<Windows::UI::Composition::Visual *>>::Release(
        __int64 a1,
        __int64 a2)
{
  volatile signed __int32 *v2; // rcx
  unsigned __int32 v3; // ebx

  v2 = (volatile signed __int32 *)(a1 - 40);
  v3 = _InterlockedDecrement(v2 + 4);
  if ( !v3 )
  {
    LOBYTE(a2) = 1;
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v2 + 64LL))(v2, a2);
  }
  return v3;
}
