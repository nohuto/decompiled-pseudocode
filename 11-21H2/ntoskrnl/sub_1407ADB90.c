/*
 * XREFs of sub_1407ADB90 @ 0x1407ADB90
 * Callers:
 *     IoCreateFileEx @ 0x14066E670 (IoCreateFileEx.c)
 *     IoCreateFile @ 0x1406CAD00 (IoCreateFile.c)
 *     NtOpenFile @ 0x1407D8800 (NtOpenFile.c)
 *     NtCreateFile @ 0x1407E0BC0 (NtCreateFile.c)
 * Callees:
 *     PsGetCurrentProcess @ 0x1402A3820 (PsGetCurrentProcess.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     sub_1402F672C @ 0x1402F672C (sub_1402F672C.c)
 *     PsGetCurrentSilo @ 0x140347D50 (PsGetCurrentSilo.c)
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14065863C @ 0x14065863C (sub_14065863C.c)
 *     IoCheckEaBufferValidity @ 0x1406C6310 (IoCheckEaBufferValidity.c)
 *     sub_14072E9E0 @ 0x14072E9E0 (sub_14072E9E0.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     ObOpenObjectByNameEx @ 0x1407CAF90 (ObOpenObjectByNameEx.c)
 *     sub_1407F97EC @ 0x1407F97EC (sub_1407F97EC.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1407ADB90(
        HANDLE *a1,
        int a2,
        __int64 a3,
        int *a4,
        HANDLE *a5,
        int a6,
        int a7,
        unsigned int a8,
        int a9,
        ULONG *Src,
        size_t Size,
        int a12,
        _DWORD *a13,
        int a14,
        int a15,
        __int16 *a16)
{
  int v16; // r15d
  unsigned __int8 v17; // r13
  unsigned __int8 v18; // al
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v20; // rbx
  __int64 v21; // rdi
  __int64 v22; // rbx
  struct _KPRCB *v23; // rdx
  __int64 v24; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  HANDLE v28; // rbx
  void *Pool2; // rax
  int v30; // eax
  int *v31; // r14
  int v32; // ecx
  void *v33; // rax
  struct _KPRCB *v34; // rdx
  __int64 v35; // rcx
  NTSTATUS v36; // esi
  struct _KPRCB *v37; // rdx
  __int64 v38; // rcx
  size_t v39; // r8
  int v40; // ebx
  void *v41; // rcx
  int v42; // esi
  int v43; // ecx
  __int64 v44; // rcx
  unsigned __int64 v45; // rdx
  __int64 v46; // rax
  void *v47; // rcx
  unsigned __int8 v48; // r14
  unsigned __int8 v49; // al
  struct _KPRCB *v50; // rsi
  __int64 v51; // rbx
  __int64 v52; // rbx
  struct _KPRCB *v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rcx
  HANDLE v57; // rbx
  __int64 v58; // rax
  __int16 v59; // cx
  struct _KPRCB *v60; // rdx
  __int64 v61; // rcx
  ULONG *v62; // rsi
  ULONG v63; // r14d
  struct _KPRCB *v64; // rdx
  __int64 v65; // rcx
  unsigned __int64 v66; // rax
  void *v67; // rax
  int *v68; // r13
  int v69; // eax
  int v70; // ecx
  __int64 CurrentProcess; // rax
  __int16 v72; // cx
  ULONG *v73; // r14
  ULONG v74; // esi
  void *v75; // rax
  NTSTATUS v76; // esi
  struct _KPRCB *v77; // rdx
  __int64 v78; // rcx
  size_t v79; // r8
  int v80; // ebx
  void *v81; // rcx
  int v82; // esi
  int v83; // ecx
  __int64 v84; // rcx
  unsigned __int64 v85; // rdx
  __int64 v86; // rax
  void *v87; // rcx
  unsigned int v88; // [rsp+40h] [rbp-78h]
  unsigned int v89; // [rsp+44h] [rbp-74h]
  unsigned __int8 v90; // [rsp+5Ch] [rbp-5Ch]
  HANDLE Handle; // [rsp+60h] [rbp-58h] BYREF
  HANDLE v92; // [rsp+68h] [rbp-50h] BYREF
  ULONG *v93; // [rsp+70h] [rbp-48h]
  int v98; // [rsp+128h] [rbp+70h]
  int v99; // [rsp+128h] [rbp+70h]

  v16 = a9;
  if ( dword_140C0959C != 1 && (!dword_140C0959C || !sub_14065863C()) )
  {
    Handle = 0LL;
    v17 = 0;
    v18 = *((_BYTE *)KeGetCurrentThread() + 562);
    if ( (a14 & 0x100) == 0 )
      v17 = v18;
    CurrentPrcb = KeGetCurrentPrcb();
    v20 = *((_QWORD *)CurrentPrcb + 272);
    ++*(_DWORD *)(v20 + 20);
    v21 = (__int64)ExpInterlockedPopEntrySList((PSLIST_HEADER)v20);
    if ( !v21 )
    {
      ++*(_DWORD *)(v20 + 24);
      v22 = *((_QWORD *)CurrentPrcb + 273);
      ++*(_DWORD *)(v22 + 20);
      v21 = (__int64)ExpInterlockedPopEntrySList((PSLIST_HEADER)v22);
      if ( !v21 )
      {
        ++*(_DWORD *)(v22 + 24);
        v21 = sub_14042A5E0(*(unsigned int *)(v22 + 36), *(unsigned int *)(v22 + 44));
      }
    }
    if ( !v21 )
      return 3221225626LL;
    *(_DWORD *)v21 = *((_DWORD *)CurrentPrcb + 9);
    if ( !v17 && (a14 & 0x200) == 0 )
      goto LABEL_49;
    if ( (a6 & 0xFFA50048) != 0
      || (a7 & 0xFFFFFFF8) != 0
      || a8 > 5
      || (a9 & 0xFF000000) != 0
      || (a9 & 0x30) != 0 && (a2 & 0x100000) == 0
      || (a9 & 0x1000) != 0 && (a2 & 0x10000) == 0
      || (a9 & 0x30) == 0x30
      || (a9 & 0x41) == 1 && ((a9 & 0xFF5E0ACC) != 0 || a8 - 1 > 2)
      || (a9 & 0x100100) == 0x100100
      || (a9 & 0x10100) == 0x10100
      || (a9 & 0x110000) == 0x110000
      || (a9 & 8) != 0 && (a2 & 4) != 0 )
    {
      goto LABEL_40;
    }
    if ( !dword_140C0C624 || a2 )
    {
      if ( !a12 )
        goto LABEL_49;
      if ( a12 == 1 )
      {
        if ( !a13
          || (*a13 & 0xFFFFFFFC) != 0
          || a13[1] > 1u
          || a13[2] > 1u
          || (a7 & 4) != 0
          || a8 - 1 > 2
          || (a9 & 0xFFFFFFCD) != 0 )
        {
          goto LABEL_40;
        }
        goto LABEL_49;
      }
      if ( a12 != 2 || a13 && (a7 & 4) == 0 && (a7 & 0xFFFFFFFD) != 0 && a8 == 2 && (a9 & 0xFFFFFFCD) == 0 )
      {
LABEL_49:
        if ( v17 )
        {
          *(_QWORD *)(v21 + 72) = 0LL;
          v26 = 0x7FFFFFFF0000LL;
          if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
            v26 = (__int64)a1;
          *(_QWORD *)v26 = *(_QWORD *)v26;
          v27 = 0x7FFFFFFF0000LL;
          if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
            v27 = (__int64)a4;
          *(_DWORD *)v27 = *(_DWORD *)v27;
          if ( a5 )
          {
            if ( ((unsigned __int8)a5 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v28 = *a5;
            Handle = v28;
            if ( (__int64)v28 < 0 )
              RtlRaiseStatus(-1073741811);
          }
          else
          {
            v28 = 0LL;
            Handle = 0LL;
          }
          if ( Src && (_DWORD)Size )
          {
            if ( ((unsigned __int8)Src & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( (unsigned __int64)Src + (unsigned int)Size > 0x7FFFFFFF0000LL
              || (ULONG *)((char *)Src + (unsigned int)Size) < Src )
            {
              MEMORY[0x7FFFFFFF0000] = 0;
            }
            Pool2 = (void *)ExAllocatePool2(97LL, (unsigned int)Size, 1631940425LL);
            *(_QWORD *)(v21 + 72) = Pool2;
            *(_DWORD *)(v21 + 80) = Size;
            memmove(Pool2, Src, (unsigned int)Size);
            v30 = IoCheckEaBufferValidity(*(PFILE_FULL_EA_INFORMATION *)(v21 + 72), Size, (PULONG)a4 + 2);
            if ( v30 < 0 )
            {
              *a4 = v30;
              RtlRaiseStatus(v30);
            }
            v31 = a4;
            v32 = a14;
            goto LABEL_92;
          }
          v32 = a14;
LABEL_91:
          v31 = a4;
          *(_DWORD *)(v21 + 80) = 0;
          *(_QWORD *)(v21 + 72) = 0LL;
          goto LABEL_92;
        }
        v16 = a9 & 0x7FFFFFFF;
        if ( a9 >= 0 )
          v16 = a9;
        v32 = a14 | 0x400;
        if ( a9 >= 0 )
          v32 = a14;
        v98 = v32;
        if ( a5 )
        {
          v28 = *a5;
          if ( (__int64)*a5 < 0 )
            goto LABEL_40;
          Handle = *a5;
        }
        else
        {
          v28 = Handle;
        }
        if ( !Src || !(_DWORD)Size )
          goto LABEL_91;
        v33 = (void *)ExAllocatePool2(64LL, (unsigned int)Size, 1631940425LL);
        *(_QWORD *)(v21 + 72) = v33;
        if ( v33 )
        {
          *(_DWORD *)(v21 + 80) = Size;
          memmove(v33, Src, (unsigned int)Size);
          v31 = a4;
          v36 = IoCheckEaBufferValidity(*(PFILE_FULL_EA_INFORMATION *)(v21 + 72), Size, (PULONG)a4 + 2);
          v88 = v36;
          if ( v36 < 0 )
          {
            ExFreePoolWithTag(*(PVOID *)(v21 + 72), 0);
            *a4 = v36;
LABEL_86:
            v37 = KeGetCurrentPrcb();
            v38 = *((_QWORD *)v37 + 272);
            ++*(_DWORD *)(v38 + 28);
            if ( *(_WORD *)v38 < *(_WORD *)(v38 + 16)
              || (++*(_DWORD *)(v38 + 32),
                  v38 = *((_QWORD *)v37 + 273),
                  ++*(_DWORD *)(v38 + 28),
                  *(_WORD *)v38 < *(_WORD *)(v38 + 16)) )
            {
              ExpInterlockedPushEntrySList((PSLIST_HEADER)v38, (PSLIST_ENTRY)v21);
              return v88;
            }
            else
            {
              ++*(_DWORD *)(v38 + 32);
              sub_14042A5E0(v21, v37);
              return v88;
            }
          }
          v32 = v98;
LABEL_92:
          *(_DWORD *)v21 = 14680072;
          *(_DWORD *)(v21 + 32) = 0;
          *(_QWORD *)(v21 + 24) = 0LL;
          *(_QWORD *)(v21 + 56) = v28;
          *(_DWORD *)(v21 + 64) = v16;
          *(_WORD *)(v21 + 68) = a6;
          *(_WORD *)(v21 + 70) = a7;
          *(_DWORD *)(v21 + 88) = a8;
          *(_WORD *)(v21 + 136) = 0;
          *(_BYTE *)(v21 + 138) = 0;
          *(_DWORD *)(v21 + 84) = v32;
          *(_QWORD *)(v21 + 40) = 0LL;
          *(_QWORD *)(v21 + 48) = a3;
          *(_DWORD *)(v21 + 120) = a12;
          *(_QWORD *)(v21 + 128) = a13;
          *(_DWORD *)(v21 + 152) = a15;
          *(_BYTE *)(v21 + 156) = v17;
          *(_OWORD *)(v21 + 160) = 0LL;
          *(_OWORD *)(v21 + 176) = 0LL;
          *(_WORD *)(v21 + 160) = 40;
          *(_QWORD *)(v21 + 192) = 1LL;
          if ( a16 )
          {
            v39 = *a16;
            if ( v39 > 0x28 )
              v39 = 40LL;
            memmove((void *)(v21 + 160), a16, v39);
          }
          if ( *(_QWORD *)(v21 + 192) == 1LL )
            *(_QWORD *)(v21 + 192) = PsGetCurrentSilo();
          *(_DWORD *)(v21 + 16) = 0;
          *(_QWORD *)(v21 + 8) = 0LL;
          sub_1402F672C();
          v40 = ObOpenObjectByNameEx(a3, IoFileObjectType, v17, 0LL, a2, v21, *(_QWORD *)(v21 + 192), &Handle);
          v88 = v40;
          v41 = *(void **)(v21 + 72);
          if ( v41 )
            ExFreePoolWithTag(v41, 0);
          sub_1407F97EC(v21);
          v42 = *(_DWORD *)(v21 + 32);
          if ( v40 >= 0 )
          {
            if ( v42 == -1096154543 )
            {
              *(_DWORD *)(*(_QWORD *)(v21 + 8) + 80LL) |= 0x40000u;
              *(_DWORD *)(*(_QWORD *)(v21 + 8) + 80LL) &= ~0x2000000u;
              *a1 = Handle;
              *((_QWORD *)v31 + 1) = *(_QWORD *)(v21 + 24);
              *v31 = *(_DWORD *)(v21 + 16);
              v88 = *(_DWORD *)(v21 + 16);
LABEL_119:
              if ( v42 == -1096154543 )
              {
                v47 = *(void **)(v21 + 8);
                if ( v47 )
                  ObfDereferenceObject(v47);
              }
              goto LABEL_86;
            }
            ObCloseHandle(Handle, v17);
            v40 = -1073741788;
            v88 = -1073741788;
          }
          v43 = *(_DWORD *)(v21 + 16);
          if ( v43 >= 0 )
          {
            v44 = *(_QWORD *)(v21 + 8);
            if ( v44 )
            {
              if ( v42 == -1096154543 )
              {
                if ( (*(_DWORD *)(v44 + 80) & 0x40000) == 0 )
                  sub_14072E9E0(0LL, *(struct _FILE_OBJECT **)(v21 + 8), 1LL, 1LL);
              }
              else
              {
                if ( *(_WORD *)(v44 + 88) )
                {
                  ExFreePoolWithTag(*(PVOID *)(v44 + 96), 0);
                  v44 = *(_QWORD *)(v21 + 8);
                }
                *(_QWORD *)(v44 + 8) = 0LL;
                ObfDereferenceObject(*(PVOID *)(v21 + 8));
              }
            }
          }
          else
          {
            v40 = *(_DWORD *)(v21 + 16);
            v88 = v40;
            if ( (v43 & 0xC0000000) == 0x80000000 || v43 == -1073741191 )
            {
              *v31 = v43;
              *((_QWORD *)v31 + 1) = *(_QWORD *)(v21 + 24);
            }
          }
          if ( v40 == -1073741772 )
          {
            v45 = *(_QWORD *)(v21 + 24) - 2684354563LL;
            if ( v45 <= 0x16 )
            {
              v46 = 4194817LL;
              if ( _bittest64(&v46, v45) )
                v88 = -1073741184;
            }
          }
          goto LABEL_119;
        }
        goto LABEL_79;
      }
LABEL_40:
      v23 = KeGetCurrentPrcb();
      v24 = *((_QWORD *)v23 + 272);
      ++*(_DWORD *)(v24 + 28);
      if ( *(_WORD *)v24 < *(_WORD *)(v24 + 16)
        || (++*(_DWORD *)(v24 + 32),
            v24 = *((_QWORD *)v23 + 273),
            ++*(_DWORD *)(v24 + 28),
            *(_WORD *)v24 < *(_WORD *)(v24 + 16)) )
      {
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v24, (PSLIST_ENTRY)v21);
        return 3221225485LL;
      }
      else
      {
        ++*(_DWORD *)(v24 + 32);
        sub_14042A5E0(v21, v23);
        return 3221225485LL;
      }
    }
    goto LABEL_149;
  }
  v93 = 0LL;
  v92 = 0LL;
  v48 = 0;
  v49 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( (a14 & 0x100) == 0 )
    v48 = v49;
  v90 = v48;
  v50 = KeGetCurrentPrcb();
  v51 = *((_QWORD *)v50 + 272);
  ++*(_DWORD *)(v51 + 20);
  v21 = (__int64)ExpInterlockedPopEntrySList((PSLIST_HEADER)v51);
  if ( !v21 )
  {
    ++*(_DWORD *)(v51 + 24);
    v52 = *((_QWORD *)v50 + 273);
    ++*(_DWORD *)(v52 + 20);
    v21 = (__int64)ExpInterlockedPopEntrySList((PSLIST_HEADER)v52);
    if ( !v21 )
    {
      ++*(_DWORD *)(v52 + 24);
      v21 = sub_14042A5E0(*(unsigned int *)(v52 + 36), *(unsigned int *)(v52 + 44));
    }
  }
  if ( !v21 )
    return 3221225626LL;
  *(_DWORD *)v21 = *((_DWORD *)v50 + 9);
  if ( v48 || (a14 & 0x200) != 0 )
  {
    if ( (a6 & 0xFFA50048) != 0
      || (a7 & 0xFFFFFFF8) != 0
      || a8 > 5
      || (a9 & 0xEF000000) != 0
      || (a9 & 0x30) != 0 && (a2 & 0x100000) == 0
      || (a9 & 0x1000) != 0 && (a2 & 0x10000) == 0
      || (a9 & 0x30) == 0x30
      || (a9 & 0x41) == 1 && ((a9 & 0xEF5E0ACC) != 0 || a8 - 1 > 2)
      || (a9 & 0x100100) == 0x100100
      || (a9 & 0x10100) == 0x10100
      || (a9 & 0x110000) == 0x110000
      || (a9 & 8) != 0 && (a2 & 4) != 0 )
    {
      goto LABEL_40;
    }
    if ( dword_140C0C624 && !a2 )
    {
LABEL_149:
      v53 = KeGetCurrentPrcb();
      v54 = *((_QWORD *)v53 + 272);
      ++*(_DWORD *)(v54 + 28);
      if ( *(_WORD *)v54 < *(_WORD *)(v54 + 16)
        || (++*(_DWORD *)(v54 + 32),
            v54 = *((_QWORD *)v53 + 273),
            ++*(_DWORD *)(v54 + 28),
            *(_WORD *)v54 < *(_WORD *)(v54 + 16)) )
      {
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v54, (PSLIST_ENTRY)v21);
        return 3221225506LL;
      }
      else
      {
        ++*(_DWORD *)(v54 + 32);
        sub_14042A5E0(v21, v53);
        return 3221225506LL;
      }
    }
    if ( a12 )
    {
      if ( a12 == 1 )
      {
        if ( !a13
          || (*a13 & 0xFFFFFFFC) != 0
          || a13[1] > 1u
          || a13[2] > 1u
          || (a7 & 4) != 0
          || a8 - 1 > 2
          || (a9 & 0xFFFFFFCD) != 0 )
        {
          goto LABEL_40;
        }
      }
      else if ( a12 == 2 && (!a13 || (a7 & 4) != 0 || (a7 & 0xFFFFFFFD) == 0 || a8 != 2 || (a9 & 0xFFFFFFCD) != 0) )
      {
        goto LABEL_40;
      }
    }
  }
  if ( !v48 )
  {
    v16 = a9 & 0x7FFFFFFF;
    if ( a9 >= 0 )
      v16 = a9;
    v70 = a14 | 0x400;
    if ( a9 >= 0 )
      v70 = a14;
    v99 = v70;
    if ( a5 )
    {
      v57 = *a5;
      if ( (__int64)*a5 < 0 )
        goto LABEL_40;
      v92 = *a5;
    }
    else
    {
      v57 = v92;
    }
    if ( (v16 & 0x10000000) != 0 )
    {
      CurrentProcess = PsGetCurrentProcess();
      if ( *(_QWORD *)(CurrentProcess + 1408) && ((v72 = *(_WORD *)(CurrentProcess + 2412), v72 == 332) || v72 == 452) )
      {
        if ( (unsigned int)Size < 0x10 )
          goto LABEL_40;
        *(_QWORD *)(v21 + 216) = *(_QWORD *)Src;
        v73 = (ULONG *)(int)Src[2];
        v93 = v73;
        v74 = Src[3];
        v70 = v99;
      }
      else
      {
        if ( (unsigned int)Size < 0x18 )
          goto LABEL_40;
        *(_QWORD *)(v21 + 216) = *(_QWORD *)Src;
        v73 = (ULONG *)*((_QWORD *)Src + 1);
        v93 = v73;
        v74 = Src[4];
        v70 = v99;
      }
    }
    else
    {
      *(_QWORD *)(v21 + 216) = 0LL;
      v73 = Src;
      v93 = Src;
      v74 = Size;
    }
    if ( v73 && v74 )
    {
      v75 = (void *)ExAllocatePool2(66LL, v74, 1631940425LL);
      *(_QWORD *)(v21 + 72) = v75;
      if ( !v75 )
      {
LABEL_79:
        v34 = KeGetCurrentPrcb();
        v35 = *((_QWORD *)v34 + 272);
        ++*(_DWORD *)(v35 + 28);
        if ( *(_WORD *)v35 < *(_WORD *)(v35 + 16)
          || (++*(_DWORD *)(v35 + 32),
              v35 = *((_QWORD *)v34 + 273),
              ++*(_DWORD *)(v35 + 28),
              *(_WORD *)v35 < *(_WORD *)(v35 + 16)) )
        {
          ExpInterlockedPushEntrySList((PSLIST_HEADER)v35, (PSLIST_ENTRY)v21);
        }
        else
        {
          ++*(_DWORD *)(v35 + 32);
          sub_14042A5E0(v21, v34);
        }
        return 3221225626LL;
      }
      *(_DWORD *)(v21 + 80) = v74;
      memmove(v75, v73, v74);
      v68 = a4;
      v76 = IoCheckEaBufferValidity(*(PFILE_FULL_EA_INFORMATION *)(v21 + 72), v74, (PULONG)a4 + 2);
      v89 = v76;
      if ( v76 < 0 )
      {
        ExFreePoolWithTag(*(PVOID *)(v21 + 72), 0);
        *a4 = v76;
LABEL_239:
        v77 = KeGetCurrentPrcb();
        v78 = *((_QWORD *)v77 + 272);
        ++*(_DWORD *)(v78 + 28);
        if ( *(_WORD *)v78 < *(_WORD *)(v78 + 16)
          || (++*(_DWORD *)(v78 + 32),
              v78 = *((_QWORD *)v77 + 273),
              ++*(_DWORD *)(v78 + 28),
              *(_WORD *)v78 < *(_WORD *)(v78 + 16)) )
        {
          ExpInterlockedPushEntrySList((PSLIST_HEADER)v78, (PSLIST_ENTRY)v21);
          return v89;
        }
        else
        {
          ++*(_DWORD *)(v78 + 32);
          sub_14042A5E0(v21, v77);
          return v89;
        }
      }
      v70 = v99;
LABEL_246:
      *(_DWORD *)v21 = 14680072;
      *(_DWORD *)(v21 + 32) = 0;
      *(_QWORD *)(v21 + 24) = 0LL;
      *(_QWORD *)(v21 + 56) = v57;
      *(_DWORD *)(v21 + 64) = v16 & 0xFFFFFF;
      *(_WORD *)(v21 + 68) = a6;
      *(_WORD *)(v21 + 70) = a7;
      *(_DWORD *)(v21 + 88) = a8;
      *(_WORD *)(v21 + 136) = 0;
      *(_BYTE *)(v21 + 138) = 0;
      *(_DWORD *)(v21 + 84) = v70;
      *(_QWORD *)(v21 + 40) = 0LL;
      *(_QWORD *)(v21 + 48) = a3;
      *(_DWORD *)(v21 + 120) = a12;
      *(_QWORD *)(v21 + 128) = a13;
      *(_DWORD *)(v21 + 152) = a15;
      *(_BYTE *)(v21 + 156) = v90;
      *(_OWORD *)(v21 + 160) = 0LL;
      *(_OWORD *)(v21 + 176) = 0LL;
      *(_WORD *)(v21 + 160) = 40;
      *(_QWORD *)(v21 + 192) = 1LL;
      if ( a16 )
      {
        v79 = *a16;
        if ( v79 > 0x28 )
          v79 = 40LL;
        memmove((void *)(v21 + 160), a16, v79);
      }
      if ( *(_QWORD *)(v21 + 192) == 1LL )
        *(_QWORD *)(v21 + 192) = PsGetCurrentSilo();
      *(_DWORD *)(v21 + 16) = 0;
      *(_QWORD *)(v21 + 8) = 0LL;
      sub_1402F672C();
      v80 = ObOpenObjectByNameEx(a3, IoFileObjectType, v90, 0LL, a2, v21, *(_QWORD *)(v21 + 192), &v92);
      v89 = v80;
      v81 = *(void **)(v21 + 72);
      if ( v81 )
        ExFreePoolWithTag(v81, 0);
      sub_1407F97EC(v21);
      v82 = *(_DWORD *)(v21 + 32);
      if ( v80 >= 0 )
      {
        if ( v82 == -1096154543 )
        {
          *(_DWORD *)(*(_QWORD *)(v21 + 8) + 80LL) |= 0x40000u;
          *(_DWORD *)(*(_QWORD *)(v21 + 8) + 80LL) &= ~0x2000000u;
          *a1 = v92;
          *((_QWORD *)v68 + 1) = *(_QWORD *)(v21 + 24);
          *v68 = *(_DWORD *)(v21 + 16);
          v89 = *(_DWORD *)(v21 + 16);
LABEL_273:
          if ( v82 == -1096154543 )
          {
            v87 = *(void **)(v21 + 8);
            if ( v87 )
              ObfDereferenceObject(v87);
          }
          goto LABEL_239;
        }
        ObCloseHandle(v92, v90);
        v80 = -1073741788;
        v89 = -1073741788;
      }
      v83 = *(_DWORD *)(v21 + 16);
      if ( v83 >= 0 )
      {
        v84 = *(_QWORD *)(v21 + 8);
        if ( v84 )
        {
          if ( v82 == -1096154543 )
          {
            if ( (*(_DWORD *)(v84 + 80) & 0x40000) == 0 )
              sub_14072E9E0(0LL, *(struct _FILE_OBJECT **)(v21 + 8), 1LL, 1LL);
          }
          else
          {
            if ( *(_WORD *)(v84 + 88) )
            {
              ExFreePoolWithTag(*(PVOID *)(v84 + 96), 0);
              v84 = *(_QWORD *)(v21 + 8);
            }
            *(_QWORD *)(v84 + 8) = 0LL;
            ObfDereferenceObject(*(PVOID *)(v21 + 8));
          }
        }
      }
      else
      {
        v80 = *(_DWORD *)(v21 + 16);
        v89 = v80;
        if ( (v83 & 0xC0000000) == 0x80000000 || v83 == -1073741191 )
        {
          *v68 = v83;
          *((_QWORD *)v68 + 1) = *(_QWORD *)(v21 + 24);
        }
      }
      if ( v80 == -1073741772 )
      {
        v85 = *(_QWORD *)(v21 + 24) - 2684354563LL;
        if ( v85 <= 0x16 )
        {
          v86 = 4194817LL;
          if ( _bittest64(&v86, v85) )
            v89 = -1073741184;
        }
      }
      goto LABEL_273;
    }
    *(_QWORD *)(v21 + 72) = 0LL;
LABEL_245:
    v68 = a4;
    *(_DWORD *)(v21 + 80) = 0;
    goto LABEL_246;
  }
  v55 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
    v55 = (__int64)a1;
  *(_QWORD *)v55 = *(_QWORD *)v55;
  v56 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
    v56 = (__int64)a4;
  *(_DWORD *)v56 = *(_DWORD *)v56;
  if ( a5 )
  {
    if ( ((unsigned __int8)a5 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v57 = *a5;
    v92 = v57;
    if ( (__int64)v57 < 0 )
      RtlRaiseStatus(-1073741811);
  }
  else
  {
    v57 = 0LL;
    v92 = 0LL;
  }
  if ( (a9 & 0x10000000) == 0 )
  {
    *(_QWORD *)(v21 + 216) = 0LL;
    v62 = Src;
    v93 = Src;
    v63 = Size;
LABEL_208:
    *(_QWORD *)(v21 + 72) = 0LL;
    if ( v62 && v63 )
    {
      if ( ((unsigned __int8)v62 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v66 = (unsigned __int64)v62 + v63;
      if ( v66 > 0x7FFFFFFF0000LL || v66 < (unsigned __int64)v62 )
        MEMORY[0x7FFFFFFF0000] = 0;
      v67 = (void *)ExAllocatePool2(99LL, v63, 1631940425LL);
      *(_QWORD *)(v21 + 72) = v67;
      *(_DWORD *)(v21 + 80) = v63;
      memmove(v67, v62, v63);
      v68 = a4;
      v69 = IoCheckEaBufferValidity(*(PFILE_FULL_EA_INFORMATION *)(v21 + 72), v63, (PULONG)a4 + 2);
      if ( v69 < 0 )
      {
        *a4 = v69;
        RtlRaiseStatus(v69);
      }
      v70 = a14;
      goto LABEL_246;
    }
    v70 = a14;
    goto LABEL_245;
  }
  v58 = PsGetCurrentProcess();
  if ( *(_QWORD *)(v58 + 1408) )
  {
    v59 = *(_WORD *)(v58 + 2412);
    if ( v59 == 332 || v59 == 452 )
    {
      if ( (_DWORD)Size )
      {
        if ( ((unsigned __int8)Src & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)Src + (unsigned int)Size > 0x7FFFFFFF0000LL
          || (ULONG *)((char *)Src + (unsigned int)Size) < Src )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
      if ( (unsigned int)Size < 0x10 )
      {
        v60 = KeGetCurrentPrcb();
        v61 = *((_QWORD *)v60 + 272);
        ++*(_DWORD *)(v61 + 28);
        if ( *(_WORD *)v61 < *(_WORD *)(v61 + 16)
          || (++*(_DWORD *)(v61 + 32),
              v61 = *((_QWORD *)v60 + 273),
              ++*(_DWORD *)(v61 + 28),
              *(_WORD *)v61 < *(_WORD *)(v61 + 16)) )
        {
          ExpInterlockedPushEntrySList((PSLIST_HEADER)v61, (PSLIST_ENTRY)v21);
        }
        else
        {
          ++*(_DWORD *)(v61 + 32);
          sub_14042A5E0(v21, v60);
        }
        return 3221225485LL;
      }
      *(_QWORD *)(v21 + 216) = *(_QWORD *)Src;
      v62 = (ULONG *)Src[2];
      v93 = v62;
      v63 = Src[3];
      goto LABEL_208;
    }
  }
  if ( (_DWORD)Size )
  {
    if ( ((unsigned __int8)Src & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)Src + (unsigned int)Size > 0x7FFFFFFF0000LL
      || (ULONG *)((char *)Src + (unsigned int)Size) < Src )
    {
      MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  if ( (unsigned int)Size >= 0x18 )
  {
    *(_QWORD *)(v21 + 216) = *(_QWORD *)Src;
    v62 = (ULONG *)*((_QWORD *)Src + 1);
    v93 = v62;
    v63 = Src[4];
    goto LABEL_208;
  }
  v64 = KeGetCurrentPrcb();
  v65 = *((_QWORD *)v64 + 272);
  ++*(_DWORD *)(v65 + 28);
  if ( *(_WORD *)v65 < *(_WORD *)(v65 + 16)
    || (++*(_DWORD *)(v65 + 32),
        v65 = *((_QWORD *)v64 + 273),
        ++*(_DWORD *)(v65 + 28),
        *(_WORD *)v65 < *(_WORD *)(v65 + 16)) )
  {
    ExpInterlockedPushEntrySList((PSLIST_HEADER)v65, (PSLIST_ENTRY)v21);
  }
  else
  {
    ++*(_DWORD *)(v65 + 32);
    sub_14042A5E0(v21, v64);
  }
  return 3221225485LL;
}
