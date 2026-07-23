/*
 * XREFs of EtwTraceReadyThread @ 0x14046785A
 * Callers:
 *     KiExitDispatcher @ 0x14023CE40 (KiExitDispatcher.c)
 *     KiProcessThreadWaitList @ 0x140253E80 (KiProcessThreadWaitList.c)
 *     KiDirectSwitchThread @ 0x1402B1B30 (KiDirectSwitchThread.c)
 *     KiFastReadyThread @ 0x1402BBC14 (KiFastReadyThread.c)
 *     KiReadyOutSwappedThreads @ 0x14034D394 (KiReadyOutSwappedThreads.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x140214950 (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     EtwpCoverageSamplerReadyThread @ 0x140604580 (EtwpCoverageSamplerReadyThread.c)
 */

__int64 __fastcall EtwTraceReadyThread(__int64 a1, char a2, char a3, char a4)
{
  int v5; // edi
  __int64 v6; // rax
  char v7; // dl
  void (__noreturn *v8)(); // rax
  __int64 v9; // rcx
  int v11; // [rsp+30h] [rbp-20h] BYREF
  char v12; // [rsp+34h] [rbp-1Ch]
  char v13; // [rsp+35h] [rbp-1Bh]
  char v14; // [rsp+36h] [rbp-1Ah]
  char v15; // [rsp+37h] [rbp-19h]
  int *v16; // [rsp+38h] [rbp-18h] BYREF
  int v17; // [rsp+40h] [rbp-10h]
  int v18; // [rsp+44h] [rbp-Ch]

  v11 = *(_DWORD *)(a1 + 1232);
  v5 = 5249538;
  v13 = a3;
  v12 = a2;
  v15 = 0;
  v6 = *(_QWORD *)(a1 + 184);
  v14 = ~*(_BYTE *)(a1 + 122) & 2 | KeGetPcr()->Prcb.DpcRequestSummary & 1;
  v7 = (*(_DWORD *)(v6 + 840) & 7) != 0 ? 4 : 0;
  v8 = *(void (__noreturn **)())(a1 + 1312);
  v14 = (v7 | v14 & 0xFB) ^ ((8 * a4) ^ (v14 | v7)) & 8;
  if ( (a4 & 2) != 0 || v8 == KeSwapProcessOrStack || (char *)v8 == (char *)EtwpLogger )
  {
    v5 = 5245442;
  }
  else if ( EtwpHostSiloState != -4572 && (*(_DWORD *)(EtwpHostSiloState + 4576) & 0x200) != 0 )
  {
    EtwpCoverageSamplerReadyThread(a1);
  }
  v9 = *(_QWORD *)(a1 + 544);
  v18 = 0;
  v16 = &v11;
  v17 = 8;
  return EtwTraceSiloKernelEvent(*(_QWORD *)(v9 + 2160), (int)&v16, 1, 0x20000200u, 1330, v5);
}
