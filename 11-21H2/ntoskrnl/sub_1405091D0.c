/*
 * XREFs of sub_1405091D0 @ 0x1405091D0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140252134 @ 0x140252134 (sub_140252134.c)
 *     sub_140252344 @ 0x140252344 (sub_140252344.c)
 *     sub_1402523CC @ 0x1402523CC (sub_1402523CC.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14051D768 @ 0x14051D768 (sub_14051D768.c)
 *     sub_14051E038 @ 0x14051E038 (sub_14051E038.c)
 */

__int64 __fastcall sub_1405091D0(unsigned int a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rdi
  unsigned int v4; // ebx
  ULONG_PTR *v5; // rbp
  unsigned __int64 v6; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r9
  int v10; // eax
  bool v11; // zf
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = 0LL;
  v2 = sub_1402523CC(a1, a1 + 1);
  v3 = v2;
  if ( !v2 )
  {
    if ( (unsigned __int8)sub_14042A5E0(0LL, a1) )
      return (unsigned int)sub_14051D768(a1);
    sub_14051E038(0, 18, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c", 3902);
    return (unsigned int)-1073741811;
  }
  LODWORD(v13) = v2[4];
  HIDWORD(v13) = a1 + v2[5] - v2[7];
  v5 = sub_140252134(v13);
  if ( !v5 )
  {
    sub_14051E038(0, 17, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c", 3918);
    return (unsigned int)-1073741811;
  }
  v6 = sub_140252344(&qword_140C4BEE8);
  if ( (*(_DWORD *)(*((_QWORD *)v3 + 5) + 56LL * (a1 - v3[7]) + 12) & 0x10) != 0 )
    v4 = sub_14042A5E0(v5[2], &v13);
  else
    v4 = -1073741811;
  KeReleaseSpinLockFromDpcLevel(&qword_140C4BEE8);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v9 = *((_QWORD *)CurrentPrcb + 4375);
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
        *(_DWORD *)(v9 + 20) &= v10;
        if ( v11 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  return v4;
}
