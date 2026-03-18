/*
 * XREFs of ?OnChanged@CBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800360F0
 * Callers:
 *     ?OnChanged@CEffectBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180035ED0 (-OnChanged@CEffectBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CGradientBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180036030 (-OnChanged@CGradientBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CNineGridBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180036080 (-OnChanged@CNineGridBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CMaskBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800360B0 (-OnChanged@CMaskBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D0F68 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D5C3C (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CBrush::OnChanged(__int64 a1, int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx

  if ( a2 == 14 )
  {
    v3 = a1 + 72;
    v4 = *(_QWORD *)(a1 + 72);
    if ( v4 )
    {
      *(_DWORD *)(v4 + 40) = 0;
      DynArrayImpl<0>::ShrinkToSize(v4 + 16, 24LL);
      *(_BYTE *)(v4 + 200) = 1;
      Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(v3);
    }
  }
  return 1LL;
}
