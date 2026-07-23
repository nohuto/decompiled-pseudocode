/*
 * XREFs of CmAddLogForAction @ 0x140707B58
 * Callers:
 *     CmpCreateChild @ 0x1406D0FA0 (CmpCreateChild.c)
 *     CmSetValueKey @ 0x1406D3270 (CmSetValueKey.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14070D128 (CmpSetSecurityDescriptorInfo.c)
 *     CmDeleteValueKey @ 0x14070F134 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x1407101FC (CmDeleteKey.c)
 *     CmSetKeyFlags @ 0x140A15C64 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140A16198 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x14022CFE4 (CmpFreeTransientPoolWithTag.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     CmpConstructNameWithStatus @ 0x1406D7BE0 (CmpConstructNameWithStatus.c)
 *     CmpGetValueData @ 0x1406DC850 (CmpGetValueData.c)
 *     HvpGetCellPaged @ 0x1406E0180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0290 (HvpReleaseCellPaged.c)
 *     HvBufferCheckSum @ 0x140708208 (HvBufferCheckSum.c)
 *     CmpTransWriteLog @ 0x140708280 (CmpTransWriteLog.c)
 *     CmpCopyCompressedName @ 0x140708EC0 (CmpCopyCompressedName.c)
 *     HvpReleaseCellFlat @ 0x1407D9740 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FDCC0 (HvpGetCellFlat.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall CmAddLogForAction(__int64 a1, ULONG a2, __int64 a3)
{
  unsigned int v3; // ebx
  _DWORD *v5; // rdi
  __int64 v6; // r13
  __int64 v7; // rdx
  unsigned int v8; // r12d
  size_t v9; // r14
  int v10; // eax
  __int64 v11; // rcx
  const void **v12; // r15
  int v14; // edx
  __int64 v15; // rax
  unsigned int v16; // r14d
  ULONG_PTR v17; // rcx
  ULONG_PTR v18; // rdx
  __int64 v19; // rax
  int v20; // ebx
  unsigned __int16 v21; // cx
  int v22; // ebx
  int v23; // ebx
  ULONG_PTR v24; // rcx
  bool v25; // zf
  ULONG_PTR v26; // rdx
  __int64 CellFlat; // rax
  unsigned __int16 v28; // cx
  ULONG_PTR v29; // rdx
  __int64 CellPaged; // rax
  unsigned int v31; // eax
  unsigned int v32; // ecx
  unsigned int v33; // eax
  unsigned int v34; // ebx
  __int64 Pool2; // rax
  int v36; // edx
  __int64 v37; // r8
  char *v38; // rcx
  unsigned int v39; // edx
  size_t v40; // r8
  char *v41; // rcx
  __int64 v42; // rdx
  int v43; // eax
  int v44; // eax
  char *v45; // rbx
  ULONG_PTR v46; // rdx
  size_t v47; // r8
  void *v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rdx
  BOOLEAN v51; // al
  __int64 v52; // r12
  CLFS_INFORMATION *v53; // rax
  CLFS_INFORMATION *v54; // r14
  __int64 v55; // rcx
  __int64 v56; // rcx
  unsigned int v57; // [rsp+40h] [rbp-29h]
  unsigned int v58[2]; // [rsp+48h] [rbp-21h] BYREF
  unsigned int v59[2]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v60; // [rsp+58h] [rbp-11h] BYREF
  __int64 v61; // [rsp+60h] [rbp-9h]
  void *Src; // [rsp+68h] [rbp-1h] BYREF
  CLFS_LSN v63; // [rsp+70h] [rbp+7h] BYREF
  __int64 v64; // [rsp+78h] [rbp+Fh]
  unsigned int v65; // [rsp+D0h] [rbp+67h]
  ULONG pcbInfoBuffer; // [rsp+D8h] [rbp+6Fh] BYREF
  unsigned int v67; // [rsp+E0h] [rbp+77h]
  size_t Size; // [rsp+E8h] [rbp+7Fh] BYREF

  pcbInfoBuffer = a2;
  v3 = 0;
  v58[1] = 0;
  v59[1] = 0;
  v58[0] = -1;
  v5 = 0LL;
  v59[0] = -1;
  v6 = 0LL;
  v7 = *(_QWORD *)(a1 + 56);
  v8 = 0;
  v63.ullOffset = 0LL;
  v9 = 0LL;
  v67 = -1;
  v10 = *(_DWORD *)(v7 + 48);
  v57 = 0;
  LODWORD(Size) = 0;
  v65 = 0;
  v61 = 0LL;
  if ( (v10 & 0x80u) == 0 )
  {
    v11 = *(_QWORD *)(a1 + 48);
    v64 = *(_QWORD *)(*(_QWORD *)(v11 + 32) + 4152LL);
    if ( *(_QWORD *)(v64 + 96) )
    {
      if ( *(_QWORD *)(v7 + 56) && *(_DWORD *)(a1 + 68) != 13 )
      {
        Src = 0LL;
        CmpConstructNameWithStatus(v11, &Src, a3);
        v12 = (const void **)Src;
        if ( !Src )
          return 3221225626LL;
        v14 = *(_DWORD *)(a1 + 68);
        switch ( v14 )
        {
          case 0:
          case 2:
            v22 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 88LL) + 24LL);
            break;
          case 4:
          case 5:
          case 6:
            v23 = 80;
            v24 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL);
            if ( (unsigned int)(v14 - 4) <= 1 )
            {
              v25 = (*(_BYTE *)(v24 + 140) & 1) == 0;
              v29 = *(unsigned int *)(a1 + 92);
              v67 = *(_DWORD *)(a1 + 92);
              if ( v25 )
                CellPaged = HvpGetCellPaged(v24, v29, v58);
              else
                CellPaged = HvpGetCellFlat(v24, v29);
              v6 = CellPaged;
              if ( !CellPaged )
                goto LABEL_20;
              v31 = *(_DWORD *)(CellPaged + 4);
              v32 = v31 + 0x80000000;
              if ( v31 < 0x80000000 )
                v32 = v31;
              v57 = v32;
              LODWORD(Size) = v32;
              v23 = v32 + 80;
              if ( v32 >= 0xFFFFFFB0 )
              {
                v20 = -1073741675;
LABEL_94:
                v56 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL);
                if ( (*(_BYTE *)(v56 + 140) & 1) != 0 )
                  HvpReleaseCellFlat(v56, v58);
                else
                  HvpReleaseCellPaged(v56, v58);
LABEL_97:
                if ( v5 )
                  ExFreePoolWithTag(v5, 0);
                goto LABEL_99;
              }
            }
            else
            {
              v25 = (*(_BYTE *)(v24 + 140) & 1) == 0;
              v26 = *(unsigned int *)(a1 + 88);
              v67 = *(_DWORD *)(a1 + 88);
              if ( v25 )
                CellFlat = HvpGetCellPaged(v24, v26, v58);
              else
                CellFlat = HvpGetCellFlat(v24, v26);
              v6 = CellFlat;
              if ( !CellFlat )
                goto LABEL_20;
            }
            v16 = v23;
            v28 = 2 * *(_WORD *)(v6 + 2);
            if ( (*(_BYTE *)(v6 + 16) & 1) == 0 )
              v28 = *(_WORD *)(v6 + 2);
            v65 = v28;
            v3 = v28 + v23;
            goto LABEL_44;
          case 7:
          case 8:
            v3 = 56;
            goto LABEL_47;
          case 9:
            v22 = *(_DWORD *)(*(_QWORD *)(a1 + 88) + 24LL);
            break;
          case 11:
            v15 = *(_QWORD *)(a1 + 88);
            v16 = 64;
            v17 = *(_QWORD *)(v15 + 32);
            v18 = *(unsigned int *)(v15 + 40);
            if ( (*(_BYTE *)(v17 + 140) & 1) != 0 )
              v19 = HvpGetCellFlat(v17, v18);
            else
              v19 = HvpGetCellPaged(v17, v18, v59);
            v61 = v19;
            if ( !v19 )
            {
LABEL_20:
              v20 = -1073741670;
LABEL_99:
              CmpFreeTransientPoolWithTag(v12, 0x624E4D43u);
              return (unsigned int)v20;
            }
            v21 = 2 * *(_WORD *)(v19 + 72);
            if ( (*(_BYTE *)(v19 + 2) & 0x20) == 0 )
              v21 = *(_WORD *)(v19 + 72);
            v8 = v21;
            v3 = v21 + 64;
            goto LABEL_44;
          default:
            goto LABEL_47;
        }
        v16 = 64;
        v3 = v22 + 64;
LABEL_44:
        if ( v3 < v16 )
        {
          v20 = -1073741675;
          goto LABEL_89;
        }
        v9 = v65;
LABEL_47:
        v33 = *(unsigned __int16 *)v12;
        v34 = v33 + v3;
        if ( v34 < v33 )
        {
          v20 = -1073741562;
          goto LABEL_89;
        }
        Pool2 = ExAllocatePool2(256LL, v34, 538987843LL);
        v5 = (_DWORD *)Pool2;
        if ( !Pool2 )
          goto LABEL_50;
        *(_DWORD *)(Pool2 + 4) = v34;
        *(_DWORD *)(Pool2 + 8) = 1;
        *(_OWORD *)(Pool2 + 16) = *(_OWORD *)(*(_QWORD *)(a1 + 56) + 88LL);
        *(_WORD *)(Pool2 + 32) = *(_WORD *)v12;
        *(_WORD *)(Pool2 + 34) = *((_WORD *)v12 + 1);
        v36 = *(_DWORD *)(a1 + 68);
        switch ( v36 )
        {
          case 0:
          case 2:
            *(_DWORD *)(Pool2 + 12) = (v36 != 0) + 1;
            *(_DWORD *)(Pool2 + 48) = *(_DWORD *)(a1 + 72);
            *(_QWORD *)(Pool2 + 40) = Pool2 + 64;
            memmove((void *)(Pool2 + 64), v12[1], *(unsigned __int16 *)v12);
            v41 = (char *)v5 + *(unsigned __int16 *)v12 + 64;
            *((_QWORD *)v5 + 7) = v41;
            v42 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 88LL);
            v40 = *(unsigned int *)(v42 + 24);
            break;
          case 4:
          case 5:
          case 6:
            Src = 0LL;
            v43 = 0;
            v60 = 0xFFFFFFFFLL;
            LOBYTE(pcbInfoBuffer) = 0;
            if ( v36 == 4 )
            {
              v5[3] = 3;
            }
            else
            {
              LOBYTE(v43) = v36 != 5;
              v5[3] = v43 + 4;
            }
            v44 = *(_DWORD *)(v6 + 12);
            *((_QWORD *)v5 + 5) = v5 + 20;
            v5[16] = v44;
            memmove(v5 + 20, v12[1], *(unsigned __int16 *)v12);
            v45 = (char *)v5 + *(unsigned __int16 *)v12 + 80;
            *((_QWORD *)v5 + 7) = v45;
            if ( (*(_BYTE *)(v6 + 16) & 1) != 0 )
              CmpCopyCompressedName(v45, (unsigned int)v9, v6 + 20, *(unsigned __int16 *)(v6 + 2));
            else
              memmove(v45, (const void *)(v6 + 20), v9);
            *((_QWORD *)v5 + 7) = 0LL;
            *((_WORD *)v5 + 25) = v65;
            *((_WORD *)v5 + 24) = v65;
            if ( *(_DWORD *)(a1 + 68) == 6 )
            {
              v5[17] = 0;
              *((_QWORD *)v5 + 9) = 0LL;
            }
            else
            {
              v46 = v67;
              v5[17] = v57;
              if ( !CmpGetValueData(
                      *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
                      v46,
                      v6,
                      (unsigned int *)&Size,
                      (__int64)&Src,
                      (__int64)&pcbInfoBuffer) )
              {
LABEL_50:
                v20 = -1073741670;
                goto LABEL_89;
              }
              v47 = (unsigned int)Size;
              v48 = Src;
              *((_QWORD *)v5 + 9) = &v45[v9];
              memmove(&v45[v9], v48, v47);
              *((_QWORD *)v5 + 9) = 0LL;
              if ( (_BYTE)pcbInfoBuffer == 1 )
              {
                ExFreePoolWithTag(Src, 0);
              }
              else
              {
                v49 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL);
                if ( (*(_BYTE *)(v49 + 140) & 1) != 0 )
                  HvpReleaseCellFlat(v49, &v60);
                else
                  HvpReleaseCellPaged(v49, (unsigned int *)&v60);
              }
            }
LABEL_84:
            v50 = (unsigned int)v5[1];
            *((_QWORD *)v5 + 5) = 0LL;
            *v5 = HvBufferCheckSum(v5, v50);
            v51 = ClfsLsnInvalid((const CLFS_LSN *)(*(_QWORD *)(a1 + 56) + 104LL));
            v52 = v64;
            v20 = CmpTransWriteLog(v64, (_DWORD)v5, v5[1], v51 != 0 ? 2 : 0, &v63);
            if ( v20 >= 0 && ClfsLsnInvalid((const CLFS_LSN *)(*(_QWORD *)(a1 + 56) + 104LL)) )
              *(CLFS_LSN *)(*(_QWORD *)(a1 + 56) + 104LL) = v63;
            pcbInfoBuffer = 120;
            v53 = (CLFS_INFORMATION *)ExAllocatePool2(256LL, 120LL, 538987843LL);
            v54 = v53;
            if ( v53 )
            {
              ClfsGetLogFileInformation(*(PLOG_FILE_OBJECT *)(v52 + 88), v53, &pcbInfoBuffer);
              ExFreePoolWithTag(v54, 0);
            }
LABEL_89:
            if ( v61 )
            {
              v55 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 32LL);
              if ( (*(_BYTE *)(v55 + 140) & 1) != 0 )
                HvpReleaseCellFlat(v55, v59);
              else
                HvpReleaseCellPaged(v55, v59);
            }
            if ( !v6 )
              goto LABEL_97;
            goto LABEL_94;
          case 7:
            *(_DWORD *)(Pool2 + 12) = 6;
            *(_QWORD *)(Pool2 + 40) = Pool2 + 56;
            memmove((void *)(Pool2 + 56), v12[1], *(unsigned __int16 *)v12);
            v5[12] = *(_DWORD *)(a1 + 88);
            goto LABEL_84;
          case 8:
            *(_DWORD *)(Pool2 + 12) = 7;
            *(_QWORD *)(Pool2 + 40) = Pool2 + 56;
            memmove((void *)(Pool2 + 56), v12[1], *(unsigned __int16 *)v12);
            *((_QWORD *)v5 + 6) = *(_QWORD *)(a1 + 88);
            goto LABEL_84;
          case 9:
            *(_DWORD *)(Pool2 + 12) = *(_BYTE *)(a1 + 100) != 0 ? 10 : 8;
            *(_QWORD *)(Pool2 + 40) = Pool2 + 64;
            memmove((void *)(Pool2 + 64), v12[1], *(unsigned __int16 *)v12);
            v39 = *(_DWORD *)(*(_QWORD *)(a1 + 88) + 24LL);
            v5[12] = v39;
            v40 = v39;
            v41 = (char *)v5 + *(unsigned __int16 *)v12 + 64;
            *((_QWORD *)v5 + 7) = v41;
            v42 = *(_QWORD *)(a1 + 88);
            break;
          case 11:
            *(_DWORD *)(Pool2 + 12) = 9;
            *(_QWORD *)(Pool2 + 40) = Pool2 + 64;
            memmove((void *)(Pool2 + 64), v12[1], *(unsigned __int16 *)v12);
            v37 = v61;
            v38 = (char *)v5 + *(unsigned __int16 *)v12 + 64;
            *((_QWORD *)v5 + 7) = v38;
            if ( (*(_BYTE *)(v37 + 2) & 0x20) != 0 )
              CmpCopyCompressedName(v38, v8, v37 + 76, *(unsigned __int16 *)(v37 + 72));
            else
              memmove(v38, (const void *)(v37 + 76), v8);
            *((_WORD *)v5 + 25) = v8;
            *((_WORD *)v5 + 24) = v8;
            goto LABEL_83;
          default:
            goto LABEL_84;
        }
        memmove(v41, (const void *)(v42 + 32), v40);
LABEL_83:
        *((_QWORD *)v5 + 7) = 0LL;
        goto LABEL_84;
      }
    }
  }
  return 0LL;
}
