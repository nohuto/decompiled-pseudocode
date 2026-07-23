/*
 * XREFs of sub_14070A4FC @ 0x14070A4FC
 * Callers:
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 *     sub_140B0A508 @ 0x140B0A508 (sub_140B0A508.c)
 * Callees:
 *     ExInitializeAutoExpandPushLock @ 0x14022E1F0 (ExInitializeAutoExpandPushLock.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     InitializeSListHead @ 0x1402A05A0 (InitializeSListHead.c)
 *     sub_1402A05C0 @ 0x1402A05C0 (sub_1402A05C0.c)
 *     sub_1402A0624 @ 0x1402A0624 (sub_1402A0624.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_14036DA68 @ 0x14036DA68 (sub_14036DA68.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406C3F0C @ 0x1406C3F0C (sub_1406C3F0C.c)
 *     sub_140709D14 @ 0x140709D14 (sub_140709D14.c)
 *     sub_14070A1B8 @ 0x14070A1B8 (sub_14070A1B8.c)
 *     sub_14070A738 @ 0x14070A738 (sub_14070A738.c)
 *     sub_14070A810 @ 0x14070A810 (sub_14070A810.c)
 *     sub_14070A9C0 @ 0x14070A9C0 (sub_14070A9C0.c)
 *     sub_1407557F0 @ 0x1407557F0 (sub_1407557F0.c)
 *     sub_14075876C @ 0x14075876C (sub_14075876C.c)
 *     sub_1407F3718 @ 0x1407F3718 (sub_1407F3718.c)
 *     sub_140968018 @ 0x140968018 (sub_140968018.c)
 *     sub_140968064 @ 0x140968064 (sub_140968064.c)
 *     sub_1409806C8 @ 0x1409806C8 (sub_1409806C8.c)
 */

