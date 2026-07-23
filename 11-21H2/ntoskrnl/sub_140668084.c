/*
 * XREFs of sub_140668084 @ 0x140668084
 * Callers:
 *     sub_140664220 @ 0x140664220 (sub_140664220.c)
 *     sub_140667A4C @ 0x140667A4C (sub_140667A4C.c)
 * Callees:
 *     sub_14066666C @ 0x14066666C (sub_14066666C.c)
 *     sub_140666C9C @ 0x140666C9C (sub_140666C9C.c)
 *     sub_14066C1DC @ 0x14066C1DC (sub_14066C1DC.c)
 *     sub_1407A49B4 @ 0x1407A49B4 (sub_1407A49B4.c)
 *     sub_1407A7628 @ 0x1407A7628 (sub_1407A7628.c)
 *     sub_1407A7F84 @ 0x1407A7F84 (sub_1407A7F84.c)
 *     sub_1407AB790 @ 0x1407AB790 (sub_1407AB790.c)
 */

__int64 __fastcall sub_140668084(
        ULONG_PTR *a1,
        unsigned int a2,
        __int64 **a3,
        __int64 a4,
        unsigned __int16 *a5,
        __int64 a6,
        __int64 a7,
        ULONG_PTR *a8,
        char a9,
        char a10)
{
  char v10; // si
  unsigned __int16 *v11; // r14
  ULONG_PTR *v15; // rbp
  __int64 result; // rax
  int v17; // ebx
  ULONG_PTR v18; // rdi
  _WORD *v19; // rcx
  unsigned __int16 v20; // ax
  __int16 v21; // dx
  __int64 v22; // rbp
  __int64 v23; // rax
  ULONG_PTR v24; // rcx
  ULONG_PTR v26; // [rsp+80h] [rbp+18h] BYREF

  v10 = a9;
  v11 = a5;
  v26 = 0LL;
  v15 = a1;
  if ( !a4 || (result = sub_14066666C(*a3[2], a5, a9), (int)result >= 0) )
  {
    result = sub_1407A49B4(&v26, 0LL, 0LL);
    v17 = result;
    if ( (int)result >= 0 )
    {
      v18 = v26;
      if ( v10 )
      {
        v22 = a7;
        if ( a7 )
        {
          v17 = sub_14066C1DC(a3);
          v23 = *(_QWORD *)(v22 + 24);
          v15 = a1;
          *(_QWORD *)(v18 + 272) = v23;
        }
        else
        {
          v15 = a1;
          *(_QWORD *)(v26 + 272) = 0LL;
        }
      }
      else
      {
        v17 = sub_1407AB790(a3, a2, a6, v26, v26 + 104);
      }
      if ( v17 < 0 )
        goto LABEL_22;
      v19 = (_WORD *)v26;
      *(_OWORD *)(v26 + 248) = *(_OWORD *)((char *)KeGetCurrentThread() + 1224);
      v20 = *v11;
      v19[120] = *v11;
      v19[121] = v20 + 40;
      v21 = v19[122] & 0xFF00 | 0xA;
      v19[122] = v21;
      if ( !*((_BYTE *)KeGetCurrentThread() + 562) )
        v19[122] = v21 | v11[2] & 0x8000;
      v18 = v26;
      if ( *v11 && (v17 = sub_140666C9C(v26, a4, a2, *v11, v10, a10), v17 < 0) )
      {
LABEL_22:
        sub_1407A7628(v18);
      }
      else
      {
        if ( v10 )
        {
          v24 = *(_QWORD *)(v18 + 144);
          if ( v24 )
          {
            *a8 = v24;
            sub_1407A7F84(v24);
          }
        }
        *v15 = v18;
      }
      return (unsigned int)v17;
    }
  }
  return result;
}
