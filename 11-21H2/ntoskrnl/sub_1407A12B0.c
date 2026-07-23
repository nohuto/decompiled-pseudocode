/*
 * XREFs of sub_1407A12B0 @ 0x1407A12B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObWaitForMultipleObjects @ 0x1407A1400 (ObWaitForMultipleObjects.c)
 */

__int64 __fastcall sub_1407A12B0(unsigned int a1, const void *a2, unsigned int a3, char a4, unsigned __int64 a5)
{
  __int64 v8; // r14
  unsigned __int8 v9; // di
  __int64 v10; // rbx
  unsigned __int64 v11; // rax
  __int64 v13; // [rsp+48h] [rbp-240h] BYREF
  _BYTE v14[512]; // [rsp+50h] [rbp-238h] BYREF

  v8 = a1;
  memset(v14, 0, sizeof(v14));
  v13 = 0LL;
  if ( (unsigned int)(v8 - 1) > 0x3F )
    return 3221225711LL;
  if ( a3 > 1 )
    return 3221225713LL;
  v9 = *((_BYTE *)KeGetCurrentThread() + 562);
  v10 = a5;
  if ( v9 )
  {
    if ( a5 )
    {
      if ( a5 >= 0x7FFFFFFF0000LL )
        v10 = 0x7FFFFFFF0000LL;
      v13 = *(_QWORD *)v10;
      v10 = (__int64)&v13;
    }
    if ( 8 * v8 )
    {
      v11 = (unsigned __int64)a2 + 8 * v8;
      if ( v11 > 0x7FFFFFFF0000LL || v11 < (unsigned __int64)a2 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  memmove(v14, a2, 8 * v8);
  return ObWaitForMultipleObjects(v8, (unsigned int)v14, v9, a3, v9, a4, v10);
}
