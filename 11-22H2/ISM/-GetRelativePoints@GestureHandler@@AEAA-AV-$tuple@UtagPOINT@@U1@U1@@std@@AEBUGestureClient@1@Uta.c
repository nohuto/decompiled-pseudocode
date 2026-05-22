/*
 * XREFs of ?GetRelativePoints@GestureHandler@@AEAA?AV?$tuple@UtagPOINT@@U1@U1@@std@@AEBUGestureClient@1@UtagPOINTF@@@Z @ 0x18016579C
 * Callers:
 *     ?CancelOperation@GestureHandler@@QEAAXXZ @ 0x180164BA0 (-CancelOperation@GestureHandler@@QEAAXXZ.c)
 *     ?ProcessGesture@GestureHandler@@QEAAJAEBUGestureAnimationProperties@@W4VirtualKeyModifiers@System@Windows@@W4GestureOperationState@@@Z @ 0x180165A18 (-ProcessGesture@GestureHandler@@QEAAJAEBUGestureAnimationProperties@@W4VirtualKeyModifiers@Syste.c)
 * Callees:
 *     ?GetRelativePoint@@YA?AUtagPOINT@@AEBV?$ComPtr@VInputSite@@@WRL@Microsoft@@AEBU1@@Z @ 0x180165760 (-GetRelativePoint@@YA-AUtagPOINT@@AEBV-$ComPtr@VInputSite@@@WRL@Microsoft@@AEBU1@@Z.c)
 */

__int64 *__fastcall GestureHandler::GetRelativePoints(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  bool v6; // zf
  __int64 RelativePoint; // rsi
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 *result; // rax
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+48h] [rbp+10h]

  v13 = a4;
  v6 = *(_QWORD *)(a3 + 16) == 0LL;
  LODWORD(v12) = (int)*(float *)&a4;
  HIDWORD(v12) = (int)*((float *)&a4 + 1);
  if ( v6 )
    RelativePoint = v12;
  else
    RelativePoint = GetRelativePoint((__int64 *)(a3 + 16), (int *)&v12);
  if ( *(_QWORD *)(a3 + 24) )
  {
    v9 = GetRelativePoint((__int64 *)(a3 + 24), (int *)&v12);
  }
  else
  {
    v13 = 0LL;
    v9 = 0LL;
  }
  if ( *(_QWORD *)(a1 + 144) )
  {
    v10 = GetRelativePoint((__int64 *)(a1 + 144), (int *)&v12);
  }
  else
  {
    v12 = 0LL;
    v10 = 0LL;
  }
  *a2 = v10;
  result = a2;
  a2[1] = v9;
  a2[2] = RelativePoint;
  return result;
}
