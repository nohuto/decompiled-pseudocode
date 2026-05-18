/*
 * XREFs of sub_180036948 @ 0x180036948
 * Callers:
 *     sub_1800198B0 @ 0x1800198B0 (sub_1800198B0.c)
 *     sub_18001AB5C @ 0x18001AB5C (sub_18001AB5C.c)
 *     sub_1800362B0 @ 0x1800362B0 (sub_1800362B0.c)
 *     sub_180036CD4 @ 0x180036CD4 (sub_180036CD4.c)
 *     sub_180038370 @ 0x180038370 (sub_180038370.c)
 *     sub_180038C68 @ 0x180038C68 (sub_180038C68.c)
 *     sub_18003A3F4 @ 0x18003A3F4 (sub_18003A3F4.c)
 *     sub_180077414 @ 0x180077414 (sub_180077414.c)
 * Callees:
 *     sub_1800297CC @ 0x1800297CC (sub_1800297CC.c)
 *     sub_18002C5FC @ 0x18002C5FC (sub_18002C5FC.c)
 *     sub_18002C8E4 @ 0x18002C8E4 (sub_18002C8E4.c)
 *     sub_1800369F8 @ 0x1800369F8 (sub_1800369F8.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_180036948(__int64 a1, _QWORD *a2, unsigned int a3)
{
  unsigned __int64 v3; // rsi
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  char v10; // [rsp+28h] [rbp-10h]

  v3 = a3;
  sub_18002C5FC(a1 + 112, (__int64)&v9);
  if ( (unsigned int)v3 >= (unsigned int)sub_1800369F8(a1) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 88);
    if ( (*(_QWORD *)(a1 + 96) - v6) >> 4 <= v3 )
    {
      sub_1800297CC();
      JUMPOUT(0x1800369F2LL);
    }
    *a2 = 0LL;
    a2[1] = 0LL;
    v7 = *(_QWORD *)(v6 + 16LL * (unsigned int)v3 + 8);
    if ( v7 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
      v7 = *(_QWORD *)(v6 + 16LL * (unsigned int)v3 + 8);
    }
    *a2 = *(_QWORD *)(v6 + 16LL * (unsigned int)v3);
    a2[1] = v7;
  }
  if ( v10 )
    sub_18002C8E4(v9);
  return a2;
}
