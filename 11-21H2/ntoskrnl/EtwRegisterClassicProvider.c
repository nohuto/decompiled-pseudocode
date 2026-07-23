/*
 * XREFs of EtwRegisterClassicProvider @ 0x1406D2300
 * Callers:
 *     sub_140855238 @ 0x140855238 (sub_140855238.c)
 * Callees:
 *     sub_1406D2394 @ 0x1406D2394 (sub_1406D2394.c)
 */

__int64 __fastcall EtwRegisterClassicProvider(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( a3 )
    return sub_1406D2394(qword_140D05008, a1, 2, a3, a4, retaddr, a5);
  else
    return 3221225485LL;
}
