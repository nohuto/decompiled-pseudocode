/*
 * XREFs of ?IsWithinWorkArea@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAA_NAEBURect@Foundation@67@@Z @ 0x1806848A4
 * Callers:
 *     ?SnapWindow@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAX_KAEBURect@Foundation@67@U?$array_view@$$CBURect@Foundation@Windows@winrt@@@7@@Z @ 0x1806852A8 (-SnapWindow@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@.c)
 *     ?SnapWindows@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXU?$array_view@$$CBUWindowId@UI@Windows@winrt@@@7@U?$array_view@$$CBURect@Foundation@Windows@winrt@@@7@@Z @ 0x1806854F0 (-SnapWindows@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??8Geometry@@YA_NAEBUCRect@0@0@Z @ 0x1803CD4B8 (--8Geometry@@YA_NAEBUCRect@0@0@Z.c)
 */

bool __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::IsWithinWorkArea(
        winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager *this,
        const struct winrt::Windows::Foundation::Rect *a2)
{
  float v2; // xmm0_4
  float v3; // xmm1_4
  int v4; // r9d
  float v5; // xmm0_4
  int v6; // r10d
  float v7; // xmm1_4
  int v8; // r11d
  float v9; // xmm0_4
  int v10; // ebx
  float v11; // xmm1_4
  int v12; // eax
  float v13; // xmm0_4
  int v14; // ecx
  float v15; // xmm1_4
  _DWORD v17[4]; // [rsp+20h] [rbp-38h] BYREF
  _DWORD v18[4]; // [rsp+30h] [rbp-28h] BYREF

  v2 = *((float *)this + 18);
  v3 = *((float *)this + 19);
  v4 = (int)v2;
  v5 = v2 + *((float *)this + 20);
  v6 = (int)v3;
  v18[0] = v4;
  v7 = v3 + *((float *)this + 21);
  v8 = (int)v5;
  v18[1] = v6;
  v9 = *(float *)a2;
  v10 = (int)v7;
  v18[2] = v8;
  v11 = *((float *)a2 + 1);
  v12 = (int)v9;
  v18[3] = v10;
  v13 = v9 + *((float *)a2 + 2);
  v14 = (int)v11;
  if ( v4 >= v12 )
    v4 = v12;
  v17[0] = v4;
  v15 = v11 + *((float *)a2 + 3);
  if ( v6 >= v14 )
    v6 = v14;
  v17[1] = v6;
  if ( v8 <= (int)v13 )
    v8 = (int)v13;
  v17[2] = v8;
  if ( v10 <= (int)v15 )
    v10 = (int)v15;
  v17[3] = v10;
  return Geometry::operator==(v17, v18);
}
