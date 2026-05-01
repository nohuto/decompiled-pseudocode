/*
 * XREFs of ?RmpActivatorSubscribeForNotifications@@YAJPEAU_RM_ACTIVATOR@@PEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x18002B380
 * Callers:
 *     ?RmSrvHostNotificationSubscribe@@YAJPEAU_RM_ACTIVATOR@@_KPEA_K@Z @ 0x18002AF94 (-RmSrvHostNotificationSubscribe@@YAJPEAU_RM_ACTIVATOR@@_KPEA_K@Z.c)
 * Callees:
 *     ?HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z @ 0x180009DAC (-HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z.c)
 *     ?RmpHostSubscriptionCompareForRtlTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x18003B6BC (-RmpHostSubscriptionCompareForRtlTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 */

__int64 __fastcall RmpActivatorSubscribeForNotifications(
        struct _RM_ACTIVATOR *a1,
        struct _RM_ACTIVITY_HOST *a2,
        unsigned __int64 *a3)
{
  unsigned int v6; // edi
  unsigned __int64 *Heap; // rsi
  __int64 v8; // rbx
  __int64 v9; // r8
  _QWORD *v10; // rax
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rbx
  int v15; // ebp
  unsigned __int64 v16; // rax

  v6 = 0;
  Heap = (unsigned __int64 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x40uLL);
  if ( Heap )
  {
    v8 = HamObjectIdGenerate(4);
    memset_0(Heap, 0, 0x40uLL);
    *Heap = v8;
    Heap[7] = (unsigned __int64)a1;
    if ( _InterlockedIncrement64((volatile signed __int64 *)a2 + 2) <= 1 )
      __fastfail(0xEu);
    Heap[5] = -1LL;
    v10 = (_QWORD *)((char *)a2 + 1424);
    Heap[6] = (unsigned __int64)a2;
    v11 = Heap + 1;
    v12 = *((_QWORD *)a2 + 178);
    if ( *(struct _RM_ACTIVITY_HOST **)(v12 + 8) != (struct _RM_ACTIVITY_HOST *)((char *)a2 + 1424) )
      __fastfail(3u);
    *v11 = v12;
    v13 = (unsigned __int64)a1 + 40;
    Heap[2] = (unsigned __int64)v10;
    *(_QWORD *)(v12 + 8) = v11;
    *v10 = v11;
    v14 = *(_QWORD *)v13;
    if ( (*(_BYTE *)(v13 + 8) & 1) != 0 )
    {
      if ( v14 )
        v14 ^= v13;
      else
        v14 = 0LL;
    }
    LOBYTE(v9) = 0;
    v15 = *(_BYTE *)(v13 + 8) & 1;
    if ( v14 )
    {
      while ( 1 )
      {
        if ( (int)RmpHostSubscriptionCompareForRtlTree(Heap, (struct _RTL_BALANCED_NODE *)v14) < 0 )
        {
          v16 = *(_QWORD *)v14;
          if ( v15 )
          {
            if ( !v16 )
              goto LABEL_19;
            v16 ^= v14;
          }
          if ( !v16 )
          {
LABEL_19:
            LOBYTE(v9) = 0;
            break;
          }
        }
        else
        {
          v16 = *(_QWORD *)(v14 + 8);
          if ( v15 )
          {
            if ( !v16 )
              goto LABEL_20;
            v16 ^= v14;
          }
          if ( !v16 )
          {
LABEL_20:
            LOBYTE(v9) = 1;
            break;
          }
        }
        v14 = v16;
      }
    }
    RtlRbInsertNodeEx(v13, v14, v9, Heap + 3);
    *a3 = *Heap;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v6;
}
