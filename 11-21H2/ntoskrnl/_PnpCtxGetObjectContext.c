/*
 * XREFs of _PnpCtxGetObjectContext @ 0x1407882D4
 * Callers:
 *     DrvDbDispatchDeviceId @ 0x1407880F0 (DrvDbDispatchDeviceId.c)
 *     DrvDbDispatchDriverPackage @ 0x1407881D0 (DrvDbDispatchDriverPackage.c)
 *     DrvDbDispatchDriverDatabase @ 0x140788A80 (DrvDbDispatchDriverDatabase.c)
 *     DrvDbDispatchDriverInfFile @ 0x140789110 (DrvDbDispatchDriverInfFile.c)
 *     DrvDbDispatchDriverFile @ 0x140A30A20 (DrvDbDispatchDriverFile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpCtxGetObjectContext(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( (unsigned int)(a2 - 1) > 0xA )
    return (unsigned int)-1073741811;
  else
    *a3 = *(_QWORD *)(a1 + 8LL * a2 + 392);
  return v3;
}
