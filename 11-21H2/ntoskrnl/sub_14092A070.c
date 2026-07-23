/*
 * XREFs of sub_14092A070 @ 0x14092A070
 * Callers:
 *     sub_1405400A4 @ 0x1405400A4 (sub_1405400A4.c)
 *     sub_1406C321C @ 0x1406C321C (sub_1406C321C.c)
 *     sub_1406EA7D0 @ 0x1406EA7D0 (sub_1406EA7D0.c)
 *     sub_140702604 @ 0x140702604 (sub_140702604.c)
 *     sub_140757090 @ 0x140757090 (sub_140757090.c)
 *     sub_140831AEC @ 0x140831AEC (sub_140831AEC.c)
 *     sub_140927394 @ 0x140927394 (sub_140927394.c)
 *     sub_14092A888 @ 0x14092A888 (sub_14092A888.c)
 *     sub_14092A938 @ 0x14092A938 (sub_14092A938.c)
 *     sub_14092A9F4 @ 0x14092A9F4 (sub_14092A9F4.c)
 * Callees:
 *     sub_140257280 @ 0x140257280 (sub_140257280.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_14062D734 @ 0x14062D734 (sub_14062D734.c)
 *     sub_1409283F4 @ 0x1409283F4 (sub_1409283F4.c)
 *     sub_14092AC20 @ 0x14092AC20 (sub_14092AC20.c)
 */

__int64 __fastcall sub_14092A070(_QWORD *Object, char a2, __int64 a3)
{
  char *CurrentThread; // r12
  int v7; // ebp
  int v8; // esi

  CurrentThread = (char *)KeGetCurrentThread();
  if ( (xmmword_140D06900[0] & 0x400000) != 0 )
    sub_14062D734(*((_QWORD *)KeGetCurrentThread() + 23), (__int64)CurrentThread, 1);
  do
  {
    v7 = 0;
    if ( Object == *((_QWORD **)KeGetCurrentThread() + 23) && (a2 & 1) != 0 )
      v7 = (unsigned __int8)sub_14092AC20(Object);
    *(_DWORD *)(a3 + 44) = 259;
    v8 = sub_1409283F4(Object, CurrentThread, a3, 32 * (a2 & 2u), 0LL);
    if ( v7 )
    {
      sub_140257280((ULONG_PTR)Object, 0LL, 1u);
      KeLeaveCriticalRegion();
    }
  }
  while ( v8 >= 0 && *(_DWORD *)(a3 + 44) == 1073807361 );
  return (unsigned int)v8;
}
