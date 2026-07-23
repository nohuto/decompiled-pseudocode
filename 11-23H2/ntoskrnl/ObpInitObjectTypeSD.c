/*
 * XREFs of ObpInitObjectTypeSD @ 0x14081FB24
 * Callers:
 *     ObCreateObjectTypeEx @ 0x14081F4F0 (ObCreateObjectTypeEx.c)
 *     ObInitSystem @ 0x140B4B2F8 (ObInitSystem.c)
 * Callees:
 *     ObLogSecurityDescriptor @ 0x140728EC0 (ObLogSecurityDescriptor.c)
 *     ObpCreateDefaultObjectTypeSD @ 0x14081FBB8 (ObpCreateDefaultObjectTypeSD.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObpInitObjectTypeSD(__int64 a1, void *a2)
{
  __int16 *v4; // rbx
  int v5; // eax
  int v6; // edi
  PVOID P; // [rsp+48h] [rbp+10h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = 0LL;
  P = a2;
  v4 = (__int16 *)a2;
  if ( a2 || (v5 = ObpCreateDefaultObjectTypeSD(&P), v4 = (__int16 *)P, v6 = v5, v5 >= 0) )
  {
    v6 = ObLogSecurityDescriptor(v4, &v9, 0x10u);
    if ( v6 >= 0 )
    {
      if ( v9 )
        *(_QWORD *)(a1 - 8) = v9 + 15;
      else
        *(_QWORD *)(a1 - 8) = 0LL;
    }
  }
  if ( v4 && !a2 )
    ExFreePoolWithTag(v4, 0);
  return (unsigned int)v6;
}
