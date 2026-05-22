/*
 * XREFs of ?SetTransform@?$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800F6300
 * Callers:
 *     <none>
 * Callees:
 *     ?SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z @ 0x180032AEC (-SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z.c)
 */

__int64 __fastcall DirectComposition::CVisualProxyBase<IDCompositionVisualRestricted>::SetTransform(
        __int64 a1,
        int *a2)
{
  int v2; // xmm1_4
  int v3; // xmm0_4
  int v4; // xmm0_4
  int v5; // xmm1_4
  int v6; // xmm0_4
  _DWORD v8[6]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v9; // [rsp+38h] [rbp-28h]
  int v10; // [rsp+48h] [rbp-18h]
  int v11; // [rsp+4Ch] [rbp-14h]
  int v12; // [rsp+50h] [rbp-10h]
  int v13; // [rsp+54h] [rbp-Ch]
  int v14; // [rsp+58h] [rbp-8h]
  int v15; // [rsp+5Ch] [rbp-4h]

  v2 = a2[1];
  v3 = *a2;
  v8[2] = 0;
  v8[3] = 0;
  v11 = 0;
  v14 = 0;
  v8[1] = v2;
  v8[4] = a2[2];
  v8[0] = v3;
  v4 = a2[3];
  v9 = 0LL;
  v10 = 1065353216;
  v5 = a2[4];
  v8[5] = v4;
  v6 = a2[5];
  v12 = v5;
  v13 = v6;
  v15 = 1065353216;
  return DirectComposition::CResourceProxy::SetBufferProperty(
           (DirectComposition::CResourceProxy *)(a1 + 8),
           11,
           v8,
           0x40uLL);
}
