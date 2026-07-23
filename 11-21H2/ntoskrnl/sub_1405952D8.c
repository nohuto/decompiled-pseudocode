/*
 * XREFs of sub_1405952D8 @ 0x1405952D8
 * Callers:
 *     sub_14096D10C @ 0x14096D10C (sub_14096D10C.c)
 *     sub_14096D3A4 @ 0x14096D3A4 (sub_14096D3A4.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_1402E8000 @ 0x1402E8000 (sub_1402E8000.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_140424FF0 @ 0x140424FF0 (sub_140424FF0.c)
 *     sub_14059508C @ 0x14059508C (sub_14059508C.c)
 *     sub_1405B2504 @ 0x1405B2504 (sub_1405B2504.c)
 */

char __fastcall sub_1405952D8(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 *v3; // r14
  unsigned __int64 v4; // rsi
  int v5; // edx
  char result; // al
  int v7; // ebp
  __int64 v8; // r13
  unsigned __int64 v9; // rdi
  __int64 v10; // r15
  int v11; // edi
  BOOL v12; // eax
  __int64 v13; // rdx
  __int128 v14; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 *v15; // [rsp+30h] [rbp-38h]

  v3 = (unsigned __int64 *)(a2 + 48);
  v4 = (unsigned __int64)*(unsigned int *)(a2 + 40) >> 12;
  v14 = 0LL;
  v15 = 0LL;
  v5 = *(_DWORD *)(a3 + 48) & 0xC00;
  result = v5 == 3072;
  if ( (*(_DWORD *)(a3 + 48) & 0x380) != 0 && v5 == 3072 )
    v7 = 2;
  else
    v7 = v5 != 1024;
  if ( v4 )
  {
    v8 = a1 - (_QWORD)v3;
    while ( 1 )
    {
      sub_1402E8000(1, 2uLL, (__int64)&v14);
      v9 = (unsigned __int64)v15;
      v10 = (__int64)(v15 + 1);
      sub_14059508C(v15, *v3, v7);
      sub_14059508C((unsigned __int64 *)v10, *(unsigned __int64 *)((char *)v3 + v8 + 48), v7);
      sub_140424FF0(v10 << 25 >> 16, (__int64)(v9 << 25) >> 16);
      if ( !sub_140317A80(v9) )
        goto LABEL_11;
      if ( (unsigned int)sub_140229550() )
      {
        *(_QWORD *)v9 = 0LL;
        sub_1402294F0(v9, 0LL);
        goto LABEL_12;
      }
      if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
        break;
      *v15 = 0LL;
LABEL_12:
      v11 = 0;
      v12 = sub_140317A80(v10);
      v13 = 0LL;
      if ( v12 && (unsigned int)sub_140229550() )
        v11 = v13 + 1;
      *(_QWORD *)v10 = 0LL;
      if ( v11 )
        sub_1402294F0(v10, 0LL);
      result = sub_1405B2504(&v14, v13);
      ++v3;
      if ( !--v4 )
        return result;
    }
    v9 = (unsigned __int64)v15;
LABEL_11:
    *(_QWORD *)v9 = 0LL;
    goto LABEL_12;
  }
  return result;
}
