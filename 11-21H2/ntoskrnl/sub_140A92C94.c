/*
 * XREFs of sub_140A92C94 @ 0x140A92C94
 * Callers:
 *     sub_1405FFA20 @ 0x1405FFA20 (sub_1405FFA20.c)
 *     sub_140A92D34 @ 0x140A92D34 (sub_140A92D34.c)
 *     sub_140A9D340 @ 0x140A9D340 (sub_140A9D340.c)
 *     sub_140AA1C3C @ 0x140AA1C3C (sub_140AA1C3C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140A92C94(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r10d

  v5 = 1;
  if ( _InterlockedExchange(&dword_140D57684, 1) )
  {
    return 0;
  }
  else
  {
    qword_140D58B60 = a1;
    qword_140D58B68 = a2;
    qword_140D58B70 = a3;
    qword_140D58B78 = a4;
    qword_140D58B80 = a5;
  }
  return v5;
}
