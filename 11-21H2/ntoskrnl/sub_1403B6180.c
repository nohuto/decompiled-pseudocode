/*
 * XREFs of sub_1403B6180 @ 0x1403B6180
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140251FD8 @ 0x140251FD8 (sub_140251FD8.c)
 *     sub_140252134 @ 0x140252134 (sub_140252134.c)
 *     sub_140252344 @ 0x140252344 (sub_140252344.c)
 *     sub_1402523CC @ 0x1402523CC (sub_1402523CC.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14051D410 @ 0x14051D410 (sub_14051D410.c)
 *     sub_14051E038 @ 0x14051E038 (sub_14051E038.c)
 */

__int64 __fastcall sub_1403B6180(unsigned int a1, unsigned int a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rdi
  ULONG_PTR *v6; // r14
  unsigned __int64 v7; // rsi
  __int64 v8; // r8
  unsigned int v9; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v13; // r9
  int v14; // eax
  bool v15; // zf
  __int64 v16; // [rsp+60h] [rbp+18h] BYREF

  v16 = 0LL;
  v4 = sub_1402523CC(a1, a1 + 1);
  v5 = v4;
  if ( !v4 )
  {
    if ( (unsigned __int8)sub_14042A5E0(0LL, a1) )
      return (unsigned int)sub_14051D410(a1, a2, 0LL);
    sub_14051E038(0, 19, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 1832);
    return (unsigned int)-1073741811;
  }
  LODWORD(v16) = v4[4];
  HIDWORD(v16) = a1 + v4[5] - v4[7];
  v6 = sub_140252134(v16);
  if ( !v6 )
  {
    sub_14051E038(0, 17, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 1852);
    return (unsigned int)-1073741811;
  }
  v7 = sub_140252344(&qword_140C4BEE8);
  v8 = *((_QWORD *)v5 + 5) + 56LL * (a1 - v5[7]);
  if ( (a2 & 2) != 0 )
    *(_DWORD *)(v8 + 12) &= ~0x20u;
  else
    *(_DWORD *)(v8 + 12) |= 0x10u;
  v9 = sub_140251FD8((__int64)v6, (__int64)&v16, v8);
  KeReleaseSpinLockFromDpcLevel(&qword_140C4BEE8);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v13 = *((_QWORD *)CurrentPrcb + 4375);
        v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v15 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
        *(_DWORD *)(v13 + 20) &= v14;
        if ( v15 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return v9;
}
