/*
 * XREFs of sub_140771CD0 @ 0x140771CD0
 * Callers:
 *     sub_1402DE3A4 @ 0x1402DE3A4 (sub_1402DE3A4.c)
 *     sub_14076E6B4 @ 0x14076E6B4 (sub_14076E6B4.c)
 *     sub_140771B04 @ 0x140771B04 (sub_140771B04.c)
 *     sub_140776CFC @ 0x140776CFC (sub_140776CFC.c)
 *     sub_14077DBE8 @ 0x14077DBE8 (sub_14077DBE8.c)
 * Callees:
 *     sub_1402DCD64 @ 0x1402DCD64 (sub_1402DCD64.c)
 *     sub_1402DE4F0 @ 0x1402DE4F0 (sub_1402DE4F0.c)
 *     sub_1402DE58C @ 0x1402DE58C (sub_1402DE58C.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x140715E20 (RtlValidRelativeSecurityDescriptor.c)
 *     RtlLengthSecurityDescriptor @ 0x1407254F0 (RtlLengthSecurityDescriptor.c)
 */

__int64 __fastcall sub_140771CD0(__int64 *SecurityDescriptor, ULONG SecurityDescriptorLength, int a3)
{
  unsigned int v3; // ebx
  unsigned __int64 v4; // rsi
  unsigned int v6; // r8d
  int v7; // eax
  int v8; // edx
  unsigned int v9; // r8d
  __int16 v10; // r9
  int v11; // r10d
  int v12; // r11d
  bool v13; // zf
  bool v15; // zf
  unsigned int v16; // ecx
  unsigned __int64 v17; // r11
  __int64 v18; // r11
  unsigned __int64 v19; // rax
  unsigned int v20; // esi
  unsigned int v21; // eax
  unsigned int v22; // r11d
  unsigned __int64 v23; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0;
  v4 = SecurityDescriptorLength;
  v23 = 0LL;
  if ( (a3 & 0xFFFF0000) != 0 )
    return (unsigned int)-1073741811;
  v6 = a3 & 0xFFF;
  if ( v6 > 0x19 )
    return (unsigned int)-1073741811;
  v7 = sub_1402DE4F0(v6);
  v11 = v10 & 0xF000;
  if ( !v7 )
    goto LABEL_10;
  if ( v11 == 4096 )
  {
    if ( v9 <= 1 || !sub_1402DE58C(v10) || (unsigned int)v4 < v22 || (unsigned int)v4 % v22 )
      return (unsigned int)-1073741811;
    goto LABEL_11;
  }
  if ( v11 == 0x2000 )
  {
    if ( v9 == 18 )
      goto LABEL_10;
    v13 = v9 == 20;
    goto LABEL_9;
  }
  if ( (v10 & 0xF000) != 0 )
    return (unsigned int)-1073741811;
  if ( sub_1402DE58C(v10) )
  {
    v13 = (_DWORD)v4 == v12;
LABEL_9:
    if ( !v13 )
      return (unsigned int)-1073741811;
  }
LABEL_10:
  if ( v9 > 1 )
  {
LABEL_11:
    if ( v9 != 18 )
    {
      if ( v9 == 17 )
      {
        if ( SecurityDescriptor )
        {
          v16 = 0;
          if ( !(_DWORD)v4 )
            return v3;
          while ( *(_BYTE *)SecurityDescriptor == 0xFF || *(_BYTE *)SecurityDescriptor == 0 )
          {
            ++v16;
            SecurityDescriptor = (__int64 *)((char *)SecurityDescriptor + 1);
            if ( v16 >= (unsigned int)v4 )
              return v3;
          }
        }
        return (unsigned int)-1073741811;
      }
      if ( v9 == 16 )
      {
        if ( SecurityDescriptor )
        {
          v20 = (unsigned int)v4 >> 3;
          v21 = 0;
          if ( !v20 )
            return v3;
          while ( *SecurityDescriptor >= 0 )
          {
            ++v21;
            ++SecurityDescriptor;
            if ( v21 >= v20 )
              return v3;
          }
        }
        return (unsigned int)-1073741811;
      }
      if ( v9 != 25 )
      {
        if ( v9 == 19 )
        {
          if ( !SecurityDescriptor || !RtlValidRelativeSecurityDescriptor(SecurityDescriptor, v4, 0) )
            return (unsigned int)-1073741811;
          v15 = RtlLengthSecurityDescriptor(SecurityDescriptor) == (_DWORD)v4;
LABEL_24:
          if ( v15 )
            return v3;
          return (unsigned int)-1073741811;
        }
        if ( v9 != 20 )
          return v3;
      }
    }
    if ( !SecurityDescriptor || (unsigned int)v4 < 2 )
      return (unsigned int)-1073741811;
    if ( (v11 & 0x2000) != 0 )
    {
      v17 = 0LL;
      while ( *(_WORD *)SecurityDescriptor )
      {
        if ( (int)sub_1402DCD64(SecurityDescriptor, v4 - v17, &v23) < 0 )
          return (unsigned int)-1073741811;
        if ( (v23 & 1) != 0 )
          return (unsigned int)-1073741811;
        v19 = v23 + 2;
        v23 = v19;
        if ( v19 > 0xFFFE )
          return (unsigned int)-1073741811;
        v17 = v19 + v18;
        if ( v17 > v4 )
          return (unsigned int)-1073741811;
        SecurityDescriptor = (__int64 *)((char *)SecurityDescriptor + 2 * (v19 >> 1));
      }
      v15 = v17 + 2 == v4;
    }
    else
    {
      if ( (int)sub_1402DCD64(SecurityDescriptor, v4, &v23) < 0 || v23 + 2 > 0xFFFE )
        return (unsigned int)-1073741811;
      v15 = v23 + 2 == v4;
    }
    goto LABEL_24;
  }
  if ( v8 )
    return (unsigned int)-1073741811;
  return v3;
}
