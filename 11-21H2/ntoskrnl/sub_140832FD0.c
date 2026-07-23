/*
 * XREFs of sub_140832FD0 @ 0x140832FD0
 * Callers:
 *     sub_140832F68 @ 0x140832F68 (sub_140832F68.c)
 *     sub_140B15608 @ 0x140B15608 (sub_140B15608.c)
 * Callees:
 *     sub_1407C0890 @ 0x1407C0890 (sub_1407C0890.c)
 *     sub_1409BF604 @ 0x1409BF604 (sub_1409BF604.c)
 */

__int64 __fastcall sub_140832FD0(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rbp
  unsigned int v5; // ebx
  _DWORD *v8; // rsi
  unsigned __int64 v9; // rdx
  _DWORD *v10; // rbp
  unsigned __int64 v11; // rdx
  _DWORD *v12; // rcx
  int v13; // eax
  unsigned int v14; // eax
  __int64 v16; // rax
  int v17; // [rsp+50h] [rbp+8h] BYREF

  v17 = a1;
  v4 = *(_DWORD **)(a2 + 8);
  v5 = 0;
  v8 = 0LL;
  if ( !v4 )
    goto LABEL_6;
  v9 = (unsigned __int64)(v4 + 1);
  if ( *v4 )
  {
    v8 = (_DWORD *)sub_1407C0890((__int64)&v17, v9, (unsigned int)*v4, 12LL);
    a1 = v17;
    if ( v8 == &v4[3 * *v4 + 1] || *v8 != v17 )
      v8 = 0LL;
  }
  else
  {
    v16 = sub_1409BF604((unsigned int)&v17, v9, 0, 12, (__int64)sub_1408634B0);
    a1 = v17;
    v8 = (_DWORD *)v16;
  }
  if ( v8 )
  {
    *(_QWORD *)a4 = *(_QWORD *)v8;
    *(_DWORD *)(a4 + 8) = v8[2];
  }
  else
  {
LABEL_6:
    *(_QWORD *)(a4 + 4) = 0LL;
    *(_DWORD *)a4 = a1;
  }
  v10 = *(_DWORD **)(a3 + 8);
  if ( v10 )
  {
    v11 = (unsigned __int64)(v10 + 1);
    if ( *v10 )
    {
      v12 = (_DWORD *)sub_1407C0890((__int64)&v17, v11, (unsigned int)*v10, 16LL);
      if ( v12 == &v10[4 * *v10 + 1] || *v12 != v17 )
        v12 = 0LL;
    }
    else
    {
      v12 = (_DWORD *)sub_1409BF604((unsigned int)&v17, v11, 0, 16, (__int64)sub_1408634B0);
    }
    v13 = *(_DWORD *)(a4 + 4);
    if ( v12 )
      v14 = v13 | 0x80;
    else
      v14 = v13 & 0xFFFFFF7F;
    *(_DWORD *)(a4 + 4) = v14;
  }
  else
  {
    *(_DWORD *)(a4 + 4) &= ~0x80u;
    v14 = *(_DWORD *)(a4 + 4);
  }
  if ( !v8 )
    return (v14 & 0x80u) != 0 ? 279 : -1073741275;
  return v5;
}
