/*
 * XREFs of sub_140248C10 @ 0x140248C10
 * Callers:
 *     sub_1402590D8 @ 0x1402590D8 (sub_1402590D8.c)
 *     sub_140283030 @ 0x140283030 (sub_140283030.c)
 *     sub_140288760 @ 0x140288760 (sub_140288760.c)
 *     CcUnpinRepinnedBcb @ 0x14053A6C0 (CcUnpinRepinnedBcb.c)
 * Callees:
 *     sub_140230680 @ 0x140230680 (sub_140230680.c)
 *     sub_14027A1B4 @ 0x14027A1B4 (sub_14027A1B4.c)
 *     sub_14028D31C @ 0x14028D31C (sub_14028D31C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

bool __fastcall sub_140248C10(__int64 a1, int a2)
{
  unsigned __int64 v5; // rax
  unsigned int v6; // ebx

  if ( a2 >= 0 )
    return 0;
  if ( !*(_DWORD *)(a1 + 4) )
    KeBugCheckEx(0x34u, 0x189EuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v5 = sub_14027A1B4();
  v6 = *(_DWORD *)(*(_QWORD *)(v5 + 8) + 52LL) & 0x10;
  sub_140230680((signed __int64 *)(a1 + 96), v5, 0x63536343u);
  return (unsigned int)sub_14028D31C(1LL, v6, (unsigned int)a2) != 0;
}
