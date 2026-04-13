/*
 * XREFs of ?overflow@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@MEAAGG@Z @ 0x180064990
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Allocate@G@std@@YAPEAG_KPEAG@Z @ 0x18004F54C (--$_Allocate@G@std@@YAPEAG_KPEAG@Z.c)
 *     ?copy@?$char_traits@_W@std@@SAPEA_WPEA_WPEB_W_K@Z @ 0x180062EAC (-copy@-$char_traits@_W@std@@SAPEA_WPEA_WPEB_W_K@Z.c)
 */

__int64 __fastcall std::basic_stringbuf<unsigned short>::overflow(__int64 a1, unsigned __int16 a2)
{
  __int64 result; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r8
  __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  int *v9; // rcx
  __int64 v10; // rdx
  _WORD **v11; // rcx
  unsigned __int16 *v12; // rdx
  __int64 **v13; // r12
  void ***v14; // r15
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r13
  void *v18; // rax
  __int64 v19; // rdi
  void *v20; // r15
  __int64 *v21; // rax
  bool v22; // zf
  __int64 *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rdx
  _DWORD **v29; // [rsp+60h] [rbp+8h]
  _DWORD **v30; // [rsp+70h] [rbp+18h]

  if ( (*(_BYTE *)(a1 + 112) & 2) != 0 )
    return 0xFFFFLL;
  if ( a2 == 0xFFFF )
    return 0LL;
  if ( (*(_BYTE *)(a1 + 112) & 8) != 0 )
  {
    v5 = **(_QWORD **)(a1 + 64);
    if ( v5 )
    {
      v6 = *(_QWORD *)(a1 + 104);
      if ( v5 < v6 )
      {
        v7 = **(int **)(a1 + 88);
        **(_QWORD **)(a1 + 64) = v6;
        **(_DWORD **)(a1 + 88) = (__int64)(v5 + 2 * v7 - v6) >> 1;
      }
    }
  }
  v8 = **(_QWORD **)(a1 + 64);
  if ( !v8 )
  {
    v15 = 0LL;
    v14 = (void ***)(a1 + 24);
    v29 = (_DWORD **)(a1 + 88);
    v30 = (_DWORD **)(a1 + 88);
    v13 = (__int64 **)(a1 + 24);
LABEL_15:
    v16 = 32LL;
    goto LABEL_16;
  }
  v9 = *(int **)(a1 + 88);
  v30 = (_DWORD **)(a1 + 88);
  v10 = *v9;
  if ( v8 < 2 * v10 + v8 )
  {
    *v9 = v10 - 1;
LABEL_11:
    v11 = *(_WORD ***)(a1 + 64);
    v12 = (*v11)++;
    result = a2;
    *v12 = a2;
    return result;
  }
  v13 = (__int64 **)(a1 + 24);
  v29 = (_DWORD **)(a1 + 88);
  v14 = (void ***)(a1 + 24);
  v15 = (__int64)(2 * v10 + v8 - **(_QWORD **)(a1 + 24)) >> 1;
  v16 = v15 >> 1;
  if ( v15 >> 1 < 0x20 )
    goto LABEL_15;
  do
  {
LABEL_16:
    if ( 0x7FFFFFFF - v16 >= v15 )
      break;
    v16 >>= 1;
  }
  while ( v16 );
  if ( v16 )
  {
    v17 = v16 + v15;
    v18 = std::_Allocate<unsigned short>(v16 + v15);
    v19 = (__int64)v18;
    v20 = **v14;
    if ( v15 )
    {
      std::char_traits<wchar_t>::copy(v18, v20, v15);
      *(_QWORD *)(a1 + 104) = v19 + 2 * ((__int64)(*(_QWORD *)(a1 + 104) - (_QWORD)v20) >> 1);
      v24 = v19 + 2 * ((__int64)(**(_QWORD **)(a1 + 64) - (_QWORD)v20) >> 1);
      v25 = (__int64)(2 * v17 - 2 * ((__int64)(**(_QWORD **)(a1 + 64) - (_QWORD)v20) >> 1)) >> 1;
      **(_QWORD **)(a1 + 32) = v19 + 2 * ((__int64)(**(_QWORD **)(a1 + 32) - (_QWORD)v20) >> 1);
      **(_QWORD **)(a1 + 64) = v24;
      **v29 = v25;
      if ( (*(_BYTE *)(a1 + 112) & 4) == 0 )
      {
        v26 = **(_QWORD **)(a1 + 64) + 2LL;
        v27 = (__int64)(**(_QWORD **)(a1 + 56) - (_QWORD)v20) >> 1;
        **v13 = v19;
        v28 = v19 + 2 * v27;
        **(_QWORD **)(a1 + 56) = v28;
        **(_DWORD **)(a1 + 80) = (v26 - v28) >> 1;
        goto LABEL_27;
      }
      **v13 = v19;
      v23 = *(__int64 **)(a1 + 56);
    }
    else
    {
      v21 = *(__int64 **)(a1 + 32);
      *(_QWORD *)(a1 + 104) = v19;
      *v21 = v19;
      **(_QWORD **)(a1 + 64) = v19;
      **v29 = v17;
      v22 = (*(_BYTE *)(a1 + 112) & 4) == 0;
      **v13 = v19;
      v23 = *(__int64 **)(a1 + 56);
      if ( v22 )
      {
        *v23 = v19;
        **(_DWORD **)(a1 + 80) = 1;
LABEL_27:
        if ( (*(_BYTE *)(a1 + 112) & 1) != 0 )
          operator delete(v20);
        *(_DWORD *)(a1 + 112) |= 1u;
        --**v30;
        goto LABEL_11;
      }
    }
    *v23 = 0LL;
    **(_DWORD **)(a1 + 80) = v19 >> 1;
    goto LABEL_27;
  }
  return 0xFFFFLL;
}
