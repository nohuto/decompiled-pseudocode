/*
 * XREFs of ??0ViewOptions@@QEAA@$$QEAU0@@Z @ 0x18022DFB6
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_41fdec79629b933043b6dd44cc33a98f___::CTaskWrapper__lambda_41fdec79629b933043b6dd44cc33a98f_____lambda_41fdec79629b933043b6dd44cc33a98f___ @ 0x1801AE184 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_41fdec79629b933043b6dd44cc33a98f___--CTaskW.c)
 *     ?GetViewOptions@@YA?AUViewOptions@@AEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@AEBV?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x1804716CC (-GetViewOptions@@YA-AUViewOptions@@AEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewOptions::ViewOptions(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_BYTE *)a1 = *(_BYTE *)a2;
  *(_BYTE *)(a1 + 1) = *(_BYTE *)(a2 + 1);
  *(_BYTE *)(a1 + 2) = *(_BYTE *)(a2 + 2);
  *(_BYTE *)(a1 + 3) = *(_BYTE *)(a2 + 3);
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
  result = a1;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 40) = 0LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  return result;
}
