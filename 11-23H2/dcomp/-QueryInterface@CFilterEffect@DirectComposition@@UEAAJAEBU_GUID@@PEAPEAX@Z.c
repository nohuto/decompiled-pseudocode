/*
 * XREFs of ?QueryInterface@CFilterEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F8130
 * Callers:
 *     ?QueryInterface@CAffineTransform2DEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F2740 (-QueryInterface@CAffineTransform2DEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CArithmeticCompositeEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F27F0 (-QueryInterface@CArithmeticCompositeEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CBlendEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F2870 (-QueryInterface@CBlendEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CBrightnessEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F28F0 (-QueryInterface@CBrightnessEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CColorMatrixEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F2A00 (-QueryInterface@CColorMatrixEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCompositeEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F2A80 (-QueryInterface@CCompositeEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CFloodEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F2BF0 (-QueryInterface@CFloodEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CGaussianBlurEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F2C70 (-QueryInterface@CGaussianBlurEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHueRotationEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F2D50 (-QueryInterface@CHueRotationEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CLinearTransferEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F2F00 (-QueryInterface@CLinearTransferEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSaturationEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F3240 (-QueryInterface@CSaturationEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CShadowEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F33F0 (-QueryInterface@CShadowEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CTableTransferEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F3540 (-QueryInterface@CTableTransferEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CTurbulenceEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F3790 (-QueryInterface@CTurbulenceEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CFilterEffect::QueryInterface(
        unsigned __int64 this,
        const struct _GUID *a2,
        void **a3)
{
  int v3; // ebx
  __int64 v4; // rax
  void (__fastcall ***v6)(_QWORD); // r8
  void *v7; // rcx

  v3 = 0;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e32fd191_37f7_4bc9_b1fd_0e29678d0703.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e32fd191_37f7_4bc9_b1fd_0e29678d0703.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e32fd191_37f7_4bc9_b1fd_0e29678d0703.Data4;
  if ( v4 )
  {
    v3 = -2147467262;
    v6 = (void (__fastcall ***)(_QWORD))(this - 16);
    v7 = 0LL;
  }
  else
  {
    v6 = (void (__fastcall ***)(_QWORD))(this - 16);
    v7 = (void *)(this & -(__int64)(this != 16));
  }
  *a3 = v7;
  if ( v3 >= 0 )
    (**v6)(v6);
  return (unsigned int)v3;
}
