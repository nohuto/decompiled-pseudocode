/*
 * XREFs of sub_1402AB970 @ 0x1402AB970
 * Callers:
 *     sub_140200230 @ 0x140200230 (sub_140200230.c)
 *     RtlUnwindEx @ 0x1402957A0 (RtlUnwindEx.c)
 *     RtlWalkFrameChain @ 0x140295F90 (RtlWalkFrameChain.c)
 *     sub_140296110 @ 0x140296110 (sub_140296110.c)
 *     IoGetStackLimits @ 0x1402AB940 (IoGetStackLimits.c)
 *     sub_1405E47F4 @ 0x1405E47F4 (sub_1405E47F4.c)
 *     sub_1407035C0 @ 0x1407035C0 (sub_1407035C0.c)
 *     sub_140A81364 @ 0x140A81364 (sub_140A81364.c)
 *     sub_140AA58C0 @ 0x140AA58C0 (sub_140AA58C0.c)
 * Callees:
 *     sub_1402AB9C0 @ 0x1402AB9C0 (sub_1402AB9C0.c)
 *     sub_14041FAB0 @ 0x14041FAB0 (sub_14041FAB0.c)
 */

__int64 __fastcall sub_1402AB970(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 result; // rax
  char v6; // [rsp+40h] [rbp+18h] BYREF

  v4 = sub_14041FAB0();
  result = sub_1402AB9C0(v4, &v6, a1, a2);
  if ( !(_BYTE)result )
    __fastfail(4u);
  return result;
}
