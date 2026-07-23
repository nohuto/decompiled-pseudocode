/*
 * XREFs of sub_1409E4C24 @ 0x1409E4C24
 * Callers:
 *     NtTraceControl @ 0x1407954F0 (NtTraceControl.c)
 * Callees:
 *     sub_140637580 @ 0x140637580 (sub_140637580.c)
 *     sub_1406375C0 @ 0x1406375C0 (sub_1406375C0.c)
 *     sub_140883086 @ 0x140883086 (sub_140883086.c)
 */

__int64 __fastcall sub_1409E4C24(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  int v7; // r10d
  unsigned int v8; // r11d
  __int64 (**v9)[4]; // r9
  unsigned int i; // r8d
  int v11; // eax
  unsigned int v12; // r11d
  unsigned int v13; // eax
  unsigned int v15; // [rsp+58h] [rbp+20h] BYREF

  v15 = 0;
  v7 = sub_140883086(a1, 0, a2, a3, &v15);
  if ( v7 == -2147483643 )
  {
    v13 = v15;
LABEL_16:
    *a4 = v13;
    if ( v7 >= 0 && v13 > a3 )
      return (unsigned int)-1073741789;
  }
  else
  {
    v8 = v15;
    v9 = &off_140A39080;
    for ( i = 0; i < 0xA; ++i )
    {
      if ( ++v8 > 0xFFFFFFF )
      {
        v7 = -2147483643;
        *a4 = v8;
        return (unsigned int)v7;
      }
      if ( v8 <= a3 )
        *(_OWORD *)(a2 + 16LL * (v8 - 1)) = *(_OWORD *)*v9;
      v9 += 2;
    }
    if ( a3 >= v8 )
      sub_140637580((_OWORD *)(a2 + 16LL * v8), a3 - v8);
    v11 = sub_1406375C0();
    v13 = v12 + v11;
    if ( v13 < v12 )
    {
      v13 = -1;
    }
    else if ( v13 <= 0xFFFFFFF )
    {
      goto LABEL_16;
    }
    v7 = -2147483643;
    *a4 = v13;
  }
  return (unsigned int)v7;
}
