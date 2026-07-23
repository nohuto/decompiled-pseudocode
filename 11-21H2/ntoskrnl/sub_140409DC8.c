/*
 * XREFs of sub_140409DC8 @ 0x140409DC8
 * Callers:
 *     sub_1403FF93C @ 0x1403FF93C (sub_1403FF93C.c)
 * Callees:
 *     sub_1404000A8 @ 0x1404000A8 (sub_1404000A8.c)
 *     sub_140400AB4 @ 0x140400AB4 (sub_140400AB4.c)
 *     sub_140401350 @ 0x140401350 (sub_140401350.c)
 *     sub_14040721C @ 0x14040721C (sub_14040721C.c)
 */

__int64 __fastcall sub_140409DC8(_DWORD *a1)
{
  int v2; // ebx
  int v3; // eax
  unsigned int v4; // edx
  unsigned int v5; // edi
  unsigned int v6; // esi
  int v7; // ebx
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  __int64 v14; // rdi
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rdi
  int v17; // eax
  unsigned int v18; // ebx
  int v19; // edi
  unsigned int v20; // ebx
  __int64 result; // rax
  unsigned int v22; // r8d

  sub_140400AB4();
  v2 = a1[9];
  v3 = sub_14040721C(v2, a1[2] & 0xF);
  v4 = a1[2] & 0xF;
  v5 = (a1[7] << 8) + 64;
  v6 = 2 * (v3 + 4 * (v2 + 32 * a1[4] + 8));
  a1[11] = v6;
  v7 = sub_14040721C(v2, v4);
  v8 = sub_140401350();
  v9 = a1[9];
  v10 = a1[2];
  v11 = 2 * (v7 + v8);
  if ( v6 <= v5 )
    v6 = v5;
  a1[12] = v11 + v9 + v6;
  v12 = sub_14040721C(v9, v10 & 0xF) * a1[23] + ((8 * a1[24] + 31) & 0xFFFFFFE0);
  v13 = a1[4];
  a1[13] = v12;
  v14 = (unsigned int)(v13 << 8);
  v15 = (unsigned int)(v14 + 64);
  v16 = (unsigned int)(v13 << 6) + 64LL + v15 + 2 * ((unsigned int)(v13 << 6) + 64LL) + v14;
  v17 = sub_14040721C(a1[9], 4u);
  if ( v15 <= v16 )
    LODWORD(v15) = v16;
  v18 = v15 + v17 + 2 * a1[9];
  a1[14] = v18;
  if ( v18 <= (unsigned int)sub_140401350() )
    v18 = sub_140401350();
  v19 = a1[9];
  a1[14] = v18;
  sub_1404000A8((__int64)a1);
  v20 = v19 + sub_140401350();
  if ( v20 <= (unsigned int)sub_14040721C(v19, a1[2] & 0xF) )
  {
    result = sub_14040721C(a1[9], a1[2] & 0xF);
  }
  else
  {
    sub_1404000A8((__int64)a1);
    result = a1[9] + (unsigned int)sub_140401350();
  }
  v22 = a1[12] + a1[13];
  if ( v22 <= a1[14] )
    v22 = a1[14];
  a1[15] = result + v22;
  return result;
}
