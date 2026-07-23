/*
 * XREFs of FsRtlNotifyFilterReportChange @ 0x1406AA510
 * Callers:
 *     FsRtlNotifyFullReportChange @ 0x140930160 (FsRtlNotifyFullReportChange.c)
 *     FsRtlNotifyReportChange @ 0x1409301C0 (FsRtlNotifyReportChange.c)
 * Callees:
 *     PsChargePoolQuota @ 0x1402331B0 (PsChargePoolQuota.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1402331E0 (PsReturnProcessPagedPoolQuota.c)
 *     FsRtlIsNtstatusExpected @ 0x140247160 (FsRtlIsNtstatusExpected.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406ABBF4 @ 0x1406ABBF4 (sub_1406ABBF4.c)
 *     sub_1406AC4B0 @ 0x1406AC4B0 (sub_1406AC4B0.c)
 *     RtlxOemStringToUnicodeSize @ 0x1407F9CA0 (RtlxOemStringToUnicodeSize.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __stdcall FsRtlNotifyFilterReportChange(
        PNOTIFY_SYNC NotifySync,
        PLIST_ENTRY NotifyList,
        PSTRING FullTargetName,
        USHORT TargetNameOffset,
        PSTRING StreamName,
        PSTRING NormalizedParentName,
        ULONG FilterMatch,
        ULONG Action,
        PVOID TargetContext,
        PVOID FilterContext)
{
  USHORT v10; // r14
  PSTRING v11; // r12
  struct _LIST_ENTRY *v13; // r8
  struct _KTHREAD *CurrentThread; // rbx
  _LIST_ENTRY *Flink; // r13
  _LIST_ENTRY *v16; // rsi
  _LIST_ENTRY *v17; // rbx
  char v18; // r11
  char v19; // r15
  __int16 v20; // cx
  __int16 v21; // ax
  unsigned int Flink_high; // r13d
  _LIST_ENTRY *v23; // rdx
  unsigned __int16 v24; // ax
  int v25; // r14d
  unsigned int v26; // r14d
  unsigned int v27; // r15d
  struct _LIST_ENTRY *v28; // rbx
  struct _LIST_ENTRY *v29; // rax
  struct _LIST_ENTRY *v30; // rax
  struct _LIST_ENTRY *v31; // rcx
  __int64 Pool2; // rax
  __int64 Blink_low; // rax
  __int16 v34; // cx
  struct _LIST_ENTRY *Blink; // r9
  unsigned __int16 v36; // cx
  struct _LIST_ENTRY *v37; // rdx
  PSTRING v38; // r10
  USHORT v39; // cx
  __int16 Flink_low; // ax
  __int16 v41; // ax
  char *v42; // rax
  bool v43; // zf
  __int16 v44; // cx
  char *v45; // r9
  int v46; // edx
  __int16 v47; // ax
  char v48; // r9
  int v49; // edx
  int v50; // r10d
  int v51; // ebx
  struct _LIST_ENTRY *v52; // r11
  char *v53; // rcx
  int v54; // r14d
  ULONG v55; // eax
  char v56; // [rsp+40h] [rbp-F8h]
  USHORT v57; // [rsp+44h] [rbp-F4h]
  unsigned __int16 Length; // [rsp+4Ch] [rbp-ECh]
  unsigned __int16 v60; // [rsp+50h] [rbp-E8h]
  int v61; // [rsp+54h] [rbp-E4h]
  _LIST_ENTRY *v62; // [rsp+70h] [rbp-C8h]
  OEM_STRING OemString; // [rsp+78h] [rbp-C0h] BYREF
  int v64; // [rsp+88h] [rbp-B0h]
  __int64 v65; // [rsp+90h] [rbp-A8h]
  char *Buffer; // [rsp+98h] [rbp-A0h]
  OEM_STRING v67; // [rsp+A0h] [rbp-98h] BYREF
  unsigned int v68; // [rsp+B0h] [rbp-88h]
  unsigned int v69; // [rsp+B4h] [rbp-84h]
  _LIST_ENTRY *v70; // [rsp+B8h] [rbp-80h]
  struct _LIST_ENTRY **p_Blink; // [rsp+C0h] [rbp-78h]
  _LIST_ENTRY *v72; // [rsp+C8h] [rbp-70h]
  _LIST_ENTRY *v73; // [rsp+D0h] [rbp-68h]
  __int128 v74; // [rsp+D8h] [rbp-60h] BYREF
  _LIST_ENTRY *v75; // [rsp+F0h] [rbp-48h]
  _LIST_ENTRY *v77; // [rsp+148h] [rbp+10h]

  v77 = NotifyList;
  v10 = TargetNameOffset;
  v11 = FullTargetName;
  v13 = (struct _LIST_ENTRY *)TargetNameOffset;
  v74 = 0LL;
  v65 = 0LL;
  *(_QWORD *)&v67.Length = 0LL;
  OemString = 0LL;
  v56 = 0;
  v64 = 0;
  if ( !TargetNameOffset && v11 )
    return;
  Buffer = 0LL;
  v67.Buffer = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread != *((struct _KTHREAD **)NotifySync + 7) )
  {
    ExAcquireFastMutexUnsafe((PFAST_MUTEX)NotifySync);
    *((_QWORD *)NotifySync + 7) = CurrentThread;
    v13 = (struct _LIST_ENTRY *)v10;
    NotifyList = v77;
  }
  ++*((_DWORD *)NotifySync + 16);
  Flink = NotifyList->Flink;
  v57 = v65;
  Length = v67.Length;
  v60 = OemString.Length;
  while ( 1 )
  {
    v73 = Flink;
    v62 = Flink;
    if ( Flink == NotifyList )
      break;
    v16 = Flink - 2;
    v72 = Flink - 2;
    v75 = Flink - 2;
    v17 = Flink - 2;
    v70 = Flink - 2;
    if ( v11 )
    {
      Blink = v16[8].Blink;
      v36 = (unsigned __int16)Blink->Flink;
      if ( LOWORD(Blink->Flink) && (HIDWORD(v16[4].Blink) & FilterMatch) != 0 )
      {
        v37 = v16[8].Blink;
        v38 = NormalizedParentName;
        if ( !NormalizedParentName )
        {
          *((_QWORD *)&v74 + 1) = v11->Buffer;
          v39 = v10;
          LOWORD(v74) = v10;
          Flink_low = LOBYTE(v16[9].Flink);
          if ( (_WORD)v13 != Flink_low )
          {
            v39 = (_WORD)v13 - Flink_low;
            LOWORD(v74) = (_WORD)v13 - Flink_low;
          }
          WORD1(v74) = v39;
          v38 = (PSTRING)&v74;
          NormalizedParentName = (PSTRING)&v74;
          Blink = v16[8].Blink;
          v37 = Blink;
          v36 = (unsigned __int16)Blink->Flink;
        }
        if ( v36 <= v38->Length )
        {
          if ( v36 == v38->Length )
          {
            v19 = 1;
            goto LABEL_60;
          }
          v41 = (__int16)v16[4].Blink;
          if ( (v41 & 1) != 0 )
          {
            if ( (v41 & 0x10) != 0
              || ((v42 = &v38->Buffer[LOWORD(v37->Flink)], LOBYTE(v16[9].Flink) != 1)
                ? (v43 = *(_WORD *)v42 == 92)
                : (v43 = *v42 == 92),
                  v43) )
            {
              v19 = 0;
LABEL_60:
              if ( !memcmp(Blink->Blink, v38->Buffer, v36)
                && (v19 || !v16[1].Flink || (unsigned __int8)sub_14042A5E0(v16->Blink, TargetContext))
                && (!v16[4].Flink || !FilterContext || (unsigned __int8)sub_14042A5E0(v16->Blink, FilterContext)) )
              {
                v18 = v56;
LABEL_10:
                v20 = (__int16)v16[4].Blink;
                v21 = v20;
                if ( (v20 & 2) == 0 )
                {
                  Flink_high = (unsigned int)v16[6].Flink;
                  if ( Flink_high )
                  {
                    p_Blink = 0LL;
                    if ( HIDWORD(v16[6].Flink) )
                    {
                      Flink_high = HIDWORD(v16[6].Flink);
                    }
                    else
                    {
                      v23 = v16[3].Flink;
                      if ( v23 != &v16[3] )
                      {
                        p_Blink = &v23[-11].Blink;
                        Flink_high = (unsigned int)v23[1].Flink->Blink;
                      }
                    }
                    if ( v19 )
                    {
                      v24 = 0;
                      v60 = 0;
                      OemString.Length = 0;
                    }
                    else if ( v18 )
                    {
                      v24 = v60;
                    }
                    else
                    {
                      v44 = v20 & 0x10;
                      if ( v44 || (v45 = NormalizedParentName->Buffer, v45 != v11->Buffer) )
                      {
                        if ( Buffer )
                        {
                          v10 = v57;
                        }
                        else
                        {
                          Buffer = v11->Buffer;
                          v57 = v10;
                          LOWORD(v65) = v10;
                          v47 = LOBYTE(v16[9].Flink);
                          if ( TargetNameOffset != v47 )
                          {
                            v10 = TargetNameOffset - v47;
                            v57 = TargetNameOffset - v47;
                            LOWORD(v65) = TargetNameOffset - v47;
                          }
                          WORD1(v65) = v10;
                        }
                        v48 = 0;
                        v49 = 0;
                        if ( v44 )
                        {
                          v53 = Buffer;
                        }
                        else
                        {
                          v50 = 1;
                          v13 = 0LL;
                          v51 = LOBYTE(v16[9].Flink);
                          v52 = v16[8].Blink;
                          if ( (_BYTE)v51 == 1 )
                          {
                            while ( (unsigned int)v13 < LOWORD(v52->Flink) )
                            {
                              if ( *((_BYTE *)&v52->Blink->Flink + (unsigned int)v13) == 92 )
                                ++v50;
                              v13 = (struct _LIST_ENTRY *)(unsigned int)((_DWORD)v13 + 1);
                            }
                            v53 = Buffer;
                            while ( Buffer[v49] != 92 || (unsigned __int8)++v48 != v50 )
                              ++v49;
                          }
                          else
                          {
                            while ( (unsigned int)v13 < LOWORD(v52->Flink) >> 1 )
                            {
                              if ( *((_WORD *)&v52->Blink->Flink + (unsigned int)v13) == 92 )
                                ++v50;
                              v13 = (struct _LIST_ENTRY *)(unsigned int)((_DWORD)v13 + 1);
                            }
                            v53 = Buffer;
                            while ( *(_WORD *)&Buffer[2 * v49] != 92 || (unsigned __int8)++v48 != v50 )
                              ++v49;
                            v49 *= v51;
                          }
                          v18 = v56;
                        }
                        v61 = LOBYTE(v16[9].Flink) + v49;
                        OemString.Buffer = &v53[v61];
                        v24 = v10 - v61;
                      }
                      else
                      {
                        v13 = v16[8].Blink->Flink;
                        v46 = LOBYTE(v16[9].Flink);
                        OemString.Buffer = &v45[v46 + (_DWORD)v13];
                        v24 = NormalizedParentName->Length - v46 - (_WORD)v13;
                      }
                      v60 = v24;
                      OemString.Length = v24;
                      OemString.MaximumLength = v24;
                    }
                    v25 = 12;
                    if ( v18 )
                    {
                      v26 = StreamName->Length + 12;
                    }
                    else
                    {
                      if ( !v19 )
                      {
                        if ( LOBYTE(v16[9].Flink) == 1 )
                          v54 = RtlxOemStringToUnicodeSize(&OemString) + 10;
                        else
                          v54 = v24 + 12;
                        v25 = v54 + 2;
                      }
                      if ( v67.Buffer )
                      {
                        LOWORD(v55) = Length;
                      }
                      else
                      {
                        v67.Buffer = &v11->Buffer[TargetNameOffset];
                        LOWORD(v55) = v11->Length - TargetNameOffset;
                        Length = v55;
                        v67.Length = v55;
                        v67.MaximumLength = v55;
                      }
                      if ( LOBYTE(v16[9].Flink) == 1 )
                        v55 = RtlxOemStringToUnicodeSize(&v67) - 2;
                      else
                        v55 = (unsigned __int16)v55;
                      v26 = v55 + v25;
                      if ( StreamName )
                      {
                        if ( LOBYTE(v16[9].Flink) == 2 )
                          v26 += StreamName->Length + 2;
                        else
                          v26 += RtlxOemStringToUnicodeSize(StreamName);
                      }
                    }
                    v27 = (LODWORD(v16[6].Blink) + 3) & 0xFFFFFFFC;
                    v68 = v27;
                    if ( v26 > Flink_high || (v69 = v27 + v26, v27 + v26 > Flink_high) )
                    {
                      LOWORD(v16[4].Blink) |= 2u;
                      v34 = (__int16)v16[4].Blink;
                      v17 = v16;
                    }
                    else
                    {
                      v28 = 0LL;
                      v29 = v16[5].Blink;
                      if ( v29 )
                      {
                        *(_DWORD *)((char *)&v29->Flink + HIDWORD(v16[6].Blink)) = v27 - HIDWORD(v16[6].Blink);
                        HIDWORD(v16[6].Blink) = v27;
                        v28 = (struct _LIST_ENTRY *)((char *)v16[5].Blink + v27);
                      }
                      else
                      {
                        if ( !p_Blink )
                          goto LABEL_26;
                        v30 = p_Blink[3];
                        if ( v30 )
                        {
                          v28 = p_Blink[3];
                          v16[5].Blink = v30;
                        }
                        else
                        {
                          v31 = p_Blink[1];
                          if ( !v31 )
                            goto LABEL_26;
                          if ( (BYTE2(v31->Blink) & 5) != 0 )
                            v28 = v31[1].Blink;
                          else
                            v28 = (struct _LIST_ENTRY *)MmMapLockedPagesSpecifyCache(
                                                          (PMDL)v31,
                                                          0,
                                                          MmCached,
                                                          0LL,
                                                          0,
                                                          0x40000010u);
                          v16[5].Blink = v28;
                        }
                        HIDWORD(v16[6].Flink) = Flink_high;
                      }
LABEL_26:
                      if ( !v16[5].Blink )
                      {
                        PsChargePoolQuota((PEPROCESS)v16[7].Blink, PagedPool, Flink_high);
                        Pool2 = ExAllocatePool2(290LL, Flink_high, 1316115270LL);
                        v16[5].Blink = (struct _LIST_ENTRY *)Pool2;
                        v16[5].Flink = (struct _LIST_ENTRY *)Pool2;
                        HIDWORD(v16[6].Flink) = Flink_high;
                        v28 = v16[5].Blink;
                      }
                      if ( v28 )
                      {
                        Blink_low = LODWORD(v16[6].Blink);
                        if ( v27 > (unsigned int)Blink_low )
                          memset((char *)v16[5].Blink + Blink_low, 0, v27 - (unsigned int)Blink_low);
                        if ( (unsigned __int8)sub_1406AC4B0(
                                                (_DWORD)v28,
                                                Action,
                                                (unsigned int)&OemString,
                                                (unsigned int)&v67,
                                                (__int64)StreamName,
                                                LOBYTE(v16[9].Flink) == 2,
                                                v26) )
                          LODWORD(v16[6].Blink) = v27 + v26;
                        else
                          LOWORD(v16[4].Blink) |= 2u;
                      }
                      v17 = v70;
                      v34 = (__int16)v70[4].Blink;
                    }
                    v21 = v34;
                    if ( (v34 & 2) != 0 && v16[5].Blink )
                    {
                      if ( v16[5].Flink )
                      {
                        PsReturnProcessPagedPoolQuota((__int64)v16[7].Blink, HIDWORD(v16[6].Flink));
                        ExFreePoolWithTag(v16[5].Flink, 0);
                        v21 = (__int16)v75[4].Blink;
                      }
                      v16[5].Blink = 0LL;
                      v16[5].Flink = 0LL;
                      v16[6].Blink = 0LL;
                      HIDWORD(v16[6].Flink) = 0;
                    }
                    v10 = TargetNameOffset;
                    v11 = FullTargetName;
                  }
                  Flink = v62;
                }
                if ( Action == 4 )
                {
                  LOWORD(v17[4].Blink) = v21 | 8;
                }
                else
                {
                  LOWORD(v17[4].Blink) = v21 & 0xFFF7;
                  if ( v16[3].Flink != &v16[3] )
                    sub_1406ABBF4(v16, 0LL, v13);
                }
              }
            }
          }
        }
        NotifyList = v77;
      }
    }
    else if ( TargetContext == v16[1].Blink )
    {
      OemString.Buffer = 0LL;
      v60 = 0;
      OemString.Length = 0;
      v18 = 1;
      v56 = 1;
      v19 = 0;
      goto LABEL_10;
    }
    Flink = Flink->Flink;
    v13 = (struct _LIST_ENTRY *)TargetNameOffset;
  }
  v43 = (*((_DWORD *)NotifySync + 16))-- == 1;
  if ( v43 )
  {
    *((_QWORD *)NotifySync + 7) = 0LL;
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)NotifySync);
  }
}
