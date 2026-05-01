/*
 * XREFs of ?IsColorizationEnabled@GhostDivider@@AEAA_NXZ @ 0x1805E6FA8
 * Callers:
 *     ?GetColor@GhostDivider@@AEAAKXZ @ 0x1805E6D60 (-GetColor@GhostDivider@@AEAAKXZ.c)
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800A8AF0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 */

bool __fastcall GhostDivider::IsColorizationEnabled(GhostDivider *this)
{
  char v1; // bl
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF
  int v4; // [rsp+34h] [rbp+Ch]

  v4 = HIDWORD(this);
  v1 = 0;
  v3 = 0;
  if ( SHRegGetDWORD(HKEY_CURRENT_USER, L"Software\\Microsoft\\Windows\\DWM", L"ColorPrevalence", &v3) >= 0 )
    return v3 != 0;
  return v1;
}
