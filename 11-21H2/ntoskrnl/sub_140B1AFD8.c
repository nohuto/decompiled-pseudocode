/*
 * XREFs of sub_140B1AFD8 @ 0x140B1AFD8
 * Callers:
 *     sub_140B1AEBC @ 0x140B1AEBC (sub_140B1AEBC.c)
 * Callees:
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_1403CC0F0 @ 0x1403CC0F0 (sub_1403CC0F0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_140B1AFD8(ULONG_PTR BugCheckParameter2)
{
  __int64 v1; // rbx
  __int16 v2; // ax
  unsigned __int64 v3; // rdi
  char v4; // cl
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v8; // eax
  __int64 v9; // r8
  bool v10; // zf

  v1 = 48 * BugCheckParameter2 - 0x220000000000LL;
  v2 = *(_WORD *)(v1 + 32);
  if ( v2 )
  {
    if ( v2 != 2 || (*(_QWORD *)(v1 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
      KeBugCheckEx(0x1Au, 0x3030307uLL, BugCheckParameter2, 0LL, 0LL);
    v3 = (unsigned __int8)sub_1402F2700(48 * BugCheckParameter2 - 0x220000000000LL);
    _InterlockedExchangeAdd64(&qword_140C53530, 0xFFFFFFFFFFFFFFFFuLL);
    v4 = *(_BYTE *)(v1 + 34);
    *(_QWORD *)(v1 + 24) &= 0xC000000000000000uLL;
    *(_WORD *)(v1 + 32) = 0;
    *(_BYTE *)(v1 + 34) = v4 & 0xF8 | 5;
    _InterlockedAnd64((volatile signed __int64 *)(v1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          v9 = *((_QWORD *)CurrentPrcb + 4375);
          v10 = (v8 & *(_DWORD *)(v9 + 20)) == 0;
          *(_DWORD *)(v9 + 20) &= v8;
          if ( v10 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v3);
  }
  else
  {
    *(_QWORD *)(v1 + 8) = 0LL;
    *(_QWORD *)(v1 + 40) |= 0x40000000000000uLL;
  }
  return sub_1403CC0F0(v1);
}
