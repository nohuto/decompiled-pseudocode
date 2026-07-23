/*
 * XREFs of sub_140596B14 @ 0x140596B14
 * Callers:
 *     sub_14030BBF0 @ 0x14030BBF0 (sub_14030BBF0.c)
 * Callees:
 *     sub_1402365F4 @ 0x1402365F4 (sub_1402365F4.c)
 *     sub_140265A04 @ 0x140265A04 (sub_140265A04.c)
 *     sub_140265B80 @ 0x140265B80 (sub_140265B80.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140583F5C @ 0x140583F5C (sub_140583F5C.c)
 */

unsigned __int64 __fastcall sub_140596B14(__int64 a1, unsigned int a2)
{
  __int64 v2; // r12
  _QWORD *v4; // r14
  unsigned __int64 result; // rax
  __int64 v6; // rbp
  _QWORD *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rcx
  _QWORD *v10; // r15
  __int64 v11; // rax
  _QWORD *v12; // rbx
  unsigned __int64 v13; // rsi
  __int64 *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned int v17; // edx
  __int64 v18; // rax
  _QWORD *v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // ecx
  _QWORD *v22; // rax
  unsigned int v23; // r8d
  __int64 v24; // rax
  _QWORD *v25; // r9
  _QWORD *v26; // rcx
  _QWORD *v27; // rdx
  __int64 v28; // rbx
  unsigned __int64 v29; // [rsp+20h] [rbp-158h]
  _BYTE Src[64]; // [rsp+30h] [rbp-148h] BYREF
  _QWORD v31[24]; // [rsp+70h] [rbp-108h] BYREF

  v2 = a2;
  memset(Src, 0, sizeof(Src));
  v4 = (_QWORD *)(a1 + 16608);
  if ( (_QWORD *)*v4 == v4 )
    return 0LL;
  v6 = *(_QWORD *)(a1 + 16600);
  v7 = v31;
  v8 = 0LL;
  v29 = 0LL;
  v9 = 12LL;
  do
  {
    v7[1] = v7;
    *v7 = v7;
    v7 += 2;
    --v9;
  }
  while ( v9 );
  while ( 1 )
  {
    v10 = (_QWORD *)*v4;
    if ( (_QWORD *)*v4 == v4 )
      break;
    if ( (_QWORD *)v10[1] != v4 || (v11 = *v10, *(_QWORD **)(*v10 + 8LL) != v10) )
LABEL_33:
      __fastfail(3u);
    *v4 = v11;
    v12 = v10 - 3;
    *(_QWORD *)(v11 + 8) = v4;
    sub_140265B80((__int64)(v10 - 3), (__int64)Src);
    if ( (_DWORD)v2 )
    {
      v13 = 0LL;
      if ( (unsigned int)v2 < 8 )
      {
        v14 = &v12[v2 + 5];
        v15 = (unsigned int)(8 - v2);
        do
        {
          v16 = *v14++;
          v13 += v16;
          --v15;
        }
        while ( v15 );
      }
    }
    else if ( v12[18] <= v12[14] )
    {
      v13 = 0LL;
    }
    else
    {
      v13 = v12[18] - v12[14];
    }
    if ( (v12[23] & 7) == 0 && (unsigned int)sub_1402365F4((__int64)(v10 - 211)) )
      goto LABEL_30;
    if ( *((_BYTE *)v12 + 186) == 2 && !(unsigned int)sub_140583F5C((__int64)(v10 - 3), 0LL) )
    {
      v17 = 10;
      goto LABEL_31;
    }
    if ( v13 && (*((char *)v12 + 184) >= 0 || v12[18] > v12[14]) )
    {
      v17 = 0;
      while ( v13 < 0x100000uLL >> v17 )
      {
        if ( ++v17 >= 9 )
        {
          if ( v17 >= 0xA )
            goto LABEL_31;
          break;
        }
      }
      v18 = -1LL;
      if ( v29 + v13 >= v29 )
        v18 = v29 + v13;
      v29 = v18;
    }
    else
    {
LABEL_30:
      v17 = 11;
    }
LABEL_31:
    v19 = &v31[2 * v17];
    v20 = *v19;
    if ( *(_QWORD **)(*v19 + 8LL) != v19 )
      goto LABEL_33;
    *v10 = v20;
    v10[1] = v19;
    *(_QWORD *)(v20 + 8) = v10;
    *v19 = v10;
  }
  v21 = 0;
  v22 = v31;
  while ( 1 )
  {
    v23 = v21 + 1;
    if ( (_QWORD *)*v22 != v22 )
      break;
    v22 += 2;
    ++v21;
    if ( v23 >= 0xC )
      goto LABEL_44;
  }
  v24 = v31[2 * v21];
  *v4 = v24;
  *(_QWORD *)(v24 + 8) = v4;
  if ( v23 < 0xC )
  {
    v25 = &v31[2 * v23];
    do
    {
      if ( (_QWORD *)*v25 != v25 )
      {
        *(_QWORD *)v31[2 * v21 + 1] = *v25;
        *(_QWORD *)(*v25 + 8LL) = v31[2 * v21 + 1];
        v21 = v23;
      }
      ++v23;
      v25 += 2;
    }
    while ( v23 < 0xC );
  }
  v26 = (_QWORD *)v31[2 * v21 + 1];
  *(_QWORD *)(a1 + 16616) = v26;
  *v26 = v4;
LABEL_44:
  memmove((void *)(v6 + 2416), Src, 0x40uLL);
  v27 = (_QWORD *)(v6 + 2464);
  v28 = 2LL;
  do
  {
    v8 += *v27++;
    --v28;
  }
  while ( v28 );
  *(_QWORD *)(v6 + 2408) = v8;
  *(_WORD *)(v6 + 2346) = sub_140265A04(a1, 0);
  result = v29;
  *(_BYTE *)(v6 + 54) = 1;
  return result;
}
