/*
 * XREFs of sub_14082BD64 @ 0x14082BD64
 * Callers:
 *     sub_1403D981C @ 0x1403D981C (sub_1403D981C.c)
 *     sub_140B07C00 @ 0x140B07C00 (sub_140B07C00.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x140203DD0 (RtlGetDaclSecurityDescriptor.c)
 *     sub_1403C31D4 @ 0x1403C31D4 (sub_1403C31D4.c)
 *     sub_1403C3E64 @ 0x1403C3E64 (sub_1403C3E64.c)
 *     sub_14082BE90 @ 0x14082BE90 (sub_14082BE90.c)
 *     sub_14082C1E4 @ 0x14082C1E4 (sub_14082C1E4.c)
 *     sub_14082C950 @ 0x14082C950 (sub_14082C950.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140B078E4 @ 0x140B078E4 (sub_140B078E4.c)
 */

_BOOL8 __fastcall sub_14082BD64(ULONG_PTR *a1)
{
  int v2; // ebx
  __int64 v3; // rsi
  int v4; // r8d
  ULONG_PTR v5; // r10
  _OWORD SecurityDescriptor[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v8; // [rsp+60h] [rbp-10h]
  BOOLEAN DaclPresent; // [rsp+A8h] [rbp+38h] BYREF
  BOOLEAN DaclDefaulted; // [rsp+B0h] [rbp+40h] BYREF
  PACL Dacl; // [rsp+B8h] [rbp+48h] BYREF

  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v8 = 0LL;
  v2 = sub_14082C950(SecurityDescriptor);
  if ( v2 < 0 )
    goto LABEL_11;
  v2 = sub_14082C1E4(a1);
  if ( v2 < 0 )
    goto LABEL_11;
  v3 = 0LL;
  do
  {
    v4 = 0;
    if ( (unsigned int)v3 < 4 )
    {
      if ( a1 != &StartContext )
        goto LABEL_7;
      LODWORD(v5) = 0;
    }
    else
    {
      v5 = a1[29];
      LOBYTE(v4) = a1 == &StartContext;
    }
    v2 = sub_14082BE90(
           (unsigned int)&aHj[8 * v3],
           v3,
           v5,
           (unsigned int)SecurityDescriptor,
           v4,
           (__int64)&a1[(unsigned int)v3 + 31],
           (__int64)&a1[v3 + 42]);
    if ( v2 < 0 )
      goto LABEL_11;
LABEL_7:
    v3 = (unsigned int)(v3 + 1);
  }
  while ( (unsigned int)v3 < 0xB );
  if ( a1 == &StartContext )
  {
    sub_140B078E4();
    sub_1403C31D4();
  }
  sub_1403C3E64(a1);
  v2 = 0;
LABEL_11:
  Dacl = 0LL;
  DaclPresent = 0;
  if ( RtlGetDaclSecurityDescriptor(SecurityDescriptor, &DaclPresent, &Dacl, &DaclDefaulted) >= 0 && DaclPresent )
    ExFreePoolWithTag(Dacl, 0);
  return v2 >= 0;
}
