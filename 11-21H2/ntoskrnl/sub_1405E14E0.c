/*
 * XREFs of sub_1405E14E0 @ 0x1405E14E0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1405E0C00 @ 0x1405E0C00 (sub_1405E0C00.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140732CC0 (ObReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __fastcall sub_1405E14E0(void *a1, _DWORD *a2)
{
  NTSTATUS result; // eax
  __int64 v4; // r8
  int v5; // ebx
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  Object = 0LL;
  result = ObReferenceObjectByHandleWithTag(a1, 0x1FFFFFu, (POBJECT_TYPE)PsProcessType, 0, 0x624A7350u, &Object, 0LL);
  if ( result >= 0 )
  {
    v5 = sub_1405E0C00((__int64)Object, a2, v4);
    ObfDereferenceObjectWithTag(Object, 0x624A7350u);
    return v5;
  }
  return result;
}
