/*
 * XREFs of sub_14099E088 @ 0x14099E088
 * Callers:
 *     sub_14098AAF0 @ 0x14098AAF0 (sub_14098AAF0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14099E088(__int64 a1)
{
  __int64 result; // rax
  bool v2; // zf
  __int64 v3; // r8
  int i; // r9d
  __int64 v5; // r11

  result = dword_140D0688C;
  if ( (dword_140D0688C & 2) != 0 )
    v2 = (dword_140D0689C & 0x400) == 0;
  else
    v2 = byte_140D0688B == 0;
  if ( !v2 )
  {
    v3 = 0LL;
    for ( i = dword_140D0689C & 0x200; (unsigned int)v3 < *(_DWORD *)(a1 + 8); v3 = (unsigned int)(v3 + 1) )
    {
      v5 = 0LL;
      for ( *(_BYTE *)(a1 + 48 * v3 + 61) = i != 0;
            (unsigned int)v5 < *(_DWORD *)(a1 + 48 * v3 + 72);
            v5 = (unsigned int)(v5 + 1) )
      {
        result = *(_QWORD *)(a1 + 48 * v3 + 96);
        *(_BYTE *)(result + 8 * v5 + 4) = i != 0;
      }
    }
  }
  return result;
}
