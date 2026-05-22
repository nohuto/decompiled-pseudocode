/*
 * XREFs of ?ClearConfigs@InputConfigContextProvider@@AEAAXAEAV?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@@Z @ 0x1800FA1C4
 * Callers:
 *     ??1InputConfigContextProvider@@EEAA@XZ @ 0x1800FA0EC (--1InputConfigContextProvider@@EEAA@XZ.c)
 *     ?OnInputConfigPayloadReceived@InputConfigContextProvider@@QEAAXAEBV?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@@Z @ 0x1800FA218 (-OnInputConfigPayloadReceived@InputConfigContextProvider@@QEAAXAEBV-$vector@UINPUT_SPACE_PAYLOAD.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x18004AF4C (--_V@YAXPEAX@Z.c)
 */

void __fastcall InputConfigContextProvider::ClearConfigs(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v4; // rsi
  void *v5; // rcx

  v2 = *a2;
  v4 = a2[1];
  if ( *a2 != v4 )
  {
    do
    {
      v5 = *(void **)(v2 + 16);
      if ( v5 )
        operator delete[](v5);
      v2 += 24LL;
    }
    while ( v2 != v4 );
    v2 = *a2;
  }
  a2[1] = v2;
}
