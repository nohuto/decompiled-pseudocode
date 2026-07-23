/*
 * XREFs of sub_14064C418 @ 0x14064C418
 * Callers:
 *     sub_14064B46C @ 0x14064B46C (sub_14064B46C.c)
 * Callees:
 *     RtlFindAceByType @ 0x140349610 (RtlFindAceByType.c)
 *     sub_1405F5B98 @ 0x1405F5B98 (sub_1405F5B98.c)
 *     RtlGetSaclSecurityDescriptor @ 0x14066FE80 (RtlGetSaclSecurityDescriptor.c)
 */

int __fastcall sub_14064C418(void *a1, __int64 a2)
{
  int result; // eax
  void *v4; // rdi
  char *AceByType; // rax
  BOOLEAN v6; // [rsp+40h] [rbp+8h] BYREF
  BOOLEAN v7; // [rsp+48h] [rbp+10h] BYREF
  ULONG Index; // [rsp+50h] [rbp+18h] BYREF
  PACL Acl; // [rsp+58h] [rbp+20h] BYREF

  Acl = 0LL;
  Index = 0;
  *(_QWORD *)a2 = a1;
  v6 = 0;
  result = RtlGetSaclSecurityDescriptor(a1, &v6, &Acl, &v7);
  if ( result < 0 )
    goto LABEL_9;
  v4 = 0LL;
  if ( v6 )
  {
    while ( 1 )
    {
      AceByType = (char *)RtlFindAceByType(Acl, 0x13u, &Index);
      if ( AceByType )
      {
        if ( (AceByType[1] & 8) == 0 )
          break;
      }
      ++Index;
      if ( !AceByType )
        goto LABEL_8;
    }
    v4 = AceByType + 8;
  }
LABEL_8:
  result = sub_1405F5B98(v4, (_DWORD *)(a2 + 8), (__int64 *)(a2 + 16));
  if ( result < 0 )
  {
LABEL_9:
    *(_DWORD *)(a2 + 8) = 0;
    *(_QWORD *)(a2 + 16) = 0LL;
  }
  return result;
}
