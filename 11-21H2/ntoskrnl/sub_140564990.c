/*
 * XREFs of sub_140564990 @ 0x140564990
 * Callers:
 *     sub_140564C24 @ 0x140564C24 (sub_140564C24.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

bool __fastcall sub_140564990(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rdx
  __int64 **v4; // rsi
  unsigned __int64 v5; // rbx
  __int64 *v6; // rcx
  __int64 **v7; // rax
  __int64 *v8; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v11; // r9
  int v12; // eax
  bool v13; // zf
  __int64 *i; // rbx

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140C44A50);
  v3 = qword_140C44A40;
  v4 = *(__int64 ***)(a1 + 8);
  v5 = v2;
  if ( (__int64 *)qword_140C44A40 != &qword_140C44A40 )
  {
    do
    {
      v6 = *(__int64 **)v3;
      if ( *(_BYTE *)(v3 + 28) )
        break;
      if ( *(_DWORD *)(v3 + 24) == 6 && *(_BYTE *)(v3 + 32) )
      {
        v7 = *(__int64 ***)(v3 + 8);
        if ( v6[1] != v3
          || *v7 != (__int64 *)v3
          || (*v7 = v6, v6[1] = (__int64)v7, v8 = *(__int64 **)(a1 + 8), *v8 != a1) )
        {
          __fastfail(3u);
        }
        *(_QWORD *)v3 = a1;
        *(_QWORD *)(v3 + 8) = v8;
        *v8 = v3;
        *(_QWORD *)(a1 + 8) = v3;
      }
      v3 = (__int64)v6;
    }
    while ( v6 != &qword_140C44A40 );
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
        v11 = *((_QWORD *)CurrentPrcb + 4375);
        v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
        *(_DWORD *)(v11 + 20) &= v12;
        if ( v13 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  for ( i = *v4; i != (__int64 *)a1; i = (__int64 *)*i )
  {
    ObfDereferenceObject((PVOID)i[2]);
    i[2] = 0LL;
  }
  return v4 != *(__int64 ***)(a1 + 8);
}
