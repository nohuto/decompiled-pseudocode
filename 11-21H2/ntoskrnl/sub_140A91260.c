/*
 * XREFs of sub_140A91260 @ 0x140A91260
 * Callers:
 *     sub_140A91350 @ 0x140A91350 (sub_140A91350.c)
 *     HandleInformation @ 0x140A91580 (HandleInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140A9BF9C @ 0x140A9BF9C (sub_140A9BF9C.c)
 *     sub_140A9C0A0 @ 0x140A9C0A0 (sub_140A9C0A0.c)
 *     sub_140AA5BCC @ 0x140AA5BCC (sub_140AA5BCC.c)
 */

void __fastcall sub_140A91260(char *P)
{
  __int64 v2; // rdi
  IRP *v3; // rbp
  __int64 v4; // rsi
  __int64 v5; // r14
  void *v6; // rsi

  if ( *((_DWORD *)P + 42) == 1 )
    KeWaitForSingleObject(P + 104, Executive, 0, 0, 0LL);
  v2 = *(_QWORD *)P;
  sub_140A9BF9C(*(_QWORD *)P);
  v3 = *(IRP **)v2;
  v4 = *(_QWORD *)(v2 + 216);
  v5 = *(_QWORD *)(*(_QWORD *)v2 + 184LL);
  *(_DWORD *)(v2 + 56) &= ~0x10u;
  if ( !v4 || (v6 = *(void **)(v4 + 40)) == 0LL )
    v6 = 0LL;
  sub_140A9C0A0(v2, 1LL);
  sub_140AA5BCC(v2);
  if ( !*(_QWORD *)(v5 - 16) || (unsigned int)sub_14042A5E0(*((_QWORD *)P + 1), v3) != -1073741802 )
    IofCompleteRequest(v3, P[172]);
  if ( v6 )
    ObfDereferenceObject(v6);
  ExFreePoolWithTag(P, 0);
}
