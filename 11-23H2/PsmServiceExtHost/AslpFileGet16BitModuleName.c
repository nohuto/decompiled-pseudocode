/*
 * XREFs of AslpFileGet16BitModuleName @ 0x18009A980
 * Callers:
 *     AslpFileGetHeaderAttributesNE @ 0x18009B448 (AslpFileGetHeaderAttributesNE.c)
 * Callees:
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800534BA (memset_0.c)
 *     AslLogCallPrintf @ 0x1800982C0 (AslLogCallPrintf.c)
 *     AslStringAnsiToUnicode @ 0x180098C68 (AslStringAnsiToUnicode.c)
 *     AslpFileQuery16BitModuleName @ 0x18009C93C (AslpFileQuery16BitModuleName.c)
 */

__int64 __fastcall AslpFileGet16BitModuleName(PWSTR *a1, __int64 a2)
{
  int v4; // eax
  unsigned int v5; // edi
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // [rsp+20h] [rbp-128h]
  int v9; // [rsp+20h] [rbp-128h]
  char v10[256]; // [rsp+30h] [rbp-118h] BYREF

  if ( *(_DWORD *)(a2 + 56) == 5 )
  {
    memset_0(v10, 0, sizeof(v10));
    v4 = AslpFileQuery16BitModuleName(v10);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v6 = AslStringAnsiToUnicode(a1, v10);
      v7 = v6;
      if ( v6 < 0 )
      {
        v9 = v6;
        AslLogCallPrintf(
          1LL,
          (unsigned int)"AslpFileGet16BitModuleName",
          3485,
          (unsigned int)"AslStringAnsiToUnicode failed [%x]",
          v9);
      }
      return v7;
    }
    else
    {
      v8 = v4;
      AslLogCallPrintf(
        1LL,
        (unsigned int)"AslpFileGet16BitModuleName",
        3479,
        (unsigned int)"AslpFileQuery16BitModuleName failed [%x]",
        v8);
      return v5;
    }
  }
  else
  {
    *a1 = 0LL;
    return 3221225659LL;
  }
}
