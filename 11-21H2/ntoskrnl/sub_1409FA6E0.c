/*
 * XREFs of sub_1409FA6E0 @ 0x1409FA6E0
 * Callers:
 *     ExUpdateLicenseData @ 0x1406EB170 (ExUpdateLicenseData.c)
 *     sub_14082D3F8 @ 0x14082D3F8 (sub_14082D3F8.c)
 * Callees:
 *     sub_14026D048 @ 0x14026D048 (sub_14026D048.c)
 *     PsIsHostSilo @ 0x1402A6DF0 (PsIsHostSilo.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     PsGetCurrentServerSilo @ 0x1402F61B0 (PsGetCurrentServerSilo.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 *     qsort @ 0x1403E1E70 (qsort.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwCreateSection @ 0x14041C0A0 (ZwCreateSection.c)
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140639C30 @ 0x140639C30 (sub_140639C30.c)
 *     sub_140639D84 @ 0x140639D84 (sub_140639D84.c)
 *     sub_140639FC4 @ 0x140639FC4 (sub_140639FC4.c)
 *     ntoskrnl_20 @ 0x1406A71F0 (ntoskrnl_20.c)
 *     ntoskrnl_22 @ 0x1406EB390 (ntoskrnl_22.c)
 *     sub_1406F3FDC @ 0x1406F3FDC (sub_1406F3FDC.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_14082E0E8 @ 0x14082E0E8 (sub_14082E0E8.c)
 *     sub_14083F230 @ 0x14083F230 (sub_14083F230.c)
 *     ntoskrnl_24 @ 0x1409F9AA0 (ntoskrnl_24.c)
 *     sub_1409FA10C @ 0x1409FA10C (sub_1409FA10C.c)
 *     sub_1409FA6B8 @ 0x1409FA6B8 (sub_1409FA6B8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1409FA6E0(__int64 a1, int a2, unsigned int *a3)
{
  PVOID v6; // r13
  void *v7; // r12
  int v8; // ecx
  __int64 v9; // rdx
  unsigned int v10; // r8d
  char *v11; // r12
  char v12; // r14
  volatile signed __int64 *v13; // r13
  _DWORD *v14; // rcx
  unsigned int v15; // edx
  struct _KTHREAD *v16; // rax
  bool v17; // di
  __int64 v18; // rdx
  __int64 v19; // rdx
  unsigned int v20; // ecx
  __int64 v21; // r9
  NTSTATUS v22; // edi
  unsigned int *v23; // rdi
  _DWORD *v24; // rcx
  int v25; // esi
  struct _KTHREAD *v26; // rax
  size_t v27; // rdi
  PVOID PoolWithTag; // rax
  unsigned int v29; // r12d
  __int64 v30; // rax
  __int64 v31; // rsi
  _QWORD *v32; // rdi
  int v33; // eax
  __int64 v34; // r9
  __int64 v35; // rdx
  struct _KTHREAD *v36; // rax
  __int64 v37; // rdx
  ULONG_PTR v38; // r12
  __int64 v39; // rdi
  unsigned int v40; // ecx
  __int64 v41; // r9
  __int64 CurrentServerSilo; // rax
  char v43; // al
  bool v44; // di
  PVOID v45; // rax
  struct _KTHREAD *v46; // rax
  struct _KTHREAD *v47; // rax
  signed int v49; // [rsp+40h] [rbp-1D8h]
  bool v50; // [rsp+44h] [rbp-1D4h]
  char v51; // [rsp+45h] [rbp-1D3h]
  bool v52; // [rsp+46h] [rbp-1D2h]
  size_t NumOfElements; // [rsp+48h] [rbp-1D0h] BYREF
  void *Src; // [rsp+50h] [rbp-1C8h]
  PVOID v55; // [rsp+58h] [rbp-1C0h]
  int v56; // [rsp+60h] [rbp-1B8h] BYREF
  unsigned int v57; // [rsp+64h] [rbp-1B4h]
  unsigned int v58; // [rsp+68h] [rbp-1B0h]
  ULONG_PTR BugCheckParameter1; // [rsp+70h] [rbp-1A8h] BYREF
  int v60; // [rsp+78h] [rbp-1A0h] BYREF
  PVOID v61; // [rsp+80h] [rbp-198h]
  PVOID Object; // [rsp+88h] [rbp-190h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+90h] [rbp-188h] BYREF
  HANDLE SectionHandle; // [rsp+98h] [rbp-180h] BYREF
  PVOID v65; // [rsp+A0h] [rbp-178h]
  ULONG_PTR v66; // [rsp+A8h] [rbp-170h]
  __int128 v67; // [rsp+B8h] [rbp-160h] BYREF
  __int128 v68; // [rsp+C8h] [rbp-150h]
  __int128 v69; // [rsp+D8h] [rbp-140h]
  __int128 v70; // [rsp+E8h] [rbp-130h] BYREF
  __int128 v71; // [rsp+F8h] [rbp-120h]
  __int128 v72; // [rsp+108h] [rbp-110h]
  int v73; // [rsp+118h] [rbp-100h]
  __int64 v74; // [rsp+120h] [rbp-F8h] BYREF
  unsigned __int64 v75; // [rsp+128h] [rbp-F0h] BYREF
  __int64 v76; // [rsp+130h] [rbp-E8h]
  __int128 v77; // [rsp+138h] [rbp-E0h] BYREF
  __int128 v78; // [rsp+148h] [rbp-D0h]
  __int128 v79; // [rsp+158h] [rbp-C0h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+168h] [rbp-B0h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+198h] [rbp-80h]
  struct _KTHREAD *v82; // [rsp+1A0h] [rbp-78h]
  __int64 v83; // [rsp+1A8h] [rbp-70h]
  _OWORD v84[6]; // [rsp+1B0h] [rbp-68h] BYREF
  char v85; // [rsp+230h] [rbp+18h]

  v52 = 0;
  v50 = 0;
  v85 = 0;
  SectionHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  MaximumSize.QuadPart = 0LL;
  BugCheckParameter1 = 0LL;
  v66 = 0LL;
  v6 = 0LL;
  v55 = 0LL;
  v65 = 0LL;
  LODWORD(NumOfElements) = 0;
  v7 = 0LL;
  Src = 0LL;
  v56 = 0;
  v60 = 0;
  v77 = 0LL;
  v78 = 0LL;
  v79 = 0LL;
  if ( !a3 || (unsigned int)(a2 - 25) > 0x13FE7 || ((unsigned __int8)a3 & 3) != 0 )
  {
    v49 = -1073741811;
    goto LABEL_146;
  }
  v8 = *a3;
  if ( *a3 > 0x14000 || (v9 = a3[1], (unsigned int)v9 > 0x14000) || (v10 = a3[2], v10 > 0x14000) )
  {
    v49 = -1073741760;
    goto LABEL_146;
  }
  Object = a3 + 5;
  v11 = (char *)a3 + v9 + 20;
  if ( ((unsigned __int8)v11 & 3) != 0 )
  {
    v49 = -1073741811;
    v7 = 0LL;
LABEL_146:
    v12 = 1;
    goto LABEL_123;
  }
  v12 = 1;
  if ( v10 + (_DWORD)v9 + 20 != v8 || v8 != a2 || a3[4] != 1 )
  {
    v49 = -1073741811;
    v7 = 0LL;
    goto LABEL_123;
  }
  v49 = 0;
  *(_BYTE *)(a1 + 46856) = 0;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v13 = (volatile signed __int64 *)(a1 + 46840);
  ExAcquirePushLockSharedEx(a1 + 46840, 0LL);
  v61 = *(PVOID *)a1;
  v50 = v61 == 0LL;
  if ( !ntoskrnl_22() )
  {
    if ( !v61 && (a3[3] & 1) != 0 )
    {
      v49 = -1073741811;
      goto LABEL_29;
    }
LABEL_19:
    v52 = 0;
    if ( !v61 )
    {
      v14 = *(_DWORD **)(a1 + 46832);
      if ( v14 )
      {
        if ( !*(_BYTE *)(a1 + 46992) && *a3 == *v14 )
        {
          v15 = a3[1];
          if ( v15 == v14[1]
            && a3[2] == v14[2]
            && a3[3] == v14[3]
            && a3[4] == v14[4]
            && RtlCompareMemory(v14 + 5, a3 + 5, v15) == a3[1] )
          {
            v52 = RtlCompareMemory(
                    (const void *)(*(unsigned int *)(*(_QWORD *)(a1 + 46832) + 4LL) + *(_QWORD *)(a1 + 46832) + 20LL),
                    v11,
                    a3[2]) == a3[2];
          }
        }
      }
    }
    goto LABEL_29;
  }
  if ( v61 )
    goto LABEL_19;
  v49 = -1073741823;
LABEL_29:
  if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 46840));
  sub_1402AFC00(a1 + 46840);
  sub_1402F9540((__int64)KeGetCurrentThread());
  if ( v49 < 0 )
    goto LABEL_121;
  if ( v52 )
  {
    v16 = KeGetCurrentThread();
    --*((_WORD *)v16 + 242);
    ExAcquirePushLockExclusiveEx(a1 + 46840, 0LL);
    sub_140639C30(a1, &v56);
    v17 = v56 != 0;
    v18 = *(unsigned int *)(a1 + 46824);
    HIDWORD(v67) = 0;
    *(_DWORD *)((char *)&v69 + 9) = 0;
    *(_WORD *)((char *)&v69 + 13) = 0;
    HIBYTE(v69) = 0;
    if ( !(_DWORD)v18 || a1 != -24 )
    {
      *(_QWORD *)&v67 = 0LL;
      v68 = 0uLL;
      DWORD2(v67) = 0;
      *(_QWORD *)&v69 = 10800LL;
      BYTE8(v69) = 1;
      v20 = sub_140639D84((__int64)Object, v18, &v67);
      if ( !v20 )
      {
        if ( (_DWORD)v19 )
        {
          v20 = (unsigned __int64)(16 * v19) > 0xFFFFFFFF ? 0xC0000095 : 0;
          if ( (unsigned __int64)(16 * v19) <= 0xFFFFFFFF )
            v20 = sub_140639D84(v21, 0xFFFFFFFFLL, &v67);
        }
      }
      if ( v20 )
      {
        *(_QWORD *)&v67 = 0LL;
        DWORD2(v67) = 4;
      }
      v77 = v67;
      v78 = v68;
      v79 = v69;
      ntoskrnl_20(a1, (__int64)&v77, 7, 1);
    }
    if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 46840);
    sub_1402AFC00(a1 + 46840);
    sub_1402F9540((__int64)KeGetCurrentThread());
    if ( v17 )
      sub_1409FA6B8(a1);
    v49 = 0x40000000;
    v7 = 0LL;
    v6 = 0LL;
    goto LABEL_123;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 544;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  MaximumSize.QuadPart = *a3;
  v49 = ZwCreateSection(&SectionHandle, 0xF0007u, &ObjectAttributes, &MaximumSize, 4u, 0x8000000u, 0LL);
  if ( v49 < 0 )
    goto LABEL_121;
  Object = 0LL;
  v22 = ObReferenceObjectByHandle(SectionHandle, 0, 0LL, 0, &Object, 0LL);
  v55 = Object;
  v49 = v22;
  ZwClose(SectionHandle);
  if ( v22 < 0 )
    goto LABEL_121;
  v75 = 0LL;
  v74 = 0LL;
  v49 = sub_1406F3FDC((__int64)v55, &BugCheckParameter1, &v75, &v74, 0LL, 0LL);
  if ( v49 < 0 )
    goto LABEL_121;
  v23 = (unsigned int *)BugCheckParameter1;
  *(_OWORD *)BugCheckParameter1 = *(_OWORD *)a3;
  v23[4] = a3[4];
  memmove(v23 + 5, a3 + 5, a3[1]);
  memmove((char *)v23 + a3[1] + 20, v11, a3[2]);
  v24 = (unsigned int *)((char *)v23 + v23[1] + 20);
  v25 = 0;
  if ( v23[2] != 4 || !v24 || *v24 != 69 )
  {
    v49 = -1073741761;
    goto LABEL_121;
  }
  v49 = sub_14082E0E8((__int64)v23, 1, 0LL, 0, (unsigned int *)&NumOfElements);
  if ( v49 == -1073741789 )
  {
    v26 = KeGetCurrentThread();
    --*((_WORD *)v26 + 242);
    ExAcquirePushLockSharedEx(a1 + 46840, 0LL);
    v49 = (unsigned int)NumOfElements > 0xB6D ? 0xC000000D : 0;
    if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 46840));
    sub_1402AFC00(a1 + 46840);
    sub_1402F9540((__int64)KeGetCurrentThread());
    if ( v49 < 0 )
      goto LABEL_121;
    v27 = (unsigned int)NumOfElements;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16LL * (unsigned int)NumOfElements, 0x20534C53u);
    v7 = PoolWithTag;
    Src = PoolWithTag;
    if ( !PoolWithTag )
    {
      v49 = -1073741801;
LABEL_122:
      v6 = v55;
      goto LABEL_123;
    }
    v49 = sub_14082E0E8(BugCheckParameter1, 0, PoolWithTag, NumOfElements, 0LL);
    if ( v49 >= 0 )
      qsort(v7, v27, 0x10uLL, (int (__cdecl *)(const void *, const void *))sub_14083F230);
  }
  else
  {
    v7 = 0LL;
  }
  if ( v49 < 0 )
  {
    v6 = v55;
    if ( v49 == -1073741762 )
      v49 = -1073741811;
    goto LABEL_123;
  }
  v51 = 0;
  v82 = KeGetCurrentThread();
  --*((_WORD *)v82 + 242);
  ExAcquirePushLockSharedEx(a1 + 46840, 0LL);
  if ( !v61 )
  {
    v29 = 0;
    v58 = 0;
    v30 = 0LL;
    v57 = 0;
    while ( v29 < (unsigned int)NumOfElements )
    {
      if ( (unsigned int)v30 >= *(_DWORD *)(a1 + 46824) )
      {
        while ( v29 < (unsigned int)NumOfElements )
        {
          v76 = *((_QWORD *)Src + 2 * v29 + 1);
          if ( (*(_DWORD *)(v76 + 8) & 2) != 0 )
            goto LABEL_71;
          v58 = ++v29;
        }
        break;
      }
      v31 = (unsigned int)v30;
      v32 = (char *)Src + 16 * v29;
      v33 = sub_14083F230(v32, (_QWORD *)(16 * v30 + a1 + 24));
      v73 = v33;
      v34 = v32[1];
      v76 = v34;
      v35 = *(_QWORD *)(a1 + 16 * (v31 + 2));
      v83 = v35;
      v25 = 0;
      if ( v33 >= 0 )
      {
        if ( v33 <= 0 )
        {
          if ( (*(_DWORD *)(v34 + 8) & 2) != 0
            && (*(_WORD *)(v34 + 6) != *(_WORD *)(v35 + 6)
             || memcmp(
                  (const void *)(*(unsigned __int16 *)(v34 + 2) + v34 + 16),
                  (const void *)(*(unsigned __int16 *)(v35 + 2) + 16LL + v35),
                  *(unsigned __int16 *)(v35 + 6))) )
          {
LABEL_71:
            v51 = 1;
            break;
          }
          v58 = ++v29;
        }
        v30 = ++v57;
      }
      else
      {
        if ( (*(_DWORD *)(v34 + 8) & 2) != 0 )
          goto LABEL_71;
        v58 = ++v29;
        v30 = v57;
      }
    }
  }
  if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 46840));
  sub_1402AFC00(a1 + 46840);
  sub_1402F9540((__int64)KeGetCurrentThread());
  ObfReferenceObject(v55);
  v36 = KeGetCurrentThread();
  --*((_WORD *)v36 + 242);
  ExAcquirePushLockExclusiveEx(a1 + 46840, 0LL);
  HIDWORD(v70) = 0;
  *(_DWORD *)((char *)&v72 + 9) = 0;
  *(_WORD *)((char *)&v72 + 13) = 0;
  HIBYTE(v72) = 0;
  v38 = BugCheckParameter1;
  if ( BugCheckParameter1 )
  {
    v39 = (unsigned int)NumOfElements;
    if ( !(_DWORD)NumOfElements || Src )
    {
      *(_QWORD *)&v70 = 0LL;
      v71 = 0uLL;
      DWORD2(v70) = 0;
      *(_QWORD *)&v72 = 10800LL;
      BYTE8(v72) = 1;
      v40 = sub_140639D84(BugCheckParameter1 + 20, v37, &v70);
      if ( !v40 )
      {
        if ( (_DWORD)v39 )
        {
          v40 = (unsigned __int64)(16 * v39) > 0xFFFFFFFF ? 0xC0000095 : 0;
          if ( (unsigned __int64)(16 * v39) <= 0xFFFFFFFF )
            v40 = sub_140639D84(v41, 0xFFFFFFFFLL, &v70);
        }
      }
      if ( v40 )
      {
        *(_QWORD *)&v70 = 0LL;
        DWORD2(v70) = 4;
      }
      v77 = v70;
      v78 = v71;
      v79 = v72;
      goto LABEL_96;
    }
  }
  else
  {
    LODWORD(v39) = NumOfElements;
  }
  v25 = -1073741811;
LABEL_96:
  v49 = v25;
  if ( v25 < 0 )
  {
    v44 = 0;
  }
  else
  {
    ntoskrnl_20(a1, (__int64)&v77, 7, 1);
    v65 = *(PVOID *)(a1 + 16);
    v66 = *(_QWORD *)(a1 + 46832);
    *(_QWORD *)(a1 + 16) = v55;
    *(_QWORD *)(a1 + 46832) = v38;
    BugCheckParameter1 = 0LL;
    CurrentServerSilo = PsGetCurrentServerSilo();
    if ( !PsIsHostSilo(CurrentServerSilo) && *(_QWORD *)a1 )
      ExFreePoolWithTag(*(PVOID *)a1, 0x69534C53u);
    *(_QWORD *)a1 = 0LL;
    v85 = *(_BYTE *)(a1 + 46992);
    *(_BYTE *)(a1 + 46992) = 0;
    memset((void *)(a1 + 24), 0, 16LL * *(unsigned int *)(a1 + 46824));
    *(_DWORD *)(a1 + 46824) = 0;
    if ( Src )
    {
      memmove((void *)(a1 + 24), Src, 16LL * (unsigned int)v39);
      *(_DWORD *)(a1 + 46824) = v39;
    }
    *(_BYTE *)(a1 + 46828) = 1;
    sub_140639C30(a1, &v60);
    v43 = v50;
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 46832) + 12LL) & 1) != 0 )
      v43 = 1;
    v50 = v43;
    sub_140639FC4(a1, 2 * (*(_DWORD *)(*(_QWORD *)(a1 + 46832) + 12LL) & 1));
    sub_140639C30(a1, &v56);
    v44 = v60 != v56 && (!v60 || !v56);
  }
  if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 46840);
  sub_1402AFC00(a1 + 46840);
  sub_1402F9540((__int64)KeGetCurrentThread());
  if ( v25 < 0 )
    goto LABEL_121;
  v45 = v61;
  if ( v61 )
    goto LABEL_116;
  v49 = sub_1409FA10C(a1);
  if ( v49 < 0 )
  {
LABEL_121:
    v7 = Src;
    goto LABEL_122;
  }
  v45 = v61;
LABEL_116:
  if ( v44 || !v45 )
    sub_1409FA6B8(a1);
  v49 = 0;
  v7 = Src;
  v6 = v55;
  if ( v51 == 1 )
    v49 = 263;
LABEL_123:
  if ( v85 && !*(_BYTE *)(a1 + 46992) )
    ntoskrnl_24(&stru_140039AE0);
  if ( v50 )
  {
    v46 = KeGetCurrentThread();
    --*((_WORD *)v46 + 242);
    ExAcquirePushLockExclusiveEx(a1 + 46840, 0LL);
    memset(v84, 0, 48);
    ntoskrnl_20(a1, (__int64)v84, 32, 0);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 46840), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 46840);
    sub_1402AFC00(a1 + 46840);
    sub_1402F9540((__int64)KeGetCurrentThread());
  }
  if ( v6 )
    ObfDereferenceObject(v6);
  if ( v65 )
    ObfDereferenceObject(v65);
  if ( BugCheckParameter1 )
    sub_14026D048(BugCheckParameter1, 1);
  if ( v66 )
    sub_14026D048(v66, 1);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v49 == -1073741811 || (unsigned int)(v49 + 1073741761) <= 1 )
  {
    v47 = KeGetCurrentThread();
    --*((_WORD *)v47 + 242);
    ExAcquirePushLockExclusiveEx(a1 + 46840, 0LL);
    sub_140639C30(a1, &v56);
    if ( v56 )
      v12 = 0;
    else
      sub_140639FC4(a1, 5);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 46840), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 46840);
    sub_1402AFC00(a1 + 46840);
    sub_1402F9540((__int64)KeGetCurrentThread());
    if ( v12 )
      sub_1409FA6B8(a1);
  }
  return (unsigned int)v49;
}
