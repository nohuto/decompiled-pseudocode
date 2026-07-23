/*
 * XREFs of sub_140A4FAC4 @ 0x140A4FAC4
 * Callers:
 *     sub_14038DDD4 @ 0x14038DDD4 (sub_14038DDD4.c)
 * Callees:
 *     RtlSetBits @ 0x1402E4C80 (RtlSetBits.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

_QWORD *__fastcall sub_140A4FAC4(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v7; // rsi
  _QWORD *v8; // rdi
  _QWORD *v9; // rbx
  unsigned __int64 v10; // r14
  _QWORD *v11; // rcx
  unsigned __int64 v12; // rax
  _QWORD *result; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rax

  v7 = a2;
  RtlSetBits((PRTL_BITMAP)(a1 + 32), a2, a3);
  v8 = 0LL;
  v9 = *(_QWORD **)(a1 + 64);
  v10 = v7 + a3;
  if ( v9 == (_QWORD *)(a1 + 64) )
    goto LABEL_13;
  while ( 1 )
  {
    v11 = v9;
    v9 = (_QWORD *)*v9;
    v12 = v11[3];
    if ( (v7 < v12 || v7 > v11[4]) && (v10 < v12 || v10 > v11[4]) )
    {
      if ( v7 > v12 )
        goto LABEL_7;
      if ( v12 > v10 )
        break;
    }
    if ( v7 <= v12 )
      v12 = v7;
    v7 = v12;
    v14 = v11[4];
    if ( v10 >= v14 )
      v14 = v10;
    --*(_DWORD *)(a1 + 80);
    v15 = *v11;
    v10 = v14;
    if ( *(_QWORD **)(*v11 + 8LL) != v11 )
      goto LABEL_25;
    v16 = (_QWORD *)v11[1];
    if ( (_QWORD *)*v16 != v11 )
      goto LABEL_25;
    *v16 = v15;
    *(_QWORD *)(v15 + 8) = v16;
    if ( v8 )
      ExFreePoolWithTag(v11, 0x70616D48u);
    else
      v8 = v11;
LABEL_7:
    if ( v9 == (_QWORD *)(a1 + 64) )
      goto LABEL_12;
  }
  if ( v7 >= v12 )
    goto LABEL_7;
  v9 = (_QWORD *)v9[1];
LABEL_12:
  if ( v8 )
  {
LABEL_14:
    *((_DWORD *)v8 + 4) = a4;
    v8[3] = v7;
    v8[4] = v10;
    result = (_QWORD *)v9[1];
    if ( (_QWORD *)*result != v9 )
LABEL_25:
      __fastfail(3u);
    *v8 = v9;
    v8[1] = result;
    *result = v8;
    v9[1] = v8;
    ++*(_DWORD *)(a1 + 80);
  }
  else
  {
LABEL_13:
    result = (_QWORD *)ExAllocatePool2(64LL, 48LL, 1885433160LL);
    v8 = result;
    if ( result )
      goto LABEL_14;
    if ( *(int *)(a1 + 188) >= 0 )
      *(_DWORD *)(a1 + 188) = -1073741670;
  }
  return result;
}
