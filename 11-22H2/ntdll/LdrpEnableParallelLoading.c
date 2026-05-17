/*
 * XREFs of LdrpEnableParallelLoading @ 0x18004B7A4
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D4658 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlGetSuiteMask @ 0x18004A560 (RtlGetSuiteMask.c)
 *     TpSetPoolWorkerThreadIdleTimeout @ 0x18004B8A0 (TpSetPoolWorkerThreadIdleTimeout.c)
 *     TpAllocPoolInternal @ 0x18004C170 (TpAllocPoolInternal.c)
 *     TpAllocWork @ 0x18005B790 (TpAllocWork.c)
 *     LdrpDetectDetour @ 0x18007145C (LdrpDetectDetour.c)
 *     TpSetPoolMaxThreads @ 0x1800808D0 (TpSetPoolMaxThreads.c)
 */

__int64 __fastcall LdrpEnableParallelLoading(unsigned int a1)
{
  unsigned int v2; // ebx
  int v3; // edi
  __int64 v4; // rdx
  int v6; // [rsp+20h] [rbp-58h] BYREF
  __int64 v7; // [rsp+28h] [rbp-50h]
  __int64 v8; // [rsp+30h] [rbp-48h]
  __int64 v9; // [rsp+38h] [rbp-40h]
  __int128 v10; // [rsp+40h] [rbp-38h]
  __int64 v11; // [rsp+50h] [rbp-28h]
  int v12; // [rsp+58h] [rbp-20h]
  int v13; // [rsp+5Ch] [rbp-1Ch]
  int v14; // [rsp+60h] [rbp-18h]

  LdrpDetectDetour();
  if ( a1 )
  {
    v2 = a1;
    if ( a1 > 0x10 )
      v2 = 16;
  }
  else
  {
    v2 = 4;
    if ( (RtlGetSuiteMask() & 0x10000) != 0 )
      v2 = 0;
  }
  v3 = TpAllocPoolInternal(&LdrpThreadPool, 1LL);
  if ( v3 >= 0 )
  {
    TpSetPoolWorkerThreadIdleTimeout(LdrpThreadPool, -300000000LL);
    v4 = 1LL;
    if ( v2 > 1 )
      v4 = v2 - 1;
    TpSetPoolMaxThreads(LdrpThreadPool, v4);
    if ( !LdrpDetourExist && v2 > 1 )
    {
      v8 = 0LL;
      v9 = 0LL;
      v11 = 0LL;
      v12 = 0;
      v10 = 0LL;
      v7 = LdrpThreadPool;
      v6 = 3;
      v13 = 1;
      v14 = 72;
      return (unsigned int)((__int64 (__fastcall *)(__int64 *, void (*)(), _QWORD, int *))TpAllocWork)(
                             &LdrpMapAndSnapWork,
                             LdrpWorkCallback,
                             0LL,
                             &v6);
    }
  }
  return (unsigned int)v3;
}
