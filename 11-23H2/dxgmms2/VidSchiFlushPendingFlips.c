/*
 * XREFs of VidSchiFlushPendingFlips @ 0x1C00863F0
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C0006310 (VidSchiSetFlipDevice.c)
 * Callees:
 *     memset @ 0x1C001AC00 (memset.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C0034568 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ?IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C0034B70 (-IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ?VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z @ 0x1C004A348 (-VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z.c)
 *     VidSchiWaitFlushCompletion @ 0x1C0087DCC (VidSchiWaitFlushCompletion.c)
 */

__int64 __fastcall VidSchiFlushPendingFlips(struct _VIDSCH_GLOBAL *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  bool v7; // zf
  __int64 v8; // r8
  __int64 result; // rax
  _QWORD v10[20]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v11[20]; // [rsp+D8h] [rbp-30h] BYREF

  v3 = a2 + 3080;
  if ( *(_DWORD *)(a2 + 3080) )
  {
    memset(v10, 0, sizeof(v10));
    LODWORD(v10[4]) |= 0x10u;
    v7 = *((_BYTE *)a1 + 59) == 0;
    LODWORD(v10[2]) = 3;
    v10[5] = v3;
    if ( !v7 )
    {
      DXGADAPTER::IncrementVSyncWaiter(*((DXGADAPTER **)a1 + 2), a3);
      VidSchiSetInterruptTargetPresentId(a1, a3, 0, 0LL, 1, 0);
    }
    VidSchiWaitFlushCompletion(a1, v10, 23LL);
    if ( *((_BYTE *)a1 + 59) )
      DXGADAPTER::DecrementVSyncWaiter(*((DXGADAPTER **)a1 + 2), a3, v8);
  }
  result = *(unsigned int *)(a2 + 3084);
  if ( (_DWORD)result )
  {
    if ( !*((_BYTE *)a1 + 3008) )
    {
      memset(v11, 0, sizeof(v11));
      LODWORD(v11[4]) |= 0x10u;
      LODWORD(v11[2]) = 1;
      v11[5] = a2 + 3084;
      return VidSchiWaitFlushCompletion(a1, v11, 23LL);
    }
  }
  return result;
}
