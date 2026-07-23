/*
 * XREFs of sub_140A7141C @ 0x140A7141C
 * Callers:
 *     sub_140A70470 @ 0x140A70470 (sub_140A70470.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall sub_140A7141C(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbx
  __int64 *v4; // rax
  __int64 *v5; // rax
  char result; // al
  __int64 *v7; // rcx
  unsigned __int8 v8; // al
  struct _KPRCB *v9; // r9
  __int64 v10; // r8
  int v11; // eax
  bool v12; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v15; // r9
  int v16; // edx

  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140D00AD0);
  v4 = (__int64 *)qword_140C404D0;
  do
  {
    if ( v4 == &qword_140C404D0 )
    {
      *(_DWORD *)(a2 + 16) = 1195525195;
      *(_DWORD *)(a2 + 20) = 896;
      v5 = (__int64 *)qword_140C404D8;
      if ( *(__int64 **)qword_140C404D8 != &qword_140C404D0 )
        __fastfail(3u);
      *(_QWORD *)a2 = &qword_140C404D0;
      *(_QWORD *)(a2 + 8) = v5;
      *v5 = a2;
      qword_140C404D8 = a2;
      KeReleaseSpinLockFromDpcLevel(&qword_140D00AD0);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v15 = *((_QWORD *)CurrentPrcb + 4375);
            v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
            v12 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
            *(_DWORD *)(v15 + 20) &= v16;
            if ( v12 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      result = 1;
      goto LABEL_6;
    }
    v7 = v4;
    v4 = (__int64 *)*v4;
  }
  while ( v7 != (__int64 *)a2 && *((_DWORD *)v7 + 4) != 1195525195 );
  KeReleaseSpinLockFromDpcLevel(&qword_140D00AD0);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v8 = KeGetCurrentIrql();
      if ( v8 <= 0xFu && (unsigned __int8)v3 <= 0xFu && v8 >= 2u )
      {
        v9 = KeGetCurrentPrcb();
        v10 = *((_QWORD *)v9 + 4375);
        v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v12 = (v11 & *(_DWORD *)(v10 + 20)) == 0;
        *(_DWORD *)(v10 + 20) &= v11;
        if ( v12 )
          sub_140418E4C((__int64)v9);
      }
    }
  }
  result = 0;
LABEL_6:
  __writecr8(v3);
  return result;
}
