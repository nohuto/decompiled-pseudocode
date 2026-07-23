/*
 * XREFs of sub_14069C07C @ 0x14069C07C
 * Callers:
 *     sub_14069B8FC @ 0x14069B8FC (sub_14069B8FC.c)
 *     sub_14069C9C0 @ 0x14069C9C0 (sub_14069C9C0.c)
 * Callees:
 *     sub_140276A48 @ 0x140276A48 (sub_140276A48.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_14069C9C0 @ 0x14069C9C0 (sub_14069C9C0.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14069C07C(char *P)
{
  void *v2; // rcx
  unsigned int v3; // edi
  _QWORD *v4; // rsi
  void *v5; // rcx
  void *v6; // rax

  v2 = (void *)*((_QWORD *)P + 2);
  if ( v2 )
    ObfDereferenceObjectWithTag(v2, 0x6D44624Fu);
  ObCloseHandle(*((HANDLE *)P + 31), 0);
  ObfDereferenceObject(*(PVOID *)P);
  v3 = 0;
  v4 = P + 32;
  do
  {
    if ( *v4 )
    {
      v6 = (void *)sub_140276A48((volatile __int64 *)&P[8 * v3 + 32], 0LL);
      ObfDereferenceObject(v6);
    }
    ++v3;
    ++v4;
  }
  while ( v3 < 0x1A );
  v5 = (void *)*((_QWORD *)P + 3);
  if ( v5 )
    sub_14069C9C0(v5);
  ExFreePoolWithTag(P, 0x6D44624Fu);
}
