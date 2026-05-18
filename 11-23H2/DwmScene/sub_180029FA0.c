/*
 * XREFs of sub_180029FA0 @ 0x180029FA0
 * Callers:
 *     sub_18002A244 @ 0x18002A244 (sub_18002A244.c)
 *     sub_180033400 @ 0x180033400 (sub_180033400.c)
 *     sub_1800341C8 @ 0x1800341C8 (sub_1800341C8.c)
 *     sub_180034264 @ 0x180034264 (sub_180034264.c)
 *     sub_1800342AC @ 0x1800342AC (sub_1800342AC.c)
 *     sub_180034328 @ 0x180034328 (sub_180034328.c)
 *     sub_1800344A0 @ 0x1800344A0 (sub_1800344A0.c)
 *     sub_180035944 @ 0x180035944 (sub_180035944.c)
 *     sub_18003655C @ 0x18003655C (sub_18003655C.c)
 *     sub_1800365A8 @ 0x1800365A8 (sub_1800365A8.c)
 *     sub_18003699C @ 0x18003699C (sub_18003699C.c)
 *     sub_180057C24 @ 0x180057C24 (sub_180057C24.c)
 *     sub_180060A5C @ 0x180060A5C (sub_180060A5C.c)
 *     ?dtor$0@?0??GetBitSet@SchedulerBase@details@Concurrency@@QEAA?AVQuickBitSet@23@PEBVlocation@3@@Z@4HA_0 @ 0x1800E4F8D (-dtor$0@-0--GetBitSet@SchedulerBase@details@Concurrency@@QEAA-AVQuickBitSet@23@PEBV_ea_1800E4F8D.c)
 *     sub_1800E5B89 @ 0x1800E5B89 (sub_1800E5B89.c)
 *     sub_1800E5C4F @ 0x1800E5C4F (sub_1800E5C4F.c)
 *     sub_1800E5C61 @ 0x1800E5C61 (sub_1800E5C61.c)
 *     sub_1800E5CA9 @ 0x1800E5CA9 (sub_1800E5CA9.c)
 *     sub_1800E5E53 @ 0x1800E5E53 (sub_1800E5E53.c)
 *     sub_1800E5F3D @ 0x1800E5F3D (sub_1800E5F3D.c)
 *     sub_1800E5FB9 @ 0x1800E5FB9 (sub_1800E5FB9.c)
 *     sub_1800E7889 @ 0x1800E7889 (sub_1800E7889.c)
 * Callees:
 *     sub_18002A638 @ 0x18002A638 (sub_18002A638.c)
 */

__int64 __fastcall sub_180029FA0(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
    return sub_18002A638(*(_QWORD *)a1);
  return result;
}
