/*
 * XREFs of sub_1C0060C18 @ 0x1C0060C18
 * Callers:
 *     sub_1C005DA08 @ 0x1C005DA08 (sub_1C005DA08.c)
 * Callees:
 *     sub_1C003EF0C @ 0x1C003EF0C (sub_1C003EF0C.c)
 *     sub_1C005E0A0 @ 0x1C005E0A0 (sub_1C005E0A0.c)
 *     sub_1C005F3EC @ 0x1C005F3EC (sub_1C005F3EC.c)
 */

__int64 __fastcall sub_1C0060C18(__int64 a1, int a2)
{
  unsigned int v2; // r8d
  _BYTE *v3; // rax
  char v4; // al
  PDEVICE_OBJECT v5; // r10
  unsigned __int16 v6; // dx

  v2 = -1073741811;
  if ( *(_DWORD *)(a1 + 972) || *(_DWORD *)(a1 + 980) || *(_DWORD *)(a1 + 976) || (*(_BYTE *)(a1 + 450) & 1) != 0 )
  {
    v5 = off_1C0093070;
    if ( off_1C0093070 == (PDEVICE_OBJECT)&off_1C0093070
      || (HIDWORD(off_1C0093070->Timer) & 0x10) == 0
      || BYTE1(off_1C0093070->Timer) < 2u )
    {
      return (unsigned int)-1073741637;
    }
    v6 = 50;
    goto LABEL_21;
  }
  v3 = *(_BYTE **)(a1 + 104);
  if ( v3 )
  {
    v4 = *v3 & 0x1F;
    if ( v4 )
    {
      if ( v4 != 20 )
      {
        v5 = off_1C0093070;
        if ( off_1C0093070 == (PDEVICE_OBJECT)&off_1C0093070
          || (HIDWORD(off_1C0093070->Timer) & 0x10) == 0
          || BYTE1(off_1C0093070->Timer) < 2u )
        {
          return (unsigned int)-1073741637;
        }
        v6 = 51;
LABEL_21:
        sub_1C003EF0C((__int64)v5->AttachedDevice, v6, (__int64)&unk_1C0083530, a1);
        return (unsigned int)-1073741637;
      }
    }
  }
  if ( a2 == 1 )
  {
    return (unsigned int)sub_1C005F3EC(a1);
  }
  else
  {
    if ( a2 )
      return v2;
    return (unsigned int)sub_1C005E0A0(a1);
  }
}
