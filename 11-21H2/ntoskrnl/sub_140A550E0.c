/*
 * XREFs of sub_140A550E0 @ 0x140A550E0
 * Callers:
 *     sub_140A54FB4 @ 0x140A54FB4 (sub_140A54FB4.c)
 * Callees:
 *     sub_1403AAE80 @ 0x1403AAE80 (sub_1403AAE80.c)
 *     sub_1403B37F0 @ 0x1403B37F0 (sub_1403B37F0.c)
 *     HviGetHypervisorFeatures @ 0x1403BF8B0 (HviGetHypervisorFeatures.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char sub_140A550E0()
{
  unsigned int v5; // ecx
  unsigned __int64 v11; // rax
  int v12; // eax
  int v13; // eax
  char v15; // [rsp+20h] [rbp-20h] BYREF
  char v16; // [rsp+21h] [rbp-1Fh] BYREF
  _BYTE v17[6]; // [rsp+22h] [rbp-1Eh] BYREF
  __int128 v18; // [rsp+28h] [rbp-18h] BYREF

  LOBYTE(_RAX) = dword_140C4C44C;
  v16 = 0;
  v17[0] = 0;
  v15 = 0;
  byte_140C49FE8 = 0;
  v18 = 0LL;
  if ( (dword_140C4C44C & 1) == 0 )
    return (char)_RAX;
  if ( sub_1403B37F0() )
  {
    LOBYTE(_RAX) = HviGetHypervisorFeatures(&v18);
    if ( (HIDWORD(v18) & 0x4000000) == 0 )
      return (char)_RAX;
  }
  LOBYTE(_RAX) = sub_1403AAE80(&v16, 0LL, v17, &v15);
  if ( !(_BYTE)_RAX || v15 != 2 )
    return (char)_RAX;
  if ( v16 != 6 )
    goto LABEL_27;
  LOBYTE(_RAX) = v17[0];
  if ( v17[0] <= 0x56u )
  {
    if ( v17[0] == 86 || v17[0] == 60 || v17[0] == 61 || v17[0] == 63 )
      goto LABEL_9;
    if ( v17[0] <= 0x44u )
      goto LABEL_27;
    if ( v17[0] < 0x48u )
      goto LABEL_9;
    if ( v17[0] != 78 )
    {
      if ( v17[0] != 79 )
      {
        if ( v17[0] != 85 )
          goto LABEL_27;
        goto LABEL_26;
      }
LABEL_9:
      dword_140C49FF4 = 16;
      goto LABEL_10;
    }
LABEL_26:
    dword_140C49FF4 = 32;
    goto LABEL_27;
  }
  if ( v17[0] == 94 )
    goto LABEL_26;
  if ( v17[0] > 0x65u )
  {
    if ( v17[0] <= 0x67u )
      goto LABEL_38;
    if ( v17[0] > 0x7Cu )
    {
      if ( v17[0] <= 0x7Eu )
        goto LABEL_38;
      switch ( v17[0] )
      {
        case 0x8E:
          goto LABEL_26;
        case 0x9D:
          goto LABEL_38;
        case 0x9E:
          goto LABEL_26;
        case 0x9F:
LABEL_38:
          dword_140C49FF4 = 32;
          goto LABEL_10;
      }
    }
  }
LABEL_27:
  if ( !dword_140C49FF4 )
    return (char)_RAX;
LABEL_10:
  _RAX = 10LL;
  __asm { cpuid }
  v5 = (unsigned __int8)_RAX;
  if ( (_BYTE)_RAX )
  {
    _RAX = 1LL;
    byte_140C097A6 = v5 <= 3;
    __asm { cpuid }
    if ( (_RCX & 0x8000) != 0 )
    {
      v11 = __readmsr(0x345u);
      v12 = (v11 & 0x3F) - 3;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( !v13 )
        {
          byte_140C097A5 = 60;
          goto LABEL_15;
        }
        if ( v13 != 2 )
          goto LABEL_15;
        byte_140C0CAB0 = 47;
      }
      byte_140C097A5 = 62;
    }
LABEL_15:
    byte_140C49FE8 = 1;
    off_140C01FD8[0] = (__int64 (__fastcall *)())sub_140459650;
    off_140C01FE0[0] = (__int64 (__fastcall *)())sub_140459760;
    off_140C01FE8[0] = (__int64 (__fastcall *)())sub_14090B130;
    off_140C01FF0[0] = (__int64 (__fastcall *)())sub_1403DF1E0;
    off_140C01FF8[0] = (__int64 (__fastcall *)())sub_14022E370;
    off_140C02000[0] = (__int64 (__fastcall *)())sub_14090B170;
    _RAX = sub_14090B220;
    off_140C02008[0] = (__int64 (__fastcall *)())sub_14090B220;
  }
  return (char)_RAX;
}
