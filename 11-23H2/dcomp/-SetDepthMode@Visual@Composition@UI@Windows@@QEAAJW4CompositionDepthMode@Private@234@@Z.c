/*
 * XREFs of ?SetDepthMode@Visual@Composition@UI@Windows@@QEAAJW4CompositionDepthMode@Private@234@@Z @ 0x18010B8C4
 * Callers:
 *     ?put_DepthMode@Partner@Visual@Composition@UI@Windows@@UEAAJW4CompositionDepthMode@Private@345@@Z @ 0x18010D480 (-put_DepthMode@Partner@Visual@Composition@UI@Windows@@UEAAJW4CompositionDepthMode@Private@345@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::SetDepthMode(__int64 a1, int a2)
{
  __int64 v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 0LL;
  if ( a2 )
  {
    switch ( a2 )
    {
      case 1:
        v2 = 1LL;
        break;
      case 2:
        v2 = -1LL;
        break;
      case 3:
        v2 = 3LL;
        break;
      default:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xCE9,
          (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisual.cpp",
          (const char *)0x80070057LL);
        return 2147942487LL;
    }
  }
  DirectComposition::CDevice::ResourceSetIntegerProperty(
    *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
    *(_DWORD *)(a1 + 128),
    21,
    v2);
  *(_DWORD *)(a1 + 260) ^= (*(_DWORD *)(a1 + 260) ^ (a2 << 9)) & 0xE00;
  return 0LL;
}
