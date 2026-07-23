/*
 * XREFs of sub_1402BF9C0 @ 0x1402BF9C0
 * Callers:
 *     sub_1402323E8 @ 0x1402323E8 (sub_1402323E8.c)
 *     sub_1402710C4 @ 0x1402710C4 (sub_1402710C4.c)
 *     sub_14028B330 @ 0x14028B330 (sub_14028B330.c)
 *     sub_1402BBEE0 @ 0x1402BBEE0 (sub_1402BBEE0.c)
 *     sub_1402BF640 @ 0x1402BF640 (sub_1402BF640.c)
 *     sub_1402C3BA0 @ 0x1402C3BA0 (sub_1402C3BA0.c)
 *     sub_1402C6EB0 @ 0x1402C6EB0 (sub_1402C6EB0.c)
 *     sub_1402C8FD0 @ 0x1402C8FD0 (sub_1402C8FD0.c)
 *     sub_1402E48A0 @ 0x1402E48A0 (sub_1402E48A0.c)
 *     sub_1402E7704 @ 0x1402E7704 (sub_1402E7704.c)
 *     sub_140315EE0 @ 0x140315EE0 (sub_140315EE0.c)
 *     sub_140338500 @ 0x140338500 (sub_140338500.c)
 *     sub_14033B190 @ 0x14033B190 (sub_14033B190.c)
 *     sub_14033E970 @ 0x14033E970 (sub_14033E970.c)
 *     sub_14038E608 @ 0x14038E608 (sub_14038E608.c)
 *     sub_14058EA88 @ 0x14058EA88 (sub_14058EA88.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14058F250 (MmMarkPhysicalMemoryAsBad.c)
 *     sub_140599EBC @ 0x140599EBC (sub_140599EBC.c)
 *     sub_14059B62C @ 0x14059B62C (sub_14059B62C.c)
 *     sub_14059C6B4 @ 0x14059C6B4 (sub_14059C6B4.c)
 *     sub_14059F908 @ 0x14059F908 (sub_14059F908.c)
 *     sub_1405B3EB4 @ 0x1405B3EB4 (sub_1405B3EB4.c)
 *     sub_1405BB090 @ 0x1405BB090 (sub_1405BB090.c)
 *     sub_1405BF718 @ 0x1405BF718 (sub_1405BF718.c)
 * Callees:
 *     sub_140232200 @ 0x140232200 (sub_140232200.c)
 *     sub_1402393AC @ 0x1402393AC (sub_1402393AC.c)
 *     sub_14023CC50 @ 0x14023CC50 (sub_14023CC50.c)
 *     sub_14024253C @ 0x14024253C (sub_14024253C.c)
 *     sub_14025C460 @ 0x14025C460 (sub_14025C460.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402C0900 @ 0x1402C0900 (sub_1402C0900.c)
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     sub_1402C6EB0 @ 0x1402C6EB0 (sub_1402C6EB0.c)
 *     sub_1402E76C0 @ 0x1402E76C0 (sub_1402E76C0.c)
 *     sub_1402E8BCC @ 0x1402E8BCC (sub_1402E8BCC.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_1403119F0 @ 0x1403119F0 (sub_1403119F0.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     sub_140313B20 @ 0x140313B20 (sub_140313B20.c)
 *     sub_1403385E0 @ 0x1403385E0 (sub_1403385E0.c)
 *     sub_14033FAA4 @ 0x14033FAA4 (sub_14033FAA4.c)
 *     sub_140366A20 @ 0x140366A20 (sub_140366A20.c)
 *     sub_1403B76EC @ 0x1403B76EC (sub_1403B76EC.c)
 *     sub_1403C3E64 @ 0x1403C3E64 (sub_1403C3E64.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140461B20 @ 0x140461B20 (sub_140461B20.c)
 *     sub_14058E05C @ 0x14058E05C (sub_14058E05C.c)
 *     sub_1405A1CC0 @ 0x1405A1CC0 (sub_1405A1CC0.c)
 *     sub_1405ADDA8 @ 0x1405ADDA8 (sub_1405ADDA8.c)
 *     sub_1405B10D8 @ 0x1405B10D8 (sub_1405B10D8.c)
 *     sub_1405B3654 @ 0x1405B3654 (sub_1405B3654.c)
 *     sub_1405BC608 @ 0x1405BC608 (sub_1405BC608.c)
 *     sub_14063D8E0 @ 0x14063D8E0 (sub_14063D8E0.c)
 */

