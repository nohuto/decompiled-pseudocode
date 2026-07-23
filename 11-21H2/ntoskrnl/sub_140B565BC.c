/*
 * XREFs of sub_140B565BC @ 0x140B565BC
 * Callers:
 *     sub_140B56268 @ 0x140B56268 (sub_140B56268.c)
 * Callees:
 *     sub_1403A8CB4 @ 0x1403A8CB4 (sub_1403A8CB4.c)
 *     sub_1403A9E4C @ 0x1403A9E4C (sub_1403A9E4C.c)
 *     sub_1403AA2B8 @ 0x1403AA2B8 (sub_1403AA2B8.c)
 *     sub_140AAED14 @ 0x140AAED14 (sub_140AAED14.c)
 *     sub_140B5678C @ 0x140B5678C (sub_140B5678C.c)
 */

__int64 __fastcall sub_140B565BC(__int64 a1, __int64 a2, __int64 *a3)
{
  int v4; // edi
  int v6; // eax
  __int64 v7; // r14
  int v8; // ebx
  _DWORD *v9; // rax
  unsigned int v10; // ecx
  int v11; // ecx
  int v12; // r13d
  unsigned __int16 v13; // bx
  unsigned __int16 v14; // si
  __int64 v15; // rax
  __int64 v16; // rdi
  _WORD *v17; // rax
  _WORD *v18; // rbp
  unsigned int v19; // esi
  _WORD *v20; // rcx
  __int64 v21; // rdx
  int v22; // edx
  __int64 v24; // [rsp+20h] [rbp-38h] BYREF
  int v25; // [rsp+28h] [rbp-30h]
  __int16 v26; // [rsp+2Ch] [rbp-2Ch]
  __int64 v27; // [rsp+78h] [rbp+20h] BYREF

  v27 = 0LL;
  v24 = 0LL;
  v4 = a2;
  v25 = 0;
  v26 = 0;
  v6 = sub_140B5678C(a1, a2, &v27);
  v7 = v27;
  v8 = v6;
  if ( v6 < 0 )
    goto LABEL_14;
  v9 = (_DWORD *)(v27 + 4);
  v10 = 0;
  if ( !*(_WORD *)(v27 + 2) )
    goto LABEL_18;
  while ( *v9 != 65539 )
  {
    ++v10;
    v9 += 2;
    if ( v10 >= *(unsigned __int16 *)(v27 + 2) )
      goto LABEL_18;
  }
  v11 = v9[1];
  if ( !v11 )
  {
LABEL_18:
    v8 = -1073741275;
    goto LABEL_14;
  }
  v12 = v11 + v4;
  v8 = sub_1403A9E4C(a1, v11 + v4, 0xEu, &v24);
  if ( v8 < 0 )
    goto LABEL_14;
  if ( __ROR2__(v24, 8) != 4 )
  {
    v8 = -1073741701;
    goto LABEL_14;
  }
  v13 = __ROR2__(WORD1(v24), 8);
  v14 = __ROR2__(HIWORD(v24), 8);
  v15 = sub_1403AA2B8(0x38uLL);
  v16 = v15;
  if ( !v15 )
  {
    v8 = -1073741801;
    goto LABEL_14;
  }
  *(_OWORD *)v15 = 0LL;
  *(_OWORD *)(v15 + 16) = 0LL;
  *(_OWORD *)(v15 + 32) = 0LL;
  *(_QWORD *)(v15 + 48) = 0LL;
  *(_DWORD *)v15 = v14 >> 1;
  v17 = (_WORD *)sub_1403AA2B8((unsigned int)v13 - 14);
  v18 = v17;
  if ( !v17 )
  {
    v8 = -1073741801;
    goto LABEL_22;
  }
  v19 = ((unsigned int)v13 - 14) >> 1;
  *(_QWORD *)(v16 + 8) = v17;
  v8 = sub_1403A9E4C(a1, v12 + 14, 2 * v19, v17);
  if ( v8 < 0 )
  {
LABEL_22:
    sub_140AAED14(v16);
    goto LABEL_14;
  }
  if ( v19 )
  {
    v20 = v18;
    v21 = v19;
    do
    {
      *v20 = __ROR2__(*v20, 8);
      ++v20;
      --v21;
    }
    while ( v21 );
  }
  v22 = 2 * *(_DWORD *)v16;
  *(_QWORD *)(v16 + 24) = v18;
  *(_QWORD *)(v16 + 16) = (char *)v18 + (unsigned int)(v22 + 2);
  *(_QWORD *)(v16 + 32) = (char *)v18 + (unsigned int)(2 * v22 + 2);
  *(_QWORD *)(v16 + 40) = (char *)v18 + (unsigned int)(v22 + 2 * (v22 + 1));
  *(_QWORD *)(v16 + 48) = (char *)v18 + (unsigned int)(4 * v22 + 2);
  v8 = 0;
  *a3 = v16;
LABEL_14:
  if ( v7 )
    sub_1403A8CB4(v7);
  return (unsigned int)v8;
}
