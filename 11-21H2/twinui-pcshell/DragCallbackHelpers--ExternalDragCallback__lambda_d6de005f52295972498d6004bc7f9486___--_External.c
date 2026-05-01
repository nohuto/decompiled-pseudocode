/*
 * XREFs of DragCallbackHelpers::ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___::_ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___ @ 0x1804D72F8
 * Callers:
 *     DragCallbackHelpers::ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___::_scalar_deleting_destructor_ @ 0x1804D7690 (DragCallbackHelpers--ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___--_scalar_d.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CancelDrag@ElementDragData@@AEAAXXZ @ 0x1804D770C (-CancelDrag@ElementDragData@@AEAAXXZ.c)
 */

__int64 __fastcall DragCallbackHelpers::ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___::_ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___(
        __int64 a1)
{
  ElementDragData **v2; // rdi
  __int64 result; // rax

  *(_QWORD *)a1 = off_1806614F8;
  v2 = (ElementDragData **)(a1 + 24);
  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    ElementDragData::CancelDrag(*v2);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(a1 + 32));
  result = Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v2);
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
