/*
 * XREFs of ?Create@AugmentedInputDeviceCollection@@SAJPEAUIRawInputClient@@PEAPEAXPEAPEAV1@@Z @ 0x18002A788
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x18002A2EC (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?Initialize@AugmentedInputDeviceCollection@@IEAAJPEAPEAX@Z @ 0x18002A924 (-Initialize@AugmentedInputDeviceCollection@@IEAAJPEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     ??R?$default_delete@VAugmentedInputDeviceCollection@@@std@@QEBAXPEAVAugmentedInputDeviceCollection@@@Z @ 0x1800BAD74 (--R-$default_delete@VAugmentedInputDeviceCollection@@@std@@QEBAXPEAVAugmentedInputDeviceCollecti.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AugmentedInputDeviceCollection::Create(
        struct IRawInputClient *a1,
        void **a2,
        struct AugmentedInputDeviceCollection **a3)
{
  _DWORD *v6; // rbx
  _DWORD *v7; // rax
  _DWORD *v8; // rdi
  _QWORD *v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // esi
  __int64 v14; // rdx
  unsigned __int64 v15; // r9
  int v16; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v6 = 0LL;
  if ( !a1 || !a2 || !a3 )
  {
    v12 = -2147024809;
    v14 = 32LL;
    goto LABEL_18;
  }
  v7 = malloc(0xAE0uLL);
  v8 = v7;
  if ( v7 )
    memset_0(v7, 0, 0xAE0uLL);
  if ( v8 )
  {
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
    *((_QWORD *)v8 + 3) = 0LL;
    *((_QWORD *)v8 + 343) = 0LL;
    v8[688] = 0;
    *(_QWORD *)v8 = &AugmentedInputDeviceCollection::`vftable';
    v16 = (_DWORD)v8 + 2760;
    *((_QWORD *)v8 + 345) = 0LL;
    *((_QWORD *)v8 + 346) = 0LL;
    v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
    *v9 = v9;
    v9[1] = v9;
    v9[2] = v9;
    *((_WORD *)v9 + 12) = 257;
    *((_QWORD *)v8 + 345) = v9;
    *((_BYTE *)v8 + 2776) = 1;
  }
  else
  {
    v8 = 0LL;
  }
  v6 = v8;
  if ( !v8 )
  {
    v12 = -2147024882;
    v14 = 36LL;
LABEL_18:
    v15 = v12;
    goto LABEL_19;
  }
  v10 = AugmentedInputDeviceCollection::Initialize((AugmentedInputDeviceCollection *)v8, a2);
  v12 = v10;
  if ( v10 >= 0 )
  {
    v6 = 0LL;
    *a3 = (struct AugmentedInputDeviceCollection *)v8;
    v12 = 0;
    goto LABEL_11;
  }
  v15 = (unsigned int)v10;
  v14 = 38LL;
LABEL_19:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\augmentedinputdevicecollection.cpp",
    (const char *)v15,
    v16);
LABEL_11:
  if ( v6 )
    std::default_delete<AugmentedInputDeviceCollection>::operator()(v11, v6);
  return v12;
}
