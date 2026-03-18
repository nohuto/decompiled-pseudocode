/*
 * XREFs of RIMIDEPopulateExtendedPointerDeviceProperties @ 0x1C01A054C
 * Callers:
 *     RIMIDECreatePointerDeviceInfo @ 0x1C019B9FC (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIDEPopulateExtendedPointerDeviceProperties(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int128 v5; // xmm1
  int v6; // eax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  _OWORD v10[6]; // [rsp+20h] [rbp-68h] BYREF

  if ( (*(_DWORD *)(a1 + 184) & 0x2000) == 0 )
    result = MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( *(_DWORD *)(a2 + 24) == 7 )
  {
    memset(v10, 0, 0x5CuLL);
    v5 = v10[1];
    v6 = DWORD2(v10[5]);
    *(_OWORD *)(a2 + 268) = v10[0];
    v7 = v10[2];
    *(_OWORD *)(a2 + 284) = v5;
    v8 = v10[3];
    *(_OWORD *)(a2 + 300) = v7;
    v9 = v10[4];
    *(_OWORD *)(a2 + 316) = v8;
    *(_QWORD *)&v8 = *(_QWORD *)&v10[5];
    *(_OWORD *)(a2 + 332) = v9;
    *(_QWORD *)(a2 + 348) = v8;
    *(_DWORD *)(a2 + 356) = v6;
    *(_DWORD *)(a2 + 304) = dword_1C028EF84;
    result = (unsigned int)dword_1C028EF94;
    *(_DWORD *)(a2 + 308) = dword_1C028EF94;
  }
  return result;
}
