/*
 * XREFs of sub_18002C3FC @ 0x18002C3FC
 * Callers:
 *     sub_180016778 @ 0x180016778 (sub_180016778.c)
 *     sub_1800169B8 @ 0x1800169B8 (sub_1800169B8.c)
 *     sub_180029590 @ 0x180029590 (sub_180029590.c)
 *     sub_18002C460 @ 0x18002C460 (sub_18002C460.c)
 *     sub_1800347F0 @ 0x1800347F0 (sub_1800347F0.c)
 *     sub_180034E40 @ 0x180034E40 (sub_180034E40.c)
 *     sub_180035810 @ 0x180035810 (sub_180035810.c)
 *     sub_18003624C @ 0x18003624C (sub_18003624C.c)
 *     sub_180037528 @ 0x180037528 (sub_180037528.c)
 *     sub_18003ABF8 @ 0x18003ABF8 (sub_18003ABF8.c)
 *     sub_1800456DC @ 0x1800456DC (sub_1800456DC.c)
 *     sub_18004576C @ 0x18004576C (sub_18004576C.c)
 *     sub_180055C48 @ 0x180055C48 (sub_180055C48.c)
 *     sub_18005F684 @ 0x18005F684 (sub_18005F684.c)
 *     sub_18006D170 @ 0x18006D170 (sub_18006D170.c)
 *     sub_1800D9B40 @ 0x1800D9B40 (sub_1800D9B40.c)
 * Callees:
 *     sub_18001DE70 @ 0x18001DE70 (sub_18001DE70.c)
 *     sub_18002BCDC @ 0x18002BCDC (sub_18002BCDC.c)
 *     sub_18002C84C @ 0x18002C84C (sub_18002C84C.c)
 */

__int64 __fastcall sub_18002C3FC(__int64 a1, __int64 a2)
{
  volatile __int32 *v4; // rax
  __int32 v5; // r8d
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  *(_QWORD *)a2 = a1;
  *(_BYTE *)(a2 + 8) = 0;
  sub_18002C84C(a1);
  *(_BYTE *)(a2 + 8) = 1;
  LODWORD(v7) = Thrd_id();
  sub_18002BCDC((unsigned int *)&v7);
  v4 = (volatile __int32 *)sub_18001DE70(a1 + 28);
  _InterlockedExchange(v4, v5);
  return a2;
}
