/*
 * XREFs of _PnpCtxGetObjectContext @ 0x1408766FC
 * Callers:
 *     DrvDbDispatchDriverInfFile @ 0x140876260 (DrvDbDispatchDriverInfFile.c)
 *     DrvDbDispatchDriverDatabase @ 0x140876380 (DrvDbDispatchDriverDatabase.c)
 *     DrvDbDispatchDeviceId @ 0x1408764E0 (DrvDbDispatchDeviceId.c)
 *     DrvDbDispatchDriverPackage @ 0x1408765E0 (DrvDbDispatchDriverPackage.c)
 *     DrvDbDispatchDriverFile @ 0x140A6E110 (DrvDbDispatchDriverFile.c)
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
