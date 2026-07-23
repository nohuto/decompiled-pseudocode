/*
 * XREFs of sub_1406D59B8 @ 0x1406D59B8
 * Callers:
 *     sub_1406D58E0 @ 0x1406D58E0 (sub_1406D58E0.c)
 * Callees:
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_140374BBC @ 0x140374BBC (sub_140374BBC.c)
 *     sub_140AB44C0 @ 0x140AB44C0 (sub_140AB44C0.c)
 */

void __fastcall sub_1406D59B8(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // ebx
  __int64 v6; // rax
  __int64 v7; // r10
  __int64 v8; // r10
  char *v9; // rax
  __int64 v10; // r11
  __int64 v11; // r10

  v4 = a2;
  if ( (*(_DWORD *)(a1 + 160) & 0x2000000) == 0 && a2 < a3 )
  {
    do
    {
      v6 = sub_140AB44C0(a1, v4);
      v7 = *(_QWORD *)(v6 + 8);
      if ( (v7 & 2) == 0 )
      {
        v8 = v7 | 4;
        *(_QWORD *)(v6 + 8) = v8;
        if ( (v8 & 1) != 0 && (v8 & 8) != 0 )
        {
          v9 = sub_14026DFC0(2);
          sub_140374BBC(
            v11 & 0xFFFFFFFFFFFFFFF0uLL,
            (unsigned __int64)*(unsigned int *)(v10 + 16) >> 12,
            (__int64)v9,
            24);
        }
      }
      v4 += 4096;
    }
    while ( v4 < a3 );
  }
}
