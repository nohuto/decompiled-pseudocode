/*
 * XREFs of ?SetController@SwitchItemThumbnailElement@@UEAAXPEAUISwitchItemController@@@Z @ 0x1805732E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SwitchItemThumbnailElement::SetController(
        SwitchItemThumbnailElement *this,
        struct ISwitchItemController *a2)
{
  Microsoft::WRL::ComPtr<ISwitchItemController>::operator=((__int64 *)this + 38, (__int64)a2);
}
