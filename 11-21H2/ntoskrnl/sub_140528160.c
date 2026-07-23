/*
 * XREFs of sub_140528160 @ 0x140528160
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_1403B1B5C @ 0x1403B1B5C (sub_1403B1B5C.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14051B4F4 @ 0x14051B4F4 (sub_14051B4F4.c)
 *     sub_140908DD4 @ 0x140908DD4 (sub_140908DD4.c)
 */

__int64 __fastcall sub_140528160(ULONG_PTR a1, __int64 a2, int a3)
{
  char v3; // r13
  __int32 v4; // ebp
  __int64 v5; // rsi
  __int64 v7; // rdi
  unsigned __int8 CurrentIrql; // bl
  __int64 v10; // r9
  __int64 v11; // rax
  unsigned __int8 v12; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v14; // r8
  int v15; // eax
  bool v16; // zf
  int v17; // ebx
  __int64 v18; // rdx
  __int64 *v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx

  v3 = 0;
  v4 = 0;
  v5 = 0LL;
  v7 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v10 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v10 + 20) |= (-1 << (CurrentIrql + 1)) & 0x1FFC;
  }
  KeAcquireSpinLockAtDpcLevel(&qword_140C4A110);
  v11 = qword_140C4A100;
  if ( (__int64 *)qword_140C4A100 != &qword_140C4A100 )
  {
    while ( 1 )
    {
      v5 = v11;
      if ( *(_QWORD *)(v11 + 40) == a1 && *(_QWORD *)(v11 + 16) == a2 && *(_DWORD *)(v11 + 24) == a3 )
        break;
      v11 = *(_QWORD *)v11;
      if ( (__int64 *)v11 == &qword_140C4A100 )
        goto LABEL_10;
    }
    v7 = *(_QWORD *)(v11 + 32);
    v3 = 1;
    v4 = _InterlockedExchange((volatile __int32 *)(v7 + 16), 1);
    v18 = *(_QWORD *)v11;
    v19 = *(__int64 **)(v11 + 8);
    if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) != v11 || *v19 != v11 )
      __fastfail(3u);
    *v19 = v18;
    *(_QWORD *)(v18 + 8) = v19;
  }
LABEL_10:
  KeReleaseSpinLockFromDpcLevel(&qword_140C4A110);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v12 = KeGetCurrentIrql();
      if ( v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v14 = *((_QWORD *)CurrentPrcb + 4375);
        v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v16 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
        *(_DWORD *)(v14 + 20) &= v15;
        if ( v16 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( v3 )
  {
    v17 = sub_14051B4F4(v7, a1);
    if ( v17 >= 0 )
    {
      if ( v4 != 2 )
        v17 = sub_140908DD4(v7);
      sub_1403B1B5C(v20, *(_QWORD *)(v5 + 48));
      sub_1403B1B5C(v21, v5);
    }
  }
  else
  {
    return (unsigned int)-1073741584;
  }
  return (unsigned int)v17;
}