__int64 __fastcall sub_14070A4FC(ULONG_PTR BugCheckParameter1, ULONG_PTR a2, __int64 a3, _DWORD *a4, char a5)
{
  _QWORD *v9; // rax
  __int64 v10; // r14
  __int64 v11; // r9
  __int64 v12; // r13
  __int64 v13; // r14
  int v14; // ebx
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int128 v19; // xmm1
  __int64 v20; // r13
  __int128 v21; // xmm0
  _QWORD *v22; // rax
  __int128 v23; // xmm1
  __int128 v24; // xmm1
  __int64 v25; // rax
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int64 v28; // rcx
  __int64 *v29; // rax
  __int64 v30; // r9
  struct _KTHREAD *CurrentThread; // rdi
  PVOID P; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v33; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v34; // [rsp+30h] [rbp-D0h]
  __int64 v35; // [rsp+38h] [rbp-C8h]
  _OWORD v36[4]; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v37[3]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE Src[224]; // [rsp+B0h] [rbp-50h] BYREF

  memset(v37, 0, sizeof(v37));
  memset(Src, 0, 0xD8uLL);
  v9 = sub_1402828F0(64, 0x260uLL, 0x3250694Du);
  v10 = (__int64)v9;
  if ( v9 )
  {
    ExInitializeAutoExpandPushLock(v9 + 49, 1);
    if ( a2 )
    {
      v16 = *(_QWORD *)(a2 + 1680);
      memmove(Src, (const void *)(v16 + 48), 0xD8uLL);
      v17 = *(_QWORD *)(v16 + 264);
      v18 = 2LL;
      v19 = *(_OWORD *)(v16 + 440);
      v20 = *(_QWORD *)(v16 + 344);
      v36[0] = *(_OWORD *)(v16 + 424);
      v21 = *(_OWORD *)(v16 + 456);
      v34 = v17;
      v22 = &v36[1];
      v36[1] = v19;
      v23 = *(_OWORD *)(v16 + 472);
      v35 = v20;
      v36[2] = v21;
      v36[3] = v23;
      do
      {
        *v22 = 0LL;
        v22 += 4;
        --v18;
      }
      while ( v18 );
    }
    else
    {
      v34 = 0LL;
      v35 = 0LL;
      memset(v36, 0, sizeof(v36));
    }
    sub_14030D5C0(BugCheckParameter1, 0LL, (__int64)v37, v11);
    *(_QWORD *)(BugCheckParameter1 + 1224) = 0LL;
    *(_QWORD *)(BugCheckParameter1 + 1232) = 0LL;
    *(_QWORD *)(BugCheckParameter1 + 2008) = 0LL;
    if ( (dword_140D06994 & 1) != 0 && (dword_140D06994 & 0x10000000) == 0 )
      sub_140968018(BugCheckParameter1);
    v12 = BugCheckParameter1 + 1664;
    P = 0LL;
    sub_1402A0624(BugCheckParameter1 + 1664, v10, 0, 0LL);
    v13 = *(_QWORD *)(BugCheckParameter1 + 1680);
    *(_DWORD *)(v13 + 280) = 1;
    sub_1402A05C0(BugCheckParameter1);
    _InterlockedOr((volatile signed __int32 *)(BugCheckParameter1 + 1124), 0x400u);
    v33 = 0LL;
    v14 = sub_14070A9C0(BugCheckParameter1, a2, a3, &v33);
    if ( v14 >= 0 )
    {
      if ( a2
        || (*(_DWORD *)(BugCheckParameter1 + 2172) & 1) != 0
        || (P = sub_1406C3F0C(BugCheckParameter1, v33)) != 0LL )
      {
        InitializeSListHead((PSLIST_HEADER)(v13 + 352));
        if ( a2
          || (sub_14070A810(BugCheckParameter1), sub_14070A738(BugCheckParameter1, a3), v14 = sub_140709D14(0), v14 >= 0) )
        {
          v14 = sub_14070A1B8(BugCheckParameter1, (_QWORD **)&P);
          if ( v14 >= 0 )
          {
            if ( a3 )
            {
              v14 = sub_1407557F0(BugCheckParameter1, a3, a4);
LABEL_14:
              sub_14036DA68(BugCheckParameter1 + 1664);
LABEL_15:
              sub_1402D0930((__int64)v37, 0LL);
              return (unsigned int)v14;
            }
            if ( (*(_DWORD *)(BugCheckParameter1 + 2172) & 1) != 0 && !a2 )
              goto LABEL_14;
            *a4 &= ~0x10u;
            if ( !a2 )
            {
              sub_1402D0930((__int64)v37, 0LL);
              return 0;
            }
            if ( (*(_BYTE *)(a2 + 992) & 1) != 0 )
            {
              v14 = -1073741595;
            }
            else
            {
              *(_QWORD *)(BugCheckParameter1 + 1448) = *(_QWORD *)(a2 + 1448);
              *(_DWORD *)(BugCheckParameter1 + 1456) = *(_DWORD *)(a2 + 1456);
              *(_WORD *)(BugCheckParameter1 + 1460) = *(_WORD *)(a2 + 1460);
              *(_BYTE *)(BugCheckParameter1 + 1462) = *(_BYTE *)(a2 + 1462);
              *(_QWORD *)(BugCheckParameter1 + 1496) = *(_QWORD *)(a2 + 1496);
              memmove((void *)(v13 + 48), Src, 0xD8uLL);
              v24 = v36[1];
              v25 = v34;
              *(_OWORD *)(v13 + 424) = v36[0];
              *(_QWORD *)(v13 + 264) = v25;
              v26 = v36[2];
              *(_OWORD *)(v13 + 440) = v24;
              v27 = v36[3];
              *(_OWORD *)(v13 + 456) = v26;
              *(_OWORD *)(v13 + 472) = v27;
              v14 = sub_140709D14(1);
              if ( v14 >= 0 )
              {
                v29 = *(__int64 **)(a2 + 1408);
                if ( v29 )
                {
                  v28 = *v29;
                  if ( *v29 )
                    **(_QWORD **)(BugCheckParameter1 + 1408) = v28;
                }
                if ( (*a4 & 0x80u) == 0 )
                  v14 = 0;
                else
                  v14 = sub_1407F3718(v28);
                *(_QWORD *)(v13 + 344) = (v35 + 1) & -(__int64)((a5 & 1) != 0);
                *(_QWORD *)(v13 + 320) = v13 + 312;
                *(_QWORD *)(v13 + 312) = v13 + 312;
                *(_BYTE *)(v13 + 341) |= 2u;
                sub_1402D0930((__int64)v37, 0LL);
                if ( v14 >= 0 )
                {
                  v14 = sub_1409806C8(a2, BugCheckParameter1);
                  if ( v14 >= 0 )
                  {
                    sub_14030D5C0(BugCheckParameter1, 0LL, (__int64)v37, v30);
                    CurrentThread = KeGetCurrentThread();
                    if ( *((_QWORD *)&v36[2] + 1) )
                      sub_14075876C(CurrentThread, *(_QWORD *)&v36[2], 1LL);
                    if ( *((_QWORD *)&v36[0] + 1) )
                      sub_14075876C(CurrentThread, *(_QWORD *)&v36[0], 0LL);
                    sub_1402D0930((__int64)v37, 0LL);
                  }
                }
                sub_14036DA68(v12);
                return (unsigned int)v14;
              }
            }
          }
        }
      }
      else
      {
        v14 = -1073741670;
      }
    }
    sub_140968064(P);
    goto LABEL_15;
  }
  return 3221225626LL;
}
