/*
 * XREFs of sub_140251DC0 @ 0x140251DC0
 * Callers:
 *     sub_14050C264 @ 0x14050C264 (sub_14050C264.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140251EA0 @ 0x140251EA0 (sub_140251EA0.c)
 *     sub_140252344 @ 0x140252344 (sub_140252344.c)
 *     sub_140252380 @ 0x140252380 (sub_140252380.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140508270 @ 0x140508270 (sub_140508270.c)
 *     sub_140508364 @ 0x140508364 (sub_140508364.c)
 *     sub_14051E038 @ 0x14051E038 (sub_14051E038.c)
 */

__int64 __fastcall sub_140251DC0(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned __int64 v5; // rdi
  unsigned int v6; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v11; // r9
  int v12; // eax
  bool v13; // zf
  __int64 v14; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v15[2]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v16; // [rsp+40h] [rbp-10h]
  __int64 v17; // [rsp+48h] [rbp-8h]
  int v18; // [rsp+78h] [rbp+28h] BYREF
  int v19; // [rsp+7Ch] [rbp+2Ch]

  v14 = 0LL;
  v15[1] = 0;
  if ( qword_140C4C4A8 )
    return (unsigned int)sub_140508364(a3, a1, a2);
  if ( (*(_DWORD *)(qword_140C54A88 + 228) & 0x100) != 0 )
    return (unsigned int)sub_140508270(a3, a1, a2);
  if ( !a3 )
    return (unsigned int)-1073741811;
  if ( (int)sub_140252380(*a3, &v14) < 0 )
  {
    sub_14051E038(0, 18, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 570);
    return (unsigned int)-1073741811;
  }
  v18 = -1;
  v17 = a1 + 40;
  v15[0] = 1;
  v16 = a2;
  v19 = 1;
  v5 = (unsigned __int8)sub_140252344(&qword_140C4BEE8);
  v6 = sub_140251EA0(&v14, v15, &v18);
  KeReleaseSpinLockFromDpcLevel(&qword_140C4BEE8);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v11 = *((_QWORD *)CurrentPrcb + 4375);
        v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
        *(_DWORD *)(v11 + 20) &= v12;
        if ( v13 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  return v6;
}
