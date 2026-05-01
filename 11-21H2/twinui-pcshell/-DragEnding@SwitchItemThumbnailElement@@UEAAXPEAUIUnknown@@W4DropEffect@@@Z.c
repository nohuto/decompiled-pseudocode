/*
 * XREFs of ?DragEnding@SwitchItemThumbnailElement@@UEAAXPEAUIUnknown@@W4DropEffect@@@Z @ 0x1804CF0A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall SwitchItemThumbnailElement::DragEnding(__int64 a1, struct IUnknown *a2)
{
  __int64 result; // rax

  result = SHIsSameObject(*(struct IUnknown **)(a1 + 576), a2);
  if ( (_DWORD)result )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 584) + 112LL))(*(_QWORD *)(a1 + 584));
  return result;
}
