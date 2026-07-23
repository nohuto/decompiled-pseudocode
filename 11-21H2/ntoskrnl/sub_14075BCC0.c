/*
 * XREFs of sub_14075BCC0 @ 0x14075BCC0
 * Callers:
 *     sub_14075B48C @ 0x14075B48C (sub_14075B48C.c)
 *     sub_14075B7F4 @ 0x14075B7F4 (sub_14075B7F4.c)
 *     sub_14075BB10 @ 0x14075BB10 (sub_14075BB10.c)
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     RtlRunOnceExecuteOnce @ 0x14075BD80 (RtlRunOnceExecuteOnce.c)
 */

__int64 __fastcall sub_14075BCC0(_RTL_RUN_ONCE *Parameter, __int16 a2, __int16 a3, _DWORD *a4)
{
  unsigned int v7; // edi
  unsigned int v8; // ecx
  __int64 v9; // r8
  _WORD *i; // rax
  __int64 v11; // rcx
  PVOID Context; // [rsp+50h] [rbp+8h] BYREF

  Context = 0LL;
  v7 = 0;
  if ( a4 )
    *a4 = 0;
  if ( RtlRunOnceExecuteOnce(Parameter + 167, sub_140791640, Parameter, &Context) < 0 )
  {
    sub_1406E0C3C(1LL, (__int64)"SdbGetIndex");
  }
  else
  {
    v8 = 0;
    v9 = 0LL;
    for ( i = (char *)Context + 4; *i; i += 20 )
    {
      if ( *i == a2 && i[1] == a3 )
      {
        v11 = 5LL * v8;
        v7 = *((_DWORD *)Context + 2 * v11);
        if ( a4 )
          *a4 = *((_DWORD *)Context + 2 * v11 + 8);
        return v7;
      }
      ++v8;
      if ( ++v9 >= 32 )
        return v7;
    }
  }
  return v7;
}
