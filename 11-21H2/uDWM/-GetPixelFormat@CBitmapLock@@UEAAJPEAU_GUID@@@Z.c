/*
 * XREFs of ?GetPixelFormat@CBitmapLock@@UEAAJPEAU_GUID@@@Z @ 0x1801096D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x18005A03C (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 *     ?DXGIFormatToPixelFormat@@YA?AW4Enum@MilPixelFormat@@W4DXGI_FORMAT@@_N@Z @ 0x18005CB74 (-DXGIFormatToPixelFormat@@YA-AW4Enum@MilPixelFormat@@W4DXGI_FORMAT@@_N@Z.c)
 */

__int64 __fastcall CBitmapLock::GetPixelFormat(CBitmapLock *this, struct _GUID *a2)
{
  char *v4; // rcx
  int v5; // eax
  GUID v6; // xmm0
  unsigned int v7; // ebx
  char *v9; // [rsp+40h] [rbp+8h] BYREF

  v4 = (char *)this - 64;
  v9 = v4;
  if ( v4[48] )
    EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 8));
  v5 = DXGIFormatToPixelFormat(*((_DWORD *)this + 9), *((_DWORD *)this + 10) == 1);
  if ( v5 > 31 )
  {
    switch ( v5 )
    {
      case ',':
        v6 = GUID_WICPixelFormat40bppCMYKAlpha;
        break;
      case '-':
        v6 = GUID_WICPixelFormat80bppCMYKAlpha;
        break;
      case 'C':
        v6 = GUID_WICPixelFormat8bppAlpha;
        break;
      case 'D':
        v6 = GUID_WICPixelFormat32bppRGBA;
        break;
      case 'E':
        v6 = GUID_WICPixelFormat32bppPRGBA;
        break;
      case 'H':
        v6 = GUID_WICPixelFormat64bppBGRA;
        break;
      case 'I':
        v6 = GUID_WICPixelFormat64bppPBGRA;
        break;
      case 'G':
        v6 = GUID_WICPixelFormat48bppBGR;
        break;
      case 'F':
        v6 = GUID_WICPixelFormat16bppBGRA5551;
        break;
      case 'J':
        v6 = GUID_WICPixelFormat48bppBGRFixedPoint;
        break;
      case 'K':
        v6 = GUID_WICPixelFormat64bppBGRAFixedPoint;
        break;
      case 'L':
        v6 = GUID_WICPixelFormat96bppRGBFloat;
        break;
      case 'M':
        v6 = GUID_WICPixelFormat32bppRGB;
        break;
      case 'N':
        v6 = GUID_WICPixelFormat64bppRGB;
        break;
      case 'O':
        v6 = GUID_WICPixelFormat8bppY;
        break;
      case 'P':
        v6 = GUID_WICPixelFormat8bppCb;
        break;
      case 'Q':
        v6 = GUID_WICPixelFormat8bppCr;
        break;
      case 'R':
        v6 = GUID_WICPixelFormat16bppCbCr;
        break;
      case ' ':
        v6 = GUID_WICPixelFormat32bppR10G10B10A2;
        break;
      case '!':
        v6 = GUID_WICPixelFormat32bppR10G10B10A2HDR10;
        break;
      default:
        v7 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147467259, 0xC8u);
        goto LABEL_48;
    }
    *a2 = v6;
  }
  else
  {
    *a2 = GUID_WICPixelFormatDontCare;
    a2->Data4[7] = v5;
  }
  v7 = 0;
LABEL_48:
  CGuard<CMTALock>::~CGuard<CMTALock>((__int64 *)&v9);
  return v7;
}
