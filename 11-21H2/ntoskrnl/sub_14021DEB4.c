/*
 * XREFs of sub_14021DEB4 @ 0x14021DEB4
 * Callers:
 *     FsRtlFastUnlockSingle @ 0x14021DDD0 (FsRtlFastUnlockSingle.c)
 *     sub_140542018 @ 0x140542018 (sub_140542018.c)
 * Callees:
 *     sub_140203D88 @ 0x140203D88 (sub_140203D88.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     RtlRealSuccessor @ 0x14021D710 (RtlRealSuccessor.c)
 *     sub_14021DCF4 @ 0x14021DCF4 (sub_14021DCF4.c)
 *     RtlDelete @ 0x14021EBA0 (RtlDelete.c)
 *     sub_14021EF80 @ 0x14021EF80 (sub_14021EF80.c)
 *     sub_14021F280 @ 0x14021F280 (sub_14021F280.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14021DEB4(
        _QWORD *a1,
        _RTL_SPLAY_LINKS *a2,
        unsigned __int64 *a3,
        _RTL_SPLAY_LINKS **a4,
        _RTL_SPLAY_LINKS *a5,
        int a6,
        __int64 a7,
        char a8,
        char a9)
{
  unsigned __int64 v9; // rbx
  KSPIN_LOCK *v10; // r15
  KIRQL v14; // al
  _QWORD *v15; // rcx
  unsigned int v16; // edi
  unsigned __int64 v17; // r14
  PRTL_SPLAY_LINKS v19; // rsi
  int v20; // r12d
  bool v21; // cc
  __int64 v22; // r8
  __int64 v23; // r8
  __int64 v24; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v27; // r9
  int v28; // eax
  bool v29; // zf
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r9
  __int64 v32; // r8
  int v33; // eax
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r9
  __int64 v36; // r8
  int v37; // eax
  __int64 v38; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v39; // [rsp+80h] [rbp+18h] BYREF
  _RTL_SPLAY_LINKS **v40; // [rsp+88h] [rbp+20h]

  v40 = a4;
  v9 = *a3;
  v10 = a1 + 3;
  v39 = *a3;
  v14 = KeAcquireSpinLockRaiseToDpc(a1 + 3);
  v15 = (_QWORD *)v10[2];
  v16 = 0;
  v17 = v14;
  if ( v15 )
  {
    v38 = (__int64)*a4 + v9 - 1;
    v19 = (PRTL_SPLAY_LINKS)sub_14021DCF4(v15, &v39, (unsigned __int64 *)&v38, 0LL, 0LL);
    if ( v19 )
    {
      v20 = a6;
      while ( 1 )
      {
        if ( v19[2].Parent == a2 && v19[2].LeftChild == a5 && HIDWORD(v19[1].RightChild) == v20 )
        {
          v21 = v19[1].Parent <= (_RTL_SPLAY_LINKS *)v9;
          if ( v19[1].Parent != (_RTL_SPLAY_LINKS *)v9 )
            goto LABEL_24;
          if ( v19[1].LeftChild == *v40 )
          {
            if ( a2[5].Parent == &v19[1] )
              a2[5].Parent = 0LL;
            v10[2] = (KSPIN_LOCK)RtlDelete(v19);
            if ( (_RTL_SPLAY_LINKS *)*a1 == v19[1].Parent )
              sub_14021EF80(a1);
            if ( !a8 && a1[2] )
            {
              KeReleaseSpinLockFromDpcLevel(v10);
              if ( dword_140D06B08 )
              {
                if ( (dword_140D06B08 & 1) != 0 )
                {
                  CurrentIrql = KeGetCurrentIrql();
                  if ( CurrentIrql <= 0xFu && (unsigned __int8)v17 <= 0xFu && CurrentIrql >= 2u )
                  {
                    CurrentPrcb = KeGetCurrentPrcb();
                    v27 = *((_QWORD *)CurrentPrcb + 4375);
                    v28 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
                    v29 = (v28 & *(_DWORD *)(v27 + 20)) == 0;
                    v24 = (unsigned int)v28 & *(_DWORD *)(v27 + 20);
                    *(_DWORD *)(v27 + 20) = v24;
                    if ( v29 )
                      sub_140418E4C(CurrentPrcb);
                  }
                }
              }
              __writecr8(v17);
              sub_14042A5E0(a7, &v19[1], v24);
              LOBYTE(v17) = KeAcquireSpinLockRaiseToDpc(v10);
            }
            sub_140203D88((__int64)&stru_140CE2800, (_SLIST_ENTRY *)v19, v22);
            if ( a9 && v10[3] )
            {
              LOBYTE(v23) = v17;
              sub_14021F280(a1, v10, v23);
            }
            KeReleaseSpinLockFromDpcLevel(v10);
            if ( dword_140D06B08 )
            {
              if ( (dword_140D06B08 & 1) != 0 )
              {
                v30 = KeGetCurrentIrql();
                if ( v30 <= 0xFu && (unsigned __int8)v17 <= 0xFu && v30 >= 2u )
                {
                  v31 = KeGetCurrentPrcb();
                  v32 = *((_QWORD *)v31 + 4375);
                  v33 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
                  v29 = (v33 & *(_DWORD *)(v32 + 20)) == 0;
                  *(_DWORD *)(v32 + 20) &= v33;
                  if ( v29 )
                    sub_140418E4C(v31);
                }
              }
            }
            goto LABEL_4;
          }
        }
        v21 = v19[1].Parent <= (_RTL_SPLAY_LINKS *)v9;
LABEL_24:
        if ( v21 )
        {
          v19 = RtlRealSuccessor(v19);
          if ( v19 )
            continue;
        }
        break;
      }
    }
  }
  KeReleaseSpinLockFromDpcLevel(v10);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v34 = KeGetCurrentIrql();
      if ( v34 <= 0xFu && (unsigned __int8)v17 <= 0xFu && v34 >= 2u )
      {
        v35 = KeGetCurrentPrcb();
        v36 = *((_QWORD *)v35 + 4375);
        v37 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
        v29 = (v37 & *(_DWORD *)(v36 + 20)) == 0;
        *(_DWORD *)(v36 + 20) &= v37;
        if ( v29 )
          sub_140418E4C(v35);
      }
    }
  }
  v16 = -1073741698;
LABEL_4:
  __writecr8((unsigned __int8)v17);
  return v16;
}
