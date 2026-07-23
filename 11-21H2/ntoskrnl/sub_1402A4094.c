/*
 * XREFs of sub_1402A4094 @ 0x1402A4094
 * Callers:
 *     sub_1406FDCD0 @ 0x1406FDCD0 (sub_1406FDCD0.c)
 * Callees:
 *     sub_1402A4000 @ 0x1402A4000 (sub_1402A4000.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 */

bool __fastcall sub_1402A4094(__int64 a1)
{
  _DWORD *v1; // rax
  int v2; // ebx

  v1 = sub_1402A4000(*(_QWORD *)(a1 + 8));
  if ( !v1 )
    return 1;
  v2 = v1[12];
  ObfDereferenceObject(v1);
  return (v2 & 0x800000) == 0;
}
