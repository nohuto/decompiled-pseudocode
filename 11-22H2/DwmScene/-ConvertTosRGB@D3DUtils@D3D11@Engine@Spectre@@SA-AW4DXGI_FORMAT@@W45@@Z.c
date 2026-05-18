/*
 * XREFs of ?ConvertTosRGB@D3DUtils@D3D11@Engine@Spectre@@SA?AW4DXGI_FORMAT@@W45@@Z @ 0x1800C926C
 * Callers:
 *     ?GetFormat@D3DUtils@D3D11@Engine@Spectre@@SA?AW4DXGI_FORMAT@@W4Format@34@W4ColorSpace@234@@Z @ 0x1800C9E48 (-GetFormat@D3DUtils@D3D11@Engine@Spectre@@SA-AW4DXGI_FORMAT@@W4Format@34@W4ColorSpace@234@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::D3D11::D3DUtils::ConvertTosRGB(unsigned int a1)
{
  switch ( a1 )
  {
    case 0x1Cu:
      return 29LL;
    case 0x47u:
      return 72LL;
    case 0x4Au:
      return 75LL;
    case 0x4Du:
      return 78LL;
    case 0x57u:
      return 91LL;
    case 0x58u:
      return 93LL;
    case 0x5Au:
      return 91LL;
    case 0x5Cu:
      return 93LL;
    case 0x62u:
      return 99LL;
    default:
      return a1;
  }
}
