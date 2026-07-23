/*
 * XREFs of sub_1405E1764 @ 0x1405E1764
 * Callers:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 * Callees:
 *     sub_140217B04 @ 0x140217B04 (sub_140217B04.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_1402D8E9C @ 0x1402D8E9C (sub_1402D8E9C.c)
 *     sub_1402F5FD0 @ 0x1402F5FD0 (sub_1402F5FD0.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ZwTerminateProcess @ 0x14041BCE0 (ZwTerminateProcess.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405400A4 @ 0x1405400A4 (sub_1405400A4.c)
 *     sub_140544258 @ 0x140544258 (sub_140544258.c)
 *     sub_14054DB08 @ 0x14054DB08 (sub_14054DB08.c)
 *     sub_14054E1A8 @ 0x14054E1A8 (sub_14054E1A8.c)
 *     sub_14054E490 @ 0x14054E490 (sub_14054E490.c)
 *     sub_14059A9B4 @ 0x14059A9B4 (sub_14059A9B4.c)
 *     sub_1405A3E3C @ 0x1405A3E3C (sub_1405A3E3C.c)
 *     sub_1405E2170 @ 0x1405E2170 (sub_1405E2170.c)
 *     sub_1405E22E8 @ 0x1405E22E8 (sub_1405E22E8.c)
 *     sub_1405E2410 @ 0x1405E2410 (sub_1405E2410.c)
 *     sub_1405E2740 @ 0x1405E2740 (sub_1405E2740.c)
 *     sub_1405E281C @ 0x1405E281C (sub_1405E281C.c)
 *     sub_1405E29C8 @ 0x1405E29C8 (sub_1405E29C8.c)
 *     sub_1405E2C2C @ 0x1405E2C2C (sub_1405E2C2C.c)
 *     sub_1405E2E00 @ 0x1405E2E00 (sub_1405E2E00.c)
 *     EtwUnregister @ 0x1406B7470 (EtwUnregister.c)
 *     MmUnmapViewOfSection @ 0x1406CD150 (MmUnmapViewOfSection.c)
 *     EtwRegister @ 0x1406D2350 (EtwRegister.c)
 *     EtwSetInformation @ 0x1406DEBF0 (EtwSetInformation.c)
 *     sub_1406EA7D0 @ 0x1406EA7D0 (sub_1406EA7D0.c)
 *     sub_140757090 @ 0x140757090 (sub_140757090.c)
 *     MmMapViewOfSection @ 0x140785150 (MmMapViewOfSection.c)
 *     sub_14079F130 @ 0x14079F130 (sub_14079F130.c)
 *     sub_1407B99C0 @ 0x1407B99C0 (sub_1407B99C0.c)
 *     sub_1407B9FA0 @ 0x1407B9FA0 (sub_1407B9FA0.c)
 *     sub_1407E66D0 @ 0x1407E66D0 (sub_1407E66D0.c)
 *     sub_1408824D0 @ 0x1408824D0 (sub_1408824D0.c)
 *     sub_14092A29C @ 0x14092A29C (sub_14092A29C.c)
 *     sub_14092AAA4 @ 0x14092AAA4 (sub_14092AAA4.c)
 *     sub_14092AC20 @ 0x14092AC20 (sub_14092AC20.c)
 *     sub_14097F148 @ 0x14097F148 (sub_14097F148.c)
 *     sub_14097F95C @ 0x14097F95C (sub_14097F95C.c)
 *     sub_14097FA08 @ 0x14097FA08 (sub_14097FA08.c)
 *     sub_1409B31F4 @ 0x1409B31F4 (sub_1409B31F4.c)
 *     sub_1409B3230 @ 0x1409B3230 (sub_1409B3230.c)
 *     sub_1409B45F0 @ 0x1409B45F0 (sub_1409B45F0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     sub_140B52548 @ 0x140B52548 (sub_140B52548.c)
 */

