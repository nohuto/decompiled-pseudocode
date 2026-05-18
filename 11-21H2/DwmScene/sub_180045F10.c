/*
 * XREFs of sub_180045F10 @ 0x180045F10
 * Callers:
 *     sub_180012540 @ 0x180012540 (sub_180012540.c)
 *     sub_18006B194 @ 0x18006B194 (sub_18006B194.c)
 *     sub_180088BB8 @ 0x180088BB8 (sub_180088BB8.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18002C73C @ 0x18002C73C (sub_18002C73C.c)
 *     sub_180044110 @ 0x180044110 (sub_180044110.c)
 *     sub_1800465B0 @ 0x1800465B0 (sub_1800465B0.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_180045F10(__int64 a1, __int64 a2)
{
  __int64 i; // rax
  _QWORD *v5; // rbx
  __int64 *v6; // rax
  _QWORD *v7; // rcx
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  LOBYTE(i) = sub_18002C73C(a1 + 16);
  v5 = **(_QWORD ***)(a1 + 88);
  while ( !*((_BYTE *)v5 + 25) )
  {
    v6 = (__int64 *)sub_1800465B0(v5[8], v9);
    sub_180044110(a2, v6);
    sub_180010910((__int64)v9);
    i = v5[2];
    if ( *(_BYTE *)(i + 25) )
    {
      for ( i = v5[1]; !*(_BYTE *)(i + 25) && v5 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
        v5 = (_QWORD *)i;
      v5 = (_QWORD *)i;
    }
    else
    {
      v5 = (_QWORD *)v5[2];
      v7 = *(_QWORD **)i;
      if ( !*(_BYTE *)(*(_QWORD *)i + 25LL) )
      {
        do
        {
          v5 = v7;
          i = *v7;
          v7 = (_QWORD *)i;
        }
        while ( !*(_BYTE *)(i + 25) );
      }
    }
  }
  return i;
}
