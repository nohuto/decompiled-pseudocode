/*
 * XREFs of sub_140233E34 @ 0x140233E34
 * Callers:
 *     sub_140233B60 @ 0x140233B60 (sub_140233B60.c)
 * Callees:
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_1402CFEB0 @ 0x1402CFEB0 (sub_1402CFEB0.c)
 *     sub_14032CB70 @ 0x14032CB70 (sub_14032CB70.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407B92D0 @ 0x1407B92D0 (sub_1407B92D0.c)
 */

__int64 __fastcall sub_140233E34(_QWORD *a1)
{
  _QWORD *v2; // r9
  __int64 v3; // rdi
  __int64 v4; // r9
  unsigned __int64 v5; // r13
  __int64 v6; // r10
  unsigned __int64 v7; // r12
  char *v8; // r14
  _QWORD *v9; // rsi
  __int64 v10; // r15
  __int64 v11; // r8
  char v12; // bl
  __int64 v13; // rdx
  _QWORD *v14; // rdx
  __int64 result; // rax
  __int64 v16; // rcx
  char *v17; // rcx
  __int64 i; // r14
  _QWORD *v19; // rcx
  __int64 j; // rsi
  _QWORD *v21; // rcx
  _OWORD v22[21]; // [rsp+40h] [rbp-C0h] BYREF
  int v24; // [rsp+1A8h] [rbp+A8h] BYREF
  _QWORD *v25; // [rsp+1B0h] [rbp+B0h]

  memset(v22, 0, 0x88uLL);
  memset(&v22[9], 0, 0x88uLL);
  v2 = (_QWORD *)a1[21];
  v24 = 0;
  v25 = v2;
  v3 = v2[12];
  v5 = sub_1402CFEB0(*v2);
  if ( v5 < a1[4] )
    v5 = a1[4];
  v7 = sub_1402CFEB0(*(_QWORD *)(v4 + 8) + 8LL) - 1;
  if ( v7 > a1[5] )
    v7 = a1[5];
  if ( v5 == (*(unsigned int *)(v3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 32) << 32)) << 12 )
  {
    v8 = *(char **)v3;
    v17 = (char *)v3;
    if ( *(_QWORD *)v3 )
    {
      for ( ; *((_QWORD *)v8 + 1) != v6; v8 = (char *)*((_QWORD *)v8 + 1) )
        ;
    }
    else
    {
      for ( i = *(_QWORD *)(v3 + 16); ; i = *((_QWORD *)v8 + 2) )
      {
        v8 = (char *)(i & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v8 || *((char **)v8 + 1) == v17 )
          break;
        v17 = v8;
      }
    }
  }
  else
  {
    if ( _bittest((const signed __int32 *)(v3 + 48), 0x15u) )
    {
      v22[0] = *(_OWORD *)v3;
      v22[1] = *(_OWORD *)(v3 + 16);
      v22[2] = *(_OWORD *)(v3 + 32);
      v22[3] = *(_OWORD *)(v3 + 48);
    }
    else
    {
      v22[0] = *(_OWORD *)v3;
      v22[1] = *(_OWORD *)(v3 + 16);
      v22[2] = *(_OWORD *)(v3 + 32);
      v22[3] = *(_OWORD *)(v3 + 48);
      v22[4] = *(_OWORD *)(v3 + 64);
      v22[5] = *(_OWORD *)(v3 + 80);
      v22[6] = *(_OWORD *)(v3 + 96);
      v22[7] = *(_OWORD *)(v3 + 112);
      *(_QWORD *)&v22[8] = *(_QWORD *)(v3 + 128);
    }
    HIDWORD(v22[1]) = (v5 >> 12) - 1;
    BYTE1(v22[2]) = ((v5 >> 12) - 1) >> 32;
    v8 = (char *)v22 + 1;
  }
  if ( v7 == (((*(unsigned int *)(v3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 33) << 32)) << 12) | 0xFFF) )
  {
    v9 = *(_QWORD **)(v3 + 8);
    v19 = (_QWORD *)v3;
    if ( v9 )
    {
      v21 = (_QWORD *)*v9;
      if ( *v9 )
      {
        do
        {
          v9 = v21;
          v21 = (_QWORD *)*v21;
        }
        while ( v21 );
      }
    }
    else
    {
      for ( j = *(_QWORD *)(v3 + 16); ; j = v9[2] )
      {
        v9 = (_QWORD *)(j & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v9 || (_QWORD *)*v9 == v19 )
          break;
        v19 = v9;
      }
    }
  }
  else
  {
    if ( _bittest((const signed __int32 *)(v3 + 48), 0x15u) )
    {
      v22[9] = *(_OWORD *)v3;
      v22[10] = *(_OWORD *)(v3 + 16);
      v22[11] = *(_OWORD *)(v3 + 32);
      v22[12] = *(_OWORD *)(v3 + 48);
    }
    else
    {
      v22[9] = *(_OWORD *)v3;
      v22[10] = *(_OWORD *)(v3 + 16);
      v22[11] = *(_OWORD *)(v3 + 32);
      v22[12] = *(_OWORD *)(v3 + 48);
      v22[13] = *(_OWORD *)(v3 + 64);
      v22[14] = *(_OWORD *)(v3 + 80);
      v22[15] = *(_OWORD *)(v3 + 96);
      v22[16] = *(_OWORD *)(v3 + 112);
      *(_QWORD *)&v22[17] = *(_QWORD *)(v3 + 128);
    }
    DWORD2(v22[10]) = (v7 >> 12) + 1;
    LOBYTE(v22[11]) = ((v7 >> 12) + 1) >> 32;
    v9 = (_QWORD *)((char *)&v22[9] + 1);
  }
  v10 = *((_QWORD *)KeGetCurrentThread() + 23);
  LOBYTE(v11) = sub_1402CF4F0(a1[3]);
  v12 = v11;
  sub_14032CB70(v5, v7, v11, &v24);
  LOBYTE(v13) = v12;
  sub_1402B0CE0(a1[3], v13);
  sub_1407B92D0(v5, v7, v10, (_DWORD)v8, (__int64)v9, v3, (__int64)&v24);
  v14 = v25;
  result = v25[2];
  v16 = *(_QWORD *)(result + 32);
  if ( v16 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 1272), -v16);
    result = v14[2];
    *(_QWORD *)(result + 32) = 0LL;
  }
  return result;
}
