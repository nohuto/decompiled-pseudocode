/*
 * XREFs of sub_1C0036C8C @ 0x1C0036C8C
 * Callers:
 *     sub_1C0074CA8 @ 0x1C0074CA8 (sub_1C0074CA8.c)
 * Callees:
 *     sub_1C0015A74 @ 0x1C0015A74 (sub_1C0015A74.c)
 *     sub_1C0018028 @ 0x1C0018028 (sub_1C0018028.c)
 *     sub_1C0050448 @ 0x1C0050448 (sub_1C0050448.c)
 *     sub_1C0059DA8 @ 0x1C0059DA8 (sub_1C0059DA8.c)
 */

__int64 __fastcall sub_1C0036C8C(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  __int64 v5; // rbx
  char v6; // al
  _QWORD *v7; // rsi
  unsigned int v8; // edi
  int v9; // r15d
  __int64 v10; // r14
  int v11; // eax
  char v12; // al
  __int64 v13; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // ebp
  unsigned int v18; // ebp
  int v19; // edi
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // [rsp+68h] [rbp+10h] BYREF

  v2 = 0LL;
  if ( !*(_QWORD *)(a2 + 8) )
    return 0LL;
  v5 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  v6 = *(_BYTE *)(v5 + 2);
  v7 = v6 == 40 ? *(_QWORD **)(v5 + 96) : *(_QWORD **)(v5 + 48);
  if ( v6 == 40 )
  {
    v8 = *(_DWORD *)(v5 + 20);
    v9 = *(_DWORD *)(v5 + 24);
    v10 = *(_QWORD *)(v5 + 64);
    if ( !v8 )
    {
      sub_1C0018028(v5, 0LL, 0LL, 0LL, 0LL, 0LL);
      v2 = 0LL;
    }
  }
  else
  {
    v9 = *(_DWORD *)(v5 + 12);
    v8 = *(unsigned __int8 *)(v5 + 2);
    v10 = *(_QWORD *)(v5 + 24);
  }
  if ( (v9 & 0xC0) == 0 || !v10 && !v7[13] )
    return 0LL;
  if ( v8 > 0x17 || (v11 = 8389124, !_bittest(&v11, v8)) )
  {
    v12 = *(_BYTE *)(a1 + 433);
    if ( v12 != 3 && ((unsigned __int8)(v12 - 1) > 1u || (unsigned int)sub_1C0015A74()) )
    {
      if ( *(_BYTE *)(a1 + 4306) != (_BYTE)v2 )
      {
        if ( *(_BYTE *)(v5 + 2) == 40 )
        {
          v13 = sub_1C0050448(v5);
          *(_QWORD *)(v5 + 64) = 0LL;
          if ( v13 )
            *(_QWORD *)(v13 + 16) = 0LL;
        }
        else
        {
          *(_QWORD *)(v5 + 24) = v2;
        }
      }
      return 0LL;
    }
  }
  v15 = v7[23];
  v16 = v7[13];
  v17 = -(*(_BYTE *)(a2 + 64) != 0);
  v22 = v2;
  v18 = v17 & 0xFFFFFFF0;
  v19 = sub_1C0059DA8(v16, v15, v18 + 32, &v22);
  if ( v19 >= 0 )
  {
    if ( *(_BYTE *)(v5 + 2) == 40 )
      *(_QWORD *)(v5 + 64) = v22;
    else
      *(_QWORD *)(v5 + 24) = v22;
    v20 = v7[17];
    if ( v20 )
    {
      v19 = sub_1C0059DA8(v20, v7[24], v18 + 32, &v22);
      if ( v19 >= 0 )
      {
        v21 = sub_1C0050448(v5);
        *(_QWORD *)(v21 + 16) = v22;
      }
    }
  }
  return (unsigned int)v19;
}
