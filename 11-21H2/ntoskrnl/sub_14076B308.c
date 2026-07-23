/*
 * XREFs of sub_14076B308 @ 0x14076B308
 * Callers:
 *     sub_14076E9B8 @ 0x14076E9B8 (sub_14076E9B8.c)
 * Callees:
 *     RtlValidSecurityDescriptor @ 0x140726610 (RtlValidSecurityDescriptor.c)
 *     sub_14077198C @ 0x14077198C (sub_14077198C.c)
 *     sub_14077D91C @ 0x14077D91C (sub_14077D91C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14076B308(__int64 a1, __int64 a2, char a3)
{
  int v5; // eax
  unsigned int v6; // edi
  int v7; // esi
  PSECURITY_DESCRIPTOR v8; // rbx
  __int64 v9; // rcx
  PSECURITY_DESCRIPTOR SecurityDescriptor[7]; // [rsp+60h] [rbp-38h] BYREF
  unsigned int v11; // [rsp+A0h] [rbp+8h] BYREF
  int v12; // [rsp+B8h] [rbp+20h] BYREF

  v12 = 0;
  v11 = 0;
  SecurityDescriptor[0] = 0LL;
  v5 = sub_14077D91C(
         0x75737050u,
         0LL,
         0LL,
         (__int64)&qword_140010B08,
         (__int64)&v12,
         (__int64)SecurityDescriptor,
         (__int64)&v11,
         0);
  if ( v5 == -1073741275 && a3 )
  {
    v8 = SecurityDescriptor[0];
  }
  else
  {
    v6 = v11;
    v7 = 19;
    v8 = SecurityDescriptor[0];
    if ( v5 < 0 || v12 != 19 || v11 < 0x28 || !RtlValidSecurityDescriptor(SecurityDescriptor[0]) )
    {
      if ( v8 )
        ExFreePoolWithTag(v8, 0x75737050u);
      v8 = 0LL;
    }
    if ( v8 )
    {
      v9 = (__int64)v8;
    }
    else
    {
      v6 = 0;
      v9 = 0LL;
      v7 = 0;
    }
    sub_14077198C(
      qword_140D00AC0,
      *(_QWORD *)(a1 + 48),
      1,
      0LL,
      (__int64)&qword_1400108E0,
      v7,
      v9,
      v6,
      a3 != 0 ? 0x20000 : 0);
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0x75737050u);
}
