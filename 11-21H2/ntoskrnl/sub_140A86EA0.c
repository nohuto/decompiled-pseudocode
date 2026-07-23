/*
 * XREFs of sub_140A86EA0 @ 0x140A86EA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140203D88 @ 0x140203D88 (sub_140203D88.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405FDF9C @ 0x1405FDF9C (sub_1405FDF9C.c)
 *     sub_1405FE78C @ 0x1405FE78C (sub_1405FE78C.c)
 *     sub_140A83888 @ 0x140A83888 (sub_140A83888.c)
 *     sub_140A83B84 @ 0x140A83B84 (sub_140A83B84.c)
 *     sub_140A880B0 @ 0x140A880B0 (sub_140A880B0.c)
 */

__int64 __fastcall sub_140A86EA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v6; // rsi
  __int64 v9; // rax
  unsigned int v10; // esi
  _DWORD *v12; // rdx
  KSPIN_LOCK *v13; // rbp
  unsigned __int64 v14; // rbx
  __int64 v15; // r8
  _QWORD *v16; // rax
  __int64 v17; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v20; // eax
  bool v21; // zf

  v4 = *(_QWORD *)(a4 + 56);
  v6 = a3;
  if ( v4 )
  {
    if ( *(_DWORD *)(v4 + 192) < 3u )
    {
      v9 = *(_QWORD *)(a4 + 96);
      if ( v9 && *(_DWORD *)v9 == -1393569779 )
      {
        *(_QWORD *)(v9 + 48) = a3;
        v6 = *(_QWORD *)(a4 + 96);
      }
      else if ( !a3 )
      {
        v6 = -559026163LL;
      }
    }
    if ( *(_BYTE *)(v4 + 196) )
      sub_140A83888(v4);
  }
  *(_QWORD *)(a4 + 88) = v6;
  v10 = sub_14042A5E0(a1, a2);
  if ( !v4 || !sub_1405FE78C(v4, a4) )
    return v10;
  *(_DWORD *)(a4 + 52) = v10;
  if ( v10 != 1 )
  {
    if ( !*(_BYTE *)(v4 + 196) )
      sub_140A83888(v4);
    if ( v10 == 3 )
      return 3LL;
    sub_140A83B84(v4, *(_DWORD *)(a4 + 48));
    v12 = *(_DWORD **)(a4 + 96);
    if ( v12 && *v12 == -1393569779 )
    {
      sub_140A880B0(v4);
      *(_QWORD *)(a4 + 96) = 0LL;
    }
    v13 = (KSPIN_LOCK *)(v4 + 144);
    v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 144));
    v15 = *(_QWORD *)(a4 + 72);
    v16 = *(_QWORD **)(a4 + 80);
    if ( *(_QWORD *)(v15 + 8) != a4 + 72 || *v16 != a4 + 72 )
      __fastfail(3u);
    *v16 = v15;
    *(_QWORD *)(v15 + 8) = v16;
    KeReleaseSpinLockFromDpcLevel(v13);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v14 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v17 = *((_QWORD *)CurrentPrcb + 4375);
          v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
          v21 = (v20 & *(_DWORD *)(v17 + 20)) == 0;
          *(_DWORD *)(v17 + 20) &= v20;
          if ( v21 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v14);
    sub_140203D88((__int64)&unk_140D58A80, (_SLIST_ENTRY *)a4, v17);
    return v10;
  }
  if ( *(_BYTE *)(v4 + 196) )
  {
    _InterlockedAdd((volatile signed __int32 *)(v4 + 184), 0xFFFFFFFF);
    sub_1405FDF9C("Driver at address %p has a problem\n", *(const void **)(v4 + 40));
    sub_1405FDF9C("Master devices should return DeallocateObjectKeepRegisters\n");
  }
  *(_DWORD *)(v4 + 256) = *(_DWORD *)(a4 + 48);
  return 1LL;
}
