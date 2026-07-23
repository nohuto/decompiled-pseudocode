/*
 * XREFs of sub_1406BACDC @ 0x1406BACDC
 * Callers:
 *     sub_1406BA720 @ 0x1406BA720 (sub_1406BA720.c)
 *     sub_1406BA8F4 @ 0x1406BA8F4 (sub_1406BA8F4.c)
 *     sub_140806A24 @ 0x140806A24 (sub_140806A24.c)
 *     sub_14081C354 @ 0x14081C354 (sub_14081C354.c)
 * Callees:
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 */

__int64 __fastcall sub_1406BACDC(int a1, __int64 a2, int a3, _DWORD *a4, unsigned int Length, _DWORD *a6)
{
  unsigned int v9; // ebx

  *a6 = 0;
  v9 = 0;
  if ( Length >= 0x10 && a3 == 16 )
  {
    ProbeForWrite(a4, Length, 4u);
    *a4 = 16;
    a4[1] = a1;
    *((_QWORD *)a4 + 1) = a2;
    *a6 = 16;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v9;
}
