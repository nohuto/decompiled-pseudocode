/*
 * XREFs of sub_1402EF060 @ 0x1402EF060
 * Callers:
 *     sub_14025A794 @ 0x14025A794 (sub_14025A794.c)
 *     sub_14025F4D4 @ 0x14025F4D4 (sub_14025F4D4.c)
 *     sub_140267320 @ 0x140267320 (sub_140267320.c)
 *     sub_140268BEC @ 0x140268BEC (sub_140268BEC.c)
 *     sub_140274E94 @ 0x140274E94 (sub_140274E94.c)
 *     sub_140275FC0 @ 0x140275FC0 (sub_140275FC0.c)
 *     sub_1402EEC18 @ 0x1402EEC18 (sub_1402EEC18.c)
 *     sub_1402F5AEC @ 0x1402F5AEC (sub_1402F5AEC.c)
 *     sub_1403250B0 @ 0x1403250B0 (sub_1403250B0.c)
 *     sub_14035D970 @ 0x14035D970 (sub_14035D970.c)
 *     sub_140376BFC @ 0x140376BFC (sub_140376BFC.c)
 *     sub_140397C78 @ 0x140397C78 (sub_140397C78.c)
 *     sub_1403C4AE0 @ 0x1403C4AE0 (sub_1403C4AE0.c)
 *     sub_140539A1C @ 0x140539A1C (sub_140539A1C.c)
 *     sub_1406EBCCC @ 0x1406EBCCC (sub_1406EBCCC.c)
 *     sub_1406EC1C4 @ 0x1406EC1C4 (sub_1406EC1C4.c)
 *     sub_140983C8C @ 0x140983C8C (sub_140983C8C.c)
 * Callees:
 *     sub_1402EF0CC @ 0x1402EF0CC (sub_1402EF0CC.c)
 *     sub_1402EF304 @ 0x1402EF304 (sub_1402EF304.c)
 *     sub_140346210 @ 0x140346210 (sub_140346210.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_1402EF060(ULONG_PTR BugCheckParameter2, int a2, unsigned int a3, __int64 a4)
{
  ULONG_PTR v4; // rdi
  ULONG_PTR BugCheckParameter4; // rbp
  int v8; // eax
  __int64 result; // rax

  v4 = a2;
  BugCheckParameter4 = a3;
  sub_140346210(BugCheckParameter2);
  v8 = sub_1402EF304((unsigned int)v4);
  result = sub_1402EF0CC(*(_QWORD *)(a4 + 16), BugCheckParameter2, v8, BugCheckParameter4, 0);
  if ( !(_BYTE)result )
    KeBugCheckEx(0xE4u, 5uLL, BugCheckParameter2, v4, BugCheckParameter4);
  return result;
}
