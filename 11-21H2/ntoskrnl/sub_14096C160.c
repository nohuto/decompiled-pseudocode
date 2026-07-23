/*
 * XREFs of sub_14096C160 @ 0x14096C160
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_14053A580 @ 0x14053A580 (sub_14053A580.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

LONG_PTR __fastcall sub_14096C160(__int64 a1)
{
  struct _FILE_OBJECT *v1; // rbx
  NTSTATUS v2; // edi

  v1 = *(struct _FILE_OBJECT **)(a1 + 32);
  v2 = *(_DWORD *)(a1 + 40);
  if ( *(_BYTE *)(a1 + 48) )
    ExFreePoolWithTag((PVOID)a1, 0);
  else
    _InterlockedAnd((volatile signed __int32 *)(a1 + 44), 0);
  sub_14053A580(v1, v2);
  return ObfDereferenceObjectWithTag(v1, 0x644C6D4Du);
}
