/*
 * XREFs of sub_14081B420 @ 0x14081B420
 * Callers:
 *     sub_1406F4FB8 @ 0x1406F4FB8 (sub_1406F4FB8.c)
 * Callees:
 *     sub_140256158 @ 0x140256158 (sub_140256158.c)
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     sub_1402FDD20 @ 0x1402FDD20 (sub_1402FDD20.c)
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 */

__int64 __fastcall sub_14081B420(__int64 a1)
{
  void *v1; // rdi
  __int64 result; // rax
  __int64 v4; // rsi
  unsigned int v5; // ebx
  unsigned int *v6; // r14
  unsigned int v7; // edx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx

  v1 = *(void **)(a1 + 48);
  result = sub_1402FDD20((unsigned __int64)v1);
  if ( !(_DWORD)result )
  {
    result = sub_14027B080((unsigned __int64)v1);
    if ( (_DWORD)result != 1 )
    {
      result = (__int64)RtlImageNtHeader(v1);
      v4 = result;
      v5 = 0;
      if ( *(_WORD *)(result + 6) )
      {
        v6 = (unsigned int *)(result + *(unsigned __int16 *)(result + 20) + 32LL);
        do
        {
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 224) + 4LL * v5) )
          {
            v7 = v6[2];
            if ( v7 < *v6 )
              v7 = *v6;
            sub_140313C70(((unsigned __int64)v1 + v6[1] + v7 + 4095) & 0xFFFFFFFFFFFFF000uLL);
            v9 = sub_140313C70(v8);
            sub_140256158(v9, v10, 0);
          }
          result = *(unsigned __int16 *)(v4 + 6);
          ++v5;
          v6 += 10;
        }
        while ( v5 < (unsigned int)result );
      }
    }
  }
  return result;
}
