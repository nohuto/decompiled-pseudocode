/*
 * XREFs of sub_140643064 @ 0x140643064
 * Callers:
 *     WheaLogInternalEvent @ 0x1403D2A90 (WheaLogInternalEvent.c)
 * Callees:
 *     sub_140642F78 @ 0x140642F78 (sub_140642F78.c)
 *     sub_1406460E0 @ 0x1406460E0 (sub_1406460E0.c)
 */

__int64 __fastcall sub_140643064(char *Src)
{
  int v2; // ecx
  size_t v3; // rdx
  char *v4; // rcx
  int v5; // ecx

  v2 = *((_DWORD *)Src + 6);
  if ( (v2 & 0x10) != 0 )
  {
    v3 = *((unsigned int *)Src + 7);
    v4 = Src + 32;
    *((_DWORD *)Src + 4) = 1280201291;
    return sub_1406460E0(v4, v3);
  }
  v5 = *((_DWORD *)Src + 5);
  if ( v5 != -2147483643 )
  {
    v3 = *((unsigned int *)Src + 7);
    if ( v5 == -2147483606 )
    {
      v4 = Src + 32;
    }
    else
    {
      v3 = (unsigned int)(v3 + 32);
      v4 = Src;
    }
    return sub_1406460E0(v4, v3);
  }
  return sub_140642F78((__int64)Src);
}
