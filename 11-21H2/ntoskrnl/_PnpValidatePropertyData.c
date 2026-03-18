/*
 * XREFs of _PnpValidatePropertyData @ 0x140771CD0
 * Callers:
 *     ValidFilterExpression @ 0x1402DE3A4 (ValidFilterExpression.c)
 *     PiSwValidatePropertyArray @ 0x14076E6B4 (PiSwValidatePropertyArray.c)
 *     _PnpSetObjectPropertyWorker @ 0x140771B04 (_PnpSetObjectPropertyWorker.c)
 *     PiDqQueryValidateQueryData @ 0x140776CFC (PiDqQueryValidateQueryData.c)
 *     _PnpGetObjectPropertyWorker @ 0x14077DBE8 (_PnpGetObjectPropertyWorker.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x1402DCD64 (RtlStringCbLengthW.c)
 *     _GetBaseTypeSize @ 0x1402DE4F0 (_GetBaseTypeSize.c)
 *     _IsFixedSizeType @ 0x1402DE58C (_IsFixedSizeType.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x140715E20 (RtlValidRelativeSecurityDescriptor.c)
 *     RtlLengthSecurityDescriptor @ 0x1407254F0 (RtlLengthSecurityDescriptor.c)
 */

__int64 __fastcall PnpValidatePropertyData(__int64 *SecurityDescriptor, ULONG SecurityDescriptorLength, int a3)
{
  unsigned int v3; // ebx
  size_t v4; // rsi
  unsigned int v6; // r8d
  int BaseTypeSize; // eax
  int v8; // edx
  unsigned int v9; // r8d
  __int16 v10; // r9
  int v11; // r10d
  int v12; // r11d
  bool v13; // zf
  bool v15; // zf
  unsigned int v16; // ecx
  size_t v17; // r11
  __int64 v18; // r11
  size_t v19; // rax
  unsigned int v20; // esi
  unsigned int v21; // eax
  unsigned int v22; // r11d
  size_t pcbLength; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0;
  v4 = SecurityDescriptorLength;
  pcbLength = 0LL;
  if ( (a3 & 0xFFFF0000) != 0 )
    return (unsigned int)-1073741811;
  v6 = a3 & 0xFFF;
  if ( v6 > 0x19 )
    return (unsigned int)-1073741811;
  BaseTypeSize = GetBaseTypeSize(v6);
  v11 = v10 & 0xF000;
  if ( !BaseTypeSize )
    goto LABEL_10;
  if ( v11 == 4096 )
  {
    if ( v9 <= 1 || !IsFixedSizeType(v10) || (unsigned int)v4 < v22 || (unsigned int)v4 % v22 )
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
  if ( IsFixedSizeType(v10) )
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
        if ( RtlStringCbLengthW((STRSAFE_PCNZWCH)SecurityDescriptor, v4 - v17, &pcbLength) < 0 )
          return (unsigned int)-1073741811;
        if ( (pcbLength & 1) != 0 )
          return (unsigned int)-1073741811;
        v19 = pcbLength + 2;
        pcbLength = v19;
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
      if ( RtlStringCbLengthW((STRSAFE_PCNZWCH)SecurityDescriptor, v4, &pcbLength) < 0 || pcbLength + 2 > 0xFFFE )
        return (unsigned int)-1073741811;
      v15 = pcbLength + 2 == v4;
    }
    goto LABEL_24;
  }
  if ( v8 )
    return (unsigned int)-1073741811;
  return v3;
}
