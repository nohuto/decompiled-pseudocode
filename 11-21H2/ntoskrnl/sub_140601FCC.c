/*
 * XREFs of sub_140601FCC @ 0x140601FCC
 * Callers:
 *     sub_140A9D4F0 @ 0x140A9D4F0 (sub_140A9D4F0.c)
 *     sub_140A9D738 @ 0x140A9D738 (sub_140A9D738.c)
 *     sub_140A9D980 @ 0x140A9D980 (sub_140A9D980.c)
 *     sub_140A9DA38 @ 0x140A9DA38 (sub_140A9DA38.c)
 *     sub_140A9DB60 @ 0x140A9DB60 (sub_140A9DB60.c)
 * Callees:
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1406020E8 @ 0x1406020E8 (sub_1406020E8.c)
 */

char __fastcall sub_140601FCC(__int64 a1)
{
  int v1; // eax
  unsigned __int64 v3; // rdi
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v5; // r9
  bool v6; // zf

  LOBYTE(v1) = *(_BYTE *)(a1 + 9);
  if ( (v1 & 2) != 0 )
  {
    sub_1406020E8(*(_QWORD *)a1, a1);
    LOBYTE(v1) = *(_BYTE *)(a1 + 9);
  }
  if ( (v1 & 1) != 0 )
  {
    LOBYTE(v1) = dword_140D06B08;
    v3 = *(unsigned __int8 *)(a1 + 8);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        LOBYTE(v1) = KeGetCurrentIrql();
        if ( (unsigned __int8)v1 <= 0xFu && (unsigned __int8)v3 <= 0xFu && (unsigned __int8)v1 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v5 = *((_QWORD *)CurrentPrcb + 4375);
          v1 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          v6 = (v1 & *(_DWORD *)(v5 + 20)) == 0;
          *(_DWORD *)(v5 + 20) &= v1;
          if ( v6 )
            LOBYTE(v1) = sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v3);
    *(_BYTE *)(a1 + 9) &= ~1u;
    *(_BYTE *)(a1 + 8) = 0;
  }
  return v1;
}
