/*
 * XREFs of sub_1402BA130 @ 0x1402BA130
 * Callers:
 *     <none>
 * Callees:
 *     sub_140229AD4 @ 0x140229AD4 (sub_140229AD4.c)
 *     sub_1402440B4 @ 0x1402440B4 (sub_1402440B4.c)
 *     sub_1402445C8 @ 0x1402445C8 (sub_1402445C8.c)
 *     sub_140247074 @ 0x140247074 (sub_140247074.c)
 *     KeAreAllApcsDisabled @ 0x140281980 (KeAreAllApcsDisabled.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_140282C20 @ 0x140282C20 (sub_140282C20.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402B0820 @ 0x1402B0820 (sub_1402B0820.c)
 *     IoRemoveIoCompletion @ 0x1402B7BD0 (IoRemoveIoCompletion.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     sub_1402D3804 @ 0x1402D3804 (sub_1402D3804.c)
 *     sub_1402D56F4 @ 0x1402D56F4 (sub_1402D56F4.c)
 *     sub_1402F0D90 @ 0x1402F0D90 (sub_1402F0D90.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_1402F3290 @ 0x1402F3290 (sub_1402F3290.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1402F6A70 @ 0x1402F6A70 (sub_1402F6A70.c)
 *     sub_1402F6BC0 @ 0x1402F6BC0 (sub_1402F6BC0.c)
 *     sub_1402F8420 @ 0x1402F8420 (sub_1402F8420.c)
 *     sub_140311C70 @ 0x140311C70 (sub_140311C70.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14035AB2C @ 0x14035AB2C (sub_14035AB2C.c)
 *     sub_14035AD70 @ 0x14035AD70 (sub_14035AD70.c)
 *     sub_14035B550 @ 0x14035B550 (sub_14035B550.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14045A10C @ 0x14045A10C (sub_14045A10C.c)
 *     sub_14056B1E4 @ 0x14056B1E4 (sub_14056B1E4.c)
 *     sub_14056E6FC @ 0x14056E6FC (sub_14056E6FC.c)
 *     sub_1405C5EC8 @ 0x1405C5EC8 (sub_1405C5EC8.c)
 *     sub_14062DA60 @ 0x14062DA60 (sub_14062DA60.c)
 *     sub_1406A1350 @ 0x1406A1350 (sub_1406A1350.c)
 *     sub_1406A2630 @ 0x1406A2630 (sub_1406A2630.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     sub_1407A9ED0 @ 0x1407A9ED0 (sub_1407A9ED0.c)
 *     sub_1407AC6B0 @ 0x1407AC6B0 (sub_1407AC6B0.c)
 *     sub_1407CDAC0 @ 0x1407CDAC0 (sub_1407CDAC0.c)
 *     sub_140985970 @ 0x140985970 (sub_140985970.c)
 *     ExSystemExceptionFilter @ 0x1409F8660 (ExSystemExceptionFilter.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1402BA130(unsigned int *Handle, _DWORD *Address, ULONG a3, _DWORD *a4, unsigned __int64 a5)
{
  KPROCESSOR_MODE v7; // si
  __int64 v8; // rcx
  int v9; // r14d
  char *v10; // rsi
  KSPIN_LOCK *v11; // rbx
  KIRQL CurrentIrql; // r10
  __int64 v13; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v15; // rdx
  int v16; // eax
  KSPIN_LOCK *v17; // rcx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r10
  __int64 v21; // r9
  int v22; // eax
  bool v23; // zf
  _DWORD *v24; // rsi
  KSPIN_LOCK **v25; // rdx
  _DWORD *v26; // rcx
  _DWORD *v27; // rdi
  __int64 Next; // rax
  struct _KPRCB *v29; // rcx
  __int64 v30; // rdx
  int v31; // eax
  unsigned __int64 v32; // rbx
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r10
  __int64 v35; // r9
  int v36; // eax
  HANDLE v37; // r15
  int v38; // edi
  HANDLE v39; // rcx
  struct _KTHREAD *v40; // rax
  unsigned int v41; // edi
  signed __int32 v42; // esi
  char *v43; // rbx
  struct _KEVENT *v44; // rcx
  __int64 v45; // r13
  __int64 v46; // rbx
  __int64 v47; // r9
  struct _KPRCB *v48; // r10
  int v49; // eax
  int v50; // ecx
  unsigned __int16 *v51; // rax
  __int64 v52; // rbx
  unsigned __int16 *v53; // r12
  __int64 v54; // rax
  void **v55; // rcx
  char v56; // al
  __int64 v57; // r14
  __int64 v58; // rsi
  char v59; // di
  struct _KPRCB *v60; // rbx
  __int64 v61; // rcx
  int v62; // eax
  __int64 v63; // rcx
  int v64; // eax
  char v65; // al
  int v66; // ecx
  struct _KPRCB *v67; // rcx
  __int64 v68; // rdx
  int v69; // eax
  __int64 v70; // rcx
  __int64 v71; // rdi
  struct _KPRCB *v72; // rbx
  __int64 v73; // rcx
  int v74; // eax
  __int64 v75; // rcx
  int v76; // eax
  __int64 v77; // rdx
  _QWORD *v78; // rcx
  struct _KPRCB *v79; // rcx
  __int64 v80; // rdx
  int v81; // eax
  char v82; // al
  __int64 v83; // rcx
  __int64 v84; // rbx
  _QWORD *v85; // rsi
  char v86; // r15
  unsigned __int8 v87; // cl
  __int64 v88; // r9
  struct _KPRCB *v89; // r14
  __int64 v90; // rdi
  unsigned __int8 v91; // al
  int v92; // r8d
  unsigned __int16 **v93; // rdx
  struct _KTHREAD *v94; // rcx
  KSPIN_LOCK *v95; // rbx
  KIRQL v96; // r10
  __int64 v97; // r9
  struct _KPRCB *v98; // rcx
  __int64 v99; // rdx
  int v100; // eax
  bool v101; // al
  int *v102; // rdi
  struct _KTHREAD *v103; // r15
  unsigned int v104; // ecx
  _QWORD *v105; // rbx
  struct _KTHREAD **v106; // rax
  __int64 v107; // rax
  unsigned int v108; // edi
  PVOID *v109; // rbx
  int v110; // ecx
  KSPIN_LOCK *v111; // rbx
  int v112; // ecx
  __int64 v113; // rax
  struct _KPRCB *v114; // rcx
  __int64 v115; // rdx
  int v116; // eax
  unsigned __int64 v117; // rbx
  unsigned __int8 v118; // al
  struct _KPRCB *v119; // r10
  __int64 v120; // r9
  int v121; // eax
  signed __int64 v122; // r13
  bool v123; // cc
  signed __int64 v124; // r13
  BOOLEAN v125; // al
  signed __int64 v126; // rcx
  __int64 v127; // rax
  unsigned __int8 v129; // al
  struct _KPRCB *v130; // r9
  __int64 v131; // r8
  int v132; // eax
  unsigned __int8 v133; // [rsp+40h] [rbp-1E8h]
  struct _KPRCB *v134; // [rsp+48h] [rbp-1E0h]
  KSPIN_LOCK **v135; // [rsp+58h] [rbp-1D0h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-1C8h] BYREF
  ULONG v137; // [rsp+78h] [rbp-1B0h]
  ULONG v138; // [rsp+7Ch] [rbp-1ACh] BYREF
  _DWORD *v139; // [rsp+80h] [rbp-1A8h]
  PVOID Object; // [rsp+88h] [rbp-1A0h] BYREF
  _DWORD *v141; // [rsp+90h] [rbp-198h]
  PVOID v142; // [rsp+98h] [rbp-190h] BYREF
  unsigned int *v143; // [rsp+A0h] [rbp-188h]
  _DWORD *v144; // [rsp+A8h] [rbp-180h]
  ULONG_PTR BugCheckParameter3; // [rsp+B0h] [rbp-178h]
  __int128 v146; // [rsp+B8h] [rbp-170h] BYREF
  HANDLE Handlea[2]; // [rsp+C8h] [rbp-160h]
  __int64 v148; // [rsp+D8h] [rbp-150h]
  int v149; // [rsp+E0h] [rbp-148h] BYREF
  int v150; // [rsp+E4h] [rbp-144h] BYREF
  int v151; // [rsp+E8h] [rbp-140h] BYREF
  __int64 v152; // [rsp+F0h] [rbp-138h]
  PVOID v153[2]; // [rsp+100h] [rbp-128h] BYREF
  __int128 v154; // [rsp+110h] [rbp-118h]
  __int128 v155; // [rsp+120h] [rbp-108h]
  __int128 v156; // [rsp+130h] [rbp-F8h]
  unsigned __int16 *v157; // [rsp+140h] [rbp-E8h]
  __int64 v158; // [rsp+148h] [rbp-E0h]
  struct _KTHREAD *CurrentThread; // [rsp+150h] [rbp-D8h]
  _OWORD v160[8]; // [rsp+160h] [rbp-C8h] BYREF
  void *retaddr; // [rsp+228h] [rbp+0h]

  v144 = a4;
  v137 = a3;
  v152 = (__int64)Address;
  v143 = Handle;
  v141 = Address;
  v139 = a4;
  v146 = 0LL;
  *(_OWORD *)Handlea = 0LL;
  v148 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(v160, 0, sizeof(v160));
  v138 = 0;
  CurrentThread = KeGetCurrentThread();
  v7 = *((_BYTE *)CurrentThread + 562);
  v133 = v7;
  BugCheckParameter3 = (ULONG_PTR)v160;
  if ( a3 - 1 > 0x7FFFFFE )
  {
    v9 = -1073741811;
    v10 = 0LL;
    goto LABEL_258;
  }
  if ( v7 )
  {
    ProbeForWrite(Address, 32LL * a3, 8u);
    v8 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v144 < 0x7FFFFFFF0000LL )
      v8 = (__int64)v144;
    *(_DWORD *)v8 = *(_DWORD *)v8;
    if ( (a5 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a5 + 24 > 0x7FFFFFFF0000LL || a5 + 24 < a5 )
      MEMORY[0x7FFFFFFF0000] = 0;
    *(_OWORD *)Handlea = *(_OWORD *)a5;
    v148 = *(_QWORD *)(a5 + 16);
  }
  else
  {
    *(_OWORD *)Handlea = *(_OWORD *)a5;
    v148 = *(_QWORD *)(a5 + 16);
  }
  Object = 0LL;
  v9 = ObReferenceObjectByHandle(Handle, 2u, qword_140D051A0, v7, &Object, 0LL);
  v10 = (char *)Object;
  v135 = (KSPIN_LOCK **)Object;
  if ( v9 < 0 )
    goto LABEL_258;
  if ( a3 > 0x10 )
  {
    BugCheckParameter3 = (ULONG_PTR)ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * a3, 0x656E6F4Eu);
    if ( !BugCheckParameter3 )
    {
      v137 = 16;
      BugCheckParameter3 = (ULONG_PTR)v160;
    }
  }
  v11 = (KSPIN_LOCK *)*((_QWORD *)v10 + 2);
  LockHandle.LockQueue.Lock = v11;
  LockHandle.LockQueue.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v13 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v13 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  LockHandle.OldIrql = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  v15 = *((_QWORD *)CurrentPrcb + 4375);
  if ( v15 )
  {
    if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
    {
      v16 = *(_DWORD *)(v15 + 24);
      *(_DWORD *)(v15 + 24) = v16 + 1;
      if ( v16 == -1 )
        sub_140418E4C(CurrentPrcb);
    }
  }
  if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
  {
    sub_14045A10C(&LockHandle, v11);
  }
  else if ( _InterlockedExchange64((volatile __int64 *)v11, (__int64)&LockHandle) )
  {
    sub_140311C70(&LockHandle);
  }
  v17 = (KSPIN_LOCK *)*((_QWORD *)v10 + 2);
  if ( *((_BYTE *)v17 + 33) )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v19 = KeGetCurrentIrql();
        if ( v19 <= 0xFu && LockHandle.OldIrql <= 0xFu && v19 >= 2u )
        {
          v20 = KeGetCurrentPrcb();
          v21 = *((_QWORD *)v20 + 4375);
          v22 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v23 = (v22 & *(_DWORD *)(v21 + 20)) == 0;
          *(_DWORD *)(v21 + 20) &= v22;
          if ( v23 )
            sub_140418E4C(v20);
        }
      }
    }
    __writecr8(OldIrql);
    v9 = 128;
    goto LABEL_258;
  }
  v24 = Object;
  v143 = (unsigned int *)((char *)Object + 408);
  if ( (*((_DWORD *)Object + 102) & 0x200) != 0 )
  {
    sub_1402D56F4(Object);
    v25 = v135;
    v17 = v135[2];
  }
  else
  {
    v25 = v135;
  }
  ++*((_DWORD *)v17 + 7);
  v26 = v24 + 95;
  v141 = v24 + 95;
  v27 = v24 + 96;
  v139 = v24 + 96;
  while ( *v26 >= *v27 && !*((_BYTE *)v25[2] + 33) )
  {
    if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
    {
      sub_14056E6FC(&LockHandle, retaddr);
    }
    else
    {
      _m_prefetchw(&LockHandle);
      Next = (__int64)LockHandle.LockQueue.Next;
      if ( LockHandle.LockQueue.Next )
        goto LABEL_48;
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) != &LockHandle )
      {
        Next = sub_140282C20((__int64 *)&LockHandle);
LABEL_48:
        LockHandle.LockQueue.Next = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
      }
    }
    v29 = KeGetCurrentPrcb();
    v30 = *((_QWORD *)v29 + 4375);
    if ( v30 )
    {
      if ( *((_BYTE *)v29 + 32) <= 1u )
      {
        v31 = *(_DWORD *)(v30 + 24) - 1;
        *(_DWORD *)(v30 + 24) = v31;
        if ( !v31 )
          sub_140418E4C(v29);
      }
    }
    v32 = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v33 = KeGetCurrentIrql();
        if ( v33 <= 0xFu && LockHandle.OldIrql <= 0xFu && v33 >= 2u )
        {
          v34 = KeGetCurrentPrcb();
          v35 = *((_QWORD *)v34 + 4375);
          v36 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v23 = (v36 & *(_DWORD *)(v35 + 20)) == 0;
          *(_DWORD *)(v35 + 20) &= v36;
          if ( v23 )
            sub_140418E4C(v34);
        }
      }
    }
    __writecr8(v32);
    if ( (v148 & 0x100000000LL) != 0 )
    {
      v37 = Handlea[0];
      v38 = v148;
      v39 = Handlea[1];
      *(_OWORD *)v153 = 0LL;
      v154 = 0LL;
      v155 = 0LL;
      v156 = 0LL;
      v40 = KeGetCurrentThread();
      --*((_WORD *)v40 + 242);
      v146 = 0LL;
      v41 = v38 & 0xFFFF0000;
      if ( (v41 & 0x20000) != 0 )
        goto LABEL_189;
      v142 = 0LL;
      if ( ObReferenceObjectByHandle(v39, 1u, qword_140D069D8, v133, &v142, 0LL) < 0 )
        goto LABEL_189;
      if ( (v41 & 0x40000) == 0 )
        goto LABEL_71;
      v42 = _InterlockedIncrement((volatile signed __int32 *)v142 + 101);
      v43 = (char *)v142;
      if ( *((_QWORD *)v142 + 51) )
      {
        ExAcquirePushLockExclusiveEx((ULONG_PTR)v142 + 352, 0LL);
        v44 = (struct _KEVENT *)*((_QWORD *)v43 + 51);
        if ( v44 && v42 == v44[1].Header.LockNV )
          KeSetEvent(v44, 0, 0);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v43 + 44, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v43 + 352);
        sub_1402AFC00((ULONG_PTR)(v43 + 352));
LABEL_71:
        v43 = (char *)v142;
      }
      v153[0] = v43;
      LODWORD(v156) = v41 | 4;
      v155 = 0uLL;
      *((_QWORD *)&v154 + 1) = 0LL;
      if ( (int)sub_1407A9ED0(v153, v37, 0LL, v133) < 0 )
      {
        ObfDereferenceObject(v153[0]);
LABEL_189:
        v94 = KeGetCurrentThread();
        v23 = (*((_WORD *)v94 + 242))++ == 0xFFFF;
        if ( v23 && *((struct _KTHREAD **)v94 + 19) != (struct _KTHREAD *)((char *)v94 + 152) && !*((_WORD *)v94 + 243) )
          KiCheckForKernelApcDelivery();
        v27 = v139;
        goto LABEL_194;
      }
      *(_QWORD *)&v146 = v155;
      *((PVOID *)&v146 + 1) = v153[0];
      if ( (_QWORD)v155 )
      {
        if ( BYTE10(v156) )
          sub_14035AB2C(v155, BYTE11(v156), 1LL);
        else
          sub_14035AD70(*(PVOID *)(v155 + 248), 1);
        goto LABEL_189;
      }
      if ( !*((_QWORD *)&v154 + 1) )
      {
        if ( (BYTE8(v155) & 1) != 0 )
        {
          if ( (*((_QWORD *)&v155 + 1) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
          {
            KeSetEvent((PRKEVENT)(*((_QWORD *)&v155 + 1) & 0xFFFFFFFFFFFFFFFCuLL), 0, 1u);
            if ( (BYTE8(v155) & 2) != 0 )
              ObfDereferenceObject((PVOID)(*((_QWORD *)&v155 + 1) & 0xFFFFFFFFFFFFFFFCuLL));
          }
          *((_QWORD *)&v155 + 1) = 0LL;
        }
        goto LABEL_189;
      }
      v45 = *((_QWORD *)&v154 + 1) + 1240LL;
      v46 = KeGetCurrentIrql();
      v158 = v46;
      __writecr8(2uLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (unsigned __int8)v46 <= 0xFu )
      {
        v47 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v47 + 20) |= (-1 << (v46 + 1)) & 4;
      }
      v48 = KeGetCurrentPrcb();
      v134 = v48;
      v149 = 0;
      if ( _interlockedbittestandset((volatile signed __int32 *)v45, 7u) )
      {
        do
        {
          do
            sub_1402F32E0(&v149);
          while ( (*(_DWORD *)v45 & 0x80u) != 0 );
        }
        while ( _interlockedbittestandset((volatile signed __int32 *)v45, 7u) );
        v48 = v134;
      }
      v49 = *(_DWORD *)(v45 + 4);
      v50 = v49 + 1;
      if ( v49 + 1 > *(_DWORD *)(v45 + 24) || v50 < v49 )
      {
        sub_1402D3804(v45);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v129 = KeGetCurrentIrql();
            if ( v129 <= 0xFu && (unsigned __int8)v46 <= 0xFu && v129 >= 2u )
            {
              v130 = KeGetCurrentPrcb();
              v131 = *((_QWORD *)v130 + 4375);
              v132 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v46 + 1));
              v23 = (v132 & *(_DWORD *)(v131 + 20)) == 0;
              *(_DWORD *)(v131 + 20) &= v132;
              if ( v23 )
                sub_140418E4C(v130);
            }
          }
        }
        __writecr8((unsigned __int8)v46);
        RtlRaiseStatus(-1073741753);
      }
      *(_DWORD *)(v45 + 4) = v50;
      if ( v49 || (v51 = *(unsigned __int16 **)(v45 + 8), v51 == (unsigned __int16 *)(v45 + 8)) )
      {
        v52 = (__int64)v134;
LABEL_92:
        _InterlockedAnd((volatile signed __int32 *)v45, 0xFFFFFF7F);
        sub_1402B0820(v52, 1, 1, 1, v158);
        goto LABEL_189;
      }
      while ( 2 )
      {
        v53 = v51;
        v54 = *(_QWORD *)v51;
        v157 = (unsigned __int16 *)v54;
        v55 = (void **)*((_QWORD *)v53 + 1);
        if ( *(unsigned __int16 **)(v54 + 8) != v53 || *v55 != v53 )
LABEL_213:
          __fastfail(3u);
        *v55 = (void *)v54;
        *(_QWORD *)(v54 + 8) = v55;
        v56 = *((_BYTE *)v53 + 16);
        if ( v56 == 1 )
        {
          v57 = v53[9];
          v58 = *((_QWORD *)v53 + 3);
          v59 = 0;
          v60 = KeGetCurrentPrcb();
          v150 = 0;
          while ( 1 )
          {
            v61 = *((_QWORD *)v60 + 4375);
            if ( v61 )
            {
              if ( *((_BYTE *)v60 + 32) <= 1u )
              {
                v62 = *(_DWORD *)(v61 + 24);
                *(_DWORD *)(v61 + 24) = v62 + 1;
                if ( v62 == -1 )
                  sub_140418E4C(v60);
              }
            }
            if ( !_interlockedbittestandset64((volatile signed __int32 *)(v58 + 64), 0LL) )
              break;
            v63 = *((_QWORD *)v60 + 4375);
            if ( v63 )
            {
              if ( *((_BYTE *)v60 + 32) <= 1u )
              {
                v64 = *(_DWORD *)(v63 + 24) - 1;
                *(_DWORD *)(v63 + 24) = v64;
                if ( !v64 )
                  sub_140418E4C(v60);
              }
            }
            do
              sub_1402F32E0(&v150);
            while ( *(_QWORD *)(v58 + 64) );
          }
          if ( *(_BYTE *)(v58 + 388) == 5 )
          {
            v65 = *(_BYTE *)(v58 + 112);
            v66 = v65 & 7;
            if ( v66 == 1 || v66 == 4 )
            {
              v70 = *(_QWORD *)(v58 + 232);
              if ( v70 )
              {
                if ( (*(_BYTE *)v70 & 0x7F) == 0x15 )
                {
                  *(_DWORD *)(v58 + 540) = (unsigned __int8)*(_DWORD *)(v58 + 540);
                  _InterlockedIncrement((volatile signed __int32 *)(v70 + 4LL * *(unsigned int *)(v58 + 540) + 536));
                }
                else
                {
                  _InterlockedIncrement((volatile signed __int32 *)(v70 + 40));
                }
              }
              v71 = *(_QWORD *)(v58 + 712);
              if ( v71 )
              {
                v72 = KeGetCurrentPrcb();
                v151 = 0;
                while ( 1 )
                {
                  v73 = *((_QWORD *)v72 + 4375);
                  if ( v73 )
                  {
                    if ( *((_BYTE *)v72 + 32) <= 1u )
                    {
                      v74 = *(_DWORD *)(v73 + 24);
                      *(_DWORD *)(v73 + 24) = v74 + 1;
                      if ( v74 == -1 )
                        sub_140418E4C(v72);
                    }
                  }
                  if ( !_interlockedbittestandset64((volatile signed __int32 *)(v71 + 32464), 0LL) )
                    break;
                  v75 = *((_QWORD *)v72 + 4375);
                  if ( v75 )
                  {
                    if ( *((_BYTE *)v72 + 32) <= 1u )
                    {
                      v76 = *(_DWORD *)(v75 + 24) - 1;
                      *(_DWORD *)(v75 + 24) = v76;
                      if ( !v76 )
                        sub_140418E4C(v72);
                    }
                  }
                  do
                    sub_1402F32E0(&v151);
                  while ( *(_QWORD *)(v71 + 32464) );
                }
                if ( *(_QWORD *)(v58 + 712) )
                {
                  v77 = *(_QWORD *)(v58 + 216);
                  v78 = *(_QWORD **)(v58 + 224);
                  if ( *(_QWORD *)(v77 + 8) != v58 + 216 || *v78 != v58 + 216 )
                    goto LABEL_213;
                  *v78 = v77;
                  *(_QWORD *)(v77 + 8) = v78;
                  *(_QWORD *)(v58 + 712) = 0LL;
                }
                _InterlockedAnd64((volatile signed __int64 *)(v71 + 32464), 0LL);
                v79 = KeGetCurrentPrcb();
                v80 = *((_QWORD *)v79 + 4375);
                if ( v80 )
                {
                  if ( *((_BYTE *)v79 + 32) <= 1u )
                  {
                    v81 = *(_DWORD *)(v80 + 24) - 1;
                    *(_DWORD *)(v80 + 24) = v81;
                    if ( !v81 )
                      sub_140418E4C(v79);
                  }
                }
              }
              v82 = *(_BYTE *)(v58 + 388);
              if ( v82 == 1 )
                *(_DWORD *)(v58 + 116) |= 2u;
              if ( v82 == 5 )
              {
                v83 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v58 + 436));
                if ( *(_BYTE *)(v58 + 391) )
                  *(_QWORD *)(v58 + 1000) += v83;
                else
                  *(_QWORD *)(v58 + 992) += v83;
              }
              *(_BYTE *)(v58 + 388) = 7;
              v52 = (__int64)v134;
              *(_QWORD *)(v58 + 216) = *((_QWORD *)v134 + 1441);
              *((_QWORD *)v134 + 1441) = v58 + 216;
              *(_QWORD *)(v58 + 200) = v57;
              *(_QWORD *)(v58 + 976) = 0LL;
              v59 = 1;
            }
            else
            {
              if ( (*(_BYTE *)(v58 + 112) & 7) == 0 )
              {
                *(_BYTE *)(v58 + 112) = v65 & 0xF8 | 2;
                *(_QWORD *)(v58 + 200) = v57;
                *(_QWORD *)(v58 + 976) = 0LL;
                v59 = 1;
                *((_BYTE *)v53 + 17) = 0;
                goto LABEL_114;
              }
              if ( v66 == 5 )
              {
                *(_BYTE *)(v58 + 112) = v65 & 0xF8 | 6;
                goto LABEL_114;
              }
              v52 = (__int64)v134;
              if ( v66 == 3 )
                *((_BYTE *)v53 + 17) = 2;
            }
          }
          else
          {
LABEL_114:
            v52 = (__int64)v134;
          }
          *(_QWORD *)(v58 + 64) = 0LL;
          v67 = KeGetCurrentPrcb();
          v68 = *((_QWORD *)v67 + 4375);
          if ( v68 )
          {
            if ( *((_BYTE *)v67 + 32) <= 1u )
            {
              v69 = *(_DWORD *)(v68 + 24) - 1;
              *(_DWORD *)(v68 + 24) = v69;
              if ( !v69 )
                sub_140418E4C(v67);
            }
          }
          ++*((_BYTE *)v53 + 17);
          if ( v59 )
          {
            v23 = (*(_DWORD *)(v45 + 4))-- == 1;
            if ( v23 )
              goto LABEL_92;
          }
        }
        else if ( v56 == 2 )
        {
          *((_BYTE *)v53 + 17) = 5;
          v84 = *((_QWORD *)v53 + 3);
          *(_QWORD *)v53 = 0LL;
          v85 = (_QWORD *)(v84 + 8);
          v86 = 0;
          v87 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v87 <= 0xFu )
          {
            v88 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
            *(_DWORD *)(v88 + 20) |= (-1 << (v87 + 1)) & 4;
          }
          v89 = KeGetCurrentPrcb();
          v90 = *((_QWORD *)v89 + 1);
          if ( (DWORD1(xmmword_140D06900) & 0x1000000) != 0 )
          {
            v91 = sub_14056B1E4(*((_QWORD *)v89 + 1));
            sub_14062DA60(v90, v53, v91);
          }
          sub_1402F3290(v84);
          if ( (_QWORD *)*v85 != v85
            && *(_DWORD *)(v84 + 40) < *(_DWORD *)(v84 + 44)
            && (*(_QWORD *)(v90 + 232) != v84 || *(_BYTE *)(v90 + 643) != 15) )
          {
            v86 = sub_1402F6A70(v89, v84, v53);
          }
          if ( v86 )
          {
            *(_QWORD *)v53 = 0LL;
          }
          else
          {
            v92 = *(_DWORD *)(v84 + 4);
            *(_DWORD *)(v84 + 4) = v92 + 1;
            v93 = *(unsigned __int16 ***)(v84 + 32);
            if ( *v93 != (unsigned __int16 *)(v84 + 24) )
              goto LABEL_213;
            *(_QWORD *)v53 = v84 + 24;
            *((_QWORD *)v53 + 1) = v93;
            *v93 = v53;
            *(_QWORD *)(v84 + 32) = v53;
            if ( !v92 && (_QWORD *)*v85 != v85 )
              sub_14035B550(v89, v84);
          }
          _InterlockedAnd((volatile signed __int32 *)v84, 0xFFFFFF7F);
          v23 = (*(_DWORD *)(v45 + 4))-- == 1;
          v52 = (__int64)v134;
          if ( v23 )
            goto LABEL_92;
        }
        else
        {
          if ( v56 == 4 )
          {
            *((_BYTE *)v53 + 17) = 5;
            *(_DWORD *)(v45 + 4) = 0;
            KeInsertQueueDpc(*((PRKDPC *)v53 + 3), (PVOID)v45, v53);
          }
          else
          {
            sub_1402F6BC0(v48, v53, 256LL, 0LL);
          }
          v52 = (__int64)v134;
        }
        v51 = v157;
        if ( v157 == (unsigned __int16 *)(v45 + 8) )
          goto LABEL_92;
        v48 = v134;
        continue;
      }
    }
LABEL_194:
    v9 = IoRemoveIoCompletion(
           (struct _KQUEUE *)v135[2][1],
           v152,
           (PLIST_ENTRY *)BugCheckParameter3,
           v137,
           &v138,
           v133,
           0LL,
           1u);
    if ( (v148 & 0x100000000LL) != 0 )
    {
      sub_1406A2630(&v146);
      HIDWORD(v148) &= ~1u;
    }
    v95 = v135[2];
    LockHandle.LockQueue.Lock = v95;
    LockHandle.LockQueue.Next = 0LL;
    v96 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v96 <= 0xFu )
    {
      v97 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v97 + 20) |= (-1 << (v96 + 1)) & 4;
    }
    LockHandle.OldIrql = v96;
    v98 = KeGetCurrentPrcb();
    v99 = *((_QWORD *)v98 + 4375);
    if ( v99 )
    {
      if ( *((_BYTE *)v98 + 32) <= 1u )
      {
        v100 = *(_DWORD *)(v99 + 24);
        *(_DWORD *)(v99 + 24) = v100 + 1;
        if ( v100 == -1 )
          sub_140418E4C(v98);
      }
    }
    if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
    {
      sub_14045A10C(&LockHandle, v95);
    }
    else if ( _InterlockedExchange64((volatile __int64 *)v95, (__int64)&LockHandle) )
    {
      sub_140311C70(&LockHandle);
    }
    v24 = Object;
    if ( v9 != 258 )
      goto LABEL_215;
    v101 = sub_140247074((__int64)Object, 1);
    v26 = v141;
    if ( !v101
      && *v27 > v24[94]
      && *((struct _KTHREAD **)CurrentThread + 160) == (struct _KTHREAD *)((char *)CurrentThread + 1280) )
    {
      goto LABEL_215;
    }
    v25 = v135;
  }
  v9 = 258;
LABEL_215:
  --*((_DWORD *)v135[2] + 7);
  if ( v9 == 258 )
  {
    --*v27;
    --v24[97];
    sub_1402445C8((__int64)v24);
    v102 = (int *)v143;
  }
  else
  {
    v102 = (int *)v143;
    if ( (*v143 & 7) != 4 )
    {
      v103 = KeGetCurrentThread();
      v104 = 0;
      v24 = Object;
      v105 = (char *)Object + 72;
      v106 = (struct _KTHREAD **)((char *)Object + 72);
      while ( *v106 != v103 )
      {
        ++v104;
        ++v106;
        if ( v104 >= 4 )
        {
          ObfReferenceObjectWithTag(v103, 0x746C6644u);
          v107 = 0LL;
          while ( *v105 )
          {
            v107 = (unsigned int)(v107 + 1);
            ++v105;
            if ( (unsigned int)v107 >= 4 )
            {
              v108 = *v102 & 7;
              v109 = (PVOID *)&v24[2 * v108];
              ObfDereferenceObjectWithTag(v109[9], 0x746C6644u);
              v109[9] = v103;
              v110 = ((_BYTE)v108 + 1) & 3;
              v102 = (int *)v143;
              *v143 = *v143 & 0xFFFFFFF8 | v110;
              goto LABEL_226;
            }
          }
          *(_QWORD *)&v24[2 * v107 + 18] = v103;
          break;
        }
      }
    }
  }
LABEL_226:
  v111 = v135[2];
  if ( *v139 >= *v141 || *((_DWORD *)v111 + 7) )
  {
LABEL_232:
    if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
    {
      sub_14056E6FC(&LockHandle, retaddr);
      goto LABEL_239;
    }
    _m_prefetchw(&LockHandle);
    v113 = (__int64)LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
        goto LABEL_239;
      v113 = sub_140282C20((__int64 *)&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v113 + 8), 1uLL);
LABEL_239:
    v114 = KeGetCurrentPrcb();
    v115 = *((_QWORD *)v114 + 4375);
    if ( v115 )
    {
      if ( *((_BYTE *)v114 + 32) <= 1u )
      {
        v116 = *(_DWORD *)(v115 + 24) - 1;
        *(_DWORD *)(v115 + 24) = v116;
        if ( !v116 )
          sub_140418E4C(v114);
      }
    }
    v117 = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v118 = KeGetCurrentIrql();
        if ( v118 <= 0xFu && LockHandle.OldIrql <= 0xFu && v118 >= 2u )
        {
          v119 = KeGetCurrentPrcb();
          v120 = *((_QWORD *)v119 + 4375);
          v121 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v23 = (v121 & *(_DWORD *)(v120 + 20)) == 0;
          *(_DWORD *)(v120 + 20) &= v121;
          if ( v23 )
            sub_140418E4C(v119);
        }
      }
    }
    __writecr8(v117);
    goto LABEL_251;
  }
  if ( v24[101] )
  {
    v112 = *v102 | 0x200;
    *v102 = v112;
    if ( !*(_DWORD *)(v111[1] + 4) )
    {
      if ( (v112 & 0x400) == 0 )
      {
        *v102 = v112 | 0x400;
        ObfReferenceObjectWithTag(v24, 0x746C6644u);
        sub_1402F0D90(v111[1], &Queue, v24 + 154);
      }
      goto LABEL_232;
    }
  }
  sub_1402F8420(v24, &LockHandle);
LABEL_251:
  if ( !v9 )
  {
    if ( v133 )
    {
      *v144 = v138;
      v10 = (char *)v135;
      goto LABEL_258;
    }
    *v144 = v138;
  }
  v10 = (char *)v135;
LABEL_258:
  if ( (_OWORD *)BugCheckParameter3 != v160 )
    sub_140348B40(BugCheckParameter3);
  if ( v10 )
  {
    if ( dword_140D05010 )
      sub_1405C5EC8((_DWORD)v10 - 48);
    v122 = _InterlockedExchangeAdd64((volatile signed __int64 *)v10 - 6, 0xFFFFFFFFFFFFFFFFuLL);
    v123 = v122 <= 1;
    v124 = v122 - 1;
    if ( v123 )
    {
      if ( *((_QWORD *)v10 - 5) )
        KeBugCheckEx(
          0x18u,
          qword_140D07490[(unsigned __int8)dword_140D06C0C ^ (unsigned __int8)*(v10 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v10 - 48) >> 8)],
          (ULONG_PTR)v10,
          1uLL,
          *((_QWORD *)v10 - 5));
      if ( v124 < 0 )
        KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)v10, 2uLL, v124);
      v125 = KeAreAllApcsDisabled();
      v126 = (signed __int64)(v10 - 48);
      if ( v125 )
      {
        sub_1402440B4(v126);
      }
      else
      {
        v127 = sub_140229AD4(v126);
        if ( v127 )
          sub_1406A1350(v127);
        if ( dword_140D05010 )
          sub_140985970(v10 - 48);
        sub_1407CDAC0(v10 - 48, 0LL);
      }
    }
  }
  if ( (v148 & 0x100000000LL) != 0 )
    sub_1407AC6B0(Handlea[1], 0LL, 0LL, 0LL, 0LL);
  return (unsigned int)v9;
}
