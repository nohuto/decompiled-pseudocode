/*
 * XREFs of ?v_StartDrag@SwitchItemThumbnailElement@@MEAAXAEBUCPoint@Geometry@@@Z @ 0x180587550
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall SwitchItemThumbnailElement::v_StartDrag(
        SwitchItemThumbnailElement *this,
        const struct Geometry::CPoint *a2)
{
  unsigned int v3; // edi
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 73) + 32LL))(
         *((_QWORD *)this + 73),
         *((_QWORD *)this + 72));
  if ( v3 )
  {
    v4 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 10) + 424LL))(
                     *((_QWORD *)this + 10),
                     &v6);
    (*(void (__fastcall **)(_QWORD, _QWORD, SwitchItemThumbnailElement *, _QWORD))(*(_QWORD *)*v4 + 24LL))(
      *v4,
      v3,
      this,
      *((_QWORD *)this + 72));
    v5 = v6;
    if ( v6 )
    {
      v6 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
}
