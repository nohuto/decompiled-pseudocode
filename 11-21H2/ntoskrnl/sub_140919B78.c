/*
 * XREFs of sub_140919B78 @ 0x140919B78
 * Callers:
 *     sub_14068B1C8 @ 0x14068B1C8 (sub_14068B1C8.c)
 *     sub_14090D9E8 @ 0x14090D9E8 (sub_14090D9E8.c)
 * Callees:
 *     sub_14091A644 @ 0x14091A644 (sub_14091A644.c)
 */

__int64 __fastcall sub_140919B78(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdx
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // rcx
  int v8; // ecx
  _QWORD *v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // r10
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // r8
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  _QWORD *v21; // r8
  _QWORD *v22; // r11
  char *v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 result; // rax
  __int64 v30; // rcx
  _QWORD *v31; // [rsp+20h] [rbp-10h] BYREF
  _QWORD *v32; // [rsp+28h] [rbp-8h]

  sub_14091A644();
  v4 = (_QWORD *)(a2 + 1544);
  v5 = a1 - a2;
  v6 = 6LL;
  do
  {
    v7 = *(_QWORD *)((char *)v4 + v5);
    *(_QWORD *)((char *)v4 + v5) = *v4;
    *v4++ = v7;
    --v6;
  }
  while ( v6 );
  v8 = *(_DWORD *)(a1 + 1792);
  v9 = (_QWORD *)(a1 + 1896);
  v10 = 64LL;
  *(_DWORD *)(a1 + 1792) = *(_DWORD *)(a2 + 1792);
  *(_DWORD *)(a2 + 1792) = v8;
  v11 = a2 - a1;
  v12 = *(_QWORD *)(a1 + 1808);
  *(_QWORD *)(a1 + 1808) = *(_QWORD *)(a2 + 1808);
  v13 = *(_QWORD *)(a2 + 1816);
  *(_QWORD *)(a2 + 1808) = v12;
  v14 = *(_QWORD *)(a1 + 1816);
  *(_QWORD *)(a1 + 1816) = v13;
  *(_QWORD *)(a2 + 1816) = v14;
  LODWORD(v13) = *(_DWORD *)(a1 + 1872);
  *(_DWORD *)(a1 + 1872) = *(_DWORD *)(a2 + 1872);
  LODWORD(v14) = *(_DWORD *)(a2 + 1876);
  *(_DWORD *)(a2 + 1872) = v13;
  LODWORD(v13) = *(_DWORD *)(a1 + 1876);
  *(_DWORD *)(a1 + 1876) = v14;
  LODWORD(v14) = *(_DWORD *)(a2 + 1880);
  *(_DWORD *)(a2 + 1876) = v13;
  LODWORD(v13) = *(_DWORD *)(a1 + 1880);
  *(_DWORD *)(a1 + 1880) = v14;
  v15 = *(_QWORD *)(a2 + 1888);
  *(_DWORD *)(a2 + 1880) = v13;
  v16 = *(_QWORD *)(a1 + 1888);
  *(_QWORD *)(a1 + 1888) = v15;
  *(_QWORD *)(a2 + 1888) = v16;
  do
  {
    v17 = (_QWORD *)*v9;
    v18 = &v31;
    v32 = &v31;
    v19 = &v31;
    v31 = &v31;
    if ( v17 != v9 )
    {
      v31 = v17;
      v32 = *(_QWORD **)((char *)v9 + v11 + v5 + 8);
      v20 = v32;
      v17[1] = &v31;
      *v20 = &v31;
      v19 = v31;
      *(_QWORD *)((char *)v9 + v11 + v5 + 8) = v9;
      v18 = v32;
      *v9 = v9;
    }
    v21 = (_QWORD *)((char *)v9 + v11);
    v22 = *(_QWORD **)((char *)v9 + v11);
    if ( v22 != (_QWORD *)((char *)v9 + v11) )
    {
      v23 = (char *)v9 + v11;
      v24 = *(_QWORD **)((char *)v9 + v11 + 8);
      *v9 = v22;
      *(_QWORD *)&v23[v5 + 8] = v24;
      v22[1] = v9;
      *v24 = v9;
      v19 = v31;
      *((_QWORD *)v23 + 1) = v21;
      v18 = v32;
      *v21 = v21;
    }
    if ( v19 != &v31 )
    {
      *v21 = v19;
      *(_QWORD *)((char *)v9 + v11 + 8) = v18;
      v19[1] = v21;
      *v18 = v21;
    }
    v9 += 2;
    --v10;
  }
  while ( v10 );
  v25 = *(_QWORD *)(a1 + 4136);
  *(_QWORD *)(a1 + 4136) = *(_QWORD *)(a2 + 4136);
  v26 = *(_QWORD *)(a2 + 4144);
  *(_QWORD *)(a2 + 4136) = v25;
  v27 = *(_QWORD *)(a1 + 4144);
  *(_QWORD *)(a1 + 4144) = v26;
  *(_QWORD *)(a2 + 4144) = v27;
  v28 = *(_QWORD *)(a1 + 4184);
  *(_QWORD *)(a1 + 4184) = *(_QWORD *)(a2 + 4184);
  *(_QWORD *)(a2 + 4184) = v28;
  LODWORD(v27) = *(_DWORD *)(a1 + 4224);
  *(_DWORD *)(a1 + 4224) = *(_DWORD *)(a2 + 4224);
  LODWORD(v28) = *(_DWORD *)(a2 + 4228);
  *(_DWORD *)(a2 + 4224) = v27;
  LODWORD(v27) = *(_DWORD *)(a1 + 4228);
  *(_DWORD *)(a1 + 4228) = v28;
  LODWORD(v28) = *(_DWORD *)(a2 + 4752);
  *(_DWORD *)(a2 + 4228) = v27;
  LODWORD(v27) = *(_DWORD *)(a1 + 4752);
  *(_DWORD *)(a1 + 4752) = v28;
  LODWORD(v28) = *(_DWORD *)(a2 + 4756);
  *(_DWORD *)(a2 + 4752) = v27;
  LODWORD(v27) = *(_DWORD *)(a1 + 4756);
  *(_DWORD *)(a1 + 4756) = v28;
  LODWORD(v28) = *(_DWORD *)(a2 + 4760);
  *(_DWORD *)(a2 + 4756) = v27;
  LODWORD(v27) = *(_DWORD *)(a1 + 4760);
  *(_DWORD *)(a1 + 4760) = v28;
  LODWORD(v28) = *(_DWORD *)(a2 + 4764);
  *(_DWORD *)(a2 + 4760) = v27;
  LODWORD(v27) = *(_DWORD *)(a1 + 4764);
  *(_DWORD *)(a1 + 4764) = v28;
  result = *(_QWORD *)(a2 + 4792);
  *(_DWORD *)(a2 + 4764) = v27;
  v30 = *(_QWORD *)(a1 + 4792);
  *(_QWORD *)(a1 + 4792) = result;
  *(_QWORD *)(a2 + 4792) = v30;
  return result;
}
