/*
 * XREFs of LdrpSetProtection @ 0x1800DC82C
 * Callers:
 *     LdrpProtectAndRelocateImage @ 0x1800DC6A4 (LdrpProtectAndRelocateImage.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180024950 (RtlImageNtHeaderEx.c)
 *     ZwProtectVirtualMemory @ 0x1800A18B0 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall LdrpSetProtection(unsigned __int64 a1)
{
  __int64 v1; // rsi
  int v2; // edi
  _DWORD *i; // rbx
  __int64 result; // rax
  __int64 v5; // [rsp+88h] [rbp+20h] BYREF

  RtlImageNtHeaderEx(3, a1, 0LL, &v5);
  v1 = v5;
  v2 = 0;
  if ( !*(_WORD *)(v5 + 6) )
    return 0LL;
  for ( i = (_DWORD *)(v5 + *(unsigned __int16 *)(v5 + 20) + 40LL); ; i += 10 )
  {
    if ( (int)i[5] >= 0 )
    {
      if ( *i )
      {
        result = ZwProtectVirtualMemory();
        if ( (int)result < 0 )
          break;
      }
    }
    if ( ++v2 >= (unsigned int)*(unsigned __int16 *)(v1 + 6) )
      return 0LL;
  }
  return result;
}
