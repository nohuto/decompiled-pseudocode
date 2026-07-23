/*
 * XREFs of sub_14056205C @ 0x14056205C
 * Callers:
 *     sub_14065F5D4 @ 0x14065F5D4 (sub_14065F5D4.c)
 *     sub_1407793D0 @ 0x1407793D0 (sub_1407793D0.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_1402500D4 @ 0x1402500D4 (sub_1402500D4.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1402DDABC @ 0x1402DDABC (sub_1402DDABC.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14056205C(volatile signed __int32 *a1)
{
  unsigned __int8 v2; // si
  unsigned __int64 v3; // rbp
  __int64 v4; // rdx
  volatile signed __int32 **v5; // rcx
  __int64 v6; // r15
  KIRQL v7; // al
  bool v8; // zf
  unsigned __int64 v9; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v12; // r9
  int v13; // eax
  unsigned __int64 v14; // rdi
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r10
  __int64 v17; // r9
  int v18; // eax
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r9
  int v21; // eax
  __int64 v22; // r8
  void *v23; // rcx

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140C44A50);
  if ( !*((_BYTE *)a1 + 76) )
  {
    v4 = *(_QWORD *)a1;
    v5 = (volatile signed __int32 **)*((_QWORD *)a1 + 1);
    if ( *(volatile signed __int32 **)(*(_QWORD *)a1 + 8LL) != a1 || *v5 != a1 )
      __fastfail(3u);
    *v5 = (volatile signed __int32 *)v4;
    v2 = 1;
    *(_QWORD *)(v4 + 8) = v5;
    v6 = *((unsigned int *)a1 + 6);
    v7 = KeAcquireSpinLockRaiseToDpc(&qword_140C24268);
    v8 = dword_140C24270-- == 1;
    v9 = v7;
    if ( v8 )
      sub_1402500D4(4);
    KeReleaseSpinLockFromDpcLevel(&qword_140C24268);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v12 = *((_QWORD *)CurrentPrcb + 4375);
          v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v8 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
          *(_DWORD *)(v12 + 20) &= v13;
          if ( v8 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v9);
    v14 = KeAcquireSpinLockRaiseToDpc(&qword_140C1CB90);
    if ( !--dword_140C1CB98 && byte_140C1CC10 )
    {
      qword_140C1CC18 += MEMORY[0xFFFFF78000000008] - qword_140C1CC20;
      qword_140C1CC20 = 0LL;
    }
    --dword_140C1CBA0[v6];
    KeReleaseSpinLockFromDpcLevel(&qword_140C1CB90);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v15 = KeGetCurrentIrql();
        if ( v15 <= 0xFu && (unsigned __int8)v14 <= 0xFu && v15 >= 2u )
        {
          v16 = KeGetCurrentPrcb();
          v17 = *((_QWORD *)v16 + 4375);
          v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
          v8 = (v18 & *(_DWORD *)(v17 + 20)) == 0;
          *(_DWORD *)(v17 + 20) &= v18;
          if ( v8 )
            sub_140418E4C((__int64)v16);
        }
      }
    }
    __writecr8(v14);
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C44A50);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v19 = KeGetCurrentIrql();
      if ( v19 <= 0xFu && (unsigned __int8)v3 <= 0xFu && v19 >= 2u )
      {
        v20 = KeGetCurrentPrcb();
        v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v22 = *((_QWORD *)v20 + 4375);
        v8 = (v21 & *(_DWORD *)(v22 + 20)) == 0;
        *(_DWORD *)(v22 + 20) &= v21;
        if ( v8 )
          sub_140418E4C((__int64)v20);
      }
    }
  }
  __writecr8(v3);
  if ( v2 )
  {
    v23 = (void *)*((_QWORD *)a1 + 2);
    if ( v23 )
      ObfDereferenceObjectWithTag(v23, 0x746C6644u);
    sub_1402DDABC(a1);
  }
  return v2;
}
