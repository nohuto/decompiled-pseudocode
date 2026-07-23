/*
 * XREFs of sub_140395068 @ 0x140395068
 * Callers:
 *     sub_140394DD0 @ 0x140394DD0 (sub_140394DD0.c)
 * Callees:
 *     sub_1407BA750 @ 0x1407BA750 (sub_1407BA750.c)
 */

__int64 __fastcall sub_140395068(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned __int64 v3; // rdi
  int v4; // ecx
  _QWORD *i; // rdx
  _QWORD v7[4]; // [rsp+48h] [rbp-20h] BYREF

  v2 = 0;
  v7[1] = (a1 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  v7[0] = 0LL;
  v3 = ((a1 & 0xFFF) + 4095 + (unsigned __int64)a2) >> 12;
  v7[2] = 0LL;
  if ( (int)sub_1407BA750(0xFFFFFFFFFFFFFFFFuLL, 16 * (int)v3, 0LL, 0) < 0 )
  {
    return 2;
  }
  else
  {
    v4 = 0;
    if ( (_DWORD)v3 )
    {
      for ( i = v7; (*i & 1) != 0 || (*i & 0xC00000LL) == 0x400000; i += 2 )
      {
        if ( ++v4 >= (unsigned int)v3 )
          return 1;
      }
    }
    else
    {
      return 1;
    }
  }
  return v2;
}
