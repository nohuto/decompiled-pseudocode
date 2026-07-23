/*
 * XREFs of sub_1405E2C2C @ 0x1405E2C2C
 * Callers:
 *     sub_1405E1764 @ 0x1405E1764 (sub_1405E1764.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     MmMapViewOfSection @ 0x140785150 (MmMapViewOfSection.c)
 */

NTSTATUS __fastcall sub_1405E2C2C(__int64 a1)
{
  KPROCESSOR_MODE v1; // r9
  ACCESS_MASK v2; // edx
  void *v4; // rcx
  NTSTATUS result; // eax
  PVOID v6; // rdi
  int v7; // esi
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF

  v1 = *(_BYTE *)(a1 + 52);
  v2 = *(_DWORD *)(a1 + 48);
  v4 = *(void **)(a1 + 16);
  Object = 0LL;
  result = ObReferenceObjectByHandle(v4, v2, MmSectionObjectType, v1, &Object, 0LL);
  if ( result >= 0 )
  {
    v6 = Object;
    v7 = MmMapViewOfSection(
           Object,
           *((_QWORD *)KeGetCurrentThread() + 23),
           a1 + 24,
           0LL,
           0LL,
           a1 + 32,
           a1 + 40,
           1,
           *(_DWORD *)(a1 + 8),
           *(_DWORD *)(a1 + 12));
    if ( v7 < 0 )
      ObfDereferenceObject(v6);
    else
      *(_QWORD *)(a1 + 16) = v6;
    return v7;
  }
  return result;
}
