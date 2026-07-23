/*
 * XREFs of sub_1407A1050 @ 0x1407A1050
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObWaitForMultipleObjects @ 0x1407A1400 (ObWaitForMultipleObjects.c)
 */

__int64 __fastcall sub_1407A1050(unsigned int a1, unsigned __int64 a2, unsigned int a3, char a4, unsigned __int64 a5)
{
  __int64 v8; // rdi
  int v9; // r8d
  unsigned int v10; // r9d
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 *v14; // [rsp+40h] [rbp-248h]
  __int64 v15; // [rsp+50h] [rbp-238h] BYREF
  _QWORD v16[64]; // [rsp+60h] [rbp-228h] BYREF

  v8 = a1;
  v14 = (__int64 *)a5;
  memset(v16, 0, sizeof(v16));
  v10 = 0;
  v15 = 0LL;
  if ( (unsigned int)(v8 - 1) > 0x3F )
    return 3221225711LL;
  if ( a3 > 1 )
    return 3221225713LL;
  LOBYTE(v9) = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( (_BYTE)v9 )
  {
    if ( a5 )
    {
      v11 = 0x7FFFFFFF0000LL;
      if ( a5 < 0x7FFFFFFF0000LL )
        v11 = a5;
      v15 = *(_QWORD *)v11;
      v14 = &v15;
    }
    if ( 4 * v8 )
    {
      v12 = a2 + 4 * v8;
      if ( v12 > 0x7FFFFFFF0000LL || v12 < a2 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  while ( v10 < (unsigned int)v8 )
  {
    v16[v10] = *(int *)(a2 + 4LL * v10);
    ++v10;
  }
  return ObWaitForMultipleObjects(v8, (unsigned int)v16, v9, a3, v9, a4, (__int64)v14);
}
