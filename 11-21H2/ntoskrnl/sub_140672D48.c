/*
 * XREFs of sub_140672D48 @ 0x140672D48
 * Callers:
 *     sub_14067259C @ 0x14067259C (sub_14067259C.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     ObDuplicateObject @ 0x1407A1F80 (ObDuplicateObject.c)
 */

__int64 __fastcall sub_140672D48(ULONG_PTR a1, unsigned int *a2, __int64 a3)
{
  unsigned int *v4; // rsi
  size_t v5; // r14
  char *v6; // rbx
  char v7; // r9
  int v8; // eax
  signed __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 result; // rax
  _QWORD *v23; // r14
  unsigned int v24; // r15d
  unsigned int *v25; // rdi
  size_t v26; // [rsp+40h] [rbp-48h]
  ULONG_PTR BugCheckParameter1; // [rsp+90h] [rbp+8h]
  char v28; // [rsp+98h] [rbp+10h]

  BugCheckParameter1 = a1;
  v4 = *(unsigned int **)(a3 + 208);
  v5 = *((_QWORD *)v4 + 126) + *v4;
  v26 = v5;
  v6 = *(char **)(a3 + 216);
  v7 = *((_BYTE *)KeGetCurrentThread() + 562);
  v28 = v7;
  if ( (*(_BYTE *)(a3 + 8) & 0x40) != 0 && (*(_BYTE *)(a3 + 9) & 1) == 0 )
    v4[2] |= 0x4000u;
  if ( *(_DWORD *)(a3 + 80) == 3 && (int)v4[4] > 0 )
  {
    v8 = ObDuplicateObject(a1, 0, 0, 6, v7);
    a1 = BugCheckParameter1;
    v7 = v28;
    if ( v8 >= 0 )
      *((_QWORD *)v4 + 2) = 0LL;
  }
  if ( a2 )
  {
    v23 = v4 + 8;
    v24 = 0;
    v25 = a2;
    while ( 1 )
    {
      if ( *(_QWORD *)v25 )
      {
        if ( (int)*(_QWORD *)v25 < 0 )
          result = 3221225480LL;
        else
          result = ObDuplicateObject(a1, 0, 0, 6, v7);
        if ( (int)result < 0 )
        {
          if ( a2 == v4 + 8 )
            return result;
        }
        else
        {
          *v23 = 0LL;
        }
      }
      ++v23;
      ++v24;
      v25 += 2;
      if ( v24 >= 3 )
        break;
      a1 = BugCheckParameter1;
      v7 = v28;
    }
    v5 = v26;
  }
  v9 = v6 - (char *)v4;
  memmove(v6, v4, v5);
  v10 = *((_QWORD *)v6 + 8);
  if ( v10 )
    *((_QWORD *)v6 + 8) = v9 + v10;
  v11 = *((_QWORD *)v6 + 11);
  if ( v11 )
    *((_QWORD *)v6 + 11) = v9 + v11;
  v12 = *((_QWORD *)v6 + 13);
  if ( v12 )
    *((_QWORD *)v6 + 13) = v9 + v12;
  v13 = *((_QWORD *)v6 + 15);
  if ( v13 )
    *((_QWORD *)v6 + 15) = v9 + v13;
  v14 = *((_QWORD *)v6 + 23);
  if ( v14 )
    *((_QWORD *)v6 + 23) = v9 + v14;
  v15 = *((_QWORD *)v6 + 25);
  if ( v15 )
    *((_QWORD *)v6 + 25) = v9 + v15;
  v16 = *((_QWORD *)v6 + 27);
  if ( v16 )
    *((_QWORD *)v6 + 27) = v9 + v16;
  v17 = *((_QWORD *)v6 + 29);
  if ( v17 )
    *((_QWORD *)v6 + 29) = v9 + v17;
  v18 = *((_QWORD *)v6 + 131);
  if ( v18 )
    *((_QWORD *)v6 + 131) = v9 + v18;
  v19 = *((_QWORD *)v6 + 133);
  if ( v19 )
    *((_QWORD *)v6 + 133) = v9 + v19;
  v20 = *((_QWORD *)v6 + 134);
  if ( v20 )
    *((_QWORD *)v6 + 134) = v9 + v20;
  v21 = *((_QWORD *)v6 + 16);
  if ( v21 )
    *((_QWORD *)v6 + 16) = v9 + v21;
  *(_QWORD *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1360LL) + 32LL) = v6;
  return 0LL;
}
