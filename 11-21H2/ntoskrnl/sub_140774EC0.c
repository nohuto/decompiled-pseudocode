/*
 * XREFs of sub_140774EC0 @ 0x140774EC0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1403D87A8 @ 0x1403D87A8 (sub_1403D87A8.c)
 *     sub_140774F24 @ 0x140774F24 (sub_140774F24.c)
 *     sub_14077503C @ 0x14077503C (sub_14077503C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140774EC0(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  sub_14077503C(a1);
  sub_140774F24(*(PVOID *)(*(_QWORD *)(a1 + 312) + 40LL));
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 312) + 32LL) & 0x1000) != 0 )
    sub_1403D87A8(*(PVOID *)(a1 + 8), (PVOID)a1);
  v2 = (void *)_InterlockedExchange64((volatile __int64 *)(a1 + 56), 0LL);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  v3 = *(void **)(a1 + 8);
  if ( v3 )
    ObfDereferenceObject(v3);
}
