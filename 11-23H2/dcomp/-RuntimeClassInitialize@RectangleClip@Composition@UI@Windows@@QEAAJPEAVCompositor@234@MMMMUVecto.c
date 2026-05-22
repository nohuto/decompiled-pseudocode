/*
 * XREFs of ?RuntimeClassInitialize@RectangleClip@Composition@UI@Windows@@QEAAJPEAVCompositor@234@MMMMUVector2@Numerics@Foundation@4@111@Z @ 0x180071708
 * Callers:
 *     ??$MakeAndInitialize2@VRectangleClip@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAMAEAMAEAMAEAMAEAUVector2@Numerics@Foundation@4@AEAU6784@AEAU6784@AEAU6784@@Details@WRL2@Microsoft@@YAJPEAPEAVRectangleClip@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAM222AEAUVector2@Numerics@Foundation@6@333@Z @ 0x18006EAA0 (--$MakeAndInitialize2@VRectangleClip@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAMAEAMAE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x180058D30 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z.c)
 *     ?ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z @ 0x1800719B4 (-ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::RectangleClip::RuntimeClassInitialize(
        __int64 a1,
        struct Windows::UI::Composition::Compositor *a2,
        float a3,
        float a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  int v11; // eax
  unsigned int v12; // ebx
  __int64 result; // rax
  _DWORD v14[4]; // [rsp+30h] [rbp-98h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  *(float *)v14 = a3;
  *(float *)&v14[1] = a4;
  v14[2] = a5;
  v14[3] = a6;
  v11 = Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(
          (Windows::UI::Composition::ProxyObject *)a1,
          a2,
          138,
          0);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x70,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtrectangleclip.cpp",
      (const char *)(unsigned int)v11);
    return v12;
  }
  else
  {
    DirectComposition::CDevice::ResourceSetBufferProperty(
      *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
      *(_DWORD *)(a1 + 128),
      16,
      v14,
      0x10uLL);
    DirectComposition::CDevice::ResourceSetFloatProperty(
      *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
      *(_DWORD *)(a1 + 128),
      8u,
      *(float *)&a7);
    DirectComposition::CDevice::ResourceSetFloatProperty(
      *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
      *(_DWORD *)(a1 + 128),
      9u,
      *((float *)&a7 + 1));
    DirectComposition::CDevice::ResourceSetFloatProperty(
      *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
      *(_DWORD *)(a1 + 128),
      0xAu,
      *(float *)&a8);
    DirectComposition::CDevice::ResourceSetFloatProperty(
      *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
      *(_DWORD *)(a1 + 128),
      0xBu,
      *((float *)&a8 + 1));
    DirectComposition::CDevice::ResourceSetFloatProperty(
      *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
      *(_DWORD *)(a1 + 128),
      0xCu,
      *(float *)&a10);
    DirectComposition::CDevice::ResourceSetFloatProperty(
      *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
      *(_DWORD *)(a1 + 128),
      0xDu,
      *((float *)&a10 + 1));
    DirectComposition::CDevice::ResourceSetFloatProperty(
      *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
      *(_DWORD *)(a1 + 128),
      0xEu,
      *(float *)&a9);
    DirectComposition::CDevice::ResourceSetFloatProperty(
      *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
      *(_DWORD *)(a1 + 128),
      0xFu,
      *((float *)&a9 + 1));
    result = 0LL;
    *(_QWORD *)(a1 + 248) = _mm_unpacklo_ps((__m128)(unsigned int)a7, (__m128)HIDWORD(a7)).m128_u64[0];
    *(_QWORD *)(a1 + 256) = _mm_unpacklo_ps((__m128)(unsigned int)a8, (__m128)HIDWORD(a8)).m128_u64[0];
    *(_QWORD *)(a1 + 232) = _mm_unpacklo_ps((__m128)(unsigned int)a10, (__m128)HIDWORD(a10)).m128_u64[0];
    *(_QWORD *)(a1 + 240) = _mm_unpacklo_ps((__m128)(unsigned int)a9, (__m128)HIDWORD(a9)).m128_u64[0];
    *(float *)(a1 + 220) = a3;
    *(float *)(a1 + 228) = a4;
    *(_DWORD *)(a1 + 224) = a5;
    *(_DWORD *)(a1 + 216) = a6;
  }
  return result;
}
