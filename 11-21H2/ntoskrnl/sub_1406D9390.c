/*
 * XREFs of sub_1406D9390 @ 0x1406D9390
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 *     sub_14072B3B0 @ 0x14072B3B0 (sub_14072B3B0.c)
 */

__int64 __fastcall sub_1406D9390(__int64 *a1, int a2, signed int a3)
{
  __int64 v3; // r14
  char v5; // si
  __int64 v6; // rcx
  PVOID *p_Object; // rcx
  __int64 result; // rax
  _DWORD *v9; // rbx
  int v10; // edx
  __int64 v11; // [rsp+50h] [rbp-28h] BYREF
  PVOID Object; // [rsp+98h] [rbp+20h] BYREF

  v3 = a3;
  v11 = 0LL;
  Object = 0LL;
  v5 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( v5 )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v6 = (__int64)a1;
    *(_QWORD *)v6 = *(_QWORD *)v6;
  }
  if ( (unsigned int)a3 > 1 )
    return 3221225485LL;
  p_Object = &Object;
  LOBYTE(p_Object) = v5;
  result = sub_14072B3B0((_DWORD)p_Object, (unsigned int)*(&qword_140D07020 + a3), a2, v5);
  if ( (int)result >= 0 )
  {
    v9 = Object;
    memset(Object, 0, qword_140D3B330[v3]);
    if ( (_DWORD)v3 == 1 )
    {
      v9[6] = 4;
      *((_QWORD *)v9 + 8) = sub_1406BCC00;
      *((_QWORD *)v9 + 9) = v9;
      *((_BYTE *)v9 + 80) = 0;
    }
    v10 = sub_140729C30(v9, 0LL, 0, 0LL, (__int64)&v11);
    LODWORD(Object) = v10;
    if ( v10 >= 0 )
      *a1 = v11;
    return (unsigned int)v10;
  }
  return result;
}
