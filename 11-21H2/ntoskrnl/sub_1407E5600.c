/*
 * XREFs of sub_1407E5600 @ 0x1407E5600
 * Callers:
 *     sub_1407E5590 @ 0x1407E5590 (sub_1407E5590.c)
 * Callees:
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KeInitializeApc @ 0x1402F47B0 (KeInitializeApc.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14067FE98 @ 0x14067FE98 (sub_14067FE98.c)
 *     sub_1407190AC @ 0x1407190AC (sub_1407190AC.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     sub_1407C2FB4 @ 0x1407C2FB4 (sub_1407C2FB4.c)
 *     sub_1407C300C @ 0x1407C300C (sub_1407C300C.c)
 *     sub_1407E5E68 @ 0x1407E5E68 (sub_1407E5E68.c)
 *     sub_1407E5F70 @ 0x1407E5F70 (sub_1407E5F70.c)
 *     sub_140AB4008 @ 0x140AB4008 (sub_140AB4008.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB42A0 @ 0x140AB42A0 (sub_140AB42A0.c)
 *     sub_140AB42D0 @ 0x140AB42D0 (sub_140AB42D0.c)
 *     sub_140AB4300 @ 0x140AB4300 (sub_140AB4300.c)
 *     sub_140AB4370 @ 0x140AB4370 (sub_140AB4370.c)
 *     sub_140AB45A0 @ 0x140AB45A0 (sub_140AB45A0.c)
 *     sub_140AB4630 @ 0x140AB4630 (sub_140AB4630.c)
 *     sub_140AB46D0 @ 0x140AB46D0 (sub_140AB46D0.c)
 */

