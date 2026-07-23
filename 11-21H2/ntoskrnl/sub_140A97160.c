/*
 * XREFs of sub_140A97160 @ 0x140A97160
 * Callers:
 *     sub_140A96F60 @ 0x140A96F60 (sub_140A96F60.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140A976A8 @ 0x140A976A8 (sub_140A976A8.c)
 */

__int64 __fastcall sub_140A97160(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // edi
  unsigned __int64 i; // rax
  char v5; // cl
  __int64 Pool2; // rax
  _QWORD *v7; // rsi
  unsigned int v8; // ebx
  unsigned __int64 v9; // rbp
  _QWORD *v10; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v13; // r9
  int v14; // edx
  bool v15; // zf
  unsigned int v17; // [rsp+38h] [rbp+10h]

  v2 = 0;
  if ( a2 <= 4 )
  {
    for ( i = 0LL; i < 4; ++i )
    {
      v5 = 32;
      if ( i < a2 )
        v5 = *(_BYTE *)(a1 + 2 * i);
      *((_BYTE *)&v17 + i) = v5;
    }
    Pool2 = ExAllocatePool2(64LL, 0x18uLL, 0x54466656u);
    v7 = (_QWORD *)Pool2;
    if ( Pool2 )
    {
      v8 = v17;
      *(_DWORD *)(Pool2 + 16) = v17;
      v9 = KeAcquireSpinLockRaiseToDpc(&qword_140C1ACD0);
      if ( (unsigned int)sub_140A976A8(v8) )
      {
        ExFreePoolWithTag(v7, 0);
      }
      else
      {
        v10 = (_QWORD *)qword_140C1ACE8;
        dword_140C1ACDC = 1;
        if ( *(PVOID **)qword_140C1ACE8 != &qword_140C1ACE0 )
          __fastfail(3u);
        *v7 = &qword_140C1ACE0;
        v7[1] = v10;
        *v10 = v7;
        qword_140C1ACE8 = (__int64)v7;
      }
      KeReleaseSpinLockFromDpcLevel(&qword_140C1ACD0);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v13 = *((_QWORD *)CurrentPrcb + 4375);
            v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
            v15 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
            *(_DWORD *)(v13 + 20) &= v14;
            if ( v15 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v9);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
