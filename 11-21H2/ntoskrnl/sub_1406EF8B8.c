/*
 * XREFs of sub_1406EF8B8 @ 0x1406EF8B8
 * Callers:
 *     sub_1406EE2AC @ 0x1406EE2AC (sub_1406EE2AC.c)
 *     sub_140854CB8 @ 0x140854CB8 (sub_140854CB8.c)
 * Callees:
 *     ObLogSecurityDescriptor @ 0x140724E60 (ObLogSecurityDescriptor.c)
 */

__int64 __fastcall sub_1406EF8B8(__int64 a1, void *a2)
{
  int v3; // ecx

  v3 = ObLogSecurityDescriptor(a2);
  if ( v3 >= 0 )
    *(_QWORD *)(a1 + 784) = 0LL;
  return (unsigned int)v3;
}