__int64 __fastcall sub_1407E5600(
        int a1,
        unsigned int a2,
        void *a3,
        void *a4,
        void (__stdcall *a5)(POPLOCK Oplock),
        __int64 a6,
        NTSTATUS *Address,
        unsigned int a8,
        char a9,
        volatile void *a10,
        SIZE_T Length,
        char a12)
{
  unsigned int v13; // ebx
  _QWORD *v15; // r12
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // r9d
  int v22; // r8d
  unsigned int v23; // r14d
  NTSTATUS v24; // esi
  unsigned __int64 *v25; // r15
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  _QWORD *v29; // r14
  __int64 v30; // rcx
  PVOID v31; // rsi
  _QWORD *v32; // rax
  char *v33; // r12
  unsigned __int64 v34; // rcx
  __int64 v35; // r9
  __int64 v36; // r15
  unsigned __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rcx
  char v44; // bl
  struct _KTHREAD *CurrentThread; // rdx
  void (__stdcall *v47)(POPLOCK); // r8
  __int64 v48; // rcx
  unsigned __int8 v49; // r14
  int v50; // r9d
  unsigned __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  unsigned __int64 v56; // rcx
  unsigned __int64 v57; // rdx
  __int64 v58; // r9
  __int64 v59; // r15
  __int16 v60; // ax
  char v61; // al
  __int64 v62; // r15
  bool v63; // zf
  PVOID v64; // rcx
  __int64 v65; // r14
  __int64 v66; // r14
  __int64 v67; // r14
  unsigned __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rcx
  _QWORD *v74; // rax
  __int64 CurrentIrql; // r11
  __int64 v76; // rdx
  _QWORD *v77; // rcx
  unsigned __int8 v78; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v80; // r9
  int v81; // edx
  NTSTATUS v82; // eax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  unsigned __int8 v86; // si
  char *v87; // rcx
  PVOID *v88; // rax
  PVOID *v89; // rdx
  _QWORD *v90; // rcx
  __int64 v91; // rdx
  _QWORD *v92; // rax
  __int64 v93; // rax
  _QWORD *v94; // rcx
  __int64 v95; // rdx
  _QWORD *v96; // rcx
  unsigned __int8 v97; // al
  struct _KPRCB *v98; // r9
  __int64 v99; // r8
  int v100; // eax
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // r9
  NTSTATUS *v105; // rax
  __int64 v106; // r10
  PVOID *v107; // rax
  PVOID *v108; // rcx
  __int64 v109; // rdx
  _QWORD *v110; // rcx
  __int64 v111; // rax
  _QWORD *v112; // rcx
  __int64 v113; // rdx
  _QWORD *v114; // rcx
  unsigned __int8 v115; // al
  struct _KPRCB *v116; // r9
  __int64 v117; // r8
  int v118; // eax
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // r8
  __int64 v122; // r9
  char v123; // [rsp+40h] [rbp-1F8h]
  KPROCESSOR_MODE AccessMode; // [rsp+41h] [rbp-1F7h]
  bool v125; // [rsp+42h] [rbp-1F6h]
  unsigned __int8 v126; // [rsp+44h] [rbp-1F4h]
  unsigned int v127; // [rsp+48h] [rbp-1F0h]
  PVOID v128; // [rsp+50h] [rbp-1E8h] BYREF
  unsigned int v129; // [rsp+58h] [rbp-1E0h]
  PVOID P; // [rsp+60h] [rbp-1D8h]
  PVOID v131; // [rsp+68h] [rbp-1D0h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-1C8h]
  __int64 v133; // [rsp+78h] [rbp-1C0h]
  PVOID v134; // [rsp+80h] [rbp-1B8h]
  PVOID Object; // [rsp+88h] [rbp-1B0h] BYREF
  NTSTATUS *v136; // [rsp+90h] [rbp-1A8h]
  __int64 v137; // [rsp+98h] [rbp-1A0h]
  __int128 v138; // [rsp+A0h] [rbp-198h] BYREF
  int v139; // [rsp+B0h] [rbp-188h]
  __int64 v140; // [rsp+B8h] [rbp-180h]
  _OWORD v141[19]; // [rsp+C0h] [rbp-178h] BYREF

  Handle = a4;
  Object = a3;
  v13 = a2;
  v129 = a2;
  v136 = Address;
  v138 = 0LL;
  v131 = 0LL;
  v134 = 0LL;
  v15 = 0LL;
  P = 0LL;
  v127 = 1;
  memset(v141, 0, 0x128uLL);
  v126 = 0;
  v133 = 0LL;
  v139 = 0;
  sub_140347770((__int64)&v138);
  v123 = sub_140AB46D0(v17, v16, v18);
  if ( !v123 )
  {
    v24 = -1073741431;
    goto LABEL_43;
  }
  v22 = 1;
  if ( v13 > 1 )
    goto LABEL_94;
  LOBYTE(v20) = *((_BYTE *)KeGetCurrentThread() + 562);
  AccessMode = v20;
  if ( (_BYTE)v20 )
  {
    if ( (a8 & 0x10000000) != 0 )
    {
      if ( a12 && !a5 && a4 )
      {
        v23 = 4;
        v127 = 4;
        goto LABEL_9;
      }
LABEL_94:
      sub_140AB42A0(v20, v19);
      v24 = -1073741811;
      goto LABEL_43;
    }
    v48 = *((_QWORD *)KeGetCurrentThread() + 23);
    if ( !*(_QWORD *)(v48 + 1408) )
      goto LABEL_48;
    v60 = *(_WORD *)(v48 + 2412);
    if ( v60 == 332 || (v63 = v60 == 452, v61 = 0, v63) )
      v61 = 1;
    v49 = 1;
    if ( !v61 )
LABEL_48:
      v49 = 0;
    v126 = v49;
    ProbeForWrite(Address, 8 * (v49 ^ 1LL) + 8, 4u);
    ProbeForWrite(a10, (unsigned int)Length, 4u);
    if ( v49 )
    {
      *(_QWORD *)Address = 259LL;
    }
    else
    {
      *Address = 259;
      *((_QWORD *)Address + 1) = 0LL;
    }
    LOBYTE(v20) = AccessMode;
    if ( a12 )
    {
      v23 = 2;
      v127 = 2;
    }
    else
    {
      v23 = 1;
    }
LABEL_9:
    if ( a8 != (a8 & 0x1000000F) )
    {
      v24 = -1073741811;
      goto LABEL_42;
    }
    LOBYTE(v21) = v20;
    v24 = sub_140AB4630(a1, 16, v22, v21, (__int64)&v131, 0LL);
    if ( v24 < 0 )
    {
LABEL_42:
      sub_140AB42A0(v20, v19);
      goto LABEL_43;
    }
    v25 = 0LL;
    v128 = 0LL;
    if ( v13 == 1 )
    {
      LODWORD(v141[6]) = -1;
      *((_QWORD *)&v141[9] + 1) = &v141[9];
      *(_QWORD *)&v141[9] = &v141[9];
      memset((char *)&v141[13] + 8, 0, 0x50uLL);
      v24 = sub_140AB4008((_DWORD)Object, 0, 16, v50, AccessMode, (__int64)v141, (__int64)&v128);
      sub_14067FE98(v141, 0LL);
      if ( v24 < 0 )
        goto LABEL_40;
      v25 = (unsigned __int64 *)v128;
      if ( *(_QWORD *)(*((_QWORD *)v131 + 1) + 32LL) == *(_QWORD *)(*((_QWORD *)v128 + 1) + 32LL) )
      {
        ObfDereferenceObject(v128);
        v24 = -1073741811;
        goto LABEL_40;
      }
    }
    v26 = sub_1407E5E68(v23, 0x10000LL, 0LL, 0LL);
    v29 = (_QWORD *)v26;
    v137 = v26;
    if ( !v26 )
    {
      if ( v13 == 1 )
        ObfDereferenceObject(v25);
      goto LABEL_103;
    }
    if ( v13 == 1 )
    {
      v15 = (_QWORD *)sub_1407E5E68(v127, 0LL, v25, v26);
      P = v15;
      if ( !v15 )
      {
        ObfDereferenceObject(v25);
        sub_1407190AC(v29);
LABEL_103:
        v24 = -1073741670;
        goto LABEL_40;
      }
    }
    v30 = 1LL;
    if ( v127 == 1 )
    {
      v31 = 0LL;
    }
    else
    {
      if ( Handle )
      {
        Object = 0LL;
        v24 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)ExEventObjectType, AccessMode, &Object, 0LL);
        v134 = Object;
        if ( v24 < 0 )
        {
          if ( v13 != 1 )
          {
LABEL_106:
            v64 = v29;
LABEL_107:
            sub_1407190AC(v64);
            goto LABEL_40;
          }
LABEL_105:
          sub_1407190AC(v15);
          goto LABEL_106;
        }
        v31 = Object;
        KeResetEvent((PRKEVENT)Object);
      }
      else
      {
        v31 = 0LL;
      }
      v30 = v127;
      v32 = (_QWORD *)v29[8];
      if ( v127 == 2 )
      {
        v32[13] = v136;
        *(_QWORD *)(v29[8] + 8LL) = v31;
        CurrentThread = KeGetCurrentThread();
        v47 = FsRtlInitializeOplock;
        if ( a5 )
          v47 = a5;
        KeInitializeApc(
          v29[8] + 16LL,
          (__int64)CurrentThread,
          2,
          (__int64)sub_1406CEBA0,
          (__int64)sub_140910210,
          (__int64)v47,
          a5 != 0LL ? AccessMode : 0,
          a6);
        v25 = (unsigned __int64 *)v128;
      }
      else
      {
        *v32 = v31;
        if ( v127 != 4 )
        {
          *(_QWORD *)(v29[8] + 8LL) = a5;
          v30 = v29[8];
          *(_DWORD *)(v30 + 16) = a6;
        }
      }
    }
    sub_140AB4370(v30, v27, v28);
    v33 = (char *)v131 + 8;
    v34 = *((_QWORD *)v131 + 1);
    if ( v13 == 1 )
      sub_1407C300C(v34, v25[1]);
    else
      sub_140AB42D0(v34);
    if ( (unsigned __int8)sub_140AB45A0(v131, 0LL) || v13 == 1 && (unsigned __int8)sub_140AB45A0(v25, 0LL) )
    {
      v51 = *(_QWORD *)v33;
      if ( v13 == 1 )
        sub_1407C2FB4(v51, v25[1]);
      else
        sub_140AB4300(v51);
      sub_140AB4260(v53, v52, v54, v55);
      if ( v31 )
        ObfDereferenceObject(v31);
      if ( v13 == 1 )
        sub_1407190AC(P);
      sub_1407190AC(v29);
      v24 = -1073741444;
      goto LABEL_40;
    }
    if ( v13 != 1 || (v56 = *(_QWORD *)(*(_QWORD *)v33 + 32LL), v57 = *(_QWORD *)(v25[1] + 32), v56 == v57) )
    {
      ExAcquirePushLockExclusiveEx(*(_QWORD *)(*(_QWORD *)v33 + 32LL) + 1680LL, 0LL);
      LODWORD(Handle) = 1;
    }
    else
    {
      if ( v56 >= v57 )
      {
        ExAcquirePushLockExclusiveEx(v57 + 1680, 0LL);
        ExAcquirePushLockExclusiveEx(*(_QWORD *)(*(_QWORD *)v33 + 32LL) + 1680LL, 0LL);
        LODWORD(Handle) = 3;
      }
      else
      {
        ExAcquirePushLockExclusiveEx(v56 + 1680, 0LL);
        ExAcquirePushLockExclusiveEx(*(_QWORD *)(v25[1] + 32) + 1680LL, 0LL);
        LODWORD(Handle) = 2;
      }
      v133 = *(_QWORD *)(v25[1] + 32);
    }
    ExAcquireFastMutexUnsafe(&stru_140C493C0);
    LOBYTE(v35) = a9;
    v24 = sub_1407E5F70(v131, v29, a8, v35);
    if ( v24 >= 0 )
    {
      v125 = v13 == 1;
      if ( v13 == 1 )
      {
        ObfReferenceObject(v25);
        if ( v24 )
        {
          LOBYTE(v58) = a9;
          v24 = sub_1407E5F70(v25, P, a8, v58);
          v125 = v13 == 1;
          if ( v24 < 0 )
          {
            v73 = *v29;
            v74 = (_QWORD *)v29[1];
            if ( *(_QWORD **)(*v29 + 8LL) != v29 )
              goto LABEL_195;
            if ( (_QWORD *)*v74 != v29 )
              goto LABEL_195;
            *v74 = v73;
            *(_QWORD *)(v73 + 8) = v74;
            CurrentIrql = KeGetCurrentIrql();
            v140 = CurrentIrql;
            __writecr8(1uLL);
            v76 = v29[2];
            v77 = (_QWORD *)v29[3];
            if ( *(_QWORD **)(v76 + 8) != v29 + 2 || (_QWORD *)*v77 != v29 + 2 )
              goto LABEL_195;
            *v77 = v76;
            *(_QWORD *)(v76 + 8) = v77;
            if ( dword_140D06B08 )
            {
              if ( (dword_140D06B08 & 1) != 0 )
              {
                v78 = KeGetCurrentIrql();
                if ( v78 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v78 >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  v80 = *((_QWORD *)CurrentPrcb + 4375);
                  v81 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
                  v63 = (v81 & *(_DWORD *)(v80 + 20)) == 0;
                  *(_DWORD *)(v80 + 20) &= v81;
                  if ( v63 )
                  {
                    sub_140418E4C((__int64)CurrentPrcb);
                    v25 = (unsigned __int64 *)v128;
                    LOBYTE(CurrentIrql) = v140;
                  }
                  else
                  {
                    v25 = (unsigned __int64 *)v128;
                  }
                }
              }
            }
            __writecr8((unsigned __int8)CurrentIrql);
            v125 = v13 == 1;
          }
        }
        else
        {
          sub_1407190AC(P);
          v125 = 0;
        }
      }
      ExReleaseFastMutexUnsafe(&stru_140C493C0);
      if ( (_DWORD)Handle != 1 )
      {
        if ( (_DWORD)Handle != 2 )
        {
          if ( (_DWORD)Handle != 3 )
            goto LABEL_34;
          v62 = *(_QWORD *)(*(_QWORD *)v33 + 32LL);
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v62 + 1680), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v62 + 1680);
          sub_1402AFC00(v62 + 1680);
          v36 = v133;
LABEL_31:
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v36 + 1680), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v36 + 1680);
          sub_1402AFC00(v36 + 1680);
          v25 = (unsigned __int64 *)v128;
