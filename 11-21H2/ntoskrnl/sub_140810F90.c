/*
 * XREFs of sub_140810F90 @ 0x140810F90
 * Callers:
 *     sub_1407655BC @ 0x1407655BC (sub_1407655BC.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1407667B0 @ 0x1407667B0 (sub_1407667B0.c)
 *     sub_1408110C0 @ 0x1408110C0 (sub_1408110C0.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_140810F90(__int64 a1, unsigned int **a2, __int64 *a3)
{
  int v5; // ebx
  __int64 v6; // r9
  __int64 Pool2; // rax
  _WORD *v8; // rbx
  __int64 v9; // rdi
  const void *v10; // rdx
  int v11; // [rsp+60h] [rbp+30h] BYREF
  int v12; // [rsp+64h] [rbp+34h]
  __int64 v13; // [rsp+68h] [rbp+38h] BYREF
  __int64 v14; // [rsp+70h] [rbp+40h] BYREF

  v12 = HIDWORD(a1);
  v14 = 0LL;
  v11 = 0;
  *a3 = 0LL;
  if ( a2 )
  {
    v5 = 0;
    v13 = 0LL;
    while ( sub_1407667B0(a2, (int *)&v13, &v14, &v11, 0LL) )
    {
      if ( v11 && !(unsigned __int8)sub_1408110C0(*(_QWORD *)(*(_QWORD *)(v14 + 312) + 40LL)) )
      {
        if ( *(_QWORD *)(v6 + 48) )
          v5 += *(unsigned __int16 *)(v6 + 40) + 2;
      }
    }
    if ( v5 )
    {
      Pool2 = ExAllocatePool2(256LL, (unsigned int)(v5 + 2), 1265659472LL);
      *a3 = Pool2;
      v8 = (_WORD *)Pool2;
      if ( Pool2 )
      {
        v13 = 2LL;
        while ( sub_1407667B0(a2, (int *)&v13, &v14, &v11, 0LL) )
        {
          if ( v11 )
          {
            v9 = *(_QWORD *)(*(_QWORD *)(v14 + 312) + 40LL);
            if ( !(unsigned __int8)sub_1408110C0(v9) )
            {
              v10 = *(const void **)(v9 + 48);
              if ( v10 )
              {
                memmove(v8, v10, *(unsigned __int16 *)(v9 + 40));
                v8 += ((unsigned __int64)*(unsigned __int16 *)(v9 + 40) >> 1) + 1;
              }
            }
          }
        }
        *v8 = 0;
      }
    }
  }
}
