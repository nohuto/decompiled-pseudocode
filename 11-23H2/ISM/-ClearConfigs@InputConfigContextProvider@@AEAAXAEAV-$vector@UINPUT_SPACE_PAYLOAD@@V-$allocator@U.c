/*
 * XREFs of ?ClearConfigs@InputConfigContextProvider@@AEAAXAEAV?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@@Z @ 0x1800315D4
 * Callers:
 *     ?OnInputConfigMessageReceived@InputConfigContextProvider@@AEAAXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z @ 0x18003143C (-OnInputConfigMessageReceived@InputConfigContextProvider@@AEAAXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z.c)
 *     ??1InputConfigContextProvider@@EEAA@XZ @ 0x1801160DC (--1InputConfigContextProvider@@EEAA@XZ.c)
 *     ?OnInputConfigPayloadReceived@InputConfigContextProvider@@QEAAXAEBV?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@@Z @ 0x1801161B4 (-OnInputConfigPayloadReceived@InputConfigContextProvider@@QEAAXAEBV-$vector@UINPUT_SPACE_PAYLOAD.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x180056D48 (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall InputConfigContextProvider::ClearConfigs(__int64 a1, __int64 *a2)
{
  __int64 v2; // rsi
  __int64 i; // rbx
  __int64 result; // rax
  void *v6; // rcx

  v2 = a2[1];
  for ( i = *a2; i != v2; i += 24LL )
  {
    v6 = *(void **)(i + 16);
    if ( v6 )
      operator delete[](v6);
  }
  result = *a2;
  a2[1] = *a2;
  return result;
}