LABEL_34:
          v37 = *(_QWORD *)v33;
          if ( v129 == 1 )
            sub_1407C2FB4(v37, v25[1]);
          else
            sub_140AB4300(v37);
          sub_140AB4260(v39, v38, v40, v41);
          if ( v25 )
            ObfDereferenceObject(v25);
          if ( v24 < 0 )
          {
            sub_1407190AC(v29);
            if ( v134 )
              ObfDereferenceObject(v134);
            goto LABEL_40;
          }
          if ( v127 != 1 )
          {
LABEL_40:
            v44 = v123;
            goto LABEL_41;
          }
          sub_140AB42A0(v43, v42);
          v123 = 0;
          v82 = KeWaitForSingleObject((PVOID)v29[8], Executive, AccessMode, 1u, 0LL);
          v24 = v82;
          if ( v82 != 257 && v82 != 192 )
          {
            sub_140AB4370(v84, v83, v85);
            ExAcquireFastMutexUnsafe(&stru_140C493C0);
            v86 = KeGetCurrentIrql();
            __writecr8(1uLL);
            if ( v125 )
            {
              v87 = (char *)P;
              v88 = *(PVOID **)P;
              if ( *(_QWORD *)P )
              {
                v89 = (PVOID *)*((_QWORD *)P + 1);
                if ( v88[1] != P || *v89 != P )
                  goto LABEL_195;
                *v89 = v88;
                v88[1] = v89;
              }
              v90 = v87 + 16;
              v91 = *v90;
              v92 = (_QWORD *)v90[1];
              if ( *(_QWORD **)(*v90 + 8LL) != v90 || (_QWORD *)*v92 != v90 )
                goto LABEL_195;
              *v92 = v91;
              *(_QWORD *)(v91 + 8) = v92;
            }
            v93 = *v29;
            if ( *v29 )
            {
              v94 = (_QWORD *)v29[1];
              if ( *(_QWORD **)(v93 + 8) != v29 || (_QWORD *)*v94 != v29 )
                goto LABEL_195;
              *v94 = v93;
              *(_QWORD *)(v93 + 8) = v94;
            }
            v95 = v29[2];
            v96 = (_QWORD *)v29[3];
            if ( *(_QWORD **)(v95 + 8) == v29 + 2 && (_QWORD *)*v96 == v29 + 2 )
            {
              *v96 = v95;
              *(_QWORD *)(v95 + 8) = v96;
              if ( dword_140D06B08 )
              {
                if ( (dword_140D06B08 & 1) != 0 )
                {
                  v97 = KeGetCurrentIrql();
                  if ( v97 <= 0xFu && v86 <= 0xFu && v97 >= 2u )
                  {
                    v98 = KeGetCurrentPrcb();
                    v99 = *((_QWORD *)v98 + 4375);
                    v100 = ~(unsigned __int16)(-1LL << (v86 + 1));
                    v63 = (v100 & *(_DWORD *)(v99 + 20)) == 0;
                    *(_DWORD *)(v99 + 20) &= v100;
                    if ( v63 )
                      sub_140418E4C((__int64)v98);
                  }
                }
              }
              __writecr8(v86);
              ExReleaseFastMutexUnsafe(&stru_140C493C0);
              sub_140AB4260(v102, v101, v103, v104);
              v24 = *(_DWORD *)(v29[8] + 24LL);
              v105 = v136;
              *v136 = v24;
              if ( v126 )
                v105[1] = 0;
              else
                *((_QWORD *)v105 + 1) = 0LL;
              v44 = 0;
              if ( v125 )
                sub_1407190AC(P);
              sub_1407190AC(v29);
LABEL_41:
              ObfDereferenceObject(v131);
              if ( !v44 )
              {
LABEL_43:
                sub_14022EA30((__int64 *)&v138);
                return (unsigned int)v24;
              }
              goto LABEL_42;
            }
LABEL_195:
            __fastfail(3u);
          }
          sub_140AB4370(v84, v83, v85);
          ExAcquireFastMutexUnsafe(&stru_140C493C0);
          v106 = KeGetCurrentIrql();
          v137 = v106;
          __writecr8(1uLL);
          v15 = P;
          if ( v125 )
          {
            v107 = *(PVOID **)P;
            if ( *(_QWORD *)P )
            {
              v108 = (PVOID *)*((_QWORD *)P + 1);
              if ( v107[1] != P || *v108 != P )
                goto LABEL_195;
              *v108 = v107;
              v107[1] = v108;
            }
            v109 = v15[2];
            v110 = (_QWORD *)v15[3];
            if ( *(_QWORD **)(v109 + 8) != v15 + 2 || (_QWORD *)*v110 != v15 + 2 )
              goto LABEL_195;
            *v110 = v109;
            *(_QWORD *)(v109 + 8) = v110;
          }
          v111 = *v29;
          if ( *v29 )
          {
            v112 = (_QWORD *)v29[1];
            if ( *(_QWORD **)(v111 + 8) != v29 || (_QWORD *)*v112 != v29 )
              goto LABEL_195;
            *v112 = v111;
            *(_QWORD *)(v111 + 8) = v112;
          }
          v113 = v29[2];
          v114 = (_QWORD *)v29[3];
          if ( *(_QWORD **)(v113 + 8) != v29 + 2 || (_QWORD *)*v114 != v29 + 2 )
            goto LABEL_195;
          *v114 = v113;
          *(_QWORD *)(v113 + 8) = v114;
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v115 = KeGetCurrentIrql();
              if ( v115 <= 0xFu && (unsigned __int8)v106 <= 0xFu && v115 >= 2u )
              {
                v116 = KeGetCurrentPrcb();
                v117 = *((_QWORD *)v116 + 4375);
                v118 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v106 + 1));
                v63 = (v118 & *(_DWORD *)(v117 + 20)) == 0;
                *(_DWORD *)(v117 + 20) &= v118;
                if ( v63 )
                {
                  sub_140418E4C((__int64)v116);
                  LOBYTE(v106) = v137;
                }
              }
            }
          }
          __writecr8((unsigned __int8)v106);
          ExReleaseFastMutexUnsafe(&stru_140C493C0);
          sub_140AB4260(v120, v119, v121, v122);
          if ( !v125 )
            goto LABEL_106;
          goto LABEL_105;
        }
        v59 = v133;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v133 + 1680), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v59 + 1680);
        sub_1402AFC00(v59 + 1680);
      }
      v36 = *(_QWORD *)(*(_QWORD *)v33 + 32LL);
      goto LABEL_31;
    }
    ExReleaseFastMutexUnsafe(&stru_140C493C0);
    switch ( (_DWORD)Handle )
    {
      case 1:
        v65 = *(_QWORD *)(*(_QWORD *)v33 + 32LL);
        break;
      case 2:
        v66 = v133;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v133 + 1680), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v66 + 1680);
        sub_1402AFC00(v66 + 1680);
        v65 = *(_QWORD *)(*(_QWORD *)v33 + 32LL);
        break;
      case 3:
        v67 = *(_QWORD *)(*(_QWORD *)v33 + 32LL);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v67 + 1680), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v67 + 1680);
        sub_1402AFC00(v67 + 1680);
        v65 = v133;
        break;
      default:
LABEL_122:
        v68 = *(_QWORD *)v33;
        if ( v13 == 1 )
          sub_1407C2FB4(v68, v25[1]);
        else
          sub_140AB4300(v68);
        sub_140AB4260(v70, v69, v71, v72);
        if ( v134 )
          ObfDereferenceObject(v134);
        if ( v13 != 1 )
          goto LABEL_40;
        v64 = P;
        goto LABEL_107;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v65 + 1680), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v65 + 1680);
    sub_1402AFC00(v65 + 1680);
    v25 = (unsigned __int64 *)v128;
    v13 = v129;
    goto LABEL_122;
  }
  if ( !a12 )
  {
    v23 = 1;
    goto LABEL_9;
  }
  v23 = 3;
  v127 = 3;
  if ( !v13 )
    goto LABEL_9;
  sub_140AB42A0(v20, v19);
  sub_14022EA30((__int64 *)&v138);
  return 3221225485LL;
}
