/*
 * XREFs of sub_1409560F4 @ 0x1409560F4
 * Callers:
 *     sub_140955BAC @ 0x140955BAC (sub_140955BAC.c)
 * Callees:
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 */

__int64 __fastcall sub_1409560F4(int a1, int a2, int a3, _DWORD *a4, unsigned int Length, _DWORD *a6)
{
  unsigned int v9; // ebx

  *a6 = 0;
  v9 = 0;
  if ( Length >= 0xC && a3 == 12 )
  {
    ProbeForWrite(a4, Length, 4u);
    *a4 = 12;
    a4[1] = a1;
    a4[2] = a2;
    *a6 = 12;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v9;
}