void __fastcall sub_1402BF9C0(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned int i; // r12d
  unsigned __int64 v5; // rdx
  ULONG_PTR *v6; // r13
  ULONG_PTR v7; // r15
  __int64 *v8; // r14
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdx
  _DWORD *v16; // r8
  struct _KPRCB *v17; // r9
  __int64 v18; // rcx
  signed __int32 v19; // ett
  __int64 *v20; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v22; // rcx
  unsigned int v23; // esi
  __int64 v24; // rdx
  int v25; // r11d
  ULONG_PTR *v26; // r8
  __int128 v27; // kr00_16
  __int64 v28; // rcx
  char v29; // al
  char v30; // si
  volatile signed __int32 *v31; // rcx
  struct _KPRCB *v32; // rcx
  __int64 v33; // rdx
  __int128 *v34; // r15
  unsigned __int64 v35; // r14
  __int64 v36; // rsi
  char v37; // al
  unsigned int v38; // esi
  unsigned int v39; // ecx
  unsigned __int64 v40; // r11
  signed __int64 v41; // rdx
  __int64 v42; // r9
  __int64 v43; // rsi
  __int64 v44; // r10
  signed __int64 v45; // r8
  ULONG_PTR v46; // rdx
  ULONG_PTR v47; // r8
  signed __int64 v48; // rax
  __int64 v49; // r8
  signed __int64 v50; // rax
  int v51; // eax
  signed __int64 v52; // rax
  __int64 v53; // r8
  signed __int64 v54; // rax
  signed __int64 v55; // rdx
  unsigned __int64 v56; // r10
  signed __int64 v57; // r8
  unsigned __int8 v58; // cl
  __int64 v59; // rax
  volatile signed __int64 *v60; // rax
  unsigned __int64 v61; // r12
  unsigned __int64 v62; // r12
  __int64 *v63; // rax
  __int64 v64; // rsi
  _DWORD *v65; // r8
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 v67; // rcx
  signed __int32 v68; // ett
  __int64 *v69; // rax
  __int64 v70; // rcx
  volatile signed __int64 *v71; // r15
  __int64 v72; // r11
  unsigned __int64 v73; // rsi
  __int64 v74; // rcx
  __int64 v75; // rax
  bool v76; // sf
  volatile signed __int64 *v77; // rax
  __int64 v78; // rcx
  char v79; // al
  char v80; // al
  __int64 v81; // rax
  struct _KEVENT *v82; // rsi
  int v83; // eax
  int v84; // eax
  int v85; // eax
  int v86; // eax
  unsigned __int16 **v87; // r9
  __int64 v88; // r10
  unsigned __int16 *v89; // rdx
  unsigned int v90; // r8d
  unsigned __int64 v91; // rsi
  signed __int64 v92; // rcx
  signed __int64 v93; // rcx
  int v94; // eax
  signed __int32 v95[8]; // [rsp+0h] [rbp-208h] BYREF
  int v96; // [rsp+30h] [rbp-1D8h]
  char v97; // [rsp+34h] [rbp-1D4h]
  unsigned int v98; // [rsp+38h] [rbp-1D0h]
  __int64 *v99; // [rsp+40h] [rbp-1C8h]
  __int64 v100; // [rsp+48h] [rbp-1C0h]
  ULONG_PTR v101; // [rsp+50h] [rbp-1B8h]
  __int64 v102; // [rsp+58h] [rbp-1B0h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-1A8h] BYREF
  __int64 v104; // [rsp+78h] [rbp-190h]
  __int64 v105; // [rsp+80h] [rbp-188h]
  __int64 v106; // [rsp+88h] [rbp-180h]
  unsigned int v107; // [rsp+90h] [rbp-178h]
  unsigned int v108; // [rsp+94h] [rbp-174h]
  volatile signed __int64 *v109; // [rsp+98h] [rbp-170h]
  __int128 v110; // [rsp+A0h] [rbp-168h]
  __int128 v111; // [rsp+B0h] [rbp-158h]
  __int64 v112; // [rsp+C0h] [rbp-148h]
  signed __int64 v113; // [rsp+C8h] [rbp-140h]
  __int128 v114; // [rsp+D0h] [rbp-138h]
  __int128 v115; // [rsp+E0h] [rbp-128h]
  __int64 v116; // [rsp+F0h] [rbp-118h]
  signed __int64 v117; // [rsp+F8h] [rbp-110h]
  __int128 v118; // [rsp+100h] [rbp-108h]
  __int128 v119; // [rsp+110h] [rbp-F8h]
  __int128 v120; // [rsp+120h] [rbp-E8h]
  __int128 v121; // [rsp+130h] [rbp-D8h]
  __int128 v122; // [rsp+140h] [rbp-C8h]
  __int128 v123; // [rsp+150h] [rbp-B8h]
  __int128 v124; // [rsp+160h] [rbp-A8h] BYREF
  __int128 v125; // [rsp+170h] [rbp-98h]
  __int128 v126; // [rsp+180h] [rbp-88h]
  __int128 v127; // [rsp+190h] [rbp-78h]
  __int128 v128; // [rsp+1A0h] [rbp-68h]
  __int128 v129; // [rsp+1B0h] [rbp-58h]
  __int64 v130; // [rsp+1C0h] [rbp-48h]
  void *retaddr; // [rsp+208h] [rbp+0h]

  v2 = 0;
  v96 = a2;
  v100 = 0LL;
  for ( i = a2; ; i = 32 )
  {
    v5 = *(_QWORD *)(BugCheckParameter2 + 40);
    v6 = *(ULONG_PTR **)(qword_140C51F48 + 8 * ((v5 >> 43) & 0x3FF));
    v7 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4);
    v124 = 0LL;
    v125 = 0LL;
    v130 = 0LL;
    v126 = 0LL;
    v127 = 0LL;
    v128 = 0LL;
    v129 = 0LL;
    if ( (v5 & 0x20000000000000LL) != 0 )
      v2 = 1;
    if ( v7 < qword_140C52CE0 || v7 >= qword_140C52CE0 + 2048 )
    {
      if ( byte_140C58C66 && _bittest64((const signed __int64 *)qword_140C58DE0, v7 >> 9) )
        v2 |= 2u;
    }
    else
    {
      v2 |= 8u;
    }
    if ( (v2 & 1) != 0 && (i & 8) != 0 && byte_140C5072C )
    {
      i = i & 0xFFFFFFF3 | 4;
      v79 = *(_BYTE *)(BugCheckParameter2 + 34) & 0xEF;
      v96 = i;
      *(_BYTE *)(BugCheckParameter2 + 34) = v79;
    }
    if ( (i & 4) != 0 )
    {
      v8 = (__int64 *)(v6 + 344);
    }
    else if ( (i & 8) != 0 )
    {
      v8 = (__int64 *)(v6 + 2160);
    }
    else if ( (i & 0x10) != 0 )
    {
      v8 = (__int64 *)(v6 + 2176);
    }
    else if ( (i & 0x100) != 0 )
    {
      v8 = (__int64 *)(v6[2]
                     + 24512LL
                     * *(unsigned int *)(sub_1402C1550(
                                           0xAAAAAAAAAAAAAAABuLL
                                         * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4))
                                       + 8)
                     + 24384);
    }
    else
    {
      v8 = (i & 0x800) != 0
         ? (__int64 *)sub_1405B10D8(BugCheckParameter2, 1LL, 0x3800000000000000LL)
         : (__int64 *)(v6 + 816);
    }
    if ( (v2 & 1) != 0 && ((v80 = *(_BYTE *)(BugCheckParameter2 + 35), (v80 & 0x40) != 0) || (v80 & 0x10) != 0) )
    {
      v9 = (unsigned int)dword_140C4F250;
      i = i & 0xFFFFFFD3 | 0x20;
      v98 = dword_140C4F250;
      v96 = i;
      v6 = &StartContext;
      v8 = &qword_140C4F248;
      v99 = &qword_140C4F248;
    }
    else
    {
      v9 = *((unsigned int *)v8 + 2);
      v98 = *((_DWORD *)v8 + 2);
      v99 = v8;
      if ( (v2 & 1) == 0 )
      {
        _InterlockedOr(v95, 0);
        *(_QWORD *)(BugCheckParameter2 + 24) ^= (*(_QWORD *)(BugCheckParameter2 + 24) ^ ((unsigned __int64)(unsigned int)dword_140D31080 << 59)) & 0x3800000000000000LL;
      }
    }
    v10 = 5LL;
    v11 = 0x7FFFFFFFFFFFFFFFLL;
    if ( (_DWORD)v9 != 2 )
      break;
    v97 = *(_BYTE *)(BugCheckParameter2 + 35);
    if ( (v97 & 0x40) == 0 || (v2 & 2) != 0 )
    {
      if ( (dword_140D051C0 & 2) != 0
        && (v2 & 0xA) == 0
        && (*((_DWORD *)v6 + 1) & 0x100) == 0
        && (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) == 0 )
      {
        if ( (unsigned int)sub_1402E76C0(BugCheckParameter2 + 16)
          && (v97 & 0x40) == 0
          && (sub_140313B20(BugCheckParameter2) & 0x10) == 0
          && (unsigned int)sub_1405BC608(0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4)) )
        {
          *(_BYTE *)(BugCheckParameter2 + 34) = *(_BYTE *)(BugCheckParameter2 + 34) & 0xF8 | 2;
          sub_14033FAA4(BugCheckParameter2);
          sub_1402C6EB0(0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4));
          return;
        }
        v10 = 5LL;
      }
      if ( (v2 & 1) != 0 )
      {
        *(_BYTE *)(BugCheckParameter2 + 34) = *(_BYTE *)(BugCheckParameter2 + 34) & 0xF8 | 2;
        return;
      }
      v58 = *(_BYTE *)(BugCheckParameter2 + 35);
      if ( (v58 & 8) != 0 )
        v59 = 5LL;
      else
        v59 = v58 & 7;
      if ( (i & 0x800) == 0 )
      {
        v8 = (__int64 *)&v6[11 * v59 + 360];
        if ( (((v2 & 2) == 0) & (unsigned __int8)~(v58 >> 3)) != 0 )
        {
          if ( *(__int64 *)(BugCheckParameter2 + 40) >= 0 )
            v60 = (volatile signed __int64 *)(v6 + 1976);
          else
            v60 = (volatile signed __int64 *)(v6 + 848);
          _InterlockedIncrement64(v60);
          memset(&LockHandle, 0, sizeof(LockHandle));
          v61 = _InterlockedIncrement64((volatile signed __int64 *)v6 + 2112);
          if ( v61 <= 0x420 )
          {
            switch ( v61 )
            {
              case 0xA0uLL:
                v81 = 1965LL;
                break;
              case 0x420uLL:
                v81 = 1969LL;
                break;
              case 0x22uLL:
                v81 = 1961LL;
                break;
              default:
                goto LABEL_91;
            }
            LockHandle.LockQueue.Next = 0LL;
            LockHandle.LockQueue.Lock = v6 + 1960;
            v82 = (struct _KEVENT *)&v6[v81];
            sub_1403119F0(&LockHandle);
            KeSetEvent(v82, 0, 0);
            ++v82[1].Header.LockNV;
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          }
LABEL_91:
          v62 = v61 - 1;
          if ( v62 == v6[1993] || v62 == v6[1994] )
            sub_1403C3E64(v6);
          LOWORD(i) = v96;
        }
      }
      v99 = v8;
      if ( (i & 0x80u) == 0 )
      {
        if ( (v2 & 2) != 0 && (i & 0x800) != 0 )
        {
          sub_1405B3654(v8, &v124, v10, v11);
        }
        else
        {
          sub_1402C0900((_DWORD)v6, (_DWORD)v8, BugCheckParameter2, 0, (__int64)&v124);
          if ( !(_BYTE)v124 && BYTE2(v124) != 3 )
            sub_1402E8BCC(BugCheckParameter2, BYTE2(v124), BYTE1(v124));
        }
      }
      goto LABEL_34;
    }
    sub_14033FAA4(BugCheckParameter2);
    v2 = 0;
    v96 = 32;
  }
  if ( (_DWORD)v9 == 3 )
  {
    if ( *(__int64 *)(BugCheckParameter2 + 40) >= 0 )
      _InterlockedIncrement64((volatile signed __int64 *)v6 + 1976);
    else
      _InterlockedIncrement64((volatile signed __int64 *)v6 + 848);
  }
  else
  {
    if ( (_DWORD)v9 != 4 )
    {
      if ( v8 != &qword_140C4F248 && (*(_BYTE *)(BugCheckParameter2 + 35) & 0x40) != 0 )
        sub_1405ADDA8(BugCheckParameter2, 0LL, 1LL);
      if ( (i & 0x100) != 0 )
      {
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)v8 + 8);
        *(_QWORD *)(BugCheckParameter2 + 8) = -8LL;
      }
      else if ( v8 == &qword_140C4F248 )
      {
        v99 = (__int64 *)(v6 + 816);
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)v6 + 1640);
      }
      else
      {
        sub_14023CC50(BugCheckParameter2, 12);
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)v6 + 1640);
        *(_QWORD *)(BugCheckParameter2 + 8) = -4LL;
        v99 = (__int64 *)(v6 + 816);
        if ( v6 == &StartContext )
        {
          sub_14058E05C(1LL);
        }
        else
        {
          v2 |= 0x10u;
          v99 = (__int64 *)(v6 + 816);
        }
      }
      goto LABEL_34;
    }
    v75 = *(_QWORD *)(BugCheckParameter2 + 16);
    if ( qword_140C50780 && (v75 & 0x10) == 0 )
      v75 &= ~qword_140C50780;
    v76 = *(__int64 *)(BugCheckParameter2 + 40) < 0;
    v100 = *(_QWORD *)(v75 >> 16);
    if ( v76 )
      v77 = (volatile signed __int64 *)(v6 + 848);
    else
      v77 = (volatile signed __int64 *)(v6 + 1976);
    _InterlockedIncrement64(v77);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)v8 + 8);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v100 + 72));
    if ( (*(_DWORD *)(v100 + 56) & 8) != 0 )
      goto LABEL_34;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v100 + 72));
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v8 + 8);
    v9 = 3LL;
    v98 = 3;
  }
  v101 = (ULONG_PTR)(v6 + 2160);
  _InterlockedIncrement64((volatile signed __int64 *)v6 + 2160);
  v12 = *(_QWORD *)(BugCheckParameter2 + 16);
  if ( (v12 & 0x400) == 0 )
  {
    if ( (v12 & 2) != 0 || (unsigned __int16)v12 >> 12 == *((_DWORD *)v6 + 293) )
      v8 = (__int64 *)&v6[11 * ((unsigned __int16)v12 >> 12) + 464];
    else
      v8 = (__int64 *)(v6 + 448);
    if ( !*v8 )
      v2 |= 4u;
    if ( (i & 0x80u) != 0 )
      goto LABEL_117;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v8 + 16, 0x3FuLL) )
      goto LABEL_170;
    while ( 1 )
    {
      while ( 1 )
      {
        v63 = (__int64 *)v8[3];
        v99 = v63;
        if ( v63 != (__int64 *)0x3FFFFFFFFFLL )
          break;
        ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)v8 + 8);
        if ( v8[3] == 0x3FFFFFFFFFLL )
          goto LABEL_182;
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)v8 + 8);
      }
      v64 = 48LL * (_QWORD)v63 - 0x220000000000LL;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v64 + 24), 0x3FuLL) )
      {
        _InterlockedAnd64(v8 + 8, 0x7FFFFFFFFFFFFFFFuLL);
LABEL_170:
        if ( BYTE8(v125) )
          _InterlockedAnd64((volatile signed __int64 *)(v125 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (_BYTE)v127 )
          _InterlockedAnd64((volatile signed __int64 *)(*((_QWORD *)&v126 + 1) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
        if ( BYTE8(v128) )
          _InterlockedAnd64((volatile signed __int64 *)(v128 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (_BYTE)v130 )
          _InterlockedAnd64((volatile signed __int64 *)(*((_QWORD *)&v129 + 1) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)v8 + 8);
        goto LABEL_117;
      }
      v65 = v8 + 4;
      if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
        break;
      CurrentPrcb = KeGetCurrentPrcb();
      v100 = (__int64)CurrentPrcb;
      v67 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v67 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v83 = *(_DWORD *)(v67 + 24);
          *(_DWORD *)(v67 + 24) = v83 + 1;
          if ( v83 == -1 )
          {
            sub_140418E4C(CurrentPrcb);
            CurrentPrcb = (struct _KPRCB *)v100;
            v65 = v8 + 4;
          }
        }
      }
      _m_prefetchw(v65);
      v68 = *v65 & 0x7FFFFFFF;
      if ( v68 != _InterlockedCompareExchange(v65, v68 + 1, v68) )
      {
        v78 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v78 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v84 = *(_DWORD *)(v78 + 24) - 1;
            *(_DWORD *)(v78 + 24) = v84;
            if ( !v84 )
            {
              sub_140418E4C(CurrentPrcb);
              v65 = v8 + 4;
            }
          }
        }
        LOBYTE(CurrentPrcb) = -1;
        sub_140366A20(v65, CurrentPrcb);
        goto LABEL_168;
      }
