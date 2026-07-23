/*
 * XREFs of HaliHandlePCIConfigSpaceAccess @ 0x140520DB0
 * Callers:
 *     <none>
 * Callees:
 *     HaliPciInterfaceReadConfig @ 0x14033F5C0 (HaliPciInterfaceReadConfig.c)
 *     HalpPCIConfig @ 0x14033F630 (HalpPCIConfig.c)
 */

__int64 __fastcall HaliHandlePCIConfigSpaceAccess(char a1, int a2, unsigned int a3, _WORD *a4)
{
  unsigned int v4; // ebx
  int v6; // r11d
  __int64 v7; // r8

  v4 = 0;
  if ( a2 == 3320 )
  {
    dword_140D18348 = *(_DWORD *)a4;
    byte_140D1834C = 1;
  }
  else if ( (unsigned int)(a2 - 3324) <= 3 && byte_140D1834C )
  {
    v6 = (dword_140D18348 & 0xFC) + a2 - 3324;
    v7 = (dword_140D18348 & 0x700 | ((unsigned int)dword_140D18348 >> 8) & 0xF8) >> 3;
    if ( a1 )
      HaliPciInterfaceReadConfig(0LL, BYTE2(dword_140D18348), v7, a4, v6, a3);
    else
      HalpPCIConfig(0LL, BYTE2(dword_140D18348), v7, a4, v6, a3, 1);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v4;
}
