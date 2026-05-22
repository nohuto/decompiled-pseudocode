/*
 * XREFs of ?SetTransform@CWriteCaptureControllerProxy@DirectComposition@@UEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800F63D0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z @ 0x180032AEC (-SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z.c)
 */

__int64 __fastcall DirectComposition::CWriteCaptureControllerProxy::SetTransform(
        DirectComposition::CWriteCaptureControllerProxy *this,
        const struct D2D_MATRIX_3X2_F *a2)
{
  FLOAT m12; // xmm1_4
  FLOAT m11; // xmm0_4
  FLOAT m22; // xmm0_4
  FLOAT dx; // xmm1_4
  FLOAT dy; // xmm0_4
  _DWORD v8[6]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v9; // [rsp+38h] [rbp-28h]
  int v10; // [rsp+48h] [rbp-18h]
  int v11; // [rsp+4Ch] [rbp-14h]
  FLOAT v12; // [rsp+50h] [rbp-10h]
  FLOAT v13; // [rsp+54h] [rbp-Ch]
  int v14; // [rsp+58h] [rbp-8h]
  int v15; // [rsp+5Ch] [rbp-4h]

  m12 = a2->m12;
  m11 = a2->m11;
  v8[2] = 0;
  v8[3] = 0;
  v11 = 0;
  v14 = 0;
  *(FLOAT *)&v8[1] = m12;
  v8[4] = LODWORD(a2->m21);
  *(FLOAT *)v8 = m11;
  m22 = a2->m22;
  v9 = 0LL;
  v10 = 1065353216;
  dx = a2->dx;
  *(FLOAT *)&v8[5] = m22;
  dy = a2->dy;
  v12 = dx;
  v13 = dy;
  v15 = 1065353216;
  return DirectComposition::CResourceProxy::SetBufferProperty(
           (DirectComposition::CWriteCaptureControllerProxy *)((char *)this + 8),
           5,
           v8,
           0x40uLL);
}
