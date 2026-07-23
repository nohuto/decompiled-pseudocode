/*
 * XREFs of sub_140355534 @ 0x140355534
 * Callers:
 *     PoFxCompleteIdleCondition @ 0x14024E680 (PoFxCompleteIdleCondition.c)
 *     sub_140355424 @ 0x140355424 (sub_140355424.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140354CBC @ 0x140354CBC (sub_140354CBC.c)
 *     sub_140355144 @ 0x140355144 (sub_140355144.c)
 *     sub_140355350 @ 0x140355350 (sub_140355350.c)
 *     sub_1403556F4 @ 0x1403556F4 (sub_1403556F4.c)
 *     sub_140355774 @ 0x140355774 (sub_140355774.c)
 *     sub_1403559B0 @ 0x1403559B0 (sub_1403559B0.c)
 *     sub_1403559E4 @ 0x1403559E4 (sub_1403559E4.c)
 *     sub_140355D70 @ 0x140355D70 (sub_140355D70.c)
 *     sub_140356350 @ 0x140356350 (sub_140356350.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140355534(_QWORD *BugCheckParameter2, unsigned int a2, int *a3)
{
  __int64 v6; // rbx
  __int64 v7; // r12
  unsigned __int64 v8; // rbp
  char v9; // r9
  __int64 v10; // r8
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  __int64 v13; // r8
  __int64 result; // rax
  unsigned __int64 v15; // rbp
  __int64 v16; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v19; // r9
  int v20; // eax
  bool v21; // zf
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r9
  int v24; // eax

  v6 = *(_QWORD *)(BugCheckParameter2[104] + 8LL * a2);
  v7 = MEMORY[0xFFFFF78000000008];
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 200));
  if ( *(int *)(v6 + 216) > 0 )
  {
    sub_1403559E4(v6 + 200, v7, 0LL, 0LL);
    *(_BYTE *)(v6 + 208) = v9;
  }
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v6 + 200));
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v19 = *((_QWORD *)CurrentPrcb + 4375);
        v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v21 = (v20 & *(_DWORD *)(v19 + 20)) == 0;
        *(_DWORD *)(v19 + 20) &= v20;
        if ( v21 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v8);
  sub_1403556F4(BugCheckParameter2[6], a2, 0LL);
  sub_1403559B0(BugCheckParameter2 + 63, v7, 0LL);
  _m_prefetchw((const void *)(v6 + 88));
  v11 = *(_DWORD *)(v6 + 88);
  do
  {
    v12 = v11;
    v11 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 88), v11, v11);
  }
  while ( v12 != v11 );
  if ( v11 == 0x40000000 )
  {
    if ( (unsigned __int8)sub_140356350(BugCheckParameter2, a2, v10, a3) == 1 )
      sub_140354CBC(0LL, a3, v13);
    sub_140355D70(v6);
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(v6 + 88), 0, 0x40000000);
    if ( (_DWORD)result != 0x40000000 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 88));
      _InterlockedAnd((volatile signed __int32 *)(v6 + 88), 0xBFFFFFFF);
      return sub_140355144((ULONG_PTR)BugCheckParameter2, v6, 0, 0LL);
    }
  }
  else
  {
    sub_140355350((ULONG_PTR)BugCheckParameter2);
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 88));
    _InterlockedAnd((volatile signed __int32 *)(v6 + 88), 0xBFFFFFFF);
    v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 200));
    if ( *(int *)(v6 + 216) > 0 )
    {
      *(_QWORD *)(v6 + 224) = v7;
      *(_BYTE *)(v6 + 208) = 1;
    }
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v6 + 200));
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v22 = KeGetCurrentIrql();
        if ( v22 <= 0xFu && (unsigned __int8)v15 <= 0xFu && v22 >= 2u )
        {
          v23 = KeGetCurrentPrcb();
          v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
          v16 = *((_QWORD *)v23 + 4375);
          v21 = (v24 & *(_DWORD *)(v16 + 20)) == 0;
          *(_DWORD *)(v16 + 20) &= v24;
          if ( v21 )
            sub_140418E4C(v23);
        }
      }
    }
    __writecr8(v15);
    LOBYTE(v16) = 1;
    sub_1403556F4(BugCheckParameter2[6], a2, v16);
    if ( BugCheckParameter2[14] )
      sub_14042A5E0(BugCheckParameter2[24], a2);
    return sub_140355774((ULONG_PTR)BugCheckParameter2);
  }
  return result;
}
