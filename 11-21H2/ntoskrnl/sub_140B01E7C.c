/*
 * XREFs of sub_140B01E7C @ 0x140B01E7C
 * Callers:
 *     sub_140B01BE0 @ 0x140B01BE0 (sub_140B01BE0.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140B01E7C(_BYTE *a1, unsigned __int8 a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rdi
  __int16 v5; // bp
  char *v7; // rsi
  __int16 v8; // r9
  unsigned __int8 *v9; // r8
  __int64 v10; // r10
  __int16 v11; // cx
  unsigned int v12; // eax
  bool v13; // zf
  __int16 v14; // dx
  __int64 Pool2; // r8
  __int64 v16; // r9
  __int64 v17; // r10
  __int16 v18; // dx
  __int64 v19; // rdx
  char v20; // al
  __int64 result; // rax
  __int64 v22; // rcx

  v3 = 0;
  v4 = a2;
  v5 = -1;
  v7 = a1;
  v8 = -1;
  if ( a2 )
  {
    v9 = a1 + 1;
    v10 = a2;
    do
    {
      v11 = *v9;
      v12 = v3 + 1;
      v13 = v11 == v8;
      v9 += 2;
      v14 = v8;
      v8 = v11;
      if ( v13 )
        v12 = v3;
      v3 = v12;
      if ( v11 == v14 )
        v8 = v14;
      --v10;
    }
    while ( v10 );
  }
  Pool2 = ExAllocatePool2(64LL, 24LL * v3, 0x5049654Bu);
  if ( Pool2 )
  {
    v16 = 0xFFFFFFFFLL;
    if ( (_BYTE)v4 )
    {
      v17 = v4;
      do
      {
        v18 = (unsigned __int8)v7[1];
        if ( v18 != v5 )
        {
          v16 = (unsigned int)(v16 + 1);
          v5 = (unsigned __int8)v7[1];
          v22 = 3 * v16;
          *(_QWORD *)(Pool2 + 8 * v22 + 8) = 0LL;
          *(_BYTE *)(Pool2 + 8 * v22) = v18;
          *(_BYTE *)(Pool2 + 8 * v22 + 1) = 0;
        }
        v19 = 3 * v16;
        ++*(_BYTE *)(Pool2 + 8 * v19 + 1);
        v20 = *v7;
        v7 += 2;
        *(_QWORD *)(Pool2 + 8 * v19 + 8) = *(_QWORD *)(Pool2 + 24 * v16 + 8) | (1LL << v20);
        --v17;
      }
      while ( v17 );
    }
  }
  result = Pool2;
  *a3 = v3;
  return result;
}
