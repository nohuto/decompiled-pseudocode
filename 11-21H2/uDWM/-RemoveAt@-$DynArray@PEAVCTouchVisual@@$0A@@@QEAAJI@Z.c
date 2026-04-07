/*
 * XREFs of ?RemoveAt@?$DynArray@PEAVCTouchVisual@@$0A@@@QEAAJI@Z @ 0x1800AD86C
 * Callers:
 *     ?Reset@CContactManager@@QEAAJXZ @ 0x18003FC80 (-Reset@CContactManager@@QEAAJXZ.c)
 *     ?CleanupFinishedAnimations@CContactManager@@AEAAXXZ @ 0x1800AAA38 (-CleanupFinishedAnimations@CContactManager@@AEAAXXZ.c)
 *     ??1CImmersiveIconicBitmapRegistry@@UEAA@XZ @ 0x1800BF01C (--1CImmersiveIconicBitmapRegistry@@UEAA@XZ.c)
 *     ?_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x1800BF8D4 (-_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DynArray<CTouchVisual *,0>::RemoveAt(__int64 *a1, unsigned int a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // ebx
  unsigned int v4; // r9d
  __int64 v6; // r11
  __int64 v7; // rcx

  v2 = *((_DWORD *)a1 + 6);
  v3 = 0;
  v4 = a2;
  if ( a2 < v2 )
  {
    v6 = *a1;
    if ( a2 < v2 - 1 )
    {
      do
      {
        v7 = v4++;
        *(_QWORD *)(v6 + 8 * v7) = *(_QWORD *)(v6 + 8LL * v4);
        v2 = *((_DWORD *)a1 + 6);
      }
      while ( v4 < v2 - 1 );
    }
    *((_DWORD *)a1 + 6) = v2 - 1;
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x194u);
  }
  return v3;
}
