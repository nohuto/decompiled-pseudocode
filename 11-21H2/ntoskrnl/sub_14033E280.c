/*
 * XREFs of sub_14033E280 @ 0x14033E280
 * Callers:
 *     sub_140313DE0 @ 0x140313DE0 (sub_140313DE0.c)
 * Callees:
 *     sub_140251340 @ 0x140251340 (sub_140251340.c)
 *     sub_140266B40 @ 0x140266B40 (sub_140266B40.c)
 *     sub_1402EB440 @ 0x1402EB440 (sub_1402EB440.c)
 *     sub_140313CA0 @ 0x140313CA0 (sub_140313CA0.c)
 *     sub_140313D20 @ 0x140313D20 (sub_140313D20.c)
 *     sub_140323D70 @ 0x140323D70 (sub_140323D70.c)
 *     sub_14033D7D0 @ 0x14033D7D0 (sub_14033D7D0.c)
 */

unsigned __int64 __fastcall sub_14033E280(
        __int64 *a1,
        unsigned __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        volatile signed __int32 **a8)
{
  __int64 v8; // r14
  __int64 v12; // rax
  __int64 i; // r13
  __int64 v14; // rbp
  unsigned int v15; // edi
  int v16; // eax
  __int64 v17; // r12
  _QWORD *v18; // rdx
  volatile signed __int32 **v19; // rcx
  int v20; // r9d
  unsigned int v21; // r8d
  __int64 v22; // rax
  unsigned __int64 result; // rax
  unsigned int v24; // eax
  int v25; // r9d
  __int64 v26; // rax
  __int64 *v27; // rcx
  unsigned __int64 v28; // [rsp+80h] [rbp+8h] BYREF
  __int64 v29; // [rsp+98h] [rbp+20h]

  v8 = *a1;
  LODWORD(v28) = 0;
  if ( v8 )
  {
    v12 = *(_QWORD *)(v8 + 24) & 0xFFFFFFFFFFLL;
    for ( i = 0xAAAAAAAAAAAAAAABuLL * ((v8 + 0x220000000000LL) >> 4);
          v12 != 0x3FFFFFFFFFLL;
          v12 = *(_QWORD *)(v8 + 24) & 0xFFFFFFFFFFLL )
    {
      v8 = 48 * v12 - 0x220000000000LL;
    }
  }
  else
  {
    i = 0x3FFFFFFFFFLL;
  }
  v14 = a6;
  v15 = (*(unsigned __int16 *)(*(_QWORD *)(a6 + 208) + 32LL) >> 1) & 0x1F;
  if ( a4 )
  {
    if ( *(_BYTE *)a4 == 1 )
    {
      result = sub_140266B40(a3, ((*(_DWORD *)(a4 + 80) >> 3) & 7u) + 1);
      if ( a2 > result )
      {
        if ( !result )
          return result;
        a2 = result;
      }
    }
  }
  v16 = sub_140313D20((__int64)a3, *(__int64 **)(v14 + 208), a7, (int *)&v28);
  v17 = a5;
  if ( !v16 || a1[1] >= a2 )
    goto LABEL_9;
  v18 = (_QWORD *)(a5 + 120);
  while ( 1 )
  {
    v19 = a8;
    v20 = *(_DWORD *)(v17 + 80);
    v21 = *((_DWORD *)v19 + 3) | (_DWORD)v19[1] & _InterlockedExchangeAdd(*a8, 1u);
    v22 = sub_1402EB440((__int64)a3, v28, v21, ~BYTE2(v20) & 2, v18, 0);
    v29 = v22;
    if ( v22 == -1 )
      break;
    a6 = 48 * v22 - 0x220000000000LL;
    sub_140313CA0(a6, i, 0);
    v26 = a6;
    if ( !*a1 )
      v8 = a6;
    ++a1[1];
    v18 = (_QWORD *)(v17 + 120);
    i = v29;
    *a1 = v26;
    if ( a1[1] >= a2 )
      goto LABEL_9;
  }
  if ( *(_QWORD *)(v17 + 120) )
  {
    *(_QWORD *)(v17 + 128) = a2 - a1[1];
    v27 = *(__int64 **)(v14 + 208);
    *(_QWORD *)(v17 + 104) = v27;
    return sub_140251340(v27);
  }
  else
  {
LABEL_9:
    result = a1[1];
    if ( result < a2 )
    {
      v28 = a2 - result;
      v24 = sub_14033D7D0(v15);
      result = sub_140323D70((__int64)a3, *(_QWORD *)(v17 + 56), *(_QWORD *)v17, v25, v24, 0, -1LL, &v28);
      if ( result )
      {
        if ( *a1 )
          sub_140313CA0(v8, 0xAAAAAAAAAAAAAAABuLL * ((__int64)(result + 0x220000000000LL) >> 4), 0);
        else
          *a1 = result;
        result = (unsigned int)v28;
        a1[1] += (unsigned int)v28;
      }
    }
  }
  return result;
}