void __fastcall sub_1405E1764(ULONGLONG a1, __int64 a2, __int64 a3, __int64 a4)
{
  GUID *RelatedActivityId; // rsi
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  int v11; // eax
  __int64 v12; // rax
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v18; // r14
  ULONG_PTR v19; // rcx
  int v20; // ecx
  __int128 *v21; // r9
  unsigned __int64 v22; // rax
  int v23; // eax
  int v24; // ebx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  __int64 v29; // rbx
  ULONG_PTR v30; // rcx
  int v31; // esi
  ULONG_PTR v32; // rcx
  void *v33; // r8
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  const GUID *ActivityId; // rcx
  unsigned int v39; // ecx
  unsigned int v40; // ecx
  unsigned int v41; // ecx
  unsigned int v42; // ecx
  __int64 v43; // r8
  __int64 v44; // rdx
  unsigned __int64 v45; // rcx
  struct _MDL *v46; // rbx
  void *v47; // rcx
  struct _MDL *PoolWithTag; // rax
  struct _MDL *v49; // rbx
  int v50; // eax
  unsigned int v51; // ecx
  unsigned int v52; // ecx
  unsigned int v53; // ecx
  unsigned int v54; // ecx
  unsigned __int64 v55; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v58; // r8
  int v59; // eax
  bool v60; // zf
  unsigned int v61; // ecx
  unsigned int v62; // ecx
  unsigned int v63; // ecx
  unsigned int v64; // ecx
  unsigned int v65; // ecx
  unsigned int v66; // ecx
  unsigned int v67; // ecx
  unsigned __int8 v68[8]; // [rsp+60h] [rbp-1F8h] BYREF
  ULONGLONG RegHandle; // [rsp+68h] [rbp-1F0h] BYREF
  __int128 v70; // [rsp+70h] [rbp-1E8h] BYREF
  __int128 v71; // [rsp+80h] [rbp-1D8h] BYREF
  __int64 v72; // [rsp+90h] [rbp-1C8h]
  _OWORD v73[3]; // [rsp+98h] [rbp-1C0h] BYREF
  _BYTE v74[272]; // [rsp+D0h] [rbp-188h] BYREF
  _OWORD v75[5]; // [rsp+1E0h] [rbp-78h] BYREF
  __int64 v76; // [rsp+230h] [rbp-28h]
  int v77; // [rsp+238h] [rbp-20h]
  __int16 v78; // [rsp+23Ch] [rbp-1Ch]
  char v79; // [rsp+23Eh] [rbp-1Ah]

  RegHandle = a1;
  memset(v73, 0, sizeof(v73));
  RelatedActivityId = 0LL;
  v68[0] = 0;
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  if ( *(_BYTE *)(a1 + 1) == 5 )
  {
    if ( *(_QWORD *)(a1 + 8) )
    {
      ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, *(_DWORD *)(a1 + 16));
    }
    else
    {
      LOBYTE(a3) = 1;
      sub_14079F130(KeGetCurrentThread(), 0LL, a3);
    }
  }
  v6 = *(unsigned __int16 *)(a1 + 2);
  if ( v6 > 0x18 )
  {
    if ( v6 > 0x24 )
    {
      if ( v6 <= 0x2A )
      {
        if ( v6 == 42 )
        {
          sub_140B52548(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16));
          return;
        }
        v61 = v6 - 37;
        if ( !v61 )
        {
          ObfDereferenceObject(*(PVOID *)(a1 + 8));
          return;
        }
        v62 = v61 - 1;
        if ( !v62 )
        {
          KeSetEvent(*(PRKEVENT *)(a1 + 8), 0, 0);
          return;
        }
        v63 = v62 - 1;
        if ( v63 )
        {
          v64 = v63 - 1;
          if ( v64 )
          {
            if ( v64 == 1 )
            {
              sub_1409B45F0(*(_QWORD *)(a1 + 8), 0x80000000LL);
              return;
            }
            goto LABEL_146;
          }
          *(_QWORD *)(a1 + 24) = 0LL;
          if ( (unsigned __int8)sub_1405E29C8(*(_QWORD *)(a1 + 8), *(unsigned int *)(a1 + 16)) )
            *(_QWORD *)(a1 + 24) = 1LL;
          return;
        }
        if ( !*(_QWORD *)(a1 + 8) )
        {
          sub_1405E2740(*(PVOID *)(a1 + 16));
          return;
        }
        v11 = sub_1405E2170(a1);
        goto LABEL_22;
      }
      v65 = v6 - 43;
      if ( !v65 )
      {
        ExQueueWorkItem(&stru_140C1BDA0, DelayedWorkQueue);
        return;
      }
      v66 = v65 - 1;
      if ( !v66 )
      {
        v11 = sub_1405E2E00(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), *(unsigned int *)(a1 + 24));
        goto LABEL_22;
      }
      v67 = v66 - 1;
      if ( v67 )
      {
        if ( v67 == 1 )
        {
          sub_14059A9B4(*(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32), *(_DWORD *)(a1 + 40));
          return;
        }
        goto LABEL_146;
      }
      v50 = sub_1405E2410(a1);
    }
    else
    {
      if ( v6 == 36 )
      {
        v11 = sub_1405E2C2C(a1);
        goto LABEL_22;
      }
      if ( v6 > 0x1E )
      {
        v51 = v6 - 31;
        if ( v51 )
        {
          v52 = v51 - 1;
          if ( v52 )
          {
            v53 = v52 - 1;
            if ( v53 )
            {
              v54 = v53 - 1;
              if ( !v54 )
              {
                sub_1405400A4(
                  *(PVOID *)(a1 + 8),
                  *(PVOID *)(a1 + 16),
                  *(void **)(a1 + 24),
                  *(_DWORD *)(a1 + 32),
                  *(_DWORD *)(a1 + 40),
                  *(PRKEVENT *)(a1 + 48));
                return;
              }
              if ( v54 == 1 )
              {
                sub_140757090(*(PVOID *)(a1 + 8));
                return;
              }
              goto LABEL_146;
            }
            if ( *(_QWORD *)(a1 + 8) )
            {
              sub_1402D8E9C(v68);
            }
            else
            {
              v55 = *(unsigned __int8 *)(a1 + 16);
              ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140D311C0);
              if ( dword_140D06B08 )
              {
                if ( (dword_140D06B08 & 1) != 0 )
                {
                  CurrentIrql = KeGetCurrentIrql();
                  if ( CurrentIrql <= 0xFu && (unsigned __int8)v55 <= 0xFu && CurrentIrql >= 2u )
                  {
                    CurrentPrcb = KeGetCurrentPrcb();
                    v58 = *((_QWORD *)CurrentPrcb + 4375);
                    v59 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v55 + 1));
                    v60 = (v59 & *(_DWORD *)(v58 + 20)) == 0;
                    *(_DWORD *)(v58 + 20) &= v59;
                    if ( v60 )
                      sub_140418E4C((__int64)CurrentPrcb);
                  }
                }
              }
              __writecr8(v55);
            }
            return;
          }
          v11 = MmUnmapViewOfSection(qword_140D06A30, *(_QWORD *)(a1 + 8));
        }
        else
        {
          v11 = MmMapViewOfSection(
                  *(_QWORD *)(a1 + 8),
                  qword_140D06A30,
                  a1 + 16,
                  0LL,
                  0LL,
                  a1 + 24,
                  a1 + 32,
                  2,
                  0x40000,
                  2);
        }
        goto LABEL_22;
      }
      if ( v6 == 30 )
      {
        sub_14097FA08(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16));
        return;
      }
      v39 = v6 - 25;
      if ( v39 )
      {
        v40 = v39 - 1;
        if ( v40 )
        {
          v41 = v40 - 1;
          if ( !v41 )
          {
            PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x646C6D4Du);
            v49 = PoolWithTag;
            if ( PoolWithTag )
            {
              PoolWithTag->Next = 0LL;
              *(_DWORD *)&PoolWithTag->Size = 56;
              PoolWithTag->StartVa = 0LL;
              *(_QWORD *)&PoolWithTag->ByteCount = 4096LL;
              PoolWithTag[1].Next = *(struct _MDL **)(a1 + 8);
              PoolWithTag->MdlFlags = 2;
              MmMapLockedPagesSpecifyCache(PoolWithTag, 0, MmCached, 0LL, 0, 0x40000010u);
              if ( (v49->MdlFlags & 1) != 0 )
              {
                *(_QWORD *)(a1 + 8) = 0LL;
                *(_QWORD *)(a1 + 16) = v49;
                *(_QWORD *)(a1 + 24) = v49->MappedSystemVa;
                return;
              }
              ExFreePoolWithTag(v49, 0);
            }
            v12 = 3221225626LL;
LABEL_25:
            *(_QWORD *)(a1 + 8) = v12;
            return;
          }
          v42 = v41 - 1;
          if ( v42 )
          {
            if ( v42 == 1 )
            {
              v43 = *(_QWORD *)(a1 + 24);
              v44 = *(_QWORD *)(a1 + 16);
              v45 = *(_QWORD *)(a1 + 8);
              if ( v43 )
                sub_1405A3E3C(v45, v44, v43, *(_DWORD *)(a1 + 32));
              else
                sub_14097F95C(v45, v44);
              return;
            }
LABEL_146:
            LOBYTE(a3) = 1;
            sub_14079F130(KeGetCurrentThread(), 3221225477LL, a3);
            return;
          }
          v46 = *(struct _MDL **)(a1 + 8);
          MmUnmapLockedPages(v46->MappedSystemVa, v46);
          v47 = v46;
        }
        else
        {
          v47 = (void *)sub_14054E1A8(*(__int64 ***)(a1 + 8), 0LL);
        }
        ExFreePoolWithTag(v47, 0);
        return;
      }
      v50 = sub_14054DB08(
              *(_QWORD *)(a1 + 8),
              *(_DWORD *)(a1 + 16),
              (_QWORD *)(a1 + 16),
              (_QWORD *)(a1 + 24),
              (_QWORD *)(a1 + 32));
    }
    *(_DWORD *)(a1 + 8) = v50;
    return;
  }
  if ( v6 == 24 )
  {
    v11 = sub_140544258(0, a2, *(_QWORD *)(a1 + 8) != 0LL);
    goto LABEL_22;
  }
  if ( v6 > 0xC )
  {
    if ( v6 > 0x12 )
    {
      v34 = v6 - 19;
      if ( v34 )
      {
        v35 = v34 - 1;
        if ( v35 )
        {
          v36 = v35 - 1;
          if ( v36 )
          {
            v37 = v36 - 1;
            if ( v37 )
            {
              if ( v37 == 1 )
              {
                sub_14054E490(a1, a2);
                return;
              }
              goto LABEL_146;
            }
            v11 = sub_1409B3230(*(unsigned int *)(a1 + 8), a2, *(_QWORD *)(a1 + 24));
          }
          else
          {
            ActivityId = (const GUID *)(a1 + 32);
            if ( !*(_QWORD *)(a1 + 32) && !*(_QWORD *)(a1 + 40) )
              ActivityId = 0LL;
            if ( *(_QWORD *)(a1 + 48) || *(_QWORD *)(a1 + 56) )
              RelatedActivityId = (GUID *)(a1 + 48);
            v11 = EtwWriteEx(
                    *(_QWORD *)(a1 + 8),
                    (PCEVENT_DESCRIPTOR)(a1 + 16),
                    0LL,
                    0,
                    ActivityId,
                    RelatedActivityId,
                    *(_DWORD *)(a1 + 64),
                    *(PEVENT_DATA_DESCRIPTOR *)(a1 + 72));
          }
        }
        else
        {
          v11 = EtwSetInformation(
                  *(_QWORD *)(a1 + 8),
                  *(EVENT_INFO_CLASS *)(a1 + 16),
                  *(PVOID *)(a1 + 24),
                  *(_DWORD *)(a1 + 32));
        }
      }
      else
      {
        v11 = EtwUnregister(*(_QWORD *)(a1 + 8));
      }
      goto LABEL_22;
    }
    if ( v6 == 18 )
    {
      RegHandle = 0LL;
      v33 = *(void **)(a1 + 24);
      if ( v33 )
        RelatedActivityId = (GUID *)sub_1409325C0;
      *(_QWORD *)(a1 + 8) = EtwRegister((LPCGUID)(a1 + 8), (PETWENABLECALLBACK)RelatedActivityId, v33, &RegHandle);
      *(_QWORD *)(a1 + 16) = RegHandle;
      return;
    }
    v25 = v6 - 13;
    if ( v25 )
    {
      v26 = v25 - 1;
      if ( !v26 )
      {
        v29 = *((_QWORD *)KeGetCurrentThread() + 23);
        v30 = *(_QWORD *)(a1 + 8);
        if ( v29 != v30 )
        {
          sub_14030D5C0(v30, 0LL, (__int64)v73, a4);
          v30 = *(_QWORD *)(a1 + 8);
        }
        v31 = sub_1407B9FA0(*(_QWORD *)(a1 + 16), v30, (int)a1 + 24, (int)a1 + 32, *(_DWORD *)(a1 + 40), a1 + 40);
        if ( v29 != *(_QWORD *)(a1 + 8) )
          sub_1402D0930((__int64)v73, 0LL);
        *(_DWORD *)(a1 + 8) = v31;
        return;
      }
      v27 = v26 - 1;
      if ( !v27 )
      {
        LOBYTE(v12) = sub_14092AC20(*(_QWORD *)(a1 + 8));
        goto LABEL_24;
      }
      v28 = v27 - 1;
      if ( !v28 )
      {
        sub_14092AAA4(*(_QWORD *)(a1 + 8));
        return;
      }
      if ( v28 != 1 )
        goto LABEL_146;
      memset(v74, 0, sizeof(v74));
      v11 = sub_14092A29C(*(_QWORD *)(a1 + 8), *(unsigned int *)(a1 + 16), v74);
      goto LABEL_22;
    }
    v18 = *((_QWORD *)KeGetCurrentThread() + 23);
    v32 = *(_QWORD *)(a1 + 8);
    if ( v18 != v32 )
      sub_14030D5C0(v32, 0LL, (__int64)v73, a4);
    v23 = sub_1407B99C0(0xFFFFFFFFFFFFFFFFuLL, 0, 0x10000000);
LABEL_42:
    v24 = v23;
    if ( v18 != *(_QWORD *)(a1 + 8) )
      sub_1402D0930((__int64)v73, 0LL);
    *(_DWORD *)(a1 + 8) = v24;
    return;
  }
  if ( v6 == 12 )
  {
    v18 = *((_QWORD *)KeGetCurrentThread() + 23);
    v19 = *(_QWORD *)(a1 + 8);
    if ( v18 != v19 )
      sub_14030D5C0(v19, 0LL, (__int64)v73, a4);
    v20 = 0;
    v21 = 0LL;
    v22 = *(_QWORD *)(a1 + 48);
    if ( v22 || *(_QWORD *)(a1 + 56) )
    {
      *(_QWORD *)&v70 = 1LL;
      *((_QWORD *)&v70 + 1) = &v71;
      v71 = v22;
      v72 = *(_QWORD *)(a1 + 56);
      v20 = 1;
      v21 = &v70;
    }
    v23 = sub_1407E66D0(-1, (int)a1 + 24, (int)a1 + 32, *(_DWORD *)(a1 + 40), 4, v21, v20, 0, 0x10000000, 0, 0LL);
    goto LABEL_42;
  }
  if ( v6 > 6 )
  {
    v13 = v6 - 7;
    if ( !v13 )
    {
      LOBYTE(v12) = sub_1402F5FD0(*(_QWORD *)(a1 + 8), a2, a3, a4);
      goto LABEL_24;
    }
    v14 = v13 - 1;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( !v15 )
      {
        CurrentThread = KeGetCurrentThread();
        --*((_WORD *)CurrentThread + 242);
        KeLeaveCriticalRegion();
        return;
      }
      v16 = v15 - 1;
      if ( !v16 )
      {
        memmove(*(void **)(a1 + 8), *(const void **)(a1 + 16), *(unsigned int *)(a1 + 24));
        *(_QWORD *)(a1 + 8) = 0LL;
        return;
      }
      if ( v16 != 1 )
        goto LABEL_146;
      LOBYTE(a2) = *(_BYTE *)(a1 + 24);
      v11 = sub_14097F148(*(_QWORD *)(a1 + 8), a2, 0LL, a1 + 16);
    }
    else
    {
      v11 = sub_140217B04(
              *(_BYTE *)(a1 + 8),
              (_QWORD *)((a1 + 24) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(a1 + 16) >> 64)),
              0LL);
    }
