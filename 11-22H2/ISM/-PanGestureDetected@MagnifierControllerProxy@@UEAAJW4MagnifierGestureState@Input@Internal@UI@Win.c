/*
 * XREFs of ?PanGestureDetected@MagnifierControllerProxy@@UEAAJW4MagnifierGestureState@Input@Internal@UI@Windows@@IAEBUPoint@Foundation@6@@Z @ 0x18017A8D0
 * Callers:
 *     ?DeliverInput@MagnifierGestureTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1801DC680 (-DeliverInput@MagnifierGestureTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PanGestureDetected@BamoMagnifierControllerProxy@@UEAAJW4MagnifierGestureState@Input@Internal@UI@Windows@@IAEBUPoint@Foundation@6@@Z @ 0x18017A6E0 (-PanGestureDetected@BamoMagnifierControllerProxy@@UEAAJW4MagnifierGestureState@Input@Internal@UI.c)
 *     ?ThrottleGestureNotification@MagnifierControllerProxy@@AEAA_NIAEBUPoint@Foundation@Windows@@@Z @ 0x18017A9D0 (-ThrottleGestureNotification@MagnifierControllerProxy@@AEAA_NIAEBUPoint@Foundation@Windows@@@Z.c)
 */

__int64 __fastcall MagnifierControllerProxy::PanGestureDetected(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        const struct Windows::Foundation::Point *a4)
{
  unsigned int v6; // edx
  __int64 v7; // r9
  unsigned int v8; // r10d
  int v9; // eax
  unsigned int v10; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !MagnifierControllerProxy::ThrottleGestureNotification((MagnifierControllerProxy *)(a1 - 8), a2, a4) )
  {
    v9 = BamoMagnifierControllerProxy::PanGestureDetected(a1, v6, v8, v7);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x18,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\magnifier\\processor\\magni"
                 "fiercontrollerproxy.cpp",
        (const char *)(unsigned int)v9);
      return v10;
    }
    *(_BYTE *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 52) = *(_QWORD *)a4;
  }
  return 0LL;
}
