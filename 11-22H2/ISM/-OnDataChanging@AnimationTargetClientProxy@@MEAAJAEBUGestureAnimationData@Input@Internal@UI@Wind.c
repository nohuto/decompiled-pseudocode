/*
 * XREFs of ?OnDataChanging@AnimationTargetClientProxy@@MEAAJAEBUGestureAnimationData@Input@Internal@UI@Windows@@@Z @ 0x180163F90
 * Callers:
 *     <none>
 * Callees:
 *     ?SetData@AnimationTargetClientProxy@@QEAAXAEBUGestureAnimationData@Input@Internal@UI@Windows@@@Z @ 0x1801640E8 (-SetData@AnimationTargetClientProxy@@QEAAXAEBUGestureAnimationData@Input@Internal@UI@Windows@@@Z.c)
 */

__int64 __fastcall AnimationTargetClientProxy::OnDataChanging(
        AnimationTargetClientProxy *this,
        const struct Windows::UI::Internal::Input::GestureAnimationData *a2)
{
  AnimationTargetClientProxy::SetData(this, a2);
  return 0LL;
}
