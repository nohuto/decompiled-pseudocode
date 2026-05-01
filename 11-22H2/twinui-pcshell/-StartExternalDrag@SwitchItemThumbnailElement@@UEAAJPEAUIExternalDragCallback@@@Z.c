/*
 * XREFs of ?StartExternalDrag@SwitchItemThumbnailElement@@UEAAJPEAUIExternalDragCallback@@@Z @ 0x1805870D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall SwitchItemThumbnailElement::StartExternalDrag(
        SwitchItemThumbnailElement *this,
        struct IExternalDragCallback *a2)
{
  (*(void (__fastcall **)(_QWORD, _QWORD, struct IExternalDragCallback *))(**((_QWORD **)this + 39) + 96LL))(
    *((_QWORD *)this + 39),
    *((_QWORD *)this + 38),
    a2);
  return 0LL;
}
