/*
 * XREFs of sub_14025A690 @ 0x14025A690
 * Callers:
 *     sub_140777578 @ 0x140777578 (sub_140777578.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140764C94 @ 0x140764C94 (sub_140764C94.c)
 */

bool __fastcall sub_14025A690(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rdx
  __int64 **v4; // rsi
  unsigned __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 *i; // rbx
  __int64 *v9; // rcx
  int v10; // eax
  __int64 **v11; // rax
  __int64 *v12; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v15; // r9
  int v16; // eax
  bool v17; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140C44A50);
  v3 = qword_140C44A40;
  v4 = *(__int64 ***)(a1 + 8);
  v5 = v2;
  if ( (__int64 *)qword_140C44A40 != &qword_140C44A40 )
  {
    do
    {
      v9 = *(__int64 **)v3;
      if ( *(_BYTE *)(v3 + 28) )
        break;
      v10 = *(_DWORD *)(v3 + 24);
      if ( v10 >= 9 && (v10 <= 10 || v10 == 14) )
      {
        v11 = *(__int64 ***)(v3 + 8);
        if ( v9[1] != v3
          || *v11 != (__int64 *)v3
          || (*v11 = v9, v9[1] = (__int64)v11, v12 = *(__int64 **)(a1 + 8), *v12 != a1) )
        {
          __fastfail(3u);
        }
        *(_QWORD *)v3 = a1;
        *(_QWORD *)(v3 + 8) = v12;
        *v12 = v3;
        *(_QWORD *)(a1 + 8) = v3;
      }
      v3 = (__int64)v9;
    }
    while ( v9 != &qword_140C44A40 );
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C44A50);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v6 = -1LL << ((unsigned __int8)v5 + 1);
        v15 = *((_QWORD *)CurrentPrcb + 4375);
        v16 = ~(unsigned __int16)v6;
        v17 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
        *(_DWORD *)(v15 + 20) &= v16;
        if ( v17 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  for ( i = *v4; i != (__int64 *)a1; i = (__int64 *)*i )
  {
    LOBYTE(v6) = 1;
    sub_140764C94(*(_QWORD *)(*(_QWORD *)(i[2] + 312) + 40LL), v6);
    ObfDereferenceObject((PVOID)i[2]);
    i[2] = 0LL;
  }
  return v4 != *(__int64 ***)(a1 + 8);
}
