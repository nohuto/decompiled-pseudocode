/*
 * XREFs of BuildFirmwareActivateCommand @ 0x1C001A08C
 * Callers:
 *     FirmwareActivate @ 0x1C001A838 (FirmwareActivate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BuildFirmwareActivateCommand(__int64 a1, unsigned __int8 a2, char a3, char a4)
{
  int v4; // eax
  int v5; // eax
  __int64 result; // rax

  v4 = (*(_DWORD *)(a1 + 40) ^ a2) & 7;
  *(_BYTE *)a1 = 16;
  v5 = *(_DWORD *)(a1 + 40) ^ v4;
  if ( a4 )
  {
    result = v5 | 0x18u;
  }
  else if ( a3 )
  {
    result = v5 & 0xFFFFFFE7 | 0x10;
  }
  else
  {
    result = v5 & 0xFFFFFFE7 | 8;
  }
  *(_DWORD *)(a1 + 40) = result;
  return result;
}
