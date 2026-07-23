/*
 * XREFs of sub_1403CD11C @ 0x1403CD11C
 * Callers:
 *     sub_1403CCF90 @ 0x1403CCF90 (sub_1403CCF90.c)
 *     sub_1405057C0 @ 0x1405057C0 (sub_1405057C0.c)
 *     sub_140845F00 @ 0x140845F00 (sub_140845F00.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1403CD11C(__int64 a1, char a2, char a3)
{
  __int64 *v4; // rsi
  __int64 v5; // rbx
  char v6; // bp
  KIRQL v9; // al
  __int64 *v10; // r9
  unsigned __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 **v13; // rax
  bool v15; // cf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v18; // r9
  int v19; // eax
  bool v20; // zf

  v4 = 0LL;
  v5 = 0LL;
  v6 = 0;
  v9 = KeAcquireSpinLockRaiseToDpc(&qword_140C4E280);
  v10 = (__int64 *)qword_140C4E250;
  v11 = v9;
  while ( v10 != &qword_140C4E250 )
  {
    v4 = v10;
    if ( v10[2] == a1 )
    {
      v5 = v10[3];
      if ( a2 )
      {
        v12 = *v10;
        v13 = (__int64 **)v10[1];
        if ( *(__int64 **)(*v10 + 8) != v10 || *v13 != v10 )
          __fastfail(3u);
        *v13 = (__int64 *)v12;
        v6 = 1;
        *(_QWORD *)(v12 + 8) = v13;
      }
      if ( a3 )
      {
        v15 = *((_BYTE *)v10 + 32) != 0;
        *((_BYTE *)v10 + 32) = 1;
        v5 &= -(__int64)v15;
      }
      break;
    }
    v10 = (__int64 *)*v10;
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C4E280);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v18 = *((_QWORD *)CurrentPrcb + 4375);
        v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
        v20 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
        *(_DWORD *)(v18 + 20) &= v19;
        if ( v20 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v11);
  if ( v6 )
    ExFreePoolWithTag(v4, 0);
  return v5;
}
