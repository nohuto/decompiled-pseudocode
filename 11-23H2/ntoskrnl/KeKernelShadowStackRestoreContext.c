/*
 * XREFs of KeKernelShadowStackRestoreContext @ 0x14057BA60
 * Callers:
 *     RtlRestoreContext @ 0x1404292D0 (RtlRestoreContext.c)
 *     RcFrameConsolidation @ 0x140429620 (RcFrameConsolidation.c)
 * Callees:
 *     VslKernelShadowStackAssist @ 0x14054BA40 (VslKernelShadowStackAssist.c)
 */

__int64 __fastcall KeKernelShadowStackRestoreContext(__int64 a1, ULONG_PTR a2, _DWORD *a3)
{
  ULONG_PTR v3; // r9
  int v4; // eax

  if ( (*(_DWORD *)(a1 + 48) & 0x100080) == 0x100080 )
    v3 = *(_QWORD *)(*(int *)(a1 + 1256) + a1 + 1232);
  else
    v3 = a2;
  v4 = 0;
  if ( a3 && *a3 == -2147483610 )
    v4 = 2;
  return VslKernelShadowStackAssist(1, 0LL, a2, v3, *(_QWORD *)(a1 + 248), v4);
}
