/*
 * XREFs of ?RuntimeClassInitialize@HolographicCompositionDisplay@Internal@Composition@UI@Windows@@QEAAJPEAVCompositor@345@AEBU_GUID@@M@Z @ 0x18011A3C8
 * Callers:
 *     ??$MakeAndInitialize2@VHolographicCompositionDisplay@Internal@Composition@UI@Windows@@V12345@PEAVCompositor@345@AEAU_GUID@@AEAM@Details@WRL2@Microsoft@@YAJPEAPEAVHolographicCompositionDisplay@Internal@Composition@UI@Windows@@$$QEAPEAVCompositor@567@AEAU_GUID@@AEAM@Z @ 0x180118CA8 (--$MakeAndInitialize2@VHolographicCompositionDisplay@Internal@Composition@UI@Windows@@V12345@PEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x180058D30 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Internal::HolographicCompositionDisplay::RuntimeClassInitialize(
        Windows::UI::Composition::Internal::HolographicCompositionDisplay *this,
        struct Windows::UI::Composition::Compositor *a2,
        const struct _GUID *a3,
        float a4)
{
  int v6; // eax
  unsigned int v7; // ebx
  float v9; // xmm6_4
  unsigned __int64 v10; // rcx
  __int64 v11; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v6 = Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(this, a2, 76, 0);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v11 = 0LL;
    if ( a4 != 0.0 )
    {
      v9 = a4 * 1000.0;
      v10 = 0LL;
      if ( (float)(a4 * 1000.0) >= 9.223372e18 )
      {
        v9 = v9 - 9.223372e18;
        if ( v9 < 9.223372e18 )
          v10 = 0x8000000000000000uLL;
      }
      v11 = ((v10 + (unsigned int)(int)v9) << 32) | 0x3E8;
    }
    DirectComposition::CDevice::ResourceSetBufferProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      0,
      a3,
      0x10uLL);
    DirectComposition::CDevice::ResourceSetBufferProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      2,
      &v11,
      8uLL);
    AcquireSRWLockExclusive((PSRWLOCK)this + 22);
    *((_DWORD *)this + 41) = 1;
    if ( this != (Windows::UI::Composition::Internal::HolographicCompositionDisplay *)-176LL )
      ReleaseSRWLockExclusive((PSRWLOCK)this + 22);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtholographiccompositiondisplay.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
}
