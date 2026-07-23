/*
 * XREFs of sub_1405A47A0 @ 0x1405A47A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     sub_140291210 @ 0x140291210 (sub_140291210.c)
 *     sub_1402CFEB0 @ 0x1402CFEB0 (sub_1402CFEB0.c)
 *     ?_Getint@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0HHAEAH@Z @ 0x1402EA644 (-_Getint@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHAEAV-$ist.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14033DBC0 @ 0x14033DBC0 (sub_14033DBC0.c)
 *     sub_140352E50 @ 0x140352E50 (sub_140352E50.c)
 *     sub_1403AE6BC @ 0x1403AE6BC (sub_1403AE6BC.c)
 */

__int64 __fastcall sub_1405A47A0(__int64 a1, __int64 a2, volatile signed __int32 *a3, __int64 a4)
{
  signed __int32 v7; // eax
  unsigned int v8; // edi
  void **v9; // r14
  __int64 i; // rbp
  unsigned __int64 v11; // r15
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  int v14; // eax
  unsigned int v15; // r8d
  unsigned int v16; // edx
  unsigned int v17; // r9d
  unsigned int v18; // r8d
  int v19; // eax
  int v20; // edi
  signed __int32 v21; // eax
  unsigned int v22; // edi
  __int64 result; // rax
  int j; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v25[5]; // [rsp+28h] [rbp-50h] BYREF
  int v26; // [rsp+98h] [rbp+20h] BYREF

  memset(v25, 0, 32);
  v7 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v8 = ~v7 & 0x80000000;
  if ( (v7 & 0x7FFFFFFF) != 0 )
  {
    v26 = 0;
    while ( (*(_DWORD *)a4 & 0x80000000) != v8 )
      sub_1402F32E0(&v26, a2, (__int64)a3, a4);
  }
  else
  {
    *(_DWORD *)a4 = v8 | *(_DWORD *)(a4 + 4);
    v9 = *(void ***)a2;
    sub_140352E50(*(_QWORD *)a2, v25);
    for ( i = 3LL; ; --i )
    {
      v11 = v25[i];
      v12 = sub_140317A10(v11);
      if ( (v12 & 1) == 0 )
        goto LABEL_20;
      if ( (v12 & 0x80u) != 0LL || !i )
        break;
    }
    if ( (*(_DWORD *)(a2 + 24) & 1) != 0 )
    {
      if ( (v12 & 0x800) == 0 )
      {
LABEL_20:
        v20 = -1073741819;
        goto LABEL_21;
      }
      if ( (v12 & 0x42) == 0 )
      {
        sub_14033DBC0(v11, v12 | 0x42);
        v13 = sub_1402CFEB0((unsigned __int64)v9);
        v14 = sub_14027B080(v13);
        v15 = 2;
        if ( v14 == 1 )
        {
          v16 = 2;
        }
        else if ( v14 == 2 )
        {
          v16 = 1;
          v15 = 0;
        }
        else
        {
          v16 = 0;
        }
        std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint((unsigned __int64)v9, v16, v15);
      }
    }
    v17 = *(_DWORD *)(a2 + 20);
    v18 = *(_DWORD *)(a2 + 16);
    if ( (*(_DWORD *)(a2 + 24) & 1) != 0 )
      v19 = sub_1403AE6BC(v9, *(_BYTE **)(a2 + 8), v18, v17);
    else
      v19 = sub_140291210(*(_BYTE **)(a2 + 8), v9, v18, v17);
    v20 = v19;
LABEL_21:
    *(_DWORD *)(a2 + 28) = v20;
  }
  v21 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v22 = ~v21 & 0x80000000;
  if ( (v21 & 0x7FFFFFFF) != 0 )
  {
    for ( j = 0; ; sub_1402F32E0(&j, a2, (__int64)a3, a4) )
    {
      result = *(_DWORD *)a4 & 0x80000000;
      if ( (_DWORD)result == v22 )
        break;
    }
  }
  else
  {
    result = v22 | *(_DWORD *)(a4 + 4);
    *(_DWORD *)a4 = result;
  }
  _InterlockedDecrement(a3);
  return result;
}
