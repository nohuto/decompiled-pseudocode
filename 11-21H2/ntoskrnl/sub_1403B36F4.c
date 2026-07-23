/*
 * XREFs of sub_1403B36F4 @ 0x1403B36F4
 * Callers:
 *     sub_1403B31C0 @ 0x1403B31C0 (sub_1403B31C0.c)
 *     sub_1403B3594 @ 0x1403B3594 (sub_1403B3594.c)
 *     sub_1403BCA40 @ 0x1403BCA40 (sub_1403BCA40.c)
 *     sub_1403BD8C8 @ 0x1403BD8C8 (sub_1403BD8C8.c)
 *     sub_1403BEA4C @ 0x1403BEA4C (sub_1403BEA4C.c)
 * Callees:
 *     sub_1403B37B0 @ 0x1403B37B0 (sub_1403B37B0.c)
 *     sub_1403B37F0 @ 0x1403B37F0 (sub_1403B37F0.c)
 *     sub_1403B3864 @ 0x1403B3864 (sub_1403B3864.c)
 *     sub_1403BAEA4 @ 0x1403BAEA4 (sub_1403BAEA4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1403B36F4(int a1, __int64 a2, char *a3)
{
  unsigned int v3; // edi
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  char v11; // bl
  int v13; // ecx
  char v14; // al
  __int64 v15; // rcx
  __int64 v26; // rax
  char v27; // r11

  v3 = 0;
  v5 = a1 - 1;
  if ( !v5 )
  {
    v11 = byte_140C4E410;
    goto LABEL_9;
  }
  v6 = v5 - 1;
  if ( !v6 )
    goto LABEL_8;
  v7 = v6 - 1;
  if ( !v7 )
  {
    v11 = 0;
    if ( (unsigned __int8)sub_1403B37B0() )
    {
      _RAX = 1073741827LL;
      __asm { cpuid }
      v26 = _RAX & 0xE;
      v11 = v26 == 14;
      if ( v26 == 14 )
      {
        if ( (unsigned __int8)sub_1403BAEA4(_RCX, _RDX) )
        {
          _RAX = 1073741830LL;
          __asm { cpuid }
          v11 = v27;
          if ( (_RAX & 0x200) != 0 )
            v11 = 0;
        }
      }
    }
    goto LABEL_9;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v14 = sub_1403B3864();
LABEL_13:
    v11 = v14;
    goto LABEL_9;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v11 = byte_140C09790;
    goto LABEL_9;
  }
  v10 = v9 - 1;
  if ( v10 )
  {
    v13 = v10 - 1;
    if ( v13 )
    {
      v15 = (unsigned int)(v13 - 1);
      if ( (_DWORD)v15 )
      {
        if ( (_DWORD)v15 != 1 )
        {
          v3 = -1073741811;
          dword_140C4E844 = 30;
          return v3;
        }
        v14 = sub_1403BAEA4(v15, a2);
      }
      else
      {
        v14 = sub_1403B37F0();
      }
    }
    else
    {
      v14 = sub_1403B37B0();
    }
    goto LABEL_13;
  }
  if ( (unsigned __int8)sub_1403B37B0() )
  {
    _RAX = 1073741828LL;
    __asm { cpuid }
    if ( (_RAX & 0x100) != 0 )
    {
      v11 = 1;
      goto LABEL_9;
    }
  }
LABEL_8:
  v11 = 0;
LABEL_9:
  *a3 = v11;
  return v3;
}
