/*
 * XREFs of sub_140990634 @ 0x140990634
 * Callers:
 *     sub_140990360 @ 0x140990360 (sub_140990360.c)
 * Callees:
 *     IoCancelIrp @ 0x14022D160 (IoCancelIrp.c)
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 */

__int64 __fastcall sub_140990634(__int64 a1, char a2, unsigned int *a3)
{
  unsigned int v3; // esi
  ULONG_PTR v6; // rdi
  IRP *v7; // rcx
  PVOID Object[3]; // [rsp+40h] [rbp-18h] BYREF

  v3 = 0;
  if ( *(_BYTE *)(a1 + 228) )
    goto LABEL_5;
  if ( (a2 & 9) == 0 )
    goto LABEL_5;
  v6 = a1 + 432;
  sub_1402D66A8(a1 + 432);
  KeResetEvent((PRKEVENT)(a1 + 472));
  v7 = *(IRP **)(a1 + 56);
  *(_DWORD *)(a1 + 112) = 0;
  IoCancelIrp(v7);
  sub_1402935D0(v6);
  Object[1] = (PVOID)(a1 + 448);
  Object[0] = (PVOID)(a1 + 472);
  if ( KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL) )
  {
    return (unsigned int)-1073741823;
  }
  else
  {
LABEL_5:
    sub_1402D66A8(a1 + 432);
    *a3 = *(_DWORD *)(a1 + 128) / 0xAu;
    a3[3] = *(_DWORD *)(a1 + 128);
    a3[1] = *(_DWORD *)(a1 + 80);
    a3[2] = *(_DWORD *)(a1 + 212);
    sub_1402935D0(a1 + 432);
  }
  return v3;
}
