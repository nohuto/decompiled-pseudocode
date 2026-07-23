/*
 * XREFs of sub_140AA6400 @ 0x140AA6400
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1405FFB44 @ 0x1405FFB44 (sub_1405FFB44.c)
 *     sub_1405FFBC8 @ 0x1405FFBC8 (sub_1405FFBC8.c)
 *     sub_140A811E4 @ 0x140A811E4 (sub_140A811E4.c)
 *     sub_140A92010 @ 0x140A92010 (sub_140A92010.c)
 *     sub_140A92074 @ 0x140A92074 (sub_140A92074.c)
 *     sub_140A92124 @ 0x140A92124 (sub_140A92124.c)
 *     sub_140A922C0 @ 0x140A922C0 (sub_140A922C0.c)
 *     sub_140AA66E0 @ 0x140AA66E0 (sub_140AA66E0.c)
 */

__int64 __fastcall sub_140AA6400(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 result; // rax
  const void *v10; // rbp
  __int64 v11; // r12
  const void *v12; // rsi
  int v13; // ebx
  int v14; // ecx
  void *v15; // rax
  _QWORD *v16; // rbx
  _QWORD *v17; // rax
  void *v18; // r8
  BOOL v19; // ebx
  const void *v20; // r9

  result = sub_140A922C0(*(_QWORD **)(a2 + 40));
  if ( !(_DWORD)result )
    return result;
  v10 = (const void *)*a1;
  v11 = a1[30];
  v12 = *(const void **)(a4 + 40);
  v13 = *(_DWORD *)(*a1 + 48LL);
  if ( !a5 )
  {
LABEL_17:
    if ( v13 == -1073741637 )
      goto LABEL_18;
    goto LABEL_21;
  }
  result = *(unsigned int *)(a4 + 4);
  v14 = *(_DWORD *)(a4 + 4) & 0x10000000;
  if ( (int)result < 0 )
    goto LABEL_15;
  if ( v14 )
  {
LABEL_16:
    result = sub_140AA66E0(*a1, a2, 0, (unsigned int)(v13 != -1073741637) + 1, (__int64)v12, 0);
    goto LABEL_17;
  }
  if ( *(_BYTE *)(a2 + 1) == 8 )
    goto LABEL_17;
  if ( (a1[7] & 0x20) != 0 )
  {
    result = sub_1405FFB44(0x22Du, *(const void **)(a4 + 40), (const void *)*a1);
    goto LABEL_17;
  }
  result = v13 + 0x80000000;
  if ( (int)result >= 0 && v13 != -1073741637 )
  {
LABEL_15:
    if ( !v14 )
      goto LABEL_17;
    goto LABEL_16;
  }
  result = (unsigned int)dword_140C1B300;
  if ( dword_140C1B300 )
    goto LABEL_17;
  if ( v13 >= 0 )
  {
    result = sub_1405FFB44(0x22Eu, *(const void **)(a4 + 40), (const void *)*a1);
    goto LABEL_21;
  }
  if ( v13 == -1073741637 )
  {
    result = sub_1405FFB44(0x22Fu, *(const void **)(a4 + 40), (const void *)*a1);
LABEL_18:
    if ( (*(_DWORD *)(a3 + 4) & 0x2000000) == 0 && *(_DWORD *)(a3 + 96) != -1073741637 )
    {
      result = sub_1405FFB44(0x216u, v12, v10);
      *(_DWORD *)(a3 + 4) |= 0x2000000u;
    }
  }
LABEL_21:
  if ( *(_BYTE *)(a2 + 1) == 23 )
  {
    v15 = sub_140A92074(*(_QWORD *)(a2 + 40));
    if ( v15 )
    {
      ObfDereferenceObjectWithTag(v15, 0x49667256u);
    }
    else
    {
      v16 = *(_QWORD **)(a2 + 40);
      v17 = sub_140A92010(v16);
      v18 = v17;
      v19 = v17 == v16 && sub_140A811E4((__int64)v17);
      ObfDereferenceObjectWithTag(v18, 0x49667256u);
      if ( !v19 )
        sub_1405FFBC8(0x241u, v12, *(const void **)(v11 + 64), *(const void **)(a2 + 40));
    }
    result = sub_140A92124(*(_QWORD *)(a2 + 40), 0);
    if ( (_DWORD)result )
      return sub_1405FFBC8(0x242u, v12, *(const void **)(v11 + 64), v20);
  }
  return result;
}
