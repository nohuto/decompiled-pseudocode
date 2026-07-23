/*
 * XREFs of FsRtlNotifyFilterReportChange @ 0x14084B790
 * Callers:
 *     FsRtlNotifyFullReportChange @ 0x14084B730 (FsRtlNotifyFullReportChange.c)
 *     FsRtlNotifyReportChange @ 0x1409402D0 (FsRtlNotifyReportChange.c)
 * Callees:
 *     PsChargePoolQuota @ 0x140207F00 (PsChargePoolQuota.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1402085B0 (PsReturnProcessPagedPoolQuota.c)
 *     RtlUIntAdd @ 0x1402505AC (RtlUIntAdd.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14027D1F0 (MmMapLockedPagesSpecifyCache.c)
 *     ExReleaseFastMutexUnsafe @ 0x140302880 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403028F0 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlIsNtstatusExpected @ 0x140359EA0 (FsRtlIsNtstatusExpected.c)
 *     memcmp @ 0x1403DA530 (memcmp.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     FsRtlNotifyCompleteIrpList @ 0x14068A9F0 (FsRtlNotifyCompleteIrpList.c)
 *     RtlxOemStringToUnicodeSize @ 0x140773EC0 (RtlxOemStringToUnicodeSize.c)
 *     FsRtlNotifyUpdateBuffer @ 0x140940318 (FsRtlNotifyUpdateBuffer.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
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
  USHORT v10; // r13
  PSTRING v11; // r12
  PLIST_ENTRY v12; // r8
  USHORT v14; // dx
  struct _KTHREAD *CurrentThread; // rbx
  struct _KTHREAD **v16; // r14
  _QWORD *p_Flink; // r15
  __int64 v18; // rsi
  _QWORD *v19; // rcx
  char v20; // r10
  char v21; // bl
  PSTRING v22; // r14
  USHORT v23; // cx
  __int16 v24; // ax
  const void **v25; // r9
  size_t v26; // rdx
  __int16 v27; // ax
  char *v28; // rcx
  bool v29; // zf
  unsigned __int8 (__fastcall *v30)(_QWORD, PVOID, _QWORD); // rax
  unsigned __int8 (__fastcall *v31)(_QWORD, PVOID); // rax
  __int16 v32; // dx
  UINT v33; // r15d
  __int64 v34; // rcx
  __int16 v35; // dx
  char **p_Buffer; // rax
  char *Buffer; // r9
  int v38; // r8d
  int v39; // edx
  unsigned __int16 v40; // ax
  USHORT v41; // r14
  __int16 v42; // ax
  char v43; // r11
  int v44; // r8d
  int v45; // r9d
  unsigned int v46; // edx
  unsigned __int16 *v47; // r10
  unsigned __int16 *v48; // r10
  int v49; // r14d
  UINT v50; // r14d
  int v51; // r14d
  ULONG v52; // eax
  _DWORD *v53; // r13
  UINT v54; // r12d
  NTSTATUS v55; // eax
  __int64 v56; // rbx
  __int64 *v57; // r15
  __int64 v58; // rax
  __int64 v59; // rax
  UINT v60; // eax
  __int64 v61; // rcx
  UINT v62; // ebx
  __int64 Pool2; // rax
  __int64 v64; // rcx
  _BYTE *v65; // rax
  __int16 v66; // ax
  char v67; // [rsp+40h] [rbp-138h]
  USHORT v68; // [rsp+44h] [rbp-134h]
  UINT Amount; // [rsp+4Ch] [rbp-12Ch]
  unsigned __int16 Amount_4; // [rsp+50h] [rbp-128h]
  unsigned __int16 Length; // [rsp+54h] [rbp-124h]
  int v73; // [rsp+58h] [rbp-120h]
  _QWORD *v74; // [rsp+70h] [rbp-108h]
  OEM_STRING OemString; // [rsp+78h] [rbp-100h] BYREF
  UINT puResult[2]; // [rsp+88h] [rbp-F0h] BYREF
  UINT *v77; // [rsp+90h] [rbp-E8h]
  __int64 v78; // [rsp+98h] [rbp-E0h]
  char *v79; // [rsp+A0h] [rbp-D8h]
  _WORD *v80; // [rsp+A8h] [rbp-D0h]
  OEM_STRING v81; // [rsp+B0h] [rbp-C8h] BYREF
  UINT v82; // [rsp+C0h] [rbp-B8h]
  _QWORD *v83; // [rsp+C8h] [rbp-B0h]
  _QWORD *v84; // [rsp+D0h] [rbp-A8h]
  __int128 v85; // [rsp+D8h] [rbp-A0h] BYREF
  __int64 v86; // [rsp+E8h] [rbp-90h]
  _QWORD *v87; // [rsp+F0h] [rbp-88h]
  __int64 v88; // [rsp+F8h] [rbp-80h]
  _DWORD *v89; // [rsp+100h] [rbp-78h]
  _QWORD *v90; // [rsp+108h] [rbp-70h]
  NTSTATUS v91; // [rsp+110h] [rbp-68h]
  PSTRING v92; // [rsp+118h] [rbp-60h]
  __int64 v93; // [rsp+120h] [rbp-58h]

  v10 = TargetNameOffset;
  v11 = FullTargetName;
  v12 = NotifyList;
  v92 = v11;
  v14 = TargetNameOffset;
  v85 = 0LL;
  v78 = 0LL;
  *(_QWORD *)&v81.Length = 0LL;
  OemString = 0LL;
  v67 = 0;
  puResult[1] = 0;
  puResult[0] = 0;
  if ( !TargetNameOffset && v11 )
    return;
  v79 = 0LL;
  v81.Buffer = 0LL;
  CurrentThread = KeGetCurrentThread();
  v16 = (struct _KTHREAD **)((char *)NotifySync + 56);
  v90 = (_QWORD *)((char *)NotifySync + 56);
  if ( CurrentThread != *((struct _KTHREAD **)NotifySync + 7) )
  {
    ExAcquireFastMutexUnsafe((PFAST_MUTEX)NotifySync);
    *v16 = CurrentThread;
    v14 = v10;
    v12 = NotifyList;
  }
  v89 = (_DWORD *)((char *)NotifySync + 64);
  ++*((_DWORD *)NotifySync + 16);
  p_Flink = &v12->Flink->Flink;
  v68 = v78;
  Amount_4 = v81.Length;
  Length = OemString.Length;
  while ( 1 )
  {
    v84 = p_Flink;
    v74 = p_Flink;
    if ( p_Flink == (_QWORD *)v12 )
      break;
    v18 = (__int64)(p_Flink - 4);
    v87 = p_Flink - 4;
    v19 = p_Flink - 4;
    v83 = p_Flink - 4;
    if ( v11 )
    {
      if ( **(_WORD **)(v18 + 136) && (*(_DWORD *)(v18 + 76) & FilterMatch) != 0 )
      {
        v22 = NormalizedParentName;
        if ( !NormalizedParentName )
        {
          *((_QWORD *)&v85 + 1) = v11->Buffer;
          v23 = v10;
          LOWORD(v85) = v10;
          v24 = *(unsigned __int8 *)(v18 + 144);
          if ( v14 != v24 )
          {
            v23 = v14 - v24;
            LOWORD(v85) = v14 - v24;
          }
          WORD1(v85) = v23;
          v22 = (PSTRING)&v85;
          NormalizedParentName = (PSTRING)&v85;
          v19 = p_Flink - 4;
        }
        v25 = *(const void ***)(v18 + 136);
        v26 = *(unsigned __int16 *)v25;
        if ( (unsigned __int16)v26 <= v22->Length )
        {
          if ( (_WORD)v26 == v22->Length )
          {
            v21 = 1;
            goto LABEL_26;
          }
          v27 = *(_WORD *)(v18 + 72);
          if ( (v27 & 1) != 0 )
          {
            if ( (v27 & 0x10) != 0
              || ((v28 = &v22->Buffer[*(unsigned __int16 *)v19[17]], *(_BYTE *)(v18 + 144) != 1)
                ? (v29 = *(_WORD *)v28 == 92)
                : (v29 = *v28 == 92),
                  v29) )
            {
              v21 = 0;
LABEL_26:
              if ( memcmp(v25[1], v22->Buffer, v26) )
                goto LABEL_129;
              if ( !v21 )
              {
                v30 = *(unsigned __int8 (__fastcall **)(_QWORD, PVOID, _QWORD))(v18 + 16);
                if ( v30 )
                {
                  if ( !v30(*(_QWORD *)(v18 + 8), TargetContext, *(_QWORD *)(v18 + 24)) )
                    goto LABEL_129;
                }
              }
              v31 = *(unsigned __int8 (__fastcall **)(_QWORD, PVOID))(v18 + 64);
              if ( v31 )
              {
                if ( FilterContext && !v31(*(_QWORD *)(v18 + 8), FilterContext) )
                  goto LABEL_129;
              }
              v20 = v67;
LABEL_36:
              v80 = (_WORD *)(v18 + 72);
              v32 = *(_WORD *)(v18 + 72);
              if ( (v32 & 2) != 0 )
                goto LABEL_125;
              v33 = *(_DWORD *)(v18 + 96);
              Amount = v33;
              if ( !v33 )
                goto LABEL_124;
              v86 = 0LL;
              v77 = (UINT *)(v18 + 100);
              if ( *(_DWORD *)(v18 + 100) )
              {
                v33 = *(_DWORD *)(v18 + 100);
LABEL_42:
                Amount = v33;
              }
              else
              {
                v34 = *(_QWORD *)(v18 + 48);
                if ( v34 != v18 + 48 )
                {
                  v86 = v34 - 168;
                  v33 = *(_DWORD *)(*(_QWORD *)(v34 - 168 + 184) + 8LL);
                  goto LABEL_42;
                }
              }
              if ( v21 )
              {
                v40 = 0;
                Length = 0;
                OemString.Length = 0;
              }
              else if ( v20 )
              {
                v40 = Length;
              }
              else
              {
                v35 = v32 & 0x10;
                if ( v35 )
                {
                  p_Buffer = &v92->Buffer;
                }
                else
                {
                  p_Buffer = &v11->Buffer;
                  Buffer = v22->Buffer;
                  if ( Buffer == v11->Buffer )
                  {
                    v38 = **(unsigned __int16 **)(v18 + 136);
                    v39 = *(unsigned __int8 *)(v18 + 144);
                    OemString.Buffer = &Buffer[v39 + v38];
                    v40 = v22->Length - v39 - v38;
                    goto LABEL_72;
                  }
                }
                if ( v79 )
                {
                  v41 = v68;
                }
                else
                {
                  v79 = *p_Buffer;
                  v41 = v10;
                  v68 = v10;
                  LOWORD(v78) = v10;
                  v42 = *(unsigned __int8 *)(v18 + 144);
                  if ( TargetNameOffset != v42 )
                  {
                    v41 = TargetNameOffset - v42;
                    v68 = TargetNameOffset - v42;
                    LOWORD(v78) = TargetNameOffset - v42;
                  }
                  WORD1(v78) = v41;
                }
                v43 = 0;
                v44 = 0;
                if ( !v35 )
                {
                  v45 = 1;
                  v46 = 0;
                  if ( *(_BYTE *)(v18 + 144) == 1 )
                  {
                    while ( 1 )
                    {
                      v47 = *(unsigned __int16 **)(v18 + 136);
                      if ( v46 >= *v47 )
                        break;
                      if ( *(_BYTE *)(v46 + *((_QWORD *)v47 + 1)) == 92 )
                        ++v45;
                      ++v46;
                    }
                    while ( v79[v44] != 92 || (unsigned __int8)++v43 != v45 )
                      ++v44;
                  }
                  else
                  {
                    while ( 1 )
                    {
                      v48 = *(unsigned __int16 **)(v18 + 136);
                      if ( v46 >= *v48 >> 1 )
                        break;
                      if ( *(_WORD *)(*((_QWORD *)v48 + 1) + 2LL * v46) == 92 )
                        ++v45;
                      ++v46;
                    }
                    while ( *(_WORD *)&v79[2 * v44] != 92 || (unsigned __int8)++v43 != v45 )
                      ++v44;
                    v44 *= *(unsigned __int8 *)(v18 + 144);
                  }
                  v20 = v67;
                }
                v73 = v44 + *(unsigned __int8 *)(v18 + 144);
                OemString.Buffer = &v79[v73];
                v40 = v41 - v73;
LABEL_72:
                Length = v40;
                OemString.Length = v40;
                OemString.MaximumLength = v40;
              }
              v49 = 12;
              if ( v20 )
              {
                v50 = StreamName->Length + 12;
              }
              else
              {
                if ( !v21 )
                {
                  if ( *(_BYTE *)(v18 + 144) == 1 )
                    v51 = RtlxOemStringToUnicodeSize(&OemString) + 10;
                  else
                    v51 = v40 + 12;
                  v49 = v51 + 2;
                }
                if ( v81.Buffer )
                {
                  LOWORD(v52) = Amount_4;
                }
                else
                {
                  v81.Buffer = &v11->Buffer[v10];
                  LOWORD(v52) = v11->Length - v10;
                  Amount_4 = v52;
                  v81.Length = v52;
                  v81.MaximumLength = v52;
                }
                if ( *(_BYTE *)(v18 + 144) == 1 )
                  v52 = RtlxOemStringToUnicodeSize(&v81) - 2;
                else
                  v52 = (unsigned __int16)v52;
                v50 = v52 + v49;
                if ( StreamName )
                {
                  if ( *(_BYTE *)(v18 + 144) == 2 )
                    v50 += StreamName->Length + 2;
                  else
                    v50 += RtlxOemStringToUnicodeSize(StreamName);
                }
              }
              v53 = (_DWORD *)(v18 + 104);
              v88 = v18 + 104;
              v54 = (*(_DWORD *)(v18 + 104) + 3) & 0xFFFFFFFC;
              v82 = v54;
              v55 = RtlUIntAdd(v54, v50, puResult);
              v91 = v55;
              if ( v50 > v33 || v55 || puResult[0] > v33 )
              {
                v57 = (__int64 *)(v18 + 88);
              }
              else
              {
                v56 = 0LL;
                v57 = (__int64 *)(v18 + 88);
                v93 = v18 + 88;
                v58 = *(_QWORD *)(v18 + 88);
                if ( v58 )
                {
                  *(_DWORD *)(v58 + *(unsigned int *)(v18 + 108)) = v54 - *(_DWORD *)(v18 + 108);
                  *(_DWORD *)(v18 + 108) = v54;
                  v56 = *v57 + v54;
                  goto LABEL_107;
                }
                if ( !v86 )
                  goto LABEL_107;
                v59 = *(_QWORD *)(v86 + 24);
                if ( v59 )
                {
                  v56 = *(_QWORD *)(v86 + 24);
                  *v57 = v59;
                  goto LABEL_101;
                }
                v61 = *(_QWORD *)(v86 + 8);
                if ( v61 )
                {
                  if ( (*(_BYTE *)(v61 + 10) & 5) != 0 )
                    v56 = *(_QWORD *)(v61 + 24);
                  else
                    v56 = (__int64)MmMapLockedPagesSpecifyCache((PMDL)v61, 0, MmCached, 0LL, 0, 0x40000010u);
                  *v57 = v56;
LABEL_101:
                  v60 = Amount;
                  *v77 = Amount;
                }
                else
                {
LABEL_107:
                  v60 = Amount;
                }
                if ( !*v57 )
                {
                  v62 = v60;
                  PsChargePoolQuota(*(PEPROCESS *)(v18 + 120), PagedPool, v60);
                  Pool2 = ExAllocatePool2(290LL, v62, 1316115270LL);
                  *v57 = Pool2;
                  *(_QWORD *)(v18 + 80) = Pool2;
                  *v77 = Amount;
                  v56 = *v57;
                }
                if ( !v56 )
                {
                  v65 = v80;
                  goto LABEL_118;
                }
                v64 = (unsigned int)*v53;
                if ( v54 > (unsigned int)v64 )
                  memset((void *)(*v57 + v64), 0, v54 - (unsigned int)v64);
                if ( (unsigned __int8)FsRtlNotifyUpdateBuffer(
                                        v56,
                                        Action,
                                        (unsigned int)&OemString,
                                        (unsigned int)&v81,
                                        (__int64)StreamName,
                                        *(_BYTE *)(v18 + 144) == 2,
                                        v50) )
                {
                  *v53 = v54 + v50;
                  v65 = v80;
LABEL_118:
                  if ( (*v65 & 2) != 0 && *v57 )
                  {
                    if ( *(_QWORD *)(v18 + 80) )
                    {
                      PsReturnProcessPagedPoolQuota(*(struct _KPROCESS **)(v18 + 120), *v77);
                      ExFreePoolWithTag(*(PVOID *)(v18 + 80), 0);
                    }
                    *v57 = 0LL;
                    *(_QWORD *)(v18 + 80) = 0LL;
                    *(_DWORD *)(v18 + 108) = 0;
                    *v53 = 0;
                    *v77 = 0;
                  }
                  v10 = TargetNameOffset;
                  v11 = FullTargetName;
LABEL_124:
                  p_Flink = v74;
LABEL_125:
                  v66 = *((_WORD *)v83 + 36);
                  if ( Action == 4 )
                  {
                    *((_WORD *)v83 + 36) = v66 | 8;
                  }
                  else
                  {
                    *((_WORD *)v83 + 36) = v66 & 0xFFF7;
                    if ( *(_QWORD *)(v18 + 48) != v18 + 48 )
                      FsRtlNotifyCompleteIrpList(v18, 0);
                  }
LABEL_129:
                  v12 = NotifyList;
                  goto LABEL_130;
                }
              }
              v65 = v80;
              *v80 |= 2u;
              goto LABEL_118;
            }
          }
        }
      }
    }
    else if ( TargetContext == *(PVOID *)(v18 + 24) )
    {
      OemString.Buffer = 0LL;
      Length = 0;
      OemString.Length = 0;
      v20 = 1;
      v67 = 1;
      v21 = 0;
      v22 = NormalizedParentName;
      goto LABEL_36;
    }
LABEL_130:
    p_Flink = (_QWORD *)*p_Flink;
    v14 = TargetNameOffset;
  }
  v29 = (*v89)-- == 1;
  if ( v29 )
  {
    *v90 = 0LL;
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)NotifySync);
  }
}
