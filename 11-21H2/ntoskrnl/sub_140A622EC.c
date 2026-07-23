/*
 * XREFs of sub_140A622EC @ 0x140A622EC
 * Callers:
 *     sub_140A62700 @ 0x140A62700 (sub_140A62700.c)
 * Callees:
 *     sub_140391A94 @ 0x140391A94 (sub_140391A94.c)
 *     sub_1403B2B00 @ 0x1403B2B00 (sub_1403B2B00.c)
 *     sub_1403B2F00 @ 0x1403B2F00 (sub_1403B2F00.c)
 *     sub_1403B41A0 @ 0x1403B41A0 (sub_1403B41A0.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void __fastcall sub_140A622EC(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int16 v4; // bx
  __int64 v5; // r10
  __int64 v6; // r8
  __int64 v7; // rax
  int v8; // ecx
  __int16 v9; // [rsp+40h] [rbp+8h] BYREF
  __int16 v10; // [rsp+48h] [rbp+10h] BYREF

  v3 = a1;
  v9 = 0;
  if ( *(_BYTE *)(a1 + 45) )
  {
    if ( *(_DWORD *)a1 )
    {
      v5 = *(_QWORD *)(a1 + 72);
      if ( v5 )
      {
        v6 = 1000LL * *(_QWORD *)(a1 + 80) / v5;
        v7 = 1000LL * *(_QWORD *)(a1 + 96);
        *(_DWORD *)(a1 + 88) = v6;
        v8 = v7 / v5;
        *(_DWORD *)(v3 + 120) = 1000LL * *(_QWORD *)(v3 + 112) / v5 - v8;
        *(_DWORD *)(v3 + 104) = v8 - v6;
      }
    }
  }
  else
  {
    if ( (dword_140C0C60C & 4) != 0 )
      sub_140391A94(a1, a2, a3);
    LOBYTE(a1) = 1;
    sub_14042A5E0(a1, a2);
    if ( (int)sub_1403B2F00(0) >= 0 )
    {
      sub_1403B41A0(0, (unsigned __int8)byte_140C4C078 >> 1, (__int64)&v9, 2u, 0LL);
      v4 = v9;
      v10 = v9;
      if ( (int)sub_1403B2F00(3) >= 0 )
      {
        sub_1403B41A0(3, (unsigned __int8)byte_140C4C078 >> 1, (__int64)&v9, 2u, 0LL);
        v4 = v9 | v10;
      }
      v10 = v4 | 0x20;
      sub_1403B2B00(0, (unsigned __int8)byte_140C4C078 >> 1, (__int64)&v10, 2u, 0LL);
      if ( (int)sub_1403B2F00(3) >= 0 )
        sub_1403B2B00(3, (unsigned __int8)byte_140C4C078 >> 1, (__int64)&v10, 2u, 0LL);
    }
  }
}
