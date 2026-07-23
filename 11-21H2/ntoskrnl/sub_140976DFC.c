/*
 * XREFs of sub_140976DFC @ 0x140976DFC
 * Callers:
 *     sub_140971DC0 @ 0x140971DC0 (sub_140971DC0.c)
 * Callees:
 *     sub_140281C44 @ 0x140281C44 (sub_140281C44.c)
 *     sub_14030B7F0 @ 0x14030B7F0 (sub_14030B7F0.c)
 *     sub_14030EB80 @ 0x14030EB80 (sub_14030EB80.c)
 *     sub_1405A2D90 @ 0x1405A2D90 (sub_1405A2D90.c)
 *     sub_140973AB0 @ 0x140973AB0 (sub_140973AB0.c)
 *     sub_140976880 @ 0x140976880 (sub_140976880.c)
 */

__int64 __fastcall sub_140976DFC(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int16 a6,
        __int64 a7,
        _BYTE *a8,
        int a9)
{
  struct _KTHREAD *CurrentThread; // rsi
  int v13; // ebx

  CurrentThread = KeGetCurrentThread();
  sub_14030B7F0((__int64)CurrentThread, a2);
  if ( (unsigned int)sub_14030EB80(a2) )
  {
    v13 = -1073741800;
  }
  else
  {
    sub_140973AB0((_QWORD *)a3, a6, a2);
    if ( !a9
      || (sub_1405A2D90(a1, (_QWORD *)(a3 + 88)), *(_DWORD *)(a3 + 140) |= 2u, v13 = sub_140976880(a3, a7, a8), v13 >= 0) )
    {
      v13 = 0;
    }
  }
  sub_140281C44((__int64)CurrentThread, a2);
  return (unsigned int)v13;
}
