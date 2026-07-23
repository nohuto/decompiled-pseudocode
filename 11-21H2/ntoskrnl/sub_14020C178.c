/*
 * XREFs of sub_14020C178 @ 0x14020C178
 * Callers:
 *     sub_14020B7B0 @ 0x14020B7B0 (sub_14020B7B0.c)
 *     sub_14020B7D4 @ 0x14020B7D4 (sub_14020B7D4.c)
 *     sub_14020BA48 @ 0x14020BA48 (sub_14020BA48.c)
 *     IoPropagateIrpExtensionEx @ 0x14020C270 (IoPropagateIrpExtensionEx.c)
 *     sub_14020C810 @ 0x14020C810 (sub_14020C810.c)
 *     sub_140340130 @ 0x140340130 (sub_140340130.c)
 *     sub_140342C50 @ 0x140342C50 (sub_140342C50.c)
 *     sub_1403437A0 @ 0x1403437A0 (sub_1403437A0.c)
 * Callees:
 *     sub_14020C420 @ 0x14020C420 (sub_14020C420.c)
 *     sub_1402F5F14 @ 0x1402F5F14 (sub_1402F5F14.c)
 */

__int64 __fastcall sub_14020C178(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  v7 = sub_14020C420(a1, 6LL);
  if ( !v7 )
    return 3221225626LL;
  v8 = *(_QWORD *)(a3 + 544);
  if ( (*(_DWORD *)(v8 + 2172) & 0x1000) != 0 && *(_QWORD *)(v8 + 1296) && *(_QWORD *)(*(_QWORD *)(v8 + 1296) + 1544LL) )
  {
    LOBYTE(v6) = 1;
    if ( (a4 & 1) == 0 )
      sub_1402F5F14(v8, v6, &v10);
  }
  *(_QWORD *)(v7 + 16) = v10;
  return 0LL;
}
