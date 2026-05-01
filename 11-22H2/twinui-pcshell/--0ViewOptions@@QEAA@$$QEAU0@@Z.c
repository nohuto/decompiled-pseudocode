/*
 * XREFs of ??0ViewOptions@@QEAA@$$QEAU0@@Z @ 0x1802DA85E
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4b0775d64c2392808fe7dff402e255dc___::CTaskWrapper__lambda_4b0775d64c2392808fe7dff402e255dc_____lambda_4b0775d64c2392808fe7dff402e255dc___ @ 0x1802039F4 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4b0775d64c2392808fe7dff402e255dc___--CTaskW.c)
 *     ?GetViewOptions@@YA?AUViewOptions@@AEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@AEBV?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x180523CF8 (-GetViewOptions@@YA-AUViewOptions@@AEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewOptions::ViewOptions(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax

  *(_BYTE *)a1 = *(_BYTE *)a2;
  *(_BYTE *)(a1 + 1) = *(_BYTE *)(a2 + 1);
  *(_BYTE *)(a1 + 2) = *(_BYTE *)(a2 + 2);
  *(_BYTE *)(a1 + 3) = *(_BYTE *)(a2 + 3);
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  v4 = *(_QWORD *)(a2 + 32);
  v5 = *(_QWORD *)(a2 + 48);
  v6 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_QWORD *)(a2 + 40) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a1 + 32) = v4;
  result = a1;
  *(_QWORD *)(a1 + 40) = v6;
  *(_QWORD *)(a1 + 48) = v5;
  return result;
}
