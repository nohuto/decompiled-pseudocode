/*
 * XREFs of ObAssignObjectSecurityDescriptor @ 0x1406BBA30
 * Callers:
 *     WmipSecurityMethod @ 0x1406BB860 (WmipSecurityMethod.c)
 *     CmpAssignKeySecurity @ 0x14085BE8C (CmpAssignKeySecurity.c)
 * Callees:
 *     ObLogSecurityDescriptor @ 0x140724E60 (ObLogSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObAssignObjectSecurityDescriptor(__int64 a1, void *a2)
{
  int v4; // esi

  if ( a2 )
  {
    v4 = ObLogSecurityDescriptor(a2);
    if ( v4 >= 0 )
    {
      ExFreePoolWithTag(a2, 0);
      *(_QWORD *)(a1 - 8) = 0LL;
    }
    return (unsigned int)v4;
  }
  else
  {
    *(_QWORD *)(a1 - 8) = 0LL;
    return 0LL;
  }
}
