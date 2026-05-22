/*
 * XREFs of ?ThrottleGestureNotification@MagnifierControllerProxy@@AEAA_NIAEBUPoint@Foundation@Windows@@@Z @ 0x18017A9D0
 * Callers:
 *     ?PanGestureDetected@MagnifierControllerProxy@@UEAAJW4MagnifierGestureState@Input@Internal@UI@Windows@@IAEBUPoint@Foundation@6@@Z @ 0x18017A8D0 (-PanGestureDetected@MagnifierControllerProxy@@UEAAJW4MagnifierGestureState@Input@Internal@UI@Win.c)
 *     ?ZoomGestureDetected@MagnifierControllerProxy@@UEAAJW4MagnifierGestureState@Input@Internal@UI@Windows@@IAEBUPoint@Foundation@6@@Z @ 0x18017B2F0 (-ZoomGestureDetected@MagnifierControllerProxy@@UEAAJW4MagnifierGestureState@Input@Internal@UI@Wi.c)
 * Callees:
 *     <none>
 */

bool __fastcall MagnifierControllerProxy::ThrottleGestureNotification(
        MagnifierControllerProxy *this,
        int a2,
        const struct Windows::Foundation::Point *a3)
{
  if ( a2 == 1 )
  {
    if ( !*((_BYTE *)this + 56) )
      return 1;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)a3 - *((float *)this + 15)) & _xmm) <= 1.0 )
      return COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a3 + 1) - *((float *)this + 16)) & _xmm) <= 1.0;
  }
  return 0;
}
