/*
 * XREFs of sub_1405047F4 @ 0x1405047F4
 * Callers:
 *     sub_14045699C @ 0x14045699C (sub_14045699C.c)
 * Callees:
 *     sub_14045693C @ 0x14045693C (sub_14045693C.c)
 */

__int64 __fastcall sub_1405047F4(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, unsigned int a6)
{
  unsigned __int64 v6; // r8
  char v8; // r12
  unsigned __int64 v9; // rbp
  bool v11; // r14
  unsigned int v12; // r11d
  unsigned int v13; // r9d
  unsigned int v14; // r10d
  unsigned __int64 *v15; // r15
  unsigned __int64 *v16; // rsi
  unsigned __int64 *v17; // r13
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // r15
  unsigned int v20; // esi
  int v21; // ecx
  int v22; // eax
  unsigned __int64 *v23; // rax
  unsigned int v24; // ecx
  _QWORD *v25; // r10
  __int64 v26; // rdx
  __int64 v27; // r8
  char v29; // [rsp+70h] [rbp+8h]
  unsigned __int64 *v30; // [rsp+78h] [rbp+10h]
  unsigned __int64 v32; // [rsp+88h] [rbp+20h]

  v6 = *(_QWORD *)(a1 + 136);
  v8 = *(_BYTE *)(a1 + 145);
  v9 = v6 >> 12;
  v32 = v6;
  v29 = v8;
  v11 = !a5 && !*(_BYTE *)(a1 + 437);
  v12 = a6;
  v13 = 4096 - (a4 & 0xFFF);
  v14 = v13;
  v15 = (unsigned __int64 *)(a2 + 8 * ((unsigned int)((unsigned __int64)(a4 - *(_QWORD *)(a2 + 32)) >> 12) + 6LL));
  v16 = v15;
  v30 = v15;
  if ( *v15 > v9 )
    goto LABEL_32;
  if ( !v11 )
    goto LABEL_9;
  if ( (((unsigned int)sub_14045693C(a1) - 1) & (unsigned int)a4) != 0 )
  {
LABEL_32:
    v14 = 0;
    goto LABEL_34;
  }
  v6 = v32;
LABEL_9:
  if ( v13 >= v12 )
  {
LABEL_28:
    if ( v14 > v12 )
    {
      v14 = v12;
      if ( v11 )
      {
        v22 = sub_14045693C(a1);
        if ( ((v22 - 1) & v12) != 0 )
          v14 &= 0xFFFFF000;
      }
    }
  }
  else
  {
    while ( 1 )
    {
      v17 = v16 + 1;
      v18 = v16[1];
      if ( v18 > v9 )
        break;
      v19 = *v16;
      if ( *v16 + 1 != v18 )
        goto LABEL_27;
      v20 = v12 - v14;
      if ( v12 - v14 > 0x1000 )
        v20 = 4096;
      if ( v6 < v20 + (v18 << 12) - 1 && *(_DWORD *)(a1 + 512) != 3 )
      {
LABEL_26:
        v8 = v29;
LABEL_27:
        v15 = v30;
        goto LABEL_28;
      }
      if ( !*(_BYTE *)(a1 + 437) && !a5 )
      {
        v21 = sub_14045693C(a1) - 1;
        if ( (v21 & ((_DWORD)v18 << 12)) != 0 || (v21 & v20) != 0 )
          goto LABEL_26;
        v6 = v32;
      }
      v8 = v29;
      if ( ((v19 ^ v18) & 0xFFFFFFFFFFF00000uLL) == 0 && (v29 == 1 || ((v19 ^ v18) & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
      {
        v16 = v17;
        v14 += 4096;
        if ( v14 < v12 )
          continue;
      }
      goto LABEL_27;
    }
    v15 = v30;
  }
LABEL_34:
  if ( !*(_BYTE *)(a1 + 434) || !v12 || v14 )
    return v14;
  v23 = v15 + 1;
  v24 = v13;
  if ( v13 >= v12 )
  {
LABEL_40:
    if ( v24 > v12 )
      v24 = v12;
  }
  else
  {
    while ( *v23 > v9 )
    {
      v24 += 4096;
      ++v23;
      if ( v24 >= v12 )
        goto LABEL_40;
    }
  }
  v25 = *(_QWORD **)(a3 + 56);
  if ( v25 )
  {
    v26 = *v25 >> 12;
    while ( 1 )
    {
      v25 = (_QWORD *)v25[1];
      if ( v13 >= v24 )
        break;
      if ( !v25 )
        return v13;
      v27 = *v25 >> 12;
      if ( v27 != v26 + 1
        || ((v26 ^ v27) & 0xFFFFFFFFFFF00000uLL) != 0
        || v8 != 1 && ((v26 ^ v27) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      {
        break;
      }
      v26 = *v25 >> 12;
      v13 += 4096;
    }
    if ( v13 > v24 )
      return v24;
  }
  else
  {
    return 0;
  }
  return v13;
}
