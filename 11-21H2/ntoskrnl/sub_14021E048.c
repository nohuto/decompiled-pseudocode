/*
 * XREFs of sub_14021E048 @ 0x14021E048
 * Callers:
 *     FsRtlFastUnlockSingle @ 0x14021DDD0 (FsRtlFastUnlockSingle.c)
 *     sub_140542018 @ 0x140542018 (sub_140542018.c)
 * Callees:
 *     sub_140203D88 @ 0x140203D88 (sub_140203D88.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_14021E8B8 @ 0x14021E8B8 (sub_14021E8B8.c)
 *     RtlDelete @ 0x14021EBA0 (RtlDelete.c)
 *     sub_14021EF80 @ 0x14021EF80 (sub_14021EF80.c)
 *     sub_14021F280 @ 0x14021F280 (sub_14021F280.c)
 *     sub_14021F514 @ 0x14021F514 (sub_14021F514.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14021E048(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 *a3,
        _SLIST_ENTRY **a4,
        __int64 a5,
        int a6,
        __int64 a7,
        char a8,
        char a9)
{
  unsigned __int64 v9; // rbx
  KSPIN_LOCK *v10; // r15
  KIRQL v13; // al
  KSPIN_LOCK v14; // rcx
  unsigned int v15; // edi
  unsigned __int64 v16; // rbp
  __int64 v17; // rax
  _RTL_SPLAY_LINKS *v18; // r9
  _SLIST_ENTRY *v19; // rsi
  _SLIST_ENTRY *v20; // rax
  _SLIST_ENTRY *Next; // r14
  _SLIST_ENTRY *v22; // r12
  __int64 v23; // r8
  bool v24; // cc
  __int64 v25; // r8
  __int64 v26; // r8
  _SLIST_ENTRY *v28; // rcx
  __int64 v29; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v32; // r9
  int v33; // eax
  bool v34; // zf
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r9
  __int64 v37; // r8
  int v38; // eax
  unsigned __int8 v39; // al
  struct _KPRCB *v40; // r9
  __int64 v41; // r8
  int v42; // eax
  unsigned __int64 v43; // [rsp+30h] [rbp-58h] BYREF
  _SLIST_ENTRY *v44; // [rsp+90h] [rbp+8h] BYREF
  __int64 v45; // [rsp+98h] [rbp+10h]
  __int64 v46; // [rsp+A0h] [rbp+18h] BYREF
  _SLIST_ENTRY **v47; // [rsp+A8h] [rbp+20h]

  v47 = a4;
  v45 = a2;
  v9 = *a3;
  v10 = a1 + 3;
  v43 = *a3;
  v13 = KeAcquireSpinLockRaiseToDpc(a1 + 3);
  v14 = v10[1];
  v15 = 0;
  v16 = v13;
  if ( v14 )
  {
    v46 = (__int64)*a4 + v9 - 1;
    v17 = sub_14021E8B8(v14, (unsigned int)&v43, (unsigned int)&v46, 0, 0LL);
    v18 = (_RTL_SPLAY_LINKS *)v17;
    if ( v17 )
    {
      v19 = (_SLIST_ENTRY *)(v17 - 24);
      v20 = 0LL;
      Next = v19->Next;
      v22 = v19;
      v44 = 0LL;
      if ( Next )
      {
        v23 = (__int64)v47;
        while ( 1 )
        {
          if ( Next[2].Next == (_SLIST_ENTRY *)v45
            && *((_QWORD *)&Next[2].Next + 1) == a5
            && *((_DWORD *)&Next[1].Next + 3) == a6 )
          {
            v24 = *((_QWORD *)&Next->Next + 1) <= v9;
            if ( *((_QWORD *)&Next->Next + 1) != v9 )
              goto LABEL_31;
            if ( Next[1].Next == *v47 )
            {
              if ( *(_SLIST_ENTRY **)(v45 + 120) == (_SLIST_ENTRY *)(&Next->Next + 1) )
                *(_QWORD *)(v45 + 120) = 0LL;
              if ( v22->Next == v19[3].Next )
                v19[3].Next = v22;
              v22->Next = Next->Next;
              if ( v22 == v19 )
              {
                if ( !v19->Next )
                {
                  v10[1] = (KSPIN_LOCK)RtlDelete(v18);
                  sub_140203D88((__int64)&stru_140CE2600, v19, v25);
                  v19 = 0LL;
                }
                if ( *a1 == *((_QWORD *)&Next->Next + 1) )
                  sub_14021EF80(a1);
              }
              if ( v19 )
                sub_14021F514(v19, v22, &Next[3], &v44);
              if ( !a8 && a1[2] )
              {
                KeReleaseSpinLockFromDpcLevel(v10);
                if ( dword_140D06B08 )
                {
                  if ( (dword_140D06B08 & 1) != 0 )
                  {
                    CurrentIrql = KeGetCurrentIrql();
                    if ( CurrentIrql <= 0xFu && (unsigned __int8)v16 <= 0xFu && CurrentIrql >= 2u )
                    {
                      CurrentPrcb = KeGetCurrentPrcb();
                      v32 = *((_QWORD *)CurrentPrcb + 4375);
                      v33 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
                      v34 = (v33 & *(_DWORD *)(v32 + 20)) == 0;
                      v29 = (unsigned int)v33 & *(_DWORD *)(v32 + 20);
                      *(_DWORD *)(v32 + 20) = v29;
                      if ( v34 )
                        sub_140418E4C(CurrentPrcb);
                    }
                  }
                }
                __writecr8(v16);
                sub_14042A5E0(a7, &Next->Next + 1, v29);
                LOBYTE(v16) = KeAcquireSpinLockRaiseToDpc(v10);
              }
              sub_140203D88((__int64)&stru_140CE2880, Next, v23);
              if ( a9 && v10[3] )
              {
                LOBYTE(v26) = v16;
                sub_14021F280(a1, v10, v26);
              }
              KeReleaseSpinLockFromDpcLevel(v10);
              if ( dword_140D06B08 )
              {
                if ( (dword_140D06B08 & 1) != 0 )
                {
                  v35 = KeGetCurrentIrql();
                  if ( v35 <= 0xFu && (unsigned __int8)v16 <= 0xFu && v35 >= 2u )
                  {
                    v36 = KeGetCurrentPrcb();
                    v37 = *((_QWORD *)v36 + 4375);
                    v38 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
                    v34 = (v38 & *(_DWORD *)(v37 + 20)) == 0;
                    *(_DWORD *)(v37 + 20) &= v38;
                    if ( v34 )
                      sub_140418E4C(v36);
                  }
                }
              }
              goto LABEL_27;
            }
          }
          v24 = *((_QWORD *)&Next->Next + 1) <= v9;
LABEL_31:
          if ( v24 )
          {
            v28 = Next[3].Next;
            v22 = Next;
            Next = Next->Next;
            if ( v20 < v28 )
              v20 = v28;
            v44 = v20;
            if ( Next )
              continue;
          }
          break;
        }
      }
    }
  }
  KeReleaseSpinLockFromDpcLevel(v10);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v39 = KeGetCurrentIrql();
      if ( v39 <= 0xFu && (unsigned __int8)v16 <= 0xFu && v39 >= 2u )
      {
        v40 = KeGetCurrentPrcb();
        v41 = *((_QWORD *)v40 + 4375);
        v42 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
        v34 = (v42 & *(_DWORD *)(v41 + 20)) == 0;
        *(_DWORD *)(v41 + 20) &= v42;
        if ( v34 )
          sub_140418E4C(v40);
      }
    }
  }
  v15 = -1073741698;
LABEL_27:
  __writecr8((unsigned __int8)v16);
  return v15;
}