LABEL_113:
      if ( v99 == (__int64 *)v8[3] )
      {
        if ( v64 )
        {
          *((_QWORD *)&v124 + 1) = v99;
          v69 = v8 + 5;
          *(_QWORD *)&v125 = v64;
          LOBYTE(v127) = 1;
          v96 = i;
        }
        else
        {
LABEL_182:
          v69 = v8 + 5;
          *((_QWORD *)&v124 + 1) = 0x3FFFFFFFFFLL;
          *(_QWORD *)&v125 = v8 + 5;
        }
        *(_QWORD *)&v126 = 0x3FFFFFFFFFLL;
        *((_QWORD *)&v126 + 1) = v69;
        BYTE8(v125) = 1;
        LOBYTE(v124) = 1;
LABEL_117:
        _InterlockedIncrement64((volatile signed __int64 *)v6 + 2188);
        goto LABEL_32;
      }
      ExReleaseSpinLockSharedFromDpcLevel(v65);
      _InterlockedAnd64((volatile signed __int64 *)(v64 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    LOBYTE(v9) = -1;
    sub_140461B20(v8 + 4, v9);
LABEL_168:
    v65 = v8 + 4;
    goto LABEL_113;
  }
  v13 = *(unsigned int *)(v6[2075] + 24);
  v8 = (__int64 *)&v6[11 * v13 + 640];
  if ( (i & 0x80u) != 0 )
    goto LABEL_31;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v8 + 16, 0x3FuLL) )
    goto LABEL_136;
  while ( 1 )
  {
    while ( 1 )
    {
      v14 = v8[3];
      v102 = v14;
      if ( v14 != 0x3FFFFFFFFFLL )
        break;
      ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)v8 + 8);
      if ( v8[3] == 0x3FFFFFFFFFLL )
        goto LABEL_147;
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)v8 + 8);
    }
    v15 = 48 * v14 - 0x220000000000LL;
    v100 = v15;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
      break;
    v16 = v8 + 4;
    if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
    {
      LOBYTE(v15) = -1;
      sub_140461B20(v8 + 4, v15);
LABEL_150:
      v15 = v100;
      v16 = v8 + 4;
      goto LABEL_27;
    }
    v17 = KeGetCurrentPrcb();
    v99 = (__int64 *)v17;
    v18 = *((_QWORD *)v17 + 4375);
    if ( v18 )
    {
      if ( *((_BYTE *)v17 + 32) <= 1u )
      {
        v85 = *(_DWORD *)(v18 + 24);
        *(_DWORD *)(v18 + 24) = v85 + 1;
        if ( v85 == -1 )
        {
          sub_140418E4C(v17);
          v15 = v100;
          v16 = v8 + 4;
          v17 = (struct _KPRCB *)v99;
        }
      }
    }
    _m_prefetchw(v16);
    v19 = *v16 & 0x7FFFFFFF;
    if ( v19 != _InterlockedCompareExchange(v16, v19 + 1, v19) )
    {
      v70 = *((_QWORD *)v17 + 4375);
      if ( v70 )
      {
        if ( *((_BYTE *)v17 + 32) <= 1u )
        {
          v86 = *(_DWORD *)(v70 + 24) - 1;
          *(_DWORD *)(v70 + 24) = v86;
          if ( !v86 )
          {
            sub_140418E4C(v17);
            v16 = v8 + 4;
          }
        }
      }
      LOBYTE(v15) = -1;
      sub_140366A20(v16, v15);
      goto LABEL_150;
    }
