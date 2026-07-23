/*
 * XREFs of sub_140A8C5D4 @ 0x140A8C5D4
 * Callers:
 *     sub_140A80D10 @ 0x140A80D10 (sub_140A80D10.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1405FF10C @ 0x1405FF10C (sub_1405FF10C.c)
 *     sub_1405FFB44 @ 0x1405FFB44 (sub_1405FFB44.c)
 *     sub_140AA5BCC @ 0x140AA5BCC (sub_140AA5BCC.c)
 */

void __fastcall sub_140A8C5D4(__int64 a1, int a2, const void *a3, _QWORD *a4)
{
  __int64 v7; // rbx
  _BYTE *v8; // rsi

  if ( *a4 )
  {
    v7 = a4[1];
    *(_BYTE *)(v7 + 16) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 8));
    if ( a2 != -1073741802 )
    {
      v8 = *(_BYTE **)(a1 + 184);
      if ( *(_BYTE *)(a1 + 67) <= *(_BYTE *)(a1 + 66)
        && (unsigned __int8)(*v8 - 3) <= 1u
        && *(_QWORD *)(a1 + 8)
        && (dword_140C29FC0 & 0x6000) != 0 )
      {
        sub_1405FF10C(v7, a1);
      }
      if ( *(_QWORD *)(v7 + 216) && *(int *)(v7 + 56) >= 0 && (v8[3] & 1) == 0 )
      {
        sub_1405FFB44(0x228u, a3, (const void *)a1);
        *(_BYTE *)(*(_QWORD *)(a1 + 184) + 3LL) |= 1u;
      }
    }
    sub_140AA5BCC(v7);
  }
}
