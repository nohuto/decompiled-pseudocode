/*
 * XREFs of EtwTraceAutoBoostSetFloor @ 0x1404674FE
 * Callers:
 *     KiAbApplyWakeupBoost @ 0x1402BCB30 (KiAbApplyWakeupBoost.c)
 *     KiAbSetMinimumThreadPriority @ 0x1403190B8 (KiAbSetMinimumThreadPriority.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x140214950 (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceAutoBoostSetFloor(
        __int64 a1,
        __int64 a2,
        char a3,
        char a4,
        char a5,
        char a6,
        char a7,
        char a8,
        int a9,
        char a10)
{
  char DpcRequestSummary; // cl
  __int64 v12; // rcx
  __int64 v14; // [rsp+30h] [rbp-30h] BYREF
  int v15; // [rsp+38h] [rbp-28h]
  char v16; // [rsp+3Ch] [rbp-24h]
  char v17; // [rsp+3Dh] [rbp-23h]
  char v18; // [rsp+3Eh] [rbp-22h]
  char v19; // [rsp+3Fh] [rbp-21h]
  __int64 *v20; // [rsp+40h] [rbp-20h] BYREF
  int v21; // [rsp+48h] [rbp-18h]
  int v22; // [rsp+4Ch] [rbp-14h]

  v15 = *(_DWORD *)(a1 + 1232);
  v17 = a6;
  v14 = a2;
  v16 = a3;
  v18 = a4 & 7 | (8 * (a7 & 7 | (8 * ((2 * a8) | a5 & 1))));
  DpcRequestSummary = KeGetPcr()->Prcb.DpcRequestSummary;
  v21 = 16;
  v22 = 0;
  v19 = (a9 != 0 ? 2 : 0) | (4 * (a10 & 3)) | DpcRequestSummary & 1;
  v12 = *(_QWORD *)(a1 + 544);
  v20 = &v14;
  return EtwTraceSiloKernelEvent(*(_QWORD *)(v12 + 2160), (int)&v20, 1, 0x20000200u, 1346, 5246466);
}
