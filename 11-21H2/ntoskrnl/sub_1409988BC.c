/*
 * XREFs of sub_1409988BC @ 0x1409988BC
 * Callers:
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x1402E0C80 (RtlCheckTokenMembership.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

__int64 __fastcall sub_1409988BC(char a1)
{
  NTSTATUS v2; // ebx
  int v3; // ecx
  __int64 v4; // rdx
  __int64 v5; // rcx
  BOOLEAN IsMember; // [rsp+38h] [rbp+10h] BYREF

  IsMember = 0;
  if ( qword_140C1F8F0 )
  {
    v2 = RtlCheckTokenMembership(0LL, qword_140C1F8F0, &IsMember);
    if ( v2 < 0 )
      return (unsigned int)v2;
    if ( !IsMember )
      return (unsigned int)-1073741790;
    sub_140A48330(v3);
    if ( byte_140C1F9E0 )
    {
      if ( !a1 )
        goto LABEL_8;
    }
    else if ( a1 )
    {
LABEL_8:
      byte_140C1F9E0 = a1;
LABEL_9:
      sub_140A47CF8(v5, v4);
      return (unsigned int)v2;
    }
    v2 = -1073741811;
    goto LABEL_9;
  }
  return (unsigned int)-1073741823;
}
