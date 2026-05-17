/*
 * XREFs of LdrpTouchThreadStack @ 0x180089280
 * Callers:
 *     _LdrpInitialize @ 0x18007B2BC (_LdrpInitialize.c)
 * Callees:
 *     LdrpGenericExceptionFilter @ 0x18008FD68 (LdrpGenericExceptionFilter.c)
 *     ZwQueryVirtualMemory @ 0x1800A44D0 (ZwQueryVirtualMemory.c)
 */

__int64 __fastcall LdrpTouchThreadStack(unsigned __int64 a1)
{
  struct _TEB *v2; // rdi
  __int64 result; // rax
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // [rsp+30h] [rbp-48h]
  __int64 v7; // [rsp+38h] [rbp-40h] BYREF
  __int64 v8; // [rsp+40h] [rbp-38h]
  __int64 v9; // [rsp+88h] [rbp+10h] BYREF

  v2 = NtCurrentTeb();
  result = ZwQueryVirtualMemory(-1LL, v2->NtTib.StackLimit, 0LL, &v7, 48LL, &v9);
  if ( (int)result >= 0 )
  {
    v4 = (unsigned __int64)v2->NtTib.StackBase - 4096;
    v6 = v4;
    if ( v4 <= a1 )
    {
      v5 = v8 + 12288;
    }
    else
    {
      v5 = v4 - a1;
      if ( v4 - a1 <= v8 + 12288 )
        v5 = v8 + 12288;
    }
    while ( v4 >= v5 )
    {
      v4 = v6 - 4096;
      v6 -= 4096LL;
    }
    return 0LL;
  }
  return result;
}
