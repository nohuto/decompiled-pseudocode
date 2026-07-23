/*
 * XREFs of sub_140A86C30 @ 0x140A86C30
 * Callers:
 *     <none>
 * Callees:
 *     sub_140203D88 @ 0x140203D88 (sub_140203D88.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A839B8 @ 0x140A839B8 (sub_140A839B8.c)
 *     sub_140A83B84 @ 0x140A83B84 (sub_140A83B84.c)
 *     sub_140A83CA4 @ 0x140A83CA4 (sub_140A83CA4.c)
 *     sub_140A87EFC @ 0x140A87EFC (sub_140A87EFC.c)
 *     sub_140A880B0 @ 0x140A880B0 (sub_140A880B0.c)
 *     sub_140A88430 @ 0x140A88430 (sub_140A88430.c)
 *     sub_140A88738 @ 0x140A88738 (sub_140A88738.c)
 */

void __fastcall sub_140A86C30(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // rbp
  _SLIST_ENTRY **v7; // rdi
  KIRQL v8; // al
  _SLIST_ENTRY *v9; // rbx
  unsigned __int64 v10; // rsi
  _SLIST_ENTRY *v11; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v14; // r8
  int v15; // eax
  bool v16; // zf
  int v17; // edi
  __int64 v18; // r8
  _SLIST_ENTRY *Next; // rdx
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r10
  __int64 v22; // r8
  int v23; // eax
  _SLIST_ENTRY *v24; // rax
  __int64 v25; // r8

  sub_140A88738(a1);
  v6 = sub_140A88430(a1);
  if ( !v6 || (sub_140A83CA4(2u), v7 = (_SLIST_ENTRY **)(v6 + 56), *v7 == (_SLIST_ENTRY *)v7) )
  {
LABEL_15:
    sub_14042A5E0(a1, a2);
    if ( v6 )
      sub_140A839B8(v6);
  }
  else
  {
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 72));
    v9 = *v7;
    v10 = v8;
    while ( 1 )
    {
      v11 = (_SLIST_ENTRY *)((char *)v9 - 72);
      if ( v7 == &v11[4].Next + 1 )
      {
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v6 + 72));
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v14 = *((_QWORD *)CurrentPrcb + 4375);
              v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
              v16 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
              *(_DWORD *)(v14 + 20) &= v15;
              if ( v16 )
                sub_140418E4C((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v10);
        goto LABEL_15;
      }
      if ( v11[4].Next == (_SLIST_ENTRY *)a2 )
        break;
      v9 = (_SLIST_ENTRY *)*((_QWORD *)&v11[4].Next + 1);
    }
    v17 = *(_DWORD *)a2;
    v18 = *((_QWORD *)&v11[4].Next + 1);
    Next = v11[5].Next;
    if ( *(_SLIST_ENTRY **)(v18 + 8) != (_SLIST_ENTRY *)(&v11[4].Next + 1)
      || Next->Next != (_SLIST_ENTRY *)(&v11[4].Next + 1) )
    {
      __fastfail(3u);
    }
    Next->Next = (_SLIST_ENTRY *)v18;
    *(_QWORD *)(v18 + 8) = Next;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v6 + 72));
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v20 = KeGetCurrentIrql();
        if ( v20 <= 0xFu && (unsigned __int8)v10 <= 0xFu && v20 >= 2u )
        {
          v21 = KeGetCurrentPrcb();
          v22 = *((_QWORD *)v21 + 4375);
          v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
          v16 = (v23 & *(_DWORD *)(v22 + 20)) == 0;
          *(_DWORD *)(v22 + 20) &= v23;
          if ( v16 )
            sub_140418E4C((__int64)v21);
        }
      }
    }
    __writecr8(v10);
    v24 = v11[6].Next;
    if ( *(_QWORD *)(a2 + 8) == -559026163LL && v24 )
      *(_QWORD *)(a2 + 8) = v24[3].Next;
    sub_14042A5E0(a1, a2);
    sub_140A83B84(v6, v17);
    sub_140A839B8(v6);
    sub_140A87EFC((int)v11[6].Next, a3);
    sub_140A880B0(v6);
    sub_140203D88((__int64)&unk_140D58A80, v11, v25);
  }
}
