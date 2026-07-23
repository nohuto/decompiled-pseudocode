/*
 * XREFs of sub_1406332E0 @ 0x1406332E0
 * Callers:
 *     sub_140817CD8 @ 0x140817CD8 (sub_140817CD8.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14063323C @ 0x14063323C (sub_14063323C.c)
 */

__int64 __fastcall sub_1406332E0(_WORD *a1)
{
  int v2; // ebp
  unsigned int v3; // ebx
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 result; // rax
  WCHAR v7; // cx
  WCHAR SourceString[256]; // [rsp+20h] [rbp-228h] BYREF

  v2 = 0;
  v3 = 0;
  memset(SourceString, 0, sizeof(SourceString));
  LODWORD(v4) = 0;
  if ( *a1 )
  {
    while ( (unsigned int)v4 < 0x100 )
    {
      v5 = (unsigned int)v4;
      if ( a1[(unsigned int)v4] == 92 && (unsigned int)++v2 > 3 )
      {
        result = sub_14063323C(SourceString);
        v3 = result;
        if ( (int)result < 0 )
          return result;
      }
      v7 = a1[(unsigned int)v4];
      v4 = (unsigned int)(v4 + 1);
      SourceString[v5] = v7;
      if ( !a1[v4] )
        return v3;
    }
  }
  return v3;
}
