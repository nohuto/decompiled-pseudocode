/*
 * XREFs of SystemSettings::Keyboard::LoadSetting @ 0x1800A7A34
 * Callers:
 *     ??0TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@QEAA@XZ @ 0x1800A78F0 (--0TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@QEAA@XZ.c)
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800A8AF0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 */

__int64 __fastcall SystemSettings::Keyboard::LoadSetting(HKEY a1, const unsigned __int16 *a2)
{
  int DWORD; // eax
  unsigned int v3; // ecx
  unsigned int v5; // [rsp+40h] [rbp+18h] BYREF

  DWORD = SHRegGetDWORD(a1, L"SOFTWARE\\Microsoft\\TabletTip\\1.7", a2, &v5);
  v3 = 0;
  if ( DWORD < 0 )
    return 0xFFFFFFFFLL;
  if ( v5 )
  {
    LOBYTE(v3) = v5 == 2;
    ++v3;
  }
  return v3;
}
