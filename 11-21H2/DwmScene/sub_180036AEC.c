/*
 * XREFs of sub_180036AEC @ 0x180036AEC
 * Callers:
 *     sub_180035810 @ 0x180035810 (sub_180035810.c)
 *     sub_1800710C0 @ 0x1800710C0 (sub_1800710C0.c)
 * Callees:
 *     sub_180016240 @ 0x180016240 (sub_180016240.c)
 *     sub_18002C5FC @ 0x18002C5FC (sub_18002C5FC.c)
 *     sub_18002C8E4 @ 0x18002C8E4 (sub_18002C8E4.c)
 *     sub_1800369F8 @ 0x1800369F8 (sub_1800369F8.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180036AEC(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // ebx
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+28h] [rbp-10h]

  sub_18002C5FC(a1 + 112, (__int64)&v6);
  v4 = 0;
  if ( (unsigned int)sub_1800369F8(a1) )
  {
    while ( !sub_180016240((_QWORD *)(*(_QWORD *)(a1 + 88) + 16LL * v4), a2) )
    {
      if ( ++v4 >= (unsigned int)sub_1800369F8(a1) )
        goto LABEL_4;
    }
    if ( v7 )
      sub_18002C8E4(v6);
    return v4;
  }
  else
  {
LABEL_4:
    if ( v7 )
      sub_18002C8E4(v6);
    return 0xFFFFFFFFLL;
  }
}
