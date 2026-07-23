/*
 * XREFs of sub_1403AEC40 @ 0x1403AEC40
 * Callers:
 *     sub_1403AEB58 @ 0x1403AEB58 (sub_1403AEB58.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140248E38 @ 0x140248E38 (sub_140248E38.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1403AFE08 @ 0x1403AFE08 (sub_1403AFE08.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1403AEC40(__int64 *a1, unsigned int a2)
{
  __int64 *v2; // rdi
  _QWORD *v4; // rbx
  unsigned __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 *v9; // rdi
  _QWORD *v10; // rax
  __int64 v11; // r8
  __int64 *v12; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v16; // r9
  int v17; // eax
  bool v18; // zf

  v2 = a1;
  v4 = *(_QWORD **)(*a1 + 168);
  if ( !v4 )
    return 0LL;
  sub_1403AFE08(*(_QWORD *)(*a1 + 168), qword_1400103C0);
  v5 = KeAcquireSpinLockRaiseToDpc(&qword_140C2AAF8);
  if ( a2 )
  {
    v6 = a2;
    do
    {
      v7 = *v2;
      _InterlockedAnd((volatile signed __int32 *)(*v2 + 104), 0xFFFFFFFB);
      *(_QWORD *)(v7 + 168) = 0LL;
      ++v2;
      --v6;
    }
    while ( v6 );
  }
  v8 = *v4;
  v9 = (__int64 *)v4[2];
  v10 = (_QWORD *)v4[1];
  if ( *(_QWORD **)(*v4 + 8LL) != v4 || (_QWORD *)*v10 != v4 )
    goto LABEL_14;
  *v10 = v8;
  *(_QWORD *)(v8 + 8) = v10;
  ExFreePoolWithTag(v4, 0x6B725449u);
  if ( (__int64 *)v9[2] != v9 + 2 )
    goto LABEL_11;
  --dword_140C2AD60;
  v11 = *v9;
  v12 = (__int64 *)v9[1];
  if ( *(__int64 **)(*v9 + 8) != v9 || (__int64 *)*v12 != v9 )
LABEL_14:
    __fastfail(3u);
  *v12 = v11;
  *(_QWORD *)(v11 + 8) = v12;
  sub_140248E38((__int64)(v9 + 20), 1, v11);
  ExFreePoolWithTag(v9, 0x6B725449u);
LABEL_11:
  KeReleaseSpinLockFromDpcLevel(&qword_140C2AAF8);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v16 = *((_QWORD *)CurrentPrcb + 4375);
        v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v18 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
        *(_DWORD *)(v16 + 20) &= v17;
        if ( v18 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  return 0LL;
}
