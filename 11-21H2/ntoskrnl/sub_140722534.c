/*
 * XREFs of sub_140722534 @ 0x140722534
 * Callers:
 *     sub_14053FB50 @ 0x14053FB50 (sub_14053FB50.c)
 *     sub_140657670 @ 0x140657670 (sub_140657670.c)
 *     sub_140677DC0 @ 0x140677DC0 (sub_140677DC0.c)
 *     sub_14067E828 @ 0x14067E828 (sub_14067E828.c)
 *     sub_1406B3C34 @ 0x1406B3C34 (sub_1406B3C34.c)
 *     sub_140714E58 @ 0x140714E58 (sub_140714E58.c)
 *     sub_140719278 @ 0x140719278 (sub_140719278.c)
 *     sub_140720260 @ 0x140720260 (sub_140720260.c)
 *     sub_1407C16A0 @ 0x1407C16A0 (sub_1407C16A0.c)
 *     sub_1407C3850 @ 0x1407C3850 (sub_1407C3850.c)
 *     sub_1407C8AE0 @ 0x1407C8AE0 (sub_1407C8AE0.c)
 * Callees:
 *     sub_14071F300 @ 0x14071F300 (sub_14071F300.c)
 */

void __fastcall sub_140722534(ULONG_PTR a1, __int64 a2, unsigned int a3)
{
  if ( (*(_DWORD *)(a1 + 160) & 0x8001) == 0
    && (*(_BYTE *)(a2 + 12) & (unsigned __int8)byte_140C097BC) == 0
    && (int)sub_14071F300(a1, a3, 0) >= 0 )
  {
    *(_BYTE *)(a2 + 12) |= byte_140C097BC;
  }
}
