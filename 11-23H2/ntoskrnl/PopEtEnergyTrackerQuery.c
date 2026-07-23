/*
 * XREFs of PopEtEnergyTrackerQuery @ 0x1407B86AC
 * Callers:
 *     NtPowerInformation @ 0x140784110 (NtPowerInformation.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     KeQueryTimelineBitmapTime @ 0x1402C0AF4 (KeQueryTimelineBitmapTime.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402E76F4 (KiQueryUnbiasedInterruptTime.c)
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E6330 (ObpReferenceObjectByHandleWithTag.c)
 *     PopEtDataSectionCopyData @ 0x1407B9394 (PopEtDataSectionCopyData.c)
 *     PopEtDataSectionReserve @ 0x1407B93E0 (PopEtDataSectionReserve.c)
 *     PopEtDataSectionStart @ 0x1407B9430 (PopEtDataSectionStart.c)
 *     PopEtEnergyTrackerCleanupAggregates @ 0x1407B9450 (PopEtEnergyTrackerCleanupAggregates.c)
 *     PsEnumProcesses @ 0x1407CF79C (PsEnumProcesses.c)
 */

__int64 __fastcall PopEtEnergyTrackerQuery(ULONG_PTR a1, __int64 a2, unsigned int a3)
{
  char *v5; // rbx
  char v6; // r15
  int v7; // esi
  unsigned int v8; // r13d
  unsigned int v9; // esi
  unsigned int v10; // r15d
  _QWORD *v11; // r10
  _DWORD *v12; // r11
  int v13; // r9d
  _QWORD *v14; // r8
  __int64 v15; // rdx
  _QWORD **v16; // rdx
  unsigned __int64 v17; // r8
  unsigned __int16 *v18; // rdx
  __int64 v19; // rax
  int v20; // esi
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  char *v24; // r13
  __m128i v25; // xmm0
  __int64 v26; // rsi
  __int64 v27; // r14
  int v28; // ebx
  char *v29; // r11
  char *v30; // r10
  unsigned __int8 *v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rax
  int v35; // r13d
  int v36; // r12d
  int v37; // r15d
  int v38; // ecx
  __int64 v39; // rdx
  __int64 *v40; // rdx
  unsigned __int64 v41; // r8
  __int64 v42; // rbx
  __int64 v43; // rax
  int v44; // ecx
  _DWORD *v45; // r11
  __int64 v46; // rdx
  int TimelineBitmapTime; // eax
  __int64 v48; // r11
  __int64 v49; // rdx
  int v50; // r9d
  int v51; // r9d
  int v52; // r9d
  int v53; // r9d
  int v54; // r9d
  int v55; // r9d
  int v56; // eax
  __int64 i; // r10
  __int64 v58; // rdx
  __int64 *j; // rdx
  int v61; // [rsp+40h] [rbp-158h]
  __int64 v62; // [rsp+40h] [rbp-158h]
  size_t Size; // [rsp+48h] [rbp-150h] BYREF
  PVOID Object; // [rsp+50h] [rbp-148h] BYREF
  unsigned __int8 *v65; // [rsp+58h] [rbp-140h]
  int v66; // [rsp+60h] [rbp-138h]
  int v67; // [rsp+64h] [rbp-134h]
  __m128i v68; // [rsp+68h] [rbp-130h] BYREF
  __int128 v69; // [rsp+78h] [rbp-120h] BYREF
  __int128 v70; // [rsp+88h] [rbp-110h]
  char *v71; // [rsp+98h] [rbp-100h]
  __int64 v72; // [rsp+A0h] [rbp-F8h]
  _QWORD *v73; // [rsp+A8h] [rbp-F0h]
  __int128 v74; // [rsp+B0h] [rbp-E8h] BYREF
  __int128 v75; // [rsp+C0h] [rbp-D8h]
  __int128 v76; // [rsp+D0h] [rbp-C8h] BYREF
  __int128 v77; // [rsp+E0h] [rbp-B8h]
  __int64 v78; // [rsp+F0h] [rbp-A8h]
  __int64 v79; // [rsp+F8h] [rbp-A0h]
  __int64 *v80; // [rsp+100h] [rbp-98h]
  __int128 v81; // [rsp+108h] [rbp-90h] BYREF
  __int128 v82; // [rsp+118h] [rbp-80h]
  __int64 v83; // [rsp+128h] [rbp-70h]
  __int64 v84; // [rsp+138h] [rbp-60h] BYREF
  __int64 v85; // [rsp+140h] [rbp-58h]
  __int128 v86; // [rsp+148h] [rbp-50h] BYREF
  __int128 v87; // [rsp+158h] [rbp-40h]

  v5 = 0LL;
  Object = 0LL;
  v81 = 0LL;
  v82 = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  v6 = 0;
  v74 = 0LL;
  v75 = 0LL;
  v86 = 0LL;
  v87 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  if ( !PopEtGlobals )
  {
    v7 = -1073741637;
    goto LABEL_82;
  }
  v7 = ObpReferenceObjectByHandleWithTag(
         a1,
         1,
         *(_QWORD *)(PopEtGlobals + 32),
         KeGetCurrentThread()->PreviousMode,
         0x74456F50u,
         &Object,
         0LL,
         0LL);
  v5 = (char *)Object;
  if ( v7 >= 0 )
  {
    v86 = 2uLL;
    v87 = (unsigned __int64)Object;
    v7 = PsEnumProcesses(PopEtProcessEnumSnapshotCallback, &v86);
    if ( v7 >= 0 )
    {
      PopAcquireRwLockExclusive((ULONG_PTR)(v5 + 16));
      v8 = *((_DWORD *)v5 + 12);
      v9 = 0;
      v10 = 44;
      v11 = 0LL;
      while ( 1 )
      {
        v12 = v5 + 52;
        if ( v11 )
        {
          v13 = *v12 >> 5;
          v83 = v11[1] & (-1LL << (*v12 & 0x1F));
          v14 = v5 + 56;
          v15 = *((_QWORD *)v5 + 7)
              + 8LL
              * ((37
                * (BYTE6(v83)
                 + 37
                 * (BYTE5(v83)
                  + 37
                  * (BYTE4(v83)
                   + 37 * (BYTE3(v83) + 37 * (BYTE2(v83) + 37 * (BYTE1(v83) + 37 * ((unsigned __int8)v83 + 11623883)))))))
                + HIBYTE(v83)) & (unsigned int)(v13 - 1));
        }
        else
        {
          v14 = v5 + 56;
          v11 = (_QWORD *)*((_QWORD *)v5 + 7);
          v15 = (__int64)v11;
        }
        if ( !v11 )
          goto LABEL_8;
        if ( (*v11 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
          v5 = (char *)Object;
        v11 = (_QWORD *)*v11;
        if ( ((unsigned __int8)v11 & 1) != 0 )
        {
LABEL_8:
          v16 = (_QWORD **)(v15 + 8);
          v17 = *v14 + 8 * ((unsigned __int64)(unsigned int)*v12 >> 5);
          while ( (unsigned __int64)v16 < v17 )
          {
            v11 = *v16;
            if ( ((unsigned __int8)*v16 & 1) == 0 )
              goto LABEL_13;
            ++v16;
          }
          v11 = 0LL;
        }
LABEL_13:
        if ( !v11 )
          break;
        v18 = (unsigned __int16 *)v11[2];
        if ( v9 >= 0x10000000 )
        {
          v7 = -1073741619;
          goto LABEL_81;
        }
        v10 += v18[43];
        v9 += v18[41] + v18[42] + v18[40];
        v19 = v11[3];
        if ( v19 )
          v9 += ((unsigned int)(*(_QWORD *)(v19 + 24) >> 16) >> 1) & 0x1FFFFFFF;
      }
      LODWORD(Size) = 72;
      v76 = 0LL;
      v77 = 0LL;
      HIDWORD(v76) = 104;
      LODWORD(v77) = 8;
      PopEtDataSectionReserve(&v76, v8, &Size);
      v81 = 0LL;
      v82 = 0LL;
      HIDWORD(v81) = 432;
      LODWORD(v82) = 8;
      PopEtDataSectionReserve(&v81, v8, &Size);
      v74 = 0LL;
      v75 = 0LL;
      HIDWORD(v74) = 1;
      LODWORD(v75) = 4;
      PopEtDataSectionReserve(&v74, v10, &Size);
      v69 = 0LL;
      v70 = 0LL;
      HIDWORD(v69) = 2;
      LODWORD(v70) = 2;
      PopEtDataSectionReserve(&v69, v9, &Size);
      v20 = Size;
      if ( (unsigned int)Size > a3 || (unsigned int)Size >= 0x7FFFFFFF )
      {
        if ( a3 >= 0xC )
        {
          *(_QWORD *)a2 = 0LL;
          *(_DWORD *)a2 = 2097171;
          *(_DWORD *)(a2 + 8) = v20;
        }
        v7 = -1073741789;
        goto LABEL_81;
      }
      memset((void *)a2, 0, (unsigned int)Size);
      PopEtDataSectionStart(&v76, a2);
      PopEtDataSectionStart(&v81, v21);
      PopEtDataSectionStart(&v74, v22);
      PopEtDataSectionStart(&v69, v23);
      v83 = a2;
      *(_DWORD *)a2 = 2097171;
      *(_DWORD *)(a2 + 4) = 72;
      *(_DWORD *)(a2 + 8) = v20;
      *(_DWORD *)(a2 + 12) = *((_DWORD *)v5 + 150);
      *(_DWORD *)(a2 + 24) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      *(_DWORD *)(a2 + 36) = v76;
      *(_DWORD *)(a2 + 40) = v8;
      *(_DWORD *)(a2 + 56) = 1048680;
      *(_DWORD *)(a2 + 52) = DWORD1(v75);
      *(_WORD *)(a2 + 60) = 12;
      v24 = (char *)Object;
      PopEtDataSectionCopyData(&v74, (char *)Object + 32, 12LL);
      *(_DWORD *)(a2 + 44) = DWORD1(v75);
      PopEtDataSectionCopyData(&v74, v24 + 604, 16LL);
      v25 = *(__m128i *)(v24 + 620);
      v68 = v25;
      v68.m128i_i32[0] = *((_DWORD *)v24 + 151) + _mm_cvtsi128_si32(v25);
      v68.m128i_i32[1] = *((_DWORD *)v24 + 152) + v25.m128i_i32[1];
      v68.m128i_i32[2] = *((_DWORD *)v24 + 153) + v25.m128i_i32[2];
      v68.m128i_i32[3] = *((_DWORD *)v24 + 154) + v25.m128i_i32[3];
      *(_DWORD *)(a2 + 48) = DWORD1(v75);
      PopEtDataSectionCopyData(&v74, &v68, 16LL);
      v26 = 0LL;
      v27 = *((_QWORD *)&v77 + 1);
      while ( 1 )
      {
        v28 = 314159;
        v29 = v24 + 48;
        v30 = v24 + 48;
        v71 = v24 + 48;
        if ( !v26 )
        {
          v39 = *((_QWORD *)v24 + 7);
          v73 = (_QWORD *)v39;
          v26 = v39;
          v72 = v39;
          goto LABEL_30;
        }
        v72 = v26;
        v33 = *(_QWORD *)(v26 + 8) & (-1LL << (*((_DWORD *)v24 + 13) & 0x1F));
        LODWORD(Size) = *((_DWORD *)v24 + 13) >> 5;
        v84 = v33;
        v31 = (unsigned __int8 *)&v84;
        v65 = (unsigned __int8 *)&v84;
        v32 = 8LL;
        v78 = 8LL;
        LODWORD(v33) = 314159;
        v34 = 314159LL;
        v61 = 314159;
        v79 = 314159LL;
        v35 = 314159;
        v36 = 314159;
        v37 = 314159;
        v38 = 314159;
        while ( v32 >= 8 )
        {
          v33 = v31[7]
              + 37
              * (v31[6]
               + 37 * (v31[5] + 37 * (v31[4] + 37 * (v31[3] + 37 * (v31[2] + 37 * (v31[1] + 37 * (*v31 + 37 * v34)))))));
          v34 = v33;
          v31 += 8;
          v65 = v31;
          v32 -= 8LL;
          v78 = v32;
          v61 = v33;
          v79 = v33;
          v35 = v33;
          v36 = v33;
          v37 = v33;
          v28 = v33;
          v38 = v33;
        }
        if ( v32 >= 1 )
        {
          v50 = v32 - 1;
          if ( !v50 )
            goto LABEL_66;
          v51 = v50 - 1;
          if ( !v51 )
            goto LABEL_65;
          v52 = v51 - 1;
          if ( !v52 )
            goto LABEL_64;
          v53 = v52 - 1;
          if ( !v53 )
            goto LABEL_63;
          v54 = v53 - 1;
          if ( !v54 )
            goto LABEL_62;
          v55 = v54 - 1;
          if ( !v55 )
          {
            v56 = v79;
LABEL_61:
            v35 = *v31++ + 37 * v56;
            v65 = v31;
LABEL_62:
            v36 = *v31++ + 37 * v35;
            v65 = v31;
LABEL_63:
            v37 = *v31++ + 37 * v36;
            v65 = v31;
LABEL_64:
            v28 = *v31++ + 37 * v37;
            v65 = v31;
LABEL_65:
            v38 = *v31++ + 37 * v28;
            v65 = v31;
LABEL_66:
            LODWORD(v33) = *v31 + 37 * v38;
            v65 = v31 + 1;
            goto LABEL_29;
          }
          if ( v55 == 1 )
          {
            v56 = 37 * v61 + *v31++;
            v65 = v31;
            goto LABEL_61;
          }
        }
LABEL_29:
        v39 = *((_QWORD *)v29 + 1) + 8LL * ((unsigned int)v33 & ((_DWORD)Size - 1));
        v73 = (_QWORD *)v39;
LABEL_30:
        v80 = 0LL;
        if ( !v26 )
          goto LABEL_31;
        if ( (*(_QWORD *)v26 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
        {
          v27 = *((_QWORD *)&v77 + 1);
          v39 = (__int64)v73;
          v26 = v72;
          v30 = v71;
        }
        if ( v26 && (v26 = *(_QWORD *)v26, (v26 & 1) == 0) )
        {
LABEL_35:
          v72 = v26;
        }
        else
        {
LABEL_31:
          v40 = (__int64 *)(v39 + 8);
          v41 = *((_QWORD *)v30 + 1) + 8 * ((unsigned __int64)*((unsigned int *)v30 + 1) >> 5);
          while ( 1 )
          {
            v80 = v40;
            if ( (unsigned __int64)v40 >= v41 )
              break;
            v26 = *v40;
            if ( (*v40 & 1) == 0 )
            {
              v73 = v40;
              goto LABEL_35;
            }
            ++v40;
          }
          v26 = 0LL;
        }
        if ( !v26 )
        {
          v66 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          v67 = KiQueryUnbiasedInterruptTime() / 0x2710uLL;
          v85 = MEMORY[0xFFFFF78000000014];
          v44 = v66;
          v45 = Object;
          v46 = v83;
          *(_DWORD *)(v83 + 16) = v66 - *((_DWORD *)Object + 148);
          *(_DWORD *)(v46 + 20) = v67 - v45[149];
          *(_DWORD *)(v46 + 28) = v44;
          TimelineBitmapTime = KeQueryTimelineBitmapTime();
          *(_DWORD *)(v49 + 32) = TimelineBitmapTime;
          *(_QWORD *)(v49 + 64) = v85;
          for ( i = 0LL; ; *(_DWORD *)(i + 484) &= ~0x80000000 )
          {
            if ( i )
            {
              v62 = *(_QWORD *)(i + 8) & (-1LL << (*(_DWORD *)(v48 + 68) & 0x1F));
              v58 = *(_QWORD *)(v48 + 72)
                  + 8LL
                  * ((37
                    * (BYTE6(v62)
                     + 37
                     * (BYTE5(v62)
                      + 37
                      * (BYTE4(v62)
                       + 37
                       * (BYTE3(v62) + 37 * (BYTE2(v62) + 37 * (BYTE1(v62) + 37 * ((unsigned __int8)v62 + 11623883)))))))
                    + HIBYTE(v62)) & (unsigned int)((*(_DWORD *)(v48 + 68) >> 5) - 1));
            }
            else
            {
              i = *(_QWORD *)(v48 + 72);
              v58 = i;
            }
            if ( !i || (i = *(_QWORD *)i, (i & 1) != 0) )
            {
              for ( j = (__int64 *)(v58 + 8);
                    (unsigned __int64)j < *(_QWORD *)(v48 + 72)
                                        + 8 * ((unsigned __int64)*(unsigned int *)(v48 + 68) >> 5);
                    ++j )
              {
                i = *j;
                if ( (*j & 1) == 0 )
                  goto LABEL_75;
              }
              i = 0LL;
            }
LABEL_75:
            if ( !i )
              break;
          }
          v5 = (char *)Object;
          PopEtEnergyTrackerCleanupAggregates(Object);
          ++*((_DWORD *)v5 + 150);
          *((_DWORD *)v5 + 148) = v66;
          *((_DWORD *)v5 + 149) = v67;
          *(_OWORD *)(v5 + 604) = 0LL;
          *(__m128i *)(v5 + 620) = v68;
          v7 = 0;
LABEL_81:
          v6 = 1;
          break;
        }
        v42 = *(_QWORD *)(v26 + 16);
        *(_QWORD *)v27 = *(_QWORD *)(v26 + 32);
        *(_DWORD *)(v27 + 8) = *(_DWORD *)(v26 + 40);
        *(_DWORD *)(v27 + 12) = (unsigned __int16)*(_DWORD *)(v26 + 44);
        *(_DWORD *)(v27 + 72) = *(_DWORD *)(v26 + 504);
        *(_DWORD *)(v27 + 76) = *(_DWORD *)(v26 + 508);
        *(_OWORD *)(v27 + 80) = *(_OWORD *)(v26 + 480);
        *(_QWORD *)(v27 + 96) = *(_QWORD *)(v26 + 496);
        *(_DWORD *)(v27 + 20) = **(_DWORD **)(v42 + 32);
        *(_DWORD *)(v27 + 24) = *(_DWORD *)(*(_QWORD *)(v42 + 32) + 4LL);
        *(_DWORD *)(v27 + 44) = **(_DWORD **)(v42 + 40);
        *(_DWORD *)(v27 + 48) = *(_DWORD *)(*(_QWORD *)(v42 + 40) + 4LL);
        *(_DWORD *)(v27 + 40) = DWORD1(v75);
        *(_WORD *)(v27 + 60) = *(_WORD *)(v42 + 86);
        PopEtDataSectionCopyData(&v74, *(_QWORD *)(v42 + 72), *(unsigned __int16 *)(v42 + 86));
        *(_WORD *)(v27 + 52) = *(_WORD *)(v42 + 80);
        *(_DWORD *)(v27 + 16) = DWORD1(v70);
        PopEtDataSectionCopyData(&v69, *(_QWORD *)(v42 + 48), 2 * (unsigned int)*(unsigned __int16 *)(v42 + 80));
        *(_WORD *)(v27 + 54) = *(_WORD *)(v42 + 82);
        *(_DWORD *)(v27 + 28) = DWORD1(v70);
        PopEtDataSectionCopyData(&v69, *(_QWORD *)(v42 + 56), 2 * (unsigned int)*(unsigned __int16 *)(v42 + 82));
        *(_WORD *)(v27 + 56) = *(_WORD *)(v42 + 84);
        *(_DWORD *)(v27 + 32) = DWORD1(v70);
        PopEtDataSectionCopyData(&v69, *(_QWORD *)(v42 + 64), 2 * (unsigned int)*(unsigned __int16 *)(v42 + 84));
        v43 = *(_QWORD *)(v26 + 24);
        if ( v43 )
        {
          *(_WORD *)(v27 + 58) = (unsigned __int16)WORD1(*(_QWORD *)(v43 + 24)) >> 1;
          *(_DWORD *)(v27 + 36) = DWORD1(v70);
          PopEtDataSectionCopyData(
            &v69,
            *(_QWORD *)(v26 + 24) + 32LL,
            2 * (unsigned int)*(unsigned __int16 *)(v27 + 58));
        }
        else
        {
          *(_WORD *)(v27 + 58) = 0;
          *(_DWORD *)(v27 + 36) = DWORD1(v70);
        }
        *(_DWORD *)(v27 + 64) = DWORD1(v82);
        *(_DWORD *)(v27 + 68) = 432;
        PopEtDataSectionCopyData(&v81, v26 + 48, HIDWORD(v81));
        if ( (unsigned int)(HIDWORD(v76) + DWORD1(v77)) <= DWORD2(v76) )
        {
          DWORD1(v77) += HIDWORD(v76);
          v27 += HIDWORD(v76);
          *((_QWORD *)&v77 + 1) = v27;
        }
        v24 = (char *)Object;
      }
    }
  }
LABEL_82:
  if ( v6 )
    PopReleaseRwLock((__int64 *)v5 + 2);
  if ( v5 )
    ObfDereferenceObjectWithTag(v5, 0x74456F50u);
  return (unsigned int)v7;
}
