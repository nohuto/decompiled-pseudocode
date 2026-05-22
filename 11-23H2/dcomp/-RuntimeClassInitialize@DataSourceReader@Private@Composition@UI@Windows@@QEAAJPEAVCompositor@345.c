/*
 * XREFs of ?RuntimeClassInitialize@DataSourceReader@Private@Composition@UI@Windows@@QEAAJPEAVCompositor@345@_K1@Z @ 0x180184A20
 * Callers:
 *     ??$MakeAndInitialize2@VDataSourceReader@Private@Composition@UI@Windows@@V12345@PEAVCompositor@345@AEA_KAEA_K@Details@WRL2@Microsoft@@YAJPEAPEAVDataSourceReader@Private@Composition@UI@Windows@@$$QEAPEAVCompositor@567@AEA_K2@Z @ 0x180120C38 (--$MakeAndInitialize2@VDataSourceReader@Private@Composition@UI@Windows@@V12345@PEAVCompositor@34.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x180058D30 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Private::DataSourceReader::RuntimeClassInitialize(
        Windows::UI::Composition::Private::DataSourceReader *this,
        struct Windows::UI::Composition::Compositor *a2,
        __int64 a3,
        __int64 a4)
{
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v10 = a4;
  v9 = a3;
  v5 = Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(this, a2, 51, 0);
  v6 = v5;
  if ( v5 >= 0 )
  {
    DirectComposition::CDevice::ResourceSetBufferProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      0,
      &v9,
      8uLL);
    DirectComposition::CDevice::ResourceSetBufferProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      1,
      &v10,
      8uLL);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2E,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtdatasourcereader.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
}
