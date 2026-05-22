/*
 * XREFs of ?Create@SpatialRimDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageSession@@PEAPEAXPEAPEAV1@@Z @ 0x18002AA1C
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x18002A2EC (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 * Callees:
 *     ?Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z @ 0x18002B630 (-Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z.c)
 *     ??0SpatialRimDeviceCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageSession@@@Z @ 0x18002DBE4 (--0SpatialRimDeviceCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageSess.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     ??R?$default_delete@VSpatialRimDeviceCollection@@@std@@QEBAXPEAVSpatialRimDeviceCollection@@@Z @ 0x1800BF030 (--R-$default_delete@VSpatialRimDeviceCollection@@@std@@QEBAXPEAVSpatialRimDeviceCollection@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SpatialRimDeviceCollection::Create(
        struct IRawInputClient *a1,
        struct IRawInputProvider *a2,
        struct IMessageSession *a3,
        void **a4,
        struct SpatialRimDeviceCollection **a5)
{
  SpatialRimDeviceCollection *v9; // rbx
  SpatialRimDeviceCollection *v10; // rax
  SpatialRimDeviceCollection *v11; // rbx
  SpatialRimDeviceCollection *v12; // rsi
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // edi
  __int64 v17; // rdx
  unsigned __int64 v18; // r9
  int v19; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v9 = 0LL;
  v19 = 0;
  if ( !a5 )
  {
    v17 = 409LL;
LABEL_19:
    v15 = -2147024809;
    goto LABEL_20;
  }
  *a5 = 0LL;
  if ( !a1 || !a4 )
  {
    v17 = 411LL;
    goto LABEL_19;
  }
  v10 = (SpatialRimDeviceCollection *)malloc(0xBA8uLL);
  v11 = v10;
  if ( v10 )
    memset_0(v10, 0, 0xBA8uLL);
  if ( v11 )
    v12 = SpatialRimDeviceCollection::SpatialRimDeviceCollection(v11, a1, a2, a3);
  else
    v12 = 0LL;
  v9 = v12;
  v19 = (int)v12;
  if ( !v12 )
  {
    v15 = -2147024882;
    v17 = 414LL;
LABEL_20:
    v18 = v15;
    goto LABEL_21;
  }
  v13 = SpatialRimDeviceCollection::Initialize(v12, a4);
  v15 = v13;
  if ( v13 >= 0 )
  {
    v9 = 0LL;
    *a5 = v12;
    v15 = 0;
    goto LABEL_11;
  }
  v18 = (unsigned int)v13;
  v17 = 416LL;
LABEL_21:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
    (const char *)v18,
    v19);
LABEL_11:
  if ( v9 )
    std::default_delete<SpatialRimDeviceCollection>::operator()(v14, v9);
  return v15;
}
