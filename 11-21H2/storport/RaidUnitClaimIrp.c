/*
 * XREFs of RaidUnitClaimIrp @ 0x1C0004810
 * Callers:
 *     RaUnitStartIo @ 0x1C0004190 (RaUnitStartIo.c)
 *     RaUnitStartResetIo @ 0x1C0052F6C (RaUnitStartResetIo.c)
 * Callees:
 *     RaidUnitReenablePendingTimer @ 0x1C0005BE0 (RaidUnitReenablePendingTimer.c)
 *     TranslateToExtendedSrb @ 0x1C0020860 (TranslateToExtendedSrb.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     RaidSrbExGetBidirectionalData @ 0x1C004C4B8 (RaidSrbExGetBidirectionalData.c)
 *     RaidGetSystemAddressForMdl @ 0x1C004EC08 (RaidGetSystemAddressForMdl.c)
 *     McTemplateK0dud_EtwWriteTransfer @ 0x1C004FEDC (McTemplateK0dud_EtwWriteTransfer.c)
 *     StorpDataInBufferAllocateMdlAndLockPages @ 0x1C0056BE4 (StorpDataInBufferAllocateMdlAndLockPages.c)
 */

__int64 __fastcall RaidUnitClaimIrp(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v5; // rdi
  unsigned __int8 v6; // r13
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // r10
  __int64 v11; // rbx
  __int64 v12; // rcx
  char v13; // al
  __int64 v14; // r14
  __int64 v15; // r15
  unsigned int v16; // r10d
  __int64 v17; // r9
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // ecx
  __int64 v22; // r13
  bool v23; // zf
  int v24; // eax
  char v25; // al
  __int64 v26; // r8
  __int64 v27; // rdx
  unsigned int v28; // ecx
  __int64 v29; // r13
  char v30; // r11
  __int64 v31; // rdi
  char v32; // al
  unsigned int v33; // r9d
  int v34; // r15d
  __int64 v35; // r12
  unsigned int v36; // r14d
  __int64 v37; // r10
  __int64 v38; // rcx
  unsigned __int64 v39; // rdx
  __int64 v40; // r8
  int v41; // ecx
  __int64 v42; // rax
  char *v43; // rax
  int v44; // eax
  char v45; // al
  __int64 v46; // rdx
  int v47; // r13d
  unsigned __int8 v48; // bl
  __int64 v49; // rax
  __int64 v50; // r11
  __int64 v51; // r8
  __int64 v52; // rdx
  unsigned __int64 v53; // r9
  __int64 v54; // r10
  int v55; // edx
  __int64 v56; // rcx
  __int64 v57; // rbx
  __int64 v58; // rax
  unsigned int v59; // r14d
  __int64 v60; // rax
  ULONGLONG UnbiasedInterruptTime; // rbp
  __int64 v62; // r15
  __int64 v63; // rbx
  ULONG v64; // edx
  __int64 v65; // rdi
  int v66; // r14d
  _QWORD *v67; // rax
  __int64 v68; // rdx
  int v69; // ecx
  int v70; // r9d
  __int64 result; // rax
  unsigned int v72; // r11d
  __int64 v73; // rdx
  int v74; // edx
  __int64 v75; // rdx
  __int64 *v76; // rdi
  __int64 v77; // rcx
  _QWORD *v78; // rax
  __int64 v79; // rcx
  __int64 v80; // rax
  char *v81; // rdx
  unsigned int v82; // r12d
  __int64 v83; // r15
  __int64 v84; // r14
  char *v85; // rax
  char *v86; // rax
  __int64 v87; // rcx
  __int64 v88; // r9
  int v89; // ecx
  __int64 v90; // rcx
  unsigned __int64 v91; // r8
  __int64 v92; // r10
  __int64 v93; // r8
  unsigned __int8 v94; // cl
  __int64 v95; // rdx
  __int64 v96; // r9
  int v97; // ecx
  int v98; // ecx
  unsigned int v99; // ebx
  __int64 v100; // r8
  __int64 v101; // rcx
  unsigned __int64 v102; // r10
  int SystemAddressForMdl; // eax
  int v104; // r14d
  __int64 BidirectionalData; // rax
  struct _MDL *v106; // rcx
  unsigned __int8 v107; // [rsp+30h] [rbp-A8h]
  char v108; // [rsp+31h] [rbp-A7h]
  struct _PROCESSOR_NUMBER ProcNumber[2]; // [rsp+40h] [rbp-98h] BYREF
  char *v111; // [rsp+48h] [rbp-90h] BYREF
  __int64 v112; // [rsp+50h] [rbp-88h] BYREF
  __int64 v113; // [rsp+58h] [rbp-80h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-78h] BYREF
  __int128 v115; // [rsp+78h] [rbp-60h] BYREF

  v4 = *(_QWORD *)(a4 + 16);
  v5 = 0LL;
  *(_QWORD *)&ProcNumber[0].Group = 0LL;
  v6 = 0;
  v108 = 0;
  *(_QWORD *)&v115 = 0LL;
  v7 = 0LL;
  v8 = *(_QWORD *)(a2 + 184);
  v9 = a2;
  v113 = a4;
  v107 = 0;
  v11 = *(_QWORD *)(v8 + 8);
  v112 = 0LL;
  if ( *(_BYTE *)(v11 + 2) != 40 )
  {
    v14 = *(_QWORD *)(v11 + 48);
    v15 = *(_QWORD *)(v11 + 24);
    *(_BYTE *)(v11 + 6) = *(_BYTE *)(a1 + 97);
    *(_BYTE *)(v11 + 5) = *(_BYTE *)(a1 + 96);
    *(_BYTE *)(v11 + 7) = *(_BYTE *)(a1 + 98);
    v107 = *(_BYTE *)(v11 + 11);
    v80 = *(_QWORD *)(a1 + 24);
    if ( *(_BYTE *)(v80 + 442) == 1 )
    {
      v88 = *(_QWORD *)(v4 + 760);
      if ( !v88 )
      {
        *(_BYTE *)(v11 + 3) = 48;
        *(_DWORD *)(v11 + 64) = -1073741670;
        return 3221225626LL;
      }
      result = TranslateToExtendedSrb(
                 v88,
                 v11,
                 *(_DWORD *)(v4 + 744),
                 v88,
                 a3,
                 (*(_DWORD *)(*(_QWORD *)(v80 + 568) + 184LL) & 0x80) != 0);
      if ( (int)result < 0 )
      {
        *(_BYTE *)(v11 + 3) = 48;
        *(_DWORD *)(v11 + 64) = result;
        return result;
      }
      v22 = *(_QWORD *)(v4 + 760);
      *(_BYTE *)(v4 + 16) |= 0x40u;
      v9 = a2;
      *(_QWORD *)(v4 + 752) = v11;
      *(_QWORD *)&v115 = v11;
      v11 = v22;
      *(_QWORD *)&ProcNumber[0].Group = v22;
      v108 = 1;
      *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL) = v22;
    }
    else
    {
      v22 = 0LL;
    }
LABEL_14:
    v23 = StorEtwLoggingEnabled == 0;
    *(_QWORD *)(v4 + 160) = v9;
    *(_QWORD *)(v4 + 168) = v11;
    *(_QWORD *)(v4 + 224) = a1;
    *(_QWORD *)(v4 + 104) = *(_QWORD *)(v9 + 8);
    *(_QWORD *)(v4 + 136) = v5;
    if ( !v23 )
    {
      IoGetActivityIdIrp(v9, v4 + 728);
      v9 = a2;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4532LL) & 1) != 0 )
    {
      if ( *(_BYTE *)(v11 + 2) == 40 )
        v24 = *(_DWORD *)(v22 + 96);
      else
        v24 = *(_DWORD *)(v11 + 56);
      *(_DWORD *)(v4 + 18) = v24;
    }
    else
    {
      *(_BYTE *)(v4 + 20) = -1;
      *(_WORD *)(v4 + 18) = -1;
    }
    v25 = *(_BYTE *)(v4 + 16);
    *(_DWORD *)(v4 + 24) = 0;
    *(_QWORD *)(v4 + 176) = v14;
    *(_BYTE *)(v4 + 16) = v25 & 0xE3 | 4;
    *(_QWORD *)(v4 + 184) = v15;
    *(_QWORD *)(v4 + 192) = v7;
    if ( *(_BYTE *)(v11 + 2) == 40 )
    {
      v26 = v113;
      *(_QWORD *)(v22 + 96) = v4;
      *(_DWORD *)(v22 + 32) = *(_DWORD *)v26;
      v27 = *(_QWORD *)(v26 + 8);
      v28 = (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 484LL) + 7) & 0xFFFFFFF8;
      if ( *(_BYTE *)(v11 + 2) == 40 )
      {
        if ( v28 )
          *(_QWORD *)(v11 + 104) = v27;
LABEL_24:
        v29 = *(_QWORD *)(a1 + 24);
        v30 = 0;
        if ( !*(_QWORD *)(v9 + 8) )
          goto LABEL_115;
        v31 = *(_QWORD *)(*(_QWORD *)(v9 + 184) + 8LL);
        v32 = *(_BYTE *)(v31 + 2);
        if ( v32 != 40 )
        {
          v33 = *(unsigned __int8 *)(v31 + 2);
          v34 = *(_DWORD *)(v31 + 12);
          v35 = *(_QWORD *)(v31 + 24);
          v111 = *(char **)(v31 + 48);
          if ( !v32 )
            v30 = *(_BYTE *)(v31 + 72);
          goto LABEL_36;
        }
        v33 = *(_DWORD *)(v31 + 20);
        v34 = *(_DWORD *)(v31 + 24);
        v35 = *(_QWORD *)(v31 + 64);
        v111 = *(char **)(v31 + 96);
        if ( v33 )
          goto LABEL_36;
        v36 = *(_DWORD *)(v31 + 56);
        v37 = 0LL;
        if ( !v36 )
        {
LABEL_177:
          v9 = a2;
          goto LABEL_36;
        }
        while ( 1 )
        {
          v38 = *(unsigned int *)(v31 + 4 * v37 + 120);
          if ( (unsigned int)v38 < 0x80 )
            goto LABEL_176;
          v39 = *(unsigned int *)(v31 + 16);
          if ( (unsigned int)v38 > (unsigned int)v39 )
            goto LABEL_176;
          v40 = (unsigned int)v38;
          v41 = *(_DWORD *)(v38 + v31);
          if ( v41 == 64 )
          {
            if ( v40 + 40 <= v39 )
            {
              if ( !*(_BYTE *)(v40 + v31 + 10) )
                goto LABEL_177;
LABEL_33:
              v42 = v31 + 24;
              goto LABEL_34;
            }
            goto LABEL_176;
          }
          v98 = v41 - 65;
          if ( v98 )
            break;
          if ( v40 + 56 <= v39 )
          {
            if ( !*(_BYTE *)(v40 + v31 + 10) )
              goto LABEL_177;
            goto LABEL_33;
          }
LABEL_176:
          v37 = (unsigned int)(v37 + 1);
          if ( (unsigned int)v37 >= v36 )
            goto LABEL_177;
        }
        if ( v98 != 1 || v40 + 40 > v39 )
          goto LABEL_176;
        if ( !*(_DWORD *)(v40 + v31 + 12) )
          goto LABEL_177;
        v42 = v31 + 32;
LABEL_34:
        v9 = a2;
        v43 = (char *)(v40 + v42);
        if ( v43 )
          v30 = *v43;
LABEL_36:
        if ( (v34 & 0xC0) == 0 || !v35 && !*((_QWORD *)v111 + 13) )
        {
LABEL_115:
          v47 = 1;
          goto LABEL_49;
        }
        if ( v33 > 0x17 || (v44 = 8389124, !_bittest(&v44, v33)) )
        {
          v45 = *(_BYTE *)(v29 + 433);
          if ( v45 != 3 && ((unsigned __int8)(v45 - 1) > 1u || !v33 && ((v30 - 8) & 0x5D) == 0) )
          {
            if ( !*(_BYTE *)(v29 + 4242) )
              goto LABEL_115;
            if ( *(_BYTE *)(v31 + 2) != 40 )
            {
              *(_QWORD *)(v31 + 24) = 0LL;
              goto LABEL_115;
            }
            v46 = 0LL;
            if ( (*(_BYTE *)(v31 + 24) & 0xC0) == 0xC0 )
            {
              v99 = *(_DWORD *)(v31 + 56);
              v100 = 0LL;
              if ( v99 )
              {
                while ( 1 )
                {
                  v101 = *(unsigned int *)(v31 + 4 * v100 + 120);
                  if ( (unsigned int)v101 >= 0x80 )
                  {
                    v102 = *(unsigned int *)(v31 + 16);
                    if ( (unsigned int)v101 <= (unsigned int)v102 && *(_DWORD *)(v101 + v31) == 1 && v101 + 24 <= v102 )
                      break;
                  }
                  v100 = (unsigned int)(v100 + 1);
                  if ( (unsigned int)v100 >= v99 )
                    goto LABEL_185;
                }
                v46 = v101 + v31;
LABEL_185:
                v9 = a2;
              }
            }
            *(_QWORD *)(v31 + 64) = 0LL;
            v47 = 1;
            if ( v46 )
              *(_QWORD *)(v46 + 16) = 0LL;
LABEL_49:
            v48 = v107;
            if ( v107 <= *(_BYTE *)(a1 + 1732) )
              v48 = *(_BYTE *)(a1 + 1732);
            v49 = *(_QWORD *)(v4 + 168);
            v50 = *(_QWORD *)(v113 + 24);
            if ( *(_BYTE *)(v49 + 2) == 40 )
            {
              if ( *(_DWORD *)(v49 + 20) )
                goto LABEL_62;
              v51 = 0LL;
              if ( !*(_DWORD *)(v49 + 56) )
                goto LABEL_62;
              while ( 1 )
              {
                v52 = *(unsigned int *)(v49 + 4 * v51 + 120);
                if ( (unsigned int)v52 < 0x80 )
                  goto LABEL_60;
                v53 = *(unsigned int *)(v49 + 16);
                if ( (unsigned int)v52 > (unsigned int)v53 )
                  goto LABEL_60;
                v54 = (unsigned int)v52;
                v55 = *(_DWORD *)(v52 + v49);
                if ( v55 != 64 )
                  break;
                if ( v54 + 40 <= v53 )
                  goto LABEL_58;
LABEL_60:
                v51 = (unsigned int)(v51 + 1);
                if ( (unsigned int)v51 >= *(_DWORD *)(v49 + 56) )
                {
                  v9 = a2;
                  goto LABEL_62;
                }
              }
              v74 = v55 - 65;
              if ( v74 )
              {
                if ( v74 != 1 || v54 + 40 > v53 )
                  goto LABEL_60;
                *(_QWORD *)(v4 + 200) = *(_QWORD *)(v54 + v49 + 24);
                *(_BYTE *)(v4 + 208) = *(_BYTE *)(v54 + v49 + 9);
                *(_QWORD *)(v54 + v49 + 24) = v50;
              }
              else
              {
                if ( v54 + 56 > v53 )
                  goto LABEL_60;
LABEL_58:
                *(_QWORD *)(v4 + 200) = *(_QWORD *)(v54 + v49 + 16);
                *(_BYTE *)(v4 + 208) = *(_BYTE *)(v54 + v49 + 9);
                *(_QWORD *)(v54 + v49 + 16) = v50;
              }
              *(_BYTE *)(v54 + v49 + 9) = v48;
              *(_BYTE *)(v4 + 16) |= 0x20u;
              goto LABEL_60;
            }
            *(_QWORD *)(v4 + 200) = *(_QWORD *)(v49 + 32);
            *(_BYTE *)(v4 + 208) = *(_BYTE *)(v49 + 11);
            *(_QWORD *)(v49 + 32) = v50;
            *(_BYTE *)(v49 + 11) = v48;
            *(_BYTE *)(v4 + 16) |= 0x20u;
LABEL_62:
            v56 = *(_QWORD *)(*(_QWORD *)(v9 + 184) + 8LL);
            if ( *(_BYTE *)(v56 + 2) == 40 )
              v57 = *(_QWORD *)(v56 + 96);
            else
              v57 = *(_QWORD *)(v56 + 48);
            v58 = *(_QWORD *)(v57 + 168);
            if ( *(_BYTE *)(v58 + 2) == 40 )
              v59 = *(_DWORD *)(v58 + 40);
            else
              v59 = *(_DWORD *)(v58 + 20);
            if ( v59 <= 2 && !*(_BYTE *)(a1 + 3232) )
              v59 = 3;
            v60 = *(_QWORD *)(a1 + 24);
            if ( v60 && *(_QWORD *)(v60 + 4776) || (**(_BYTE **)(a1 + 504) & 1) != 0 )
              UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
            else
              UnbiasedInterruptTime = 0LL;
            *(_BYTE *)(v57 + 16) |= 2u;
            v62 = *(_QWORD *)(a1 + 504);
            memset(&LockHandle, 0, sizeof(LockHandle));
            ProcNumber[0] = 0;
            v63 = v57 + 48;
            KeGetCurrentProcessorNumberEx(ProcNumber);
            v64 = KeGetProcessorIndexFromNumber(ProcNumber) % *(_DWORD *)(v62 + 8);
            v65 = v62 + ((v64 + 1LL) << 6);
            if ( v59 - 1 > 0xFFFFFFFC )
              v59 = 10;
            *(_DWORD *)(v63 + 36) = v64;
            v66 = 2 * v59;
            *(_QWORD *)(v63 + 40) = UnbiasedInterruptTime;
            *(_DWORD *)(v63 + 32) = v66;
            KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v65 + 40), &LockHandle);
            v67 = *(_QWORD **)(v65 + 8);
            if ( *v67 == v65 )
            {
              *(_QWORD *)v63 = v65;
              *(_QWORD *)(v63 + 8) = v67;
              *v67 = v63;
              *(_QWORD *)(v65 + 8) = v63;
              if ( *(_DWORD *)(v65 + 48) >= 0xFFFFFFFE )
                *(_DWORD *)(v65 + 48) = v66;
              if ( (*(_BYTE *)v62 & 1) == 0 )
              {
                *(_DWORD *)(v63 + 48) &= ~1u;
                goto LABEL_78;
              }
              v75 = *(_QWORD *)(v65 + 24);
              v76 = (__int64 *)(v65 + 16);
              if ( (__int64 *)v75 != v76 )
              {
                while ( *(_QWORD *)(v63 + 40) + (unsigned __int64)(unsigned int)(5000000 * *(_DWORD *)(v63 + 32)) < *(_QWORD *)(v75 + 24) + (unsigned __int64)(unsigned int)(5000000 * *(_DWORD *)(v75 + 16)) )
                {
                  v75 = *(_QWORD *)(v75 + 8);
                  if ( (__int64 *)v75 == v76 )
                    goto LABEL_100;
                }
                *(_QWORD *)(v63 + 16) = *(_QWORD *)v75;
                *(_QWORD *)(*(_QWORD *)v75 + 8LL) = v63 + 16;
                *(_QWORD *)v75 = v63 + 16;
                *(_DWORD *)(v63 + 48) |= 1u;
                *(_QWORD *)(v63 + 24) = v75;
LABEL_78:
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                if ( StorEtwLoggingEnabled )
                {
                  v115 = 0LL;
                  IoGetActivityIdIrp(a2, &v115);
                  if ( byte_1C00799E2 < 0 )
                    McTemplateK0dud_EtwWriteTransfer(v69, v68, (unsigned int)&v115, v70, 3);
                }
                if ( *(char *)(a1 + 449) < 0 || *(_QWORD *)(*(_QWORD *)(a1 + 24) + 4832LL) )
                {
                  if ( (*(_DWORD *)(a1 + 456) & 4) == 0 )
                    v47 = (unsigned __int8)_interlockedbittestandset((volatile signed __int32 *)(a1 + 456), 2u);
                  if ( !*(_BYTE *)(a1 + 3260) )
                  {
                    if ( !v47 )
                      RaidUnitReenablePendingTimer(a1, 0LL);
                    return 0LL;
                  }
                }
                else if ( !*(_BYTE *)(a1 + 3260) )
                {
                  return 0LL;
                }
                LOBYTE(v68) = 1;
                RaidUnitReenablePendingTimer(a1, v68);
                *(_BYTE *)(a1 + 3260) = 0;
                return 0LL;
              }
LABEL_100:
              v77 = *v76;
              v78 = (_QWORD *)(v63 + 16);
              if ( *(__int64 **)(*v76 + 8) == v76 )
              {
                *v78 = v77;
                *(_QWORD *)(v63 + 24) = v76;
                *(_QWORD *)(v77 + 8) = v78;
                *v76 = (__int64)v78;
                *(_DWORD *)(v63 + 48) |= 1u;
                goto LABEL_78;
              }
            }
            __fastfail(3u);
          }
        }
        v81 = v111;
        v82 = 16;
        if ( !*(_BYTE *)(v9 + 64) )
          v82 = 32;
        v83 = *((_QWORD *)v111 + 13);
        v47 = 1;
        v84 = *((_QWORD *)v111 + 23);
        if ( (*(_BYTE *)(v83 + 10) & 5) != 0 )
        {
          v85 = *(char **)(v83 + 24);
        }
        else
        {
          v85 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v83, 0, MmCached, 0LL, 0, v82 | 0x40000000);
          v81 = v111;
          v9 = a2;
        }
        if ( v85 )
        {
          if ( v84 )
            v84 = v84 - *(unsigned int *)(v83 + 44) - *(_QWORD *)(v83 + 32);
          v86 = &v85[v84];
          v23 = *(_BYTE *)(v31 + 2) == 40;
          v111 = v86;
          if ( v23 )
            *(_QWORD *)(v31 + 64) = v86;
          else
            *(_QWORD *)(v31 + 24) = v86;
          v87 = *((_QWORD *)v81 + 17);
          if ( !v87 )
            goto LABEL_49;
          SystemAddressForMdl = RaidGetSystemAddressForMdl(v87, *((_QWORD *)v81 + 24), v82, &v111);
          v104 = SystemAddressForMdl;
          if ( SystemAddressForMdl >= 0 )
          {
            BidirectionalData = RaidSrbExGetBidirectionalData(v31);
            *(_QWORD *)(BidirectionalData + 16) = v111;
          }
          v9 = a2;
          if ( v104 != -1073741670 )
            goto LABEL_49;
        }
        if ( *(_BYTE *)(v11 + 2) == 40 )
        {
          if ( !v108 )
          {
            *(_DWORD *)(*(_QWORD *)&ProcNumber[0].Group + 44LL) = -1073741670;
            goto LABEL_196;
          }
        }
        else if ( !v108 )
        {
          *(_QWORD *)(v11 + 48) = *(_QWORD *)(v4 + 176);
LABEL_195:
          *(_DWORD *)(v11 + 64) = -1073741670;
LABEL_196:
          v106 = *(struct _MDL **)(v4 + 136);
          if ( v106 )
          {
            MmUnlockPages(v106);
            IoFreeMdl(*(PMDL *)(v4 + 136));
            *(_QWORD *)(v4 + 136) = 0LL;
          }
          return 3221225626LL;
        }
        v11 = v115;
        *(_QWORD *)(*(_QWORD *)(v9 + 184) + 8LL) = v115;
        goto LABEL_195;
      }
    }
    else
    {
      v79 = v113;
      *(_QWORD *)(v11 + 48) = v4;
      *(_BYTE *)(v11 + 8) = *(_BYTE *)v79;
      v27 = *(_QWORD *)(v79 + 8);
      v28 = (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 484LL) + 7) & 0xFFFFFFF8;
    }
    if ( v28 )
      *(_QWORD *)(v11 + 56) = v27;
    goto LABEL_24;
  }
  v12 = v11 + *(unsigned int *)(v11 + 52);
  *(_QWORD *)&ProcNumber[0].Group = v11;
  *(_WORD *)v12 = 1;
  *(_DWORD *)(v12 + 4) = 4;
  *(_BYTE *)(v12 + 8) = *(_BYTE *)(a1 + 96);
  *(_BYTE *)(v12 + 9) = *(_BYTE *)(a1 + 97);
  *(_BYTE *)(v12 + 10) = *(_BYTE *)(a1 + 98);
  v13 = *(_BYTE *)(v11 + 2);
  v14 = *(_QWORD *)(v11 + 80);
  v15 = *(_QWORD *)(v11 + 64);
  if ( v13 == 40 && !*(_DWORD *)(v11 + 20) )
  {
    v16 = *(_DWORD *)(v11 + 56);
    v17 = 0LL;
    if ( !v16 )
      goto LABEL_11;
    while ( 1 )
    {
      v18 = *(unsigned int *)(v11 + 4 * v17 + 120);
      if ( (unsigned int)v18 >= 0x80 )
      {
        v19 = *(unsigned int *)(v11 + 16);
        if ( (unsigned int)v18 <= (unsigned int)v19 )
        {
          v20 = (unsigned int)v18;
          v21 = *(_DWORD *)(v18 + v11);
          if ( v21 == 64 )
          {
            if ( v20 + 40 <= v19 )
              goto LABEL_9;
          }
          else
          {
            v89 = v21 - 65;
            if ( v89 )
            {
              if ( v89 == 1 && v20 + 40 <= v19 )
              {
LABEL_9:
                v6 = *(_BYTE *)(v20 + v11 + 9);
                v107 = v6;
                goto LABEL_11;
              }
            }
            else if ( v20 + 56 <= v19 )
            {
              goto LABEL_9;
            }
          }
        }
      }
      v17 = (unsigned int)(v17 + 1);
      if ( (unsigned int)v17 >= v16 )
        goto LABEL_11;
    }
  }
  v107 = 0;
  if ( v13 != 40 )
  {
LABEL_13:
    v22 = v11;
    goto LABEL_14;
  }
