/*
 * XREFs of sub_1407F4220 @ 0x1407F4220
 * Callers:
 *     <none>
 * Callees:
 *     sub_140372620 @ 0x140372620 (sub_140372620.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall sub_1407F4220(__int64 a1, __int64 a2, __int64 a3, PVOID *a4)
{
  __int64 v5; // rax
  int v6; // edx
  __int64 v7; // r8
  NTSTATUS result; // eax
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  v5 = sub_140372620((__int64)KeGetCurrentThread());
  Object = 0LL;
  *(_OWORD *)v7 = *(_OWORD *)&aHj[8 * v6];
  *(_QWORD *)(v7 + 8) += 2LL;
  *(_WORD *)v7 -= 2;
  *(_WORD *)(v7 + 2) -= 2;
  result = ObReferenceObjectByHandle(*(HANDLE *)(v5 + 232), 0xF000Fu, 0LL, 0, &Object, 0LL);
  *a4 = Object;
  return result;
}
