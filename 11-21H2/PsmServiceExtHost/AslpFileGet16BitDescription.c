/*
 * XREFs of AslpFileGet16BitDescription @ 0x1800A020C
 * Callers:
 *     AslpFileGetHeaderAttributesNE @ 0x1800A0DB4 (AslpFileGetHeaderAttributesNE.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 *     AslStringAnsiToUnicode @ 0x18009E5B0 (AslStringAnsiToUnicode.c)
 *     AslpFileQuery16BitDescription @ 0x1800A215C (AslpFileQuery16BitDescription.c)
 */

__int64 __fastcall AslpFileGet16BitDescription(PWSTR *a1, __int64 a2)
{
  int v4; // edi
  int v5; // ebx
  char v6[256]; // [rsp+30h] [rbp-118h] BYREF

  if ( *(_DWORD *)(a2 + 56) == 5 )
  {
    memset_0(v6, 0, sizeof(v6));
    v4 = AslpFileQuery16BitDescription(v6);
    if ( v4 >= 0 )
    {
      v5 = AslStringAnsiToUnicode(a1, v6);
      if ( v5 < 0 )
        AslLogCallPrintf(1LL);
      return (unsigned int)v5;
    }
    else
    {
      AslLogCallPrintf(1LL);
      return (unsigned int)v4;
    }
  }
  else
  {
    *a1 = 0LL;
    return 3221225659LL;
  }
}
