/*
 * XREFs of ?Create@GazeDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18002AD20
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x18002A2EC (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 * Callees:
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x18002B01C (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     ??R?$default_delete@VGazeDeviceCollection@@@std@@QEBAXPEAVGazeDeviceCollection@@@Z @ 0x1800C7AB8 (--R-$default_delete@VGazeDeviceCollection@@@std@@QEBAXPEAVGazeDeviceCollection@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GazeDeviceCollection::Create(
        struct IRawInputClient *a1,
        struct IRawInputProvider *a2,
        void **a3,
        struct GazeDeviceCollection **a4)
{
  _DWORD *v8; // rbx
  _DWORD *v9; // rax
  struct GazeDeviceCollection *v10; // rbp
  unsigned int v11; // edx
  unsigned int v12; // r9d
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // edi
  __int64 v17; // rdx
  unsigned int v18; // [rsp+20h] [rbp-48h]
  unsigned int v19; // [rsp+20h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v21; // [rsp+70h] [rbp+8h] BYREF

  v8 = 0LL;
  if ( a1 && a3 && a4 )
  {
    v9 = malloc(0xAC8uLL);
    v8 = v9;
    if ( v9 )
    {
      memset_0(v9, 0, 0xAC8uLL);
      v8[2] = 1;
      *((_QWORD *)v8 + 2) = a1;
      v8[8] = 0;
      memset_0(v8 + 22, 0, 0x218uLL);
      memset_0(v8 + 156, 0, 0x800uLL);
      v8[668] = 0;
      *((_QWORD *)v8 + 5) = 0LL;
      *((_QWORD *)v8 + 6) = 0LL;
      *((_QWORD *)v8 + 7) = 0LL;
      *((_QWORD *)v8 + 8) = 0LL;
      *((_QWORD *)v8 + 9) = 0LL;
      *((_QWORD *)v8 + 10) = 0LL;
      *((_QWORD *)v8 + 335) = 0LL;
      v8[672] = 0;
      *((_QWORD *)v8 + 337) = 0LL;
      *((_OWORD *)v8 + 170) = 0LL;
      *((_BYTE *)v8 + 2736) = 0;
      *((_QWORD *)v8 + 343) = 0LL;
      v8[688] = 0;
      *(_QWORD *)v8 = &GazeDeviceCollection::`vftable';
      *((_QWORD *)v8 + 3) = a2;
      v10 = (struct GazeDeviceCollection *)v8;
      v21 = 1179649;
      v13 = HIDDeviceCollection::Initialize(
              (HIDDeviceCollection *)v8,
              v11,
              (struct _RIM_USAGE_ANDPAGE *const)&v21,
              v12,
              0x40u,
              a3);
      v15 = v13;
      if ( v13 >= 0 )
      {
        v8 = 0LL;
        *a4 = v10;
        v15 = 0;
        goto LABEL_7;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x48,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazedevicecollection.cpp",
        (const char *)(unsigned int)v13,
        v19);
      v17 = 38LL;
    }
    else
    {
      v8 = 0LL;
      v15 = -2147024882;
      v17 = 36LL;
    }
  }
  else
  {
    v15 = -2147024809;
    v17 = 32LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazedevicecollection.cpp",
    (const char *)v15,
    v18);
LABEL_7:
  if ( v8 )
    std::default_delete<GazeDeviceCollection>::operator()(v14, v8);
  return v15;
}
