/*
 * XREFs of sub_180051DFC @ 0x180051DFC
 * Callers:
 *     sub_180051054 @ 0x180051054 (sub_180051054.c)
 * Callees:
 *     memcpy @ 0x18000CA61 (memcpy.c)
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 */

void __fastcall sub_180051DFC(__int64 a1, const void *a2, unsigned __int64 a3, int a4)
{
  unsigned int v5; // ebx
  char *v8; // rsi
  char *v9; // r8

  v5 = a4 & 0xFFFFFFDF;
  if ( a3 > 0x7FFFFFFF )
  {
    std::_Xbad_alloc();
    __debugbreak();
  }
  if ( !a3 || (v5 & 6) == 6 )
  {
    *(_QWORD *)(a1 + 104) = 0LL;
  }
  else
  {
    v8 = (char *)sub_18001090C(a3);
    memcpy(v8, a2, a3);
    *(_QWORD *)(a1 + 104) = &v8[a3];
    if ( (v5 & 4) == 0 )
      std::streambuf::setg(a1, v8, v8, &v8[a3]);
    if ( (v5 & 2) == 0 )
    {
      v9 = v8;
      if ( (v5 & 0x18) != 0 )
        v9 = *(char **)(a1 + 104);
      std::streambuf::setp(a1, v8, v9, *(_QWORD *)(a1 + 104));
      if ( (v5 & 4) != 0 )
        std::streambuf::setg(a1, v8, 0LL, v8);
    }
    v5 |= 1u;
  }
  *(_DWORD *)(a1 + 112) = v5;
}
