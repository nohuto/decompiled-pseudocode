/*
 * XREFs of sub_1405A2E3C @ 0x1405A2E3C
 * Callers:
 *     sub_14031CD90 @ 0x14031CD90 (sub_14031CD90.c)
 * Callees:
 *     sub_14024D050 @ 0x14024D050 (sub_14024D050.c)
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall sub_1405A2E3C(__int64 a1, __int64 *a2)
{
  __int64 v2; // r13
  bool v3; // zf
  unsigned int v5; // r15d
  _QWORD *v6; // rsi
  _QWORD *v7; // rax
  unsigned __int64 v8; // rcx
  _QWORD *v9; // r14
  _QWORD *v10; // rcx
  volatile LONG *v11; // rbx
  __int128 v13; // [rsp+30h] [rbp-30h] BYREF
  __int128 Object; // [rsp+40h] [rbp-20h] BYREF
  char *v15; // [rsp+50h] [rbp-10h]

  v2 = a2[7];
  v3 = (a2[1] & 2) == 0;
  v15 = 0LL;
  v13 = 0LL;
  Object = 0LL;
  if ( v3 || (unsigned __int64)*a2 > 0x7FFFFFFEFFFFLL )
    return 0LL;
  v5 = 0;
  v6 = (_QWORD *)(a1 + 24);
  while ( 1 )
  {
    v7 = (_QWORD *)*v6;
    if ( (_QWORD *)*v6 == v6 )
      break;
    v8 = *a2;
    do
    {
      v9 = v7;
      if ( v8 >= v7[2] && v8 <= v7[3] )
        break;
      v7 = (_QWORD *)*v7;
    }
    while ( v7 != v6 );
    if ( v7 == v6 )
      break;
    LOWORD(Object) = 0;
    DWORD1(Object) = 0;
    v15 = (char *)&Object + 8;
    *((_QWORD *)&Object + 1) = (char *)&Object + 8;
    BYTE2(Object) = 6;
    v10 = (_QWORD *)v9[5];
    if ( (_QWORD *)*v10 != v9 + 4 )
      __fastfail(3u);
    *((_QWORD *)&v13 + 1) = v9[5];
    *(_QWORD *)&v13 = v9 + 4;
    *v10 = &v13;
    v9[5] = &v13;
    sub_14024D050(a2 + 7, (__int64)&v13);
    v5 = 1;
    KeWaitForSingleObject(&Object, WrKernel, 0, 0, 0LL);
    v11 = (volatile LONG *)sub_140282AD0(v2);
    ExAcquireSpinLockExclusive(v11);
    *((_DWORD *)v11 + 1) = 0;
    *((_BYTE *)a2 + 69) |= 1u;
  }
  return v5;
}
