/*
 * XREFs of sub_140726394 @ 0x140726394
 * Callers:
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 * Callees:
 *     sub_1402A488C @ 0x1402A488C (sub_1402A488C.c)
 *     sub_140724DC8 @ 0x140724DC8 (sub_140724DC8.c)
 *     sub_140725930 @ 0x140725930 (sub_140725930.c)
 *     sub_140726494 @ 0x140726494 (sub_140726494.c)
 */

__int64 __fastcall sub_140726394(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v5; // rbx
  unsigned __int64 v6; // r8
  char v7; // al
  unsigned int v8; // ebp
  unsigned int v9; // r14d
  __int64 v10; // r8
  __int64 result; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  char *v15; // rcx
  unsigned int v16; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v16 = 0;
  v5 = sub_1402A488C(a1);
  v7 = *(_BYTE *)(a1 + 27);
  if ( (v7 & 1) == 0 )
    return 0LL;
  *(_BYTE *)(a1 + 27) = v7 & 0xFE;
  if ( v5 )
  {
    v8 = *(_DWORD *)v5;
    v9 = *(_DWORD *)(v5 + 4);
    if ( v6 || (v10 = *(_QWORD *)(a1 + 40)) != 0 && (v6 = v10 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
    {
      result = sub_140725930(v6, &v16);
      if ( (int)result < 0 )
        return result;
      v2 = v16;
      if ( v16 )
      {
        v12 = sub_140726494(a2, v16, 0LL);
        *(_QWORD *)(v5 + 16) = v12;
        if ( !v12 )
          return 3221225540LL;
      }
      *(_DWORD *)(v5 + 8) = v2;
    }
  }
  else
  {
    v14 = qword_140D07490[(unsigned __int8)dword_140D06C0C ^ *(unsigned __int8 *)(a1 + 24) ^ (unsigned __int64)BYTE1(a1)];
    v8 = *(_DWORD *)(v14 + 104);
    v9 = *(_DWORD *)(v14 + 108);
  }
  v13 = sub_140726494(a2, v8, v9);
  *(_QWORD *)(a1 + 32) = v13;
  if ( !v13 )
  {
    if ( v5 )
    {
      v15 = *(char **)(v5 + 16);
      if ( v15 )
        sub_140724DC8(v15, v2, 0LL);
    }
    return 3221225540LL;
  }
  return 0LL;
}
