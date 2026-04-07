/*
 * XREFs of ?SetRepresentationType@CImmersiveWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x1800C52CC
 * Callers:
 *     ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x1800C4D50 (-Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z.c)
 *     ?OnRepresentationTypeUpdated@CImmersiveWindowIconic@@QEAAJH@Z @ 0x1800C51BC (-OnRepresentationTypeUpdated@CImmersiveWindowIconic@@QEAAJH@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetImmersiveIconContainerSize@CImmersiveIconicBitmapRegistry@@SAHW4DEVICE_SCALE_FACTOR@@W4IconicRepresentationType@@@Z @ 0x1800C4278 (-GetImmersiveIconContainerSize@CImmersiveIconicBitmapRegistry@@SAHW4DEVICE_SCALE_FACTOR@@W4Iconi.c)
 *     ?OnIconUpdated@CImmersiveWindowIconic@@QEAAJ_N@Z @ 0x1800C5130 (-OnIconUpdated@CImmersiveWindowIconic@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CImmersiveWindowIconic::SetRepresentationType(CImmersiveWindowIconic *a1, int a2, char a3)
{
  int v3; // r14d
  unsigned int v4; // edi
  int ImmersiveIconContainerSize; // eax
  int v9; // ecx
  int v10; // eax

  v3 = *((_DWORD *)a1 + 78);
  v4 = 0;
  *((_DWORD *)a1 + 78) = a2;
  if ( a2 != 1 )
  {
    ImmersiveIconContainerSize = CImmersiveIconicBitmapRegistry::GetImmersiveIconContainerSize(*((_DWORD *)a1 + 81), a2);
    v9 = *((_DWORD *)a1 + 81);
    *((_DWORD *)a1 + 79) = ImmersiveIconContainerSize - 2;
    *((_DWORD *)a1 + 80) = CImmersiveIconicBitmapRegistry::GetImmersiveIconContainerSize(v9, a2);
  }
  if ( *((_DWORD *)a1 + 78) != v3 )
  {
    if ( a3 )
    {
      v10 = CImmersiveWindowIconic::OnIconUpdated(a1, a3);
      v4 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0xF8u);
    }
  }
  return v4;
}