LABEL_11:
  if ( (*(_BYTE *)(v11 + 24) & 0xC0) != 0xC0 )
    goto LABEL_12;
  v72 = *(_DWORD *)(v11 + 56);
  v73 = 0LL;
  if ( !v72 )
    goto LABEL_12;
  while ( 1 )
  {
    v90 = *(unsigned int *)(v11 + 4 * v73 + 120);
    if ( (unsigned int)v90 >= 0x80 )
    {
      v91 = *(unsigned int *)(v11 + 16);
      if ( (unsigned int)v90 <= (unsigned int)v91 )
      {
        v92 = v90 + v11;
        if ( *(_DWORD *)(v90 + v11) == 1 && v90 + 24 <= v91 )
          break;
      }
    }
    v73 = (unsigned int)(v73 + 1);
    if ( (unsigned int)v73 >= v72 )
      goto LABEL_12;
  }
  if ( !v92 || (v93 = *(_QWORD *)(v92 + 16)) == 0 )
  {
LABEL_12:
    v9 = a2;
    goto LABEL_13;
  }
  v94 = 0;
  while ( 1 )
  {
    v95 = *(unsigned int *)(v11 + 4LL * v94 + 120);
    if ( (unsigned int)v95 >= 0x80 && (unsigned int)v95 < *(_DWORD *)(v11 + 16) && *(_DWORD *)(v95 + v11) == 160 )
      break;
    if ( ++v94 >= v72 )
    {
      v107 = v6;
      goto LABEL_159;
    }
  }
  v5 = *(_QWORD *)(v95 + v11 + 8);
  if ( v5 )
  {
    v7 = *(_QWORD *)(v92 + 16);
    v112 = *(_QWORD *)(v95 + v11 + 8);
    goto LABEL_12;
  }
LABEL_159:
  v96 = a2;
  v97 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 24LL);
  if ( v97 == 315412 || v97 == 315464 )
    v96 = *(unsigned __int8 *)(a2 + 64);
  else
    LOBYTE(v96) = 0;
  v7 = *(_QWORD *)(v92 + 16);
  result = StorpDataInBufferAllocateMdlAndLockPages(&v112, *(unsigned int *)(v92 + 8), v93, v96);
  if ( (int)result >= 0 )
  {
    v5 = v112;
    goto LABEL_12;
  }
  return result;
}
