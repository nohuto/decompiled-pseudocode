/*
 * XREFs of sub_1C004BF10 @ 0x1C004BF10
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C00119D8 @ 0x1C00119D8 (sub_1C00119D8.c)
 *     sub_1C003F0C4 @ 0x1C003F0C4 (sub_1C003F0C4.c)
 */

NTSTATUS __fastcall sub_1C004BF10(__int64 a1)
{
  IRP *v1; // rdi
  __int64 v2; // rbx
  NTSTATUS Status; // [rsp+28h] [rbp-10h]

  v1 = *(IRP **)(a1 + 160);
  v2 = *(_QWORD *)(a1 + 216);
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 4) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    Status = v1->IoStatus.Status;
    sub_1C003F0C4((__int64)off_1C0093070->AttachedDevice, 0x16u, (__int64)&unk_1C008A080, v2, v1, Status);
  }
  *(_WORD *)(v2 + 4496) = 0;
  return sub_1C00119D8(v1, v2);
}
