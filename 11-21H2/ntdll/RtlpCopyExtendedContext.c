/*
 * XREFs of RtlpCopyExtendedContext @ 0x180101B14
 * Callers:
 *     RtlCopyExtendedContext @ 0x180101A70 (RtlCopyExtendedContext.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x1800368AC (RtlpValidateContextFlags.c)
 *     RtlpCopyLegacyContext @ 0x18006BF80 (RtlpCopyLegacyContext.c)
 *     RtlpCopyXStateChunk @ 0x18006C1C4 (RtlpCopyXStateChunk.c)
 *     RtlpCopyKernelCetChunk @ 0x180101BC0 (RtlpCopyKernelCetChunk.c)
 */

__int64 __fastcall RtlpCopyExtendedContext(char a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v7; // rcx
  int v8; // r11d
  __int64 v9; // rbx
  __int64 v10; // rcx
  int v11; // [rsp+40h] [rbp+8h] BYREF

  LOBYTE(v11) = a1;
  result = RtlpValidateContextFlags(a4, &v11);
  if ( (int)result >= 0 )
  {
    v9 = a5;
    if ( (v11 & 1) != 0 )
    {
      v10 = *(int *)(a5 + 8);
      if ( *(_DWORD *)(a2 + 8) != (_DWORD)v10 || *(_DWORD *)(a2 + 12) < *(_DWORD *)(a5 + 12) )
        return 3221225485LL;
      RtlpCopyLegacyContext(v10, a2 + *(int *)(a2 + 8), v8);
    }
    if ( (v11 & 2) == 0 || (result = RtlpCopyXStateChunk(v7, a2, a2, v9, v9), (int)result >= 0) )
    {
      if ( (v11 & 4) == 0 )
        return 0LL;
      result = RtlpCopyKernelCetChunk(v7, a2, a2, v9, v9);
      if ( (int)result >= 0 )
        return 0LL;
    }
  }
  return result;
}
