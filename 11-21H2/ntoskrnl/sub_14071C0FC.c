/*
 * XREFs of sub_14071C0FC @ 0x14071C0FC
 * Callers:
 *     sub_14020AABC @ 0x14020AABC (sub_14020AABC.c)
 *     sub_14069E368 @ 0x14069E368 (sub_14069E368.c)
 *     sub_14071C120 @ 0x14071C120 (sub_14071C120.c)
 *     sub_14072E210 @ 0x14072E210 (sub_14072E210.c)
 *     sub_1407350A0 @ 0x1407350A0 (sub_1407350A0.c)
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 *     sub_1407C3850 @ 0x1407C3850 (sub_1407C3850.c)
 *     sub_1407C8AE0 @ 0x1407C8AE0 (sub_1407C8AE0.c)
 *     sub_14080FD00 @ 0x14080FD00 (sub_14080FD00.c)
 *     sub_14080FD5C @ 0x14080FD5C (sub_14080FD5C.c)
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 *     sub_14091CBB0 @ 0x14091CBB0 (sub_14091CBB0.c)
 *     sub_140924550 @ 0x140924550 (sub_140924550.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

signed __int64 __fastcall sub_14071C0FC(volatile signed __int64 *a1)
{
  signed __int64 result; // rax

  result = _InterlockedExchangeAdd64(a1, 0xFFFFFFFFFFFFFFFFuLL);
  if ( result == 1 )
    KeBugCheckEx(0x51u, 0x1FuLL, 0LL, 0LL, 0LL);
  return result;
}