LABEL_22:
    *(_QWORD *)(a1 + 8) = v11;
    return;
  }
  if ( v6 == 6 )
  {
    LOBYTE(a3) = *(_BYTE *)(a1 + 24);
    LOBYTE(a2) = *(_BYTE *)(a1 + 16);
    LOBYTE(v12) = sub_1406EA7D0(*(_QWORD *)(a1 + 8), a2, a3);
LABEL_24:
    v12 = (unsigned __int8)v12;
    goto LABEL_25;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v11 = sub_1405E22E8(*(_DWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 24), (int)a1 + 16, a1 + 24);
    goto LABEL_22;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    sub_1405E281C(*(_QWORD *)(a1 + 16), *(unsigned int *)(a1 + 24), *(_QWORD *)(a1 + 8));
    return;
  }
  v9 = v8 - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( !v10 )
    {
      sub_1408824D0(a1);
      return;
    }
    if ( v10 == 1 )
    {
      sub_1409B31F4(a1);
      return;
    }
    goto LABEL_146;
  }
  v75[0] = *(_OWORD *)(a1 + 10);
  v75[1] = *(_OWORD *)(a1 + 26);
  v75[2] = *(_OWORD *)(a1 + 42);
  v75[3] = *(_OWORD *)(a1 + 58);
  v75[4] = *(_OWORD *)(a1 + 74);
  v76 = *(_QWORD *)(a1 + 90);
  v77 = *(_DWORD *)(a1 + 98);
  v78 = *(_WORD *)(a1 + 102);
  v79 = 0;
  DbgPrintEx(
    0,
    0,
    "IUM [VP:%u,TK:%#02x,LN:%04u] %s\n",
    *(unsigned __int16 *)(a1 + 8) >> 13,
    *(_DWORD *)(a1 + 4),
    (*(unsigned __int16 *)(a1 + 8) >> 1) & 0xFFF,
    (const char *)v75);
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
    __debugbreak();
}
