/*
 * XREFs of sub_14097F148 @ 0x14097F148
 * Callers:
 *     sub_1405E1764 @ 0x1405E1764 (sub_1405E1764.c)
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 *     sub_140B533E0 @ 0x140B533E0 (sub_140B533E0.c)
 * Callees:
 *     sub_140287970 @ 0x140287970 (sub_140287970.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_14097F0F0 @ 0x14097F0F0 (sub_14097F0F0.c)
 */

NTSTATUS __fastcall sub_14097F148(void *a1, KPROCESSOR_MODE a2, PVOID a3, _QWORD *a4)
{
  NTSTATUS result; // eax
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  int v10; // ebx
  PVOID v11; // [rsp+50h] [rbp+8h] BYREF

  if ( !a1
    || (v11 = 0LL, result = ObReferenceObjectByHandle(a1, 0, MmSectionObjectType, a2, &v11, 0LL), a3 = v11, result >= 0) )
  {
    v8 = sub_140287970((__int64)a3);
    if ( (*(_DWORD *)(v8 + 56) & 0x20) != 0 && (*(_DWORD *)(v8 + 92) & 0xC0000) != 0 )
    {
      v9 = *(_QWORD *)(v8 + 96);
      if ( *(_QWORD *)(v9 + 56) || (v10 = sub_14097F0F0(*(_QWORD *)(v8 + 96)), v10 >= 0) )
      {
        v10 = 0;
        *a4 = *(_QWORD *)(v9 + 56);
      }
    }
    else
    {
      v10 = -1073741811;
    }
    if ( a1 )
      ObfDereferenceObject(a3);
    return v10;
  }
  return result;
}
