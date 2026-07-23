/*
 * XREFs of sub_1407010C8 @ 0x1407010C8
 * Callers:
 *     sub_1406F914C @ 0x1406F914C (sub_1406F914C.c)
 *     sub_1406FF0A4 @ 0x1406FF0A4 (sub_1406FF0A4.c)
 * Callees:
 *     RtlIsUntrustedObject @ 0x140206A00 (RtlIsUntrustedObject.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1407010C8(PVOID Object, __int64 a2, char a3, char a4, char *a5)
{
  unsigned int v5; // esi
  PVOID v7; // rbp
  char v8; // di
  __int64 v10; // rcx
  char v11; // cl
  char v12; // [rsp+30h] [rbp-18h] BYREF
  char v13; // [rsp+31h] [rbp-17h]
  BOOLEAN IsUntrustedObject[22]; // [rsp+32h] [rbp-16h] BYREF

  v5 = 0;
  v7 = Object;
  v12 = 0;
  v13 = 0;
  IsUntrustedObject[0] = 0;
  if ( qword_140C1B910 )
    return (unsigned int)sub_14042A5E0(Object, a2);
  v8 = byte_140CF6648;
  if ( byte_140CF6648 == 2 && !a3 )
  {
    *a5 = 2;
    return v5;
  }
  if ( a3 == 2 )
  {
    if ( !byte_140CF6648 )
    {
      *a5 = 0;
      return v5;
    }
  }
  else if ( !a3 )
  {
LABEL_5:
    *a5 = a3;
    return v5;
  }
  if ( (a2 & 0x10) != 0 )
    goto LABEL_5;
  if ( qword_140C1B8E0 )
  {
    LOBYTE(a2) = a3;
    LOBYTE(Object) = a4;
    if ( (unsigned int)sub_14042A5E0(Object, a2) )
      goto LABEL_5;
  }
  v10 = *((_QWORD *)KeGetCurrentThread() + 23);
  if ( (*(_BYTE *)(v10 + 2170) & 7) != 0 || a3 != 6 )
    goto LABEL_5;
  if ( (*(_DWORD *)(v10 + 2512) & 0x800000) != 0 )
    goto LABEL_21;
  if ( !qword_140C1B8D8 )
    return (unsigned int)-1073741823;
  v5 = sub_14042A5E0(v7, &v12);
  if ( (v5 & 0x80000000) == 0 )
  {
    if ( !v12 && !v13 )
    {
      v5 = RtlIsUntrustedObject(0LL, v7, IsUntrustedObject);
      if ( (v5 & 0x80000000) != 0 )
        return v5;
      if ( !IsUntrustedObject[0] )
      {
        if ( (unsigned __int8)v8 >= 2u )
        {
          v11 = 9;
          if ( v8 != 2 )
            v11 = 6;
          *a5 = v11;
        }
        else
        {
          *a5 = 0;
        }
        return v5;
      }
    }
LABEL_21:
    *a5 = 6;
  }
  return v5;
}
