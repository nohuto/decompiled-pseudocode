/*
 * XREFs of ?OnPointerLeftInputEaterElement@CMultitaskingViewFrameElement@@UEAAXXZ @ 0x1804C2B80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CMultitaskingViewFrameElement::OnPointerLeftInputEaterElement(
        CMultitaskingViewFrameElement *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rdx

  v3 = *((_QWORD *)this + 4);
  if ( v3 )
  {
    LOBYTE(a3) = 1;
    (*(void (__fastcall **)(char *, __int64, __int64))(*((_QWORD *)this - 28) + 72LL))((char *)this - 224, v3, a3);
  }
}
