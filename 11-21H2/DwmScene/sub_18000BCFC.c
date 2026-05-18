/*
 * XREFs of sub_18000BCFC @ 0x18000BCFC
 * Callers:
 *     sub_18000B5F0 @ 0x18000B5F0 (sub_18000B5F0.c)
 *     sub_18000B758 @ 0x18000B758 (sub_18000B758.c)
 * Callees:
 *     <none>
 */

__int64 sub_18000BCFC()
{
  int v5; // r11d
  int v6; // r10d
  int v7; // esi
  int v9; // r9d
  int v14; // edi
  int v15; // eax
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // r8d
  int v23; // eax
  char v25; // [rsp+20h] [rbp+8h]

  _RAX = 0LL;
  __asm { cpuid }
  v5 = 0;
  v6 = _RDX;
  v7 = _RAX;
  _RAX = 1LL;
  v9 = _RCX ^ 0x6C65746E | _RBX ^ 0x756E6547;
  __asm { cpuid }
  v14 = _RCX;
  if ( !(v6 ^ 0x49656E69 | v9)
    && ((qword_1801F4B28 = -1LL, v15 = _RAX & 0xFFF3FF0, v15 == 67264)
     || v15 == 132704
     || v15 == 132720
     || (v16 = (unsigned int)(v15 - 198224), (unsigned int)v16 <= 0x20) && (v17 = 0x100010001LL, _bittest64(&v17, v16))) )
  {
    v18 = dword_1801F7300 | 1;
    dword_1801F7300 |= 1u;
  }
  else
  {
    v18 = dword_1801F7300;
  }
  _RAX = 7LL;
  if ( v7 >= 7 )
  {
    __asm { cpuid }
    v5 = _RBX;
    if ( (_RBX & 0x200) != 0 )
      dword_1801F7300 = v18 | 2;
  }
  dword_1801F4B20 = 1;
  dword_1801F4B24 = 2;
  if ( (v14 & 0x100000) != 0 )
  {
    dword_1801F4B20 = 2;
    dword_1801F4B24 = 6;
    if ( (v14 & 0x8000000) != 0 && (v14 & 0x10000000) != 0 )
    {
      __asm { xgetbv }
      v25 = _RAX;
      if ( (_RAX & 6) == 6 )
      {
        v23 = dword_1801F4B24 | 8;
        dword_1801F4B20 = 3;
        dword_1801F4B24 |= 8u;
        if ( (v5 & 0x20) != 0 )
        {
          dword_1801F4B20 = 5;
          dword_1801F4B24 = v23 | 0x20;
          if ( (v5 & 0xD0030000) == 0xD0030000 && (v25 & 0xE0) == 0xE0 )
          {
            dword_1801F4B24 |= 0x40u;
            dword_1801F4B20 = 6;
          }
        }
      }
    }
  }
  return 0LL;
}
