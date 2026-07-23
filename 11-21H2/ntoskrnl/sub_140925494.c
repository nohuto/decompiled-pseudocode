/*
 * XREFs of sub_140925494 @ 0x140925494
 * Callers:
 *     sub_140925338 @ 0x140925338 (sub_140925338.c)
 * Callees:
 *     sub_140919080 @ 0x140919080 (sub_140919080.c)
 */

bool __fastcall sub_140925494(_DWORD *a1, unsigned int a2)
{
  unsigned int v2; // eax
  unsigned __int64 v3; // r8
  int v4; // edx
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  bool result; // al

  result = 0;
  if ( *a1 == 1162638920 )
  {
    v2 = a1[1];
    if ( v2 > 0x28 )
    {
      v3 = v2;
      if ( v2 + (unsigned __int64)a2 <= 0xFFFFFFFF )
      {
        v4 = a1[4];
        if ( (unsigned int)(v4 - 1) <= 0x7FFFDFFF && (v4 & 0xFFF) == 0 )
        {
          v5 = (unsigned int)a1[5];
          if ( (_DWORD)v5 )
          {
            v6 = 8 * v5 + 40;
            if ( v6 <= 0xFFFFFFFF && v3 >= v6 && sub_140919080((__int64)a1) )
              return 1;
          }
        }
      }
    }
  }
  return result;
}
