/*
 * XREFs of sub_140A54FB4 @ 0x140A54FB4
 * Callers:
 *     sub_140A54EF0 @ 0x140A54EF0 (sub_140A54EF0.c)
 * Callees:
 *     sub_1403B37B0 @ 0x1403B37B0 (sub_1403B37B0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     strncmp @ 0x1403E0910 (strncmp.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14050E264 @ 0x14050E264 (sub_14050E264.c)
 *     sub_140A550E0 @ 0x140A550E0 (sub_140A550E0.c)
 */

__int64 __fastcall sub_140A54FB4(__int64 a1, __int64 a2)
{
  char Str1[16]; // [rsp+20h] [rbp-30h] BYREF
  __int128 v14; // [rsp+30h] [rbp-20h] BYREF

  *(_OWORD *)Str1 = 0LL;
  v14 = 0LL;
  *((_DWORD *)KeGetCurrentPrcb() + 22) = 0;
  if ( !(_DWORD)a1 )
  {
    if ( (dword_140C4C44C & 1) != 0 )
    {
      _RAX = 0LL;
      __asm { cpuid }
      *(_DWORD *)&Str1[4] = _RBX;
      *(_DWORD *)&Str1[8] = _RDX;
      *(_DWORD *)&Str1[12] = _RCX;
      *(_DWORD *)Str1 = _RAX;
      if ( !strncmp(&Str1[4], "AuthenticAMD", 0xCuLL) )
      {
        off_140C02520 = &off_140009BB0;
      }
      else if ( *(_DWORD *)Str1 >= 0xAu && !strncmp(&Str1[4], "GenuineIntel", 0xCuLL) )
      {
        _RAX = 10LL;
        __asm { cpuid }
        *(_DWORD *)&Str1[8] = _RCX;
        *(_DWORD *)&Str1[4] = _RBX;
        *(_DWORD *)&Str1[12] = _RDX;
        if ( (_BYTE)_RAX )
        {
          if ( (_RAX & 0xFF000000) != 0 && (_RBX & 1) == 0 )
          {
            off_140C02520 = &off_140003200;
            if ( (unsigned __int8)_RAX >= 4u )
              dword_140C4D0B0 |= 1u;
          }
        }
      }
      qword_140C54B58 = 0LL;
      if ( sub_1403B37B0() )
      {
        sub_14050E264(0x40000003u, &v14);
        if ( (BYTE12(v14) & 4) == 0 )
          off_140C02520 = &off_1400032A0;
      }
    }
    sub_140A550E0();
  }
  return sub_14042A5E0(a1, a2);
}