LABEL_27:
    if ( v102 == v8[3] )
    {
      if ( v15 )
      {
        *((_QWORD *)&v124 + 1) = v102;
        v20 = v8 + 5;
        *(_QWORD *)&v125 = v15;
        LOBYTE(v127) = 1;
        v96 = i;
      }
      else
      {
LABEL_147:
        v20 = v8 + 5;
        *((_QWORD *)&v124 + 1) = 0x3FFFFFFFFFLL;
        *(_QWORD *)&v125 = v8 + 5;
      }
      *(_QWORD *)&v126 = 0x3FFFFFFFFFLL;
      *((_QWORD *)&v126 + 1) = v20;
      BYTE8(v125) = 1;
      LOBYTE(v124) = 1;
      goto LABEL_31;
    }
    ExReleaseSpinLockSharedFromDpcLevel(v16);
    _InterlockedAnd64((volatile signed __int64 *)(v100 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  _InterlockedAnd64(v8 + 8, 0x7FFFFFFFFFFFFFFFuLL);
LABEL_136:
  if ( BYTE8(v125) )
    _InterlockedAnd64((volatile signed __int64 *)(v125 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (_BYTE)v127 )
    _InterlockedAnd64((volatile signed __int64 *)(*((_QWORD *)&v126 + 1) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
  if ( BYTE8(v128) )
    _InterlockedAnd64((volatile signed __int64 *)(v128 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (_BYTE)v130 )
    _InterlockedAnd64((volatile signed __int64 *)(*((_QWORD *)&v129 + 1) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)v8 + 8);
LABEL_31:
  *(_BYTE *)(BugCheckParameter2 + 36) ^= (*(_BYTE *)(BugCheckParameter2 + 36) ^ v13) & 0xF;
LABEL_32:
  CurrentThread = KeGetCurrentThread();
  v99 = v8;
  ++*(_DWORD *)(*((_QWORD *)CurrentThread + 23) + 2000LL);
  v22 = v6[2112];
  if ( v22 < 0x420 )
  {
    v87 = (unsigned __int16 **)(v6 + 827);
    v88 = 0LL;
    while ( 1 )
    {
      v89 = *v87;
      v90 = 0;
      if ( dword_140C5073C )
        break;
LABEL_234:
      ++v88;
      ++v87;
      if ( v88 > 1 )
      {
        v91 = v6[2188];
        if ( v91 >= 0x10 )
          sub_14025C460((__int64)v6, -1LL);
        if ( *(_QWORD *)v101 - v91 >= 0x10 )
          KeSetEvent((PRKEVENT)v6 + 34, 0, 0);
        goto LABEL_33;
      }
    }
    while ( 1 )
    {
      v22 += *v89;
      if ( v22 >= 0x420 )
        break;
      ++v90;
      v89 += 8;
      if ( v90 >= dword_140C5073C )
        goto LABEL_234;
    }
  }
LABEL_33:
  v100 = 0LL;
LABEL_34:
  v23 = v98;
  if ( (*(_BYTE *)(BugCheckParameter2 + 35) & 8) != 0 || (v2 & 2) != 0 && (i & 0x800) == 0 && v98 == 2 )
  {
    if ( (v2 & 8) != 0 )
      sub_140232200(BugCheckParameter2);
  }
  else
  {
    _InterlockedIncrement64(v8);
  }
  if ( (_BYTE)v124 )
  {
    v24 = *((_QWORD *)&v124 + 1);
    v25 = 0;
    v26 = (ULONG_PTR *)v125;
    v27 = v126;
  }
  else
  {
    v24 = v8[3];
    v26 = (ULONG_PTR *)(48 * v24 - 0x220000000000LL);
    v25 = 0;
    v27 = 0x3FFFFFFFFFuLL;
  }
  v101 = 0xFFFFFF0000000000uLL;
  if ( v24 == 0x3FFFFFFFFFLL )
  {
    v8[2] = v7;
    v28 = v7 & 0xFFFFFFFFFFLL;
  }
  else
  {
    v28 = v7 & 0xFFFFFFFFFFLL;
    *v26 = v7 & 0xFFFFFFFFFFLL | v101 & *v26;
  }
  *(_QWORD *)BugCheckParameter2 ^= (v27 ^ *(_QWORD *)BugCheckParameter2) & 0xFFFFFFFFFFLL;
  *(_QWORD *)(BugCheckParameter2 + 24) ^= (v24 ^ *(_QWORD *)(BugCheckParameter2 + 24)) & 0xFFFFFFFFFFLL;
  if ( (_QWORD)v27 == 0x3FFFFFFFFFLL )
    v8[3] = v7;
  else
    *(_QWORD *)(*((_QWORD *)&v27 + 1) + 24LL) = v28 | *(_QWORD *)(*((_QWORD *)&v27 + 1) + 24LL) & 0xFFFFFF0000000000uLL;
  v29 = *(_BYTE *)(BugCheckParameter2 + 34);
  if ( v8 == &qword_140C4F248 )
  {
    *(_BYTE *)(BugCheckParameter2 + 34) = v29 & 0xF8 | 2;
    *(_BYTE *)(BugCheckParameter2 + 35) |= 0x10u;
    sub_1405A1CC0();
    v25 = 0;
  }
  else
  {
    *(_BYTE *)(BugCheckParameter2 + 34) = v29 ^ (v29 ^ v23) & 7;
  }
  if ( v23 == 2 )
  {
    if ( (v2 & 2) == 0 )
    {
      if ( (*(_BYTE *)(BugCheckParameter2 + 35) & 8) == 0 )
      {
        if ( (_BYTE)v124 )
          v34 = &v124;
        else
          v34 = 0LL;
        v105 = 0LL;
        v35 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4);
        v36 = 16 * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4) - 0x220000000000LL;
        v106 = v36;
        v102 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v36 + 40) >> 43) & 0x3FFLL));
        v104 = v102;
        v101 = 0xAAAAAAAAAAAAAAABuLL * ((16 * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4)) >> 4);
        v98 = *(_DWORD *)(sub_1402C1550(v101) + 8);
        LODWORD(v105) = v98;
        v37 = *(_BYTE *)(v36 + 35);
        if ( (v37 & 8) != 0 )
          v38 = 5;
        else
          v38 = v37 & 7;
        v107 = v38;
        if ( qword_140C50710 )
          v39 = sub_1403B76EC(v101);
        else
          v39 = 0;
        v108 = v39;
        v109 = (volatile signed __int64 *)(*(_QWORD *)(v102 + 16) + 24512LL * v98 + 88 * (v38 + 8LL * v39 + 37));
        _InterlockedIncrement64(v109);
        if ( v34 )
        {
          v40 = *((_QWORD *)v34 + 7);
          v41 = *(_QWORD *)(BugCheckParameter2 + 24);
          v42 = *((_QWORD *)v34 + 11);
          v43 = *((_QWORD *)v34 + 8);
          v44 = (v40 & 0x7FFFF) << 40;
          v101 = *((_QWORD *)v34 + 10);
          v45 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(BugCheckParameter2 + 24),
                  v44 | v41 & 0xF80000FFFFFFFFFFuLL,
                  v41);
          if ( v41 != v45 )
          {
            do
            {
              v92 = v45;
              v45 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)(BugCheckParameter2 + 24),
                      v44 | v45 & 0xF80000FFFFFFFFFFuLL,
                      v45);
            }
            while ( v92 != v45 );
          }
          v46 = v101;
          v47 = v101;
          *(_QWORD *)BugCheckParameter2 = *(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFFLL | (v101 << 40);
          *(_DWORD *)(BugCheckParameter2 + 36) = (v40 >> 19) & 0x1FFFFF | ((unsigned int)(v47 >> 24) << 21);
          v48 = *(_QWORD *)(BugCheckParameter2 + 40);
          v112 = 0LL;
          v113 = v48;
          v49 = (v47 & 0xF800000000LL) << 20;
          v110 = 0LL;
          v111 = 0LL;
          v118 = 0LL;
          v119 = 0LL;
          v120 = 0LL;
          v50 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(BugCheckParameter2 + 40),
                  v49 | v48 & 0xF07FFFFFFFFFFFFFuLL,
                  v48);
          for ( *((_QWORD *)&v120 + 1) = v50; v113 != v50; *((_QWORD *)&v120 + 1) = v50 )
          {
            v113 = v50;
            v50 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)(BugCheckParameter2 + 40),
                    v49 | v50 & 0xF07FFFFFFFFFFFFFuLL,
                    v50);
          }
          if ( v40 == 0x3FFFFFFFFFLL )
          {
            *((_QWORD *)v109 + 2) = v35;
          }
          else
          {
            v51 = *(_DWORD *)(v43 + 36);
            *(_QWORD *)v43 = *(_QWORD *)v43 & 0xFFFFFFFFFFLL | (0xAAAAAB0000000000uLL
                                                              * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4));
            *(_DWORD *)(v43 + 36) = v51 & 0x1FFFFF | ((unsigned int)(v35 >> 24) << 21);
            v52 = *(_QWORD *)(v43 + 40);
            v116 = 0LL;
            v117 = v52;
            v53 = (v35 & 0xF800000000LL) << 20;
            v114 = 0LL;
            v115 = 0LL;
            v121 = 0LL;
            v122 = 0LL;
            v123 = 0LL;
            v54 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)(v43 + 40),
                    v53 | v52 & 0xF07FFFFFFFFFFFFFuLL,
                    v52);
            for ( *((_QWORD *)&v123 + 1) = v54; v117 != v54; *((_QWORD *)&v123 + 1) = v54 )
            {
              v117 = v54;
              v54 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)(v43 + 40),
                      v53 | v54 & 0xF07FFFFFFFFFFFFFuLL,
                      v54);
            }
          }
          if ( v46 == 0x3FFFFFFFFFLL )
          {
            *((_QWORD *)v109 + 3) = v35;
          }
          else
          {
            v55 = *(_QWORD *)(v42 + 24);
            v56 = (v35 & 0x7FFFF) << 40;
            v57 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)(v42 + 24),
                    v56 | v55 & 0xF80000FFFFFFFFFFuLL,
                    v55);
            if ( v55 != v57 )
            {
              do
              {
                v93 = v57;
                v57 = _InterlockedCompareExchange64(
                        (volatile signed __int64 *)(v42 + 24),
                        v56 | v57 & 0xF80000FFFFFFFFFFuLL,
                        v57);
              }
              while ( v93 != v57 );
            }
            *(_DWORD *)(v42 + 36) ^= (*(_DWORD *)(v42 + 36) ^ (v35 >> 19)) & 0x1FFFFF;
          }
        }
        else
        {
          v71 = v109;
          v72 = 0x3FFFFFFFFFLL;
          v73 = *((_QWORD *)v109 + 3);
          if ( v73 == 0x3FFFFFFFFFLL )
            *((_QWORD *)v109 + 2) = v35;
          else
            sub_1403385E0(
              48 * v73 - 0x220000000000LL,
              0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4));
          sub_1403385E0(BugCheckParameter2, v72);
          sub_1402393AC(v74, v73);
          *(_DWORD *)(BugCheckParameter2 + 36) ^= (*(_DWORD *)(BugCheckParameter2 + 36) ^ (v73 >> 19)) & 0x1FFFFF;
          *((_QWORD *)v71 + 3) = v35;
        }
      }
      goto LABEL_46;
    }
    v30 = v96;
    if ( (v96 & 0x800) != 0 )
      v25 = 1;
    sub_14024253C(BugCheckParameter2, v25);
  }
  else
  {
LABEL_46:
    v30 = v96;
  }
  if ( v100 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v100 + 72));
  if ( (_BYTE)v124 )
  {
    if ( BYTE8(v125) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v125 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      BYTE8(v125) = 0;
    }
    if ( (_BYTE)v127 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*((_QWORD *)&v126 + 1) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      LOBYTE(v127) = 0;
    }
    if ( BYTE8(v128) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v128 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      BYTE8(v128) = 0;
    }
    if ( (_BYTE)v130 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*((_QWORD *)&v129 + 1) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      LOBYTE(v130) = 0;
    }
    v31 = (volatile signed __int32 *)(v99 + 4);
    if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
    {
      sub_14063D8E0(v31, retaddr);
    }
    else
    {
      _InterlockedAnd(v31, 0xBFFFFFFF);
      _InterlockedDecrement(v31);
    }
    v32 = KeGetCurrentPrcb();
    v33 = *((_QWORD *)v32 + 4375);
    if ( v33 )
    {
      if ( *((_BYTE *)v32 + 32) <= 1u )
      {
        v94 = *(_DWORD *)(v33 + 24) - 1;
        *(_DWORD *)(v33 + 24) = v94;
        if ( !v94 )
          sub_140418E4C(v32);
      }
    }
  }
  else if ( v30 >= 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v99 + 8);
  }
  if ( (v2 & 4) != 0 )
    KeSetEvent((PRKEVENT)(v6 + 113), 0, 0);
  if ( v2 >= 0x10 )
    sub_14058E05C(0LL);
}
