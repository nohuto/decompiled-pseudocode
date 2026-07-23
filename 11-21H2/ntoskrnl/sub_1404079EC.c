/*
 * XREFs of sub_1404079EC @ 0x1404079EC
 * Callers:
 *     sub_1403FF93C @ 0x1403FF93C (sub_1403FF93C.c)
 * Callees:
 *     sub_1404000A8 @ 0x1404000A8 (sub_1404000A8.c)
 *     sub_140400AB4 @ 0x140400AB4 (sub_140400AB4.c)
 *     sub_140401350 @ 0x140401350 (sub_140401350.c)
 *     sub_14040721C @ 0x14040721C (sub_14040721C.c)
 */

__int64 __fastcall sub_1404079EC(_DWORD *a1)
{
  int v2; // eax
  int v3; // r15d
  int v4; // r14d
  int v5; // edi
  int v6; // ebp
  unsigned int v7; // edx
  int v8; // ebx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // edx
  unsigned __int64 v13; // rsi
  int v14; // eax
  int v15; // ecx
  unsigned int v16; // ebx
  int v17; // edi
  unsigned int v18; // ebx
  __int64 result; // rax
  unsigned int v20; // r8d

  v2 = sub_140400AB4();
  v3 = a1[9];
  v4 = a1[4];
  v5 = a1[7] << 8;
  v6 = 8 * (v3 + 32 * v2);
  v7 = a1[2] & 0xF;
  a1[11] = v6 + 64;
  v8 = sub_14040721C(v3, v7);
  v9 = sub_140401350();
  v10 = a1[9];
  v11 = 2 * (v8 + v9) + 64;
  v12 = a1[2];
  if ( v6 + 64 <= (unsigned int)(v5 + 64) )
    v6 = v5;
  a1[12] = v10 + v6 + v11;
  a1[13] = sub_14040721C(v10, v12 & 0xF) * a1[23] + ((8 * a1[24] + 31) & 0xFFFFFFE0);
  v13 = (unsigned int)((v4 << 8) + 64);
  v14 = sub_14040721C(v3, 4u);
  v15 = 704 * v4 + 256;
  if ( v13 > v13 + (unsigned int)(v4 << 6) + 64LL + 2 * ((unsigned int)(v4 << 6) + 64LL) + (unsigned int)(v4 << 8) )
    v15 = v13;
  v16 = v15 + v14 + 2 * v3;
  a1[14] = v16;
  if ( v16 <= (unsigned int)sub_140401350() )
    v16 = sub_140401350();
  v17 = a1[9];
  a1[14] = v16;
  sub_1404000A8((__int64)a1);
  v18 = v17 + sub_140401350();
  if ( v18 <= (unsigned int)sub_14040721C(v17, a1[2] & 0xF) )
  {
    result = sub_14040721C(a1[9], a1[2] & 0xF);
  }
  else
  {
    sub_1404000A8((__int64)a1);
    result = a1[9] + (unsigned int)sub_140401350();
  }
  v20 = a1[13] + a1[12];
  if ( v20 <= a1[14] )
    v20 = a1[14];
  a1[15] = result + v20;
  return result;
}
