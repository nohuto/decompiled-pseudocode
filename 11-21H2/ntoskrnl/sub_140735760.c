/*
 * XREFs of sub_140735760 @ 0x140735760
 * Callers:
 *     sub_14065A1F0 @ 0x14065A1F0 (sub_14065A1F0.c)
 *     sub_14067CE4C @ 0x14067CE4C (sub_14067CE4C.c)
 *     sub_14067DE90 @ 0x14067DE90 (sub_14067DE90.c)
 *     sub_14067FF60 @ 0x14067FF60 (sub_14067FF60.c)
 *     sub_1406A1370 @ 0x1406A1370 (sub_1406A1370.c)
 *     sub_1406A5C00 @ 0x1406A5C00 (sub_1406A5C00.c)
 *     sub_140713980 @ 0x140713980 (sub_140713980.c)
 *     sub_140714980 @ 0x140714980 (sub_140714980.c)
 *     sub_14071FAA0 @ 0x14071FAA0 (sub_14071FAA0.c)
 *     sub_140721010 @ 0x140721010 (sub_140721010.c)
 *     sub_1407333B0 @ 0x1407333B0 (sub_1407333B0.c)
 *     sub_1407349A0 @ 0x1407349A0 (sub_1407349A0.c)
 *     sub_1407C04B4 @ 0x1407C04B4 (sub_1407C04B4.c)
 *     sub_1407C0568 @ 0x1407C0568 (sub_1407C0568.c)
 *     sub_1407C1130 @ 0x1407C1130 (sub_1407C1130.c)
 *     sub_1407C2680 @ 0x1407C2680 (sub_1407C2680.c)
 *     sub_1407C9930 @ 0x1407C9930 (sub_1407C9930.c)
 *     sub_14090F3F0 @ 0x14090F3F0 (sub_14090F3F0.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1403765BC @ 0x1403765BC (sub_1403765BC.c)
 *     ExfUnblockPushLock @ 0x14041AC40 (ExfUnblockPushLock.c)
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140735E30 @ 0x140735E30 (sub_140735E30.c)
 *     sub_1409100F4 @ 0x1409100F4 (sub_1409100F4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140735760(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        char a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7)
{
  char v7; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rcx
  __int64 *v12; // r12
  struct _KTHREAD *v13; // rax
  _SLIST_ENTRY *v14; // r13
  _SLIST_ENTRY *PoolWithTag; // rsi
  struct _KTHREAD *v16; // rdx
  _SLIST_ENTRY **v17; // rax
  int v18; // ecx
  _SLIST_ENTRY *Next; // rcx
  _SLIST_ENTRY **v20; // rax
  _QWORD *v21; // rax
  int v22; // esi
  __int128 *v23; // r12
  _SLIST_ENTRY *v25; // rbx
  _SLIST_ENTRY **v26; // rax
  _SLIST_ENTRY *v27; // rsi
  _QWORD *v28; // rax
  unsigned int v29; // ecx
  struct _KTHREAD *v30; // rax
  __int64 v31; // rcx
  int v32; // eax
  signed __int32 v33[8]; // [rsp+0h] [rbp-108h] BYREF
  char v34; // [rsp+20h] [rbp-E8h]
  char v35; // [rsp+21h] [rbp-E7h]
  int v36; // [rsp+24h] [rbp-E4h]
  _SLIST_ENTRY *v37; // [rsp+30h] [rbp-D8h]
  __int128 *v38; // [rsp+38h] [rbp-D0h]
  __int64 *v39; // [rsp+40h] [rbp-C8h]
  __int128 *v40; // [rsp+48h] [rbp-C0h]
  struct _KTHREAD *v41; // [rsp+50h] [rbp-B8h]
  _SLIST_ENTRY *v42; // [rsp+58h] [rbp-B0h]
  __int128 v43; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v44; // [rsp+70h] [rbp-98h]
  __int128 v45; // [rsp+80h] [rbp-88h]
  __int64 v46; // [rsp+90h] [rbp-78h]
  __int64 v47; // [rsp+98h] [rbp-70h]
  __int64 v48; // [rsp+A0h] [rbp-68h]
  __int128 v49; // [rsp+A8h] [rbp-60h] BYREF

  v7 = a4;
  v42 = (_SLIST_ENTRY *)a3;
  v48 = a2;
  v47 = a6;
  v36 = 0;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v49 = 0LL;
  v38 = 0LL;
  v40 = 0LL;
  v34 = 0;
  CurrentThread = KeGetCurrentThread();
  v41 = CurrentThread;
  if ( a4 == 1 )
  {
    v11 = *((_QWORD *)CurrentThread + 189);
    if ( v11 )
      v12 = *(__int64 **)(v11 + 8);
    else
      v12 = &qword_140C497F0;
    v13 = KeGetCurrentThread();
    --*((_WORD *)v13 + 242);
    ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C497E0, 0LL);
    v14 = (_SLIST_ENTRY *)a7;
    while ( 1 )
    {
      do
      {
        v12 = (__int64 *)*v12;
        v39 = v12;
        v35 = 1;
        if ( v12 == &qword_140C497F0 )
          goto LABEL_24;
      }
      while ( *((int *)v12 + 4) < 0 );
      _InterlockedIncrement((volatile signed __int32 *)v12 + 4);
      ExReleasePushLockEx((ULONG_PTR)&qword_140C497E0, 0LL);
      KeLeaveCriticalRegion();
      v35 = 0;
      PoolWithTag = ExpInterlockedPopEntrySList(&stru_140CE23D0);
      if ( !PoolWithTag )
        PoolWithTag = (_SLIST_ENTRY *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x69634D43u);
      v37 = PoolWithTag;
      if ( !PoolWithTag )
        break;
      *((_QWORD *)&PoolWithTag[1].Next + 1) = v12;
      PoolWithTag[2].Next = 0LL;
      v16 = v41;
      PoolWithTag[1].Next = (_SLIST_ENTRY *)*((_QWORD *)v41 + 189);
      *((_QWORD *)v16 + 189) = PoolWithTag + 1;
      v17 = *(_SLIST_ENTRY ***)(a7 + 8);
      if ( *v17 != (_SLIST_ENTRY *)a7 )
        goto LABEL_85;
      PoolWithTag->Next = (_SLIST_ENTRY *)a7;
      *((_QWORD *)&PoolWithTag->Next + 1) = v17;
      *v17 = PoolWithTag;
      *(_QWORD *)(a7 + 8) = PoolWithTag;
      sub_140735E30(a1, a2, v12 + 3);
      v18 = sub_14042A5E0(v12[4], (int)a1);
      v36 = v18;
      if ( a1 == 14 )
      {
        v36 = 0;
      }
      else if ( v18 < 0 )
      {
        Next = PoolWithTag->Next;
        v20 = (_SLIST_ENTRY **)*((_QWORD *)&PoolWithTag->Next + 1);
        if ( *(&PoolWithTag->Next->Next + 1) != PoolWithTag || *v20 != PoolWithTag )
LABEL_85:
          __fastfail(3u);
        *v20 = Next;
        *((_QWORD *)&Next->Next + 1) = v20;
        v21 = (_QWORD *)*((_QWORD *)v41 + 189);
        if ( v21 )
          *((_QWORD *)v41 + 189) = *v21;
        sub_1403765BC(PoolWithTag);
        if ( _InterlockedDecrement((volatile signed __int32 *)v12 + 4) == 0x80000000 )
        {
          _InterlockedOr(v33, 0);
          if ( qword_140C49800 )
            ExfUnblockPushLock(&qword_140C49800, 0LL);
        }
        v7 = 0;
        v34 = 1;
LABEL_24:
        v22 = v36;
        goto LABEL_25;
      }
      switch ( a1 )
      {
        case 0x1Cu:
LABEL_50:
          PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 80);
          *(_QWORD *)(a2 + 80) = 0LL;
          break;
        case 7u:
LABEL_48:
          PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 40);
          *(_QWORD *)(a2 + 40) = 0LL;
          break;
        case 8u:
LABEL_51:
          PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 48);
          *(_QWORD *)(a2 + 48) = 0LL;
          break;
        case 0xEu:
LABEL_17:
          PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 8);
          *(_QWORD *)(a2 + 8) = 0LL;
          break;
        default:
          switch ( a1 )
          {
            case 0u:
            case 0x1Eu:
              goto LABEL_17;
            case 1u:
            case 5u:
            case 6u:
              goto LABEL_48;
            case 2u:
            case 4u:
            case 0x22u:
              PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 16);
              *(_QWORD *)(a2 + 16) = 0LL;
              break;
            case 3u:
            case 0x24u:
            case 0x2Fu:
            case 0x31u:
              PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 32);
              *(_QWORD *)(a2 + 32) = 0LL;
              break;
            case 9u:
              goto LABEL_51;
            case 0xFu:
            case 0x10u:
            case 0x11u:
            case 0x12u:
            case 0x13u:
            case 0x14u:
            case 0x15u:
            case 0x16u:
            case 0x17u:
            case 0x18u:
            case 0x19u:
            case 0x1Bu:
            case 0x1Du:
            case 0x1Fu:
            case 0x21u:
            case 0x23u:
            case 0x25u:
            case 0x27u:
            case 0x2Au:
            case 0x2Cu:
            case 0x2Eu:
            case 0x30u:
            case 0x32u:
              *(_QWORD *)(a2 + 32) = PoolWithTag[2].Next;
              break;
            case 0x1Au:
              goto LABEL_50;
            case 0x20u:
              PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 64);
              *(_QWORD *)(a2 + 64) = 0LL;
              break;
            case 0x26u:
            case 0x29u:
            case 0x2Bu:
            case 0x2Du:
              PoolWithTag[2].Next = *(_SLIST_ENTRY **)(a2 + 24);
              *(_QWORD *)(a2 + 24) = 0LL;
              break;
            default:
              goto LABEL_49;
          }
          break;
      }
LABEL_49:
      v30 = KeGetCurrentThread();
      --*((_WORD *)v30 + 242);
      ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C497E0, 0LL);
    }
    if ( _InterlockedDecrement((volatile signed __int32 *)v12 + 4) == 0x80000000 )
    {
      _InterlockedOr(v33, 0);
      if ( qword_140C49800 )
        ExfUnblockPushLock(&qword_140C49800, 0LL);
    }
    v22 = -1073741670;
    v36 = -1073741670;
    v34 = 1;
    v7 = 0;
LABEL_25:
    if ( v35 )
    {
      ExReleasePushLockEx((ULONG_PTR)&qword_140C497E0, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v14 = (_SLIST_ENTRY *)a7;
    v22 = v36;
  }
  if ( v7 )
  {
    v23 = v38;
  }
  else
  {
    if ( v34 == 1 )
    {
      v43 = 0LL;
      v44 = 0LL;
      v45 = 0LL;
      v46 = 0LL;
      v23 = &v43;
      v38 = &v43;
      if ( ((a5 - 27) & 0xFFFFFFFD) != 0 )
      {
        *(_QWORD *)&v43 = v47;
      }
      else
      {
        if ( v22 == -1073740541 )
          v31 = **(_QWORD **)(a2 + 72);
        else
          v31 = 0LL;
        *(_QWORD *)&v43 = v31;
      }
      if ( v22 == -1073740541 )
      {
        if ( ((a1 - 26) & 0xFFFFFFFD) != 0 )
          v32 = 0;
        else
          v32 = *(_DWORD *)(a3 + 12);
        DWORD2(v43) = v32;
      }
      else
      {
        DWORD2(v43) = v22;
        v32 = v22;
      }
      DWORD2(v44) = v32;
      *(_QWORD *)&v44 = v48;
      a1 = a5;
      if ( a3 )
      {
        v40 = &v49;
        *(_QWORD *)&v49 = &v43;
        *((_QWORD *)&v49 + 1) = v42;
      }
    }
    else
    {
      v23 = (__int128 *)a2;
      v38 = (__int128 *)a2;
      v40 = (__int128 *)a3;
    }
    while ( v14->Next != v14 )
    {
      v25 = (_SLIST_ENTRY *)*((_QWORD *)&v14->Next + 1);
      v42 = v25;
      v26 = (_SLIST_ENTRY **)*((_QWORD *)&v25->Next + 1);
      if ( v25->Next != v14 || *v26 != v25 )
        goto LABEL_85;
      *((_QWORD *)&v14->Next + 1) = v26;
      *v26 = v14;
      v37 = (_SLIST_ENTRY *)*((_QWORD *)&v25[1].Next + 1);
      v27 = v37;
      *((_QWORD *)v23 + 4) = v25[2].Next;
      sub_140735E30(a1, v23, &v27[1].Next + 1);
      v36 = sub_14042A5E0(v27[2].Next, (int)a1);
      v28 = (_QWORD *)*((_QWORD *)v41 + 189);
      if ( v28 )
        *((_QWORD *)v41 + 189) = *v28;
      v29 = dword_140C54CA8 * dword_140D06884;
      if ( (unsigned int)(dword_140C54CA8 * dword_140D06884) > 0x40 )
        v29 = 64;
      if ( LOWORD(stru_140CE23D0.Alignment) >= v29 )
        ExFreePoolWithTag(v25, 0);
      else
        ExpInterlockedPushEntrySList(&stru_140CE23D0, v25);
      if ( _InterlockedDecrement((volatile signed __int32 *)&v27[1]) == 0x80000000 )
      {
        _InterlockedOr(v33, 0);
        if ( qword_140C49800 )
          ExfUnblockPushLock(&qword_140C49800, 0LL);
      }
      if ( v36 == -1073740541 )
        *((_DWORD *)v23 + 2) = *((_DWORD *)v23 + 6);
      v22 = 0;
      v36 = 0;
    }
  }
  if ( v34 == 1 )
  {
    if ( v23 )
    {
      v22 = *((_DWORD *)v23 + 6);
      if ( v22 >= 0 )
        return (unsigned int)-1073740541;
    }
  }
  return (unsigned int)v22;
}
