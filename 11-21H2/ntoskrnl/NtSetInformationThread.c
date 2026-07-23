/*
 * XREFs of NtSetInformationThread @ 0x14072EC80
 * Callers:
 *     <none>
 * Callees:
 *     sub_140204738 @ 0x140204738 (sub_140204738.c)
 *     PsGetEffectiveServerSilo @ 0x14020A3D0 (PsGetEffectiveServerSilo.c)
 *     sub_14020E6EC @ 0x14020E6EC (sub_14020E6EC.c)
 *     sub_14020E9E8 @ 0x14020E9E8 (sub_14020E9E8.c)
 *     PsGetThreadProcess @ 0x1402321F0 (PsGetThreadProcess.c)
 *     sub_14024DA70 @ 0x14024DA70 (sub_14024DA70.c)
 *     sub_140251BD0 @ 0x140251BD0 (sub_140251BD0.c)
 *     sub_140257BB4 @ 0x140257BB4 (sub_140257BB4.c)
 *     sub_1402585E8 @ 0x1402585E8 (sub_1402585E8.c)
 *     sub_140258A0C @ 0x140258A0C (sub_140258A0C.c)
 *     sub_14025A668 @ 0x14025A668 (sub_14025A668.c)
 *     sub_140280754 @ 0x140280754 (sub_140280754.c)
 *     sub_14028F63C @ 0x14028F63C (sub_14028F63C.c)
 *     sub_14028F698 @ 0x14028F698 (sub_14028F698.c)
 *     KeSetActualBasePriorityThread @ 0x14028FD20 (KeSetActualBasePriorityThread.c)
 *     KeIsEmptyAffinityEx @ 0x140292F90 (KeIsEmptyAffinityEx.c)
 *     sub_1402A86B0 @ 0x1402A86B0 (sub_1402A86B0.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     PsAttachSiloToCurrentThread @ 0x1402D7FB0 (PsAttachSiloToCurrentThread.c)
 *     KeSetBasePriorityThread @ 0x1402EBF30 (KeSetBasePriorityThread.c)
 *     sub_1402F09BC @ 0x1402F09BC (sub_1402F09BC.c)
 *     sub_1402F7118 @ 0x1402F7118 (sub_1402F7118.c)
 *     sub_1402F7280 @ 0x1402F7280 (sub_1402F7280.c)
 *     sub_14030F330 @ 0x14030F330 (sub_14030F330.c)
 *     sub_140310810 @ 0x140310810 (sub_140310810.c)
 *     KeSetPriorityThread @ 0x140344340 (KeSetPriorityThread.c)
 *     PsGetProcessServerSilo @ 0x140347680 (PsGetProcessServerSilo.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     KeAddGroupAffinityEx @ 0x14035C3E0 (KeAddGroupAffinityEx.c)
 *     ?do_max_length@?$codecvt@_WDH@std@@MEBAHXZ @ 0x140360698 (-do_max_length@-$codecvt@_WDH@std@@MEBAHXZ.c)
 *     KeSetIdealProcessorThread @ 0x140386160 (KeSetIdealProcessorThread.c)
 *     sub_1403861B4 @ 0x1403861B4 (sub_1403861B4.c)
 *     sub_1403D2F9C @ 0x1403D2F9C (sub_1403D2F9C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14056C00C @ 0x14056C00C (sub_14056C00C.c)
 *     sub_1405714E8 @ 0x1405714E8 (sub_1405714E8.c)
 *     KeSetSelectedCpuSetsThread @ 0x140572A90 (KeSetSelectedCpuSetsThread.c)
 *     PsGetProcessSilo @ 0x1405E0470 (PsGetProcessSilo.c)
 *     sub_14066D068 @ 0x14066D068 (sub_14066D068.c)
 *     sub_1406E1570 @ 0x1406E1570 (sub_1406E1570.c)
 *     sub_1406E856C @ 0x1406E856C (sub_1406E856C.c)
 *     sub_1406E9750 @ 0x1406E9750 (sub_1406E9750.c)
 *     sub_1406EB2C4 @ 0x1406EB2C4 (sub_1406EB2C4.c)
 *     sub_1406EBB50 @ 0x1406EBB50 (sub_1406EBB50.c)
 *     sub_1407028B8 @ 0x1407028B8 (sub_1407028B8.c)
 *     sub_140705578 @ 0x140705578 (sub_140705578.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140732CC0 (ObReferenceObjectByHandleWithTag.c)
 *     sub_1407A87D0 @ 0x1407A87D0 (sub_1407A87D0.c)
 *     PsAssignImpersonationToken @ 0x1407AF0C0 (PsAssignImpersonationToken.c)
 *     sub_1407D7FC4 @ 0x1407D7FC4 (sub_1407D7FC4.c)
 *     sub_1407E7750 @ 0x1407E7750 (sub_1407E7750.c)
 *     sub_140961444 @ 0x140961444 (sub_140961444.c)
 *     sub_140961F3C @ 0x140961F3C (sub_140961F3C.c)
 *     ExSystemExceptionFilter @ 0x1409F8660 (ExSystemExceptionFilter.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall NtSetInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength)
{
  size_t v4; // rdi
  PVOID v8; // rbx
  struct _KTHREAD *CurrentThread; // r13
  KPROCESSOR_MODE v10; // r15
  __int64 v11; // rax
  KPRIORITY v12; // edi
  NTSTATUS result; // eax
  int v14; // edi
  PVOID v15; // rbx
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  _DWORD *v19; // rax
  LONG v20; // edx
  PVOID v21; // rbx
  NTSTATUS v22; // esi
  LONG v23; // edi
  NTSTATUS v24; // ebx
  PVOID v25; // rsi
  unsigned int v26; // edi
  PVOID v27; // rcx
  __int64 v28; // rdi
  PVOID v29; // r14
  struct _EX_RUNDOWN_REF *v30; // r15
  NTSTATUS v31; // esi
  __int64 v32; // rsi
  char *v33; // rax
  char *v34; // rdi
  NTSTATUS v35; // ebx
  void *v36; // rdi
  UCHAR v37; // di
  _DWORD *v38; // rbx
  NTSTATUS v39; // edi
  __int64 v40; // r8
  __int64 v41; // r9
  LONG v42; // esi
  NTSTATUS v43; // edi
  PVOID v44; // rcx
  unsigned int v45; // r14d
  struct _KTHREAD *v46; // rsi
  __int64 v47; // rsi
  struct _EX_RUNDOWN_REF *i; // rax
  struct _EX_RUNDOWN_REF *v49; // rdi
  ULONG_PTR Count; // rdx
  __int64 v51; // r8
  __int16 v52; // ax
  bool v53; // al
  ULONG_PTR v54; // rcx
  __int16 v55; // ax
  __int64 v56; // rax
  unsigned __int64 v57; // rax
  __int64 v58; // rdx
  unsigned __int64 v59; // rax
  __int16 v60; // ax
  LONG v61; // edi
  PVOID v62; // rcx
  unsigned int v63; // edi
  PVOID v64; // rbx
  int v65; // edi
  unsigned __int64 v66; // rcx
  PVOID v67; // rdi
  NTSTATUS v68; // ebx
  __int64 v69; // r8
  __int64 v70; // r9
  PVOID v71; // rsi
  NTSTATUS v72; // ebx
  __int64 v73; // rdx
  unsigned int v74; // edi
  int v75; // esi
  __int64 v76; // rax
  int v77; // edx
  unsigned __int64 v78; // rcx
  unsigned __int64 v79; // rdx
  unsigned __int16 v80; // di
  _WORD *PoolWithTag; // rax
  PVOID v82; // r14
  PVOID v83; // rdi
  LONG v84; // edi
  __int64 v85; // rdi
  LONG v86; // edi
  struct _KTHREAD *v87; // r14
  char v88; // al
  __int64 v89; // rdx
  void *v90; // r10
  void *v91; // rax
  PVOID v92; // rdi
  PEPROCESS ThreadProcess; // rsi
  __int64 ProcessSilo; // rax
  char v95; // al
  void *v96; // rcx
  __int64 EffectiveServerSilo; // rbx
  __int64 ProcessServerSilo; // rax
  int v99; // r8d
  int v100; // edi
  struct _KTHREAD *v101; // rcx
  PVOID Object; // [rsp+40h] [rbp-368h] BYREF
  NTSTATUS v103; // [rsp+48h] [rbp-360h]
  char v104; // [rsp+4Ch] [rbp-35Ch]
  char v105; // [rsp+4Dh] [rbp-35Bh]
  bool v106; // [rsp+4Eh] [rbp-35Ah]
  __int16 v107[2]; // [rsp+50h] [rbp-358h] BYREF
  _PROCESSOR_NUMBER v108; // [rsp+54h] [rbp-354h] BYREF
  PVOID v109; // [rsp+58h] [rbp-350h]
  char v110; // [rsp+60h] [rbp-348h]
  LONG Increment; // [rsp+64h] [rbp-344h]
  PVOID v112; // [rsp+68h] [rbp-340h] BYREF
  struct _KTHREAD *v113; // [rsp+70h] [rbp-338h]
  unsigned int v114; // [rsp+78h] [rbp-330h]
  unsigned int v115; // [rsp+7Ch] [rbp-32Ch]
  PVOID P; // [rsp+80h] [rbp-328h]
  PVOID v117; // [rsp+88h] [rbp-320h] BYREF
  __int128 v118; // [rsp+98h] [rbp-310h] BYREF
  __int128 v119; // [rsp+A8h] [rbp-300h]
  unsigned __int64 v120; // [rsp+B8h] [rbp-2F0h]
  PVOID v121; // [rsp+C0h] [rbp-2E8h] BYREF
  __int64 v122; // [rsp+C8h] [rbp-2E0h] BYREF
  void *Src[2]; // [rsp+D0h] [rbp-2D8h]
  int v124; // [rsp+E0h] [rbp-2C8h]
  LONG v125; // [rsp+E4h] [rbp-2C4h]
  LONG v126; // [rsp+E8h] [rbp-2C0h]
  LONG v127; // [rsp+ECh] [rbp-2BCh]
  unsigned int v128; // [rsp+F0h] [rbp-2B8h]
  int v129; // [rsp+F4h] [rbp-2B4h]
  NTSTATUS v130; // [rsp+F8h] [rbp-2B0h]
  __int64 v131; // [rsp+100h] [rbp-2A8h]
  unsigned __int64 v132; // [rsp+108h] [rbp-2A0h]
  __int64 v133; // [rsp+110h] [rbp-298h]
  LONG v134; // [rsp+118h] [rbp-290h]
  LONG v135; // [rsp+11Ch] [rbp-28Ch]
  __int128 v136; // [rsp+120h] [rbp-288h]
  unsigned int v137; // [rsp+130h] [rbp-278h]
  __int64 v138; // [rsp+138h] [rbp-270h]
  HANDLE v139; // [rsp+140h] [rbp-268h]
  __int64 v140; // [rsp+148h] [rbp-260h]
  _DWORD v141[68]; // [rsp+150h] [rbp-258h] BYREF
  char v142[256]; // [rsp+260h] [rbp-148h] BYREF

  v4 = ThreadInformationLength;
  v8 = 0LL;
  Object = 0LL;
  v118 = 0LL;
  memset(v141, 0, 0x108uLL);
  v107[0] = 0;
  v114 = 0;
  v115 = 0;
  v112 = 0LL;
  v132 = 0LL;
  v119 = 0LL;
  v120 = 0LL;
  v108 = 0;
  v121 = 0LL;
  *(_OWORD *)Src = 0LL;
  v122 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v113 = CurrentThread;
  v10 = *((_BYTE *)CurrentThread + 562);
  if ( v10 )
  {
    switch ( ThreadInformationClass )
    {
      case ThreadAffinityMask:
      case ThreadGroupInformation:
      case ThreadCpuAccountingInformation:
      case ThreadNameInformation:
      case ThreadManageWritesToExecutableMemory:
        v11 = 7LL;
        break;
      case ThreadEnableAlignmentFaultFixup:
      case ThreadCounterProfiling:
        v11 = 0LL;
        break;
      default:
        v11 = 3LL;
        break;
    }
    if ( (_DWORD)v4 )
    {
      if ( ((unsigned __int64)ThreadInformation & v11) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)ThreadInformation + v4 > 0x7FFFFFFF0000LL
        || (char *)ThreadInformation + v4 < ThreadInformation )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
  }
  switch ( ThreadInformationClass )
  {
    case ThreadPriority:
      if ( (_DWORD)v4 != 4 )
        return -1073741820;
      v124 = *(_DWORD *)ThreadInformation;
      v12 = v124;
      if ( (unsigned int)(v124 - 1) > 0x1E )
        return -1073741811;
      if ( v124 >= 16 && !sub_1406E856C(stru_140D3CA68, (int)ThreadHandle, 1024, v10) )
        return -1073741727;
      result = ObReferenceObjectByHandleWithTag(
                 ThreadHandle,
                 0x400u,
                 (POBJECT_TYPE)PsThreadType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        KeSetPriorityThread((PKTHREAD)Object, v12);
        goto LABEL_18;
      }
      return result;
    case ThreadBasePriority:
      if ( (_DWORD)v4 != 4 )
        return -1073741820;
      v14 = *(_DWORD *)ThreadInformation;
      Increment = *(_DWORD *)ThreadInformation;
      result = ObReferenceObjectByHandleWithTag(
                 ThreadHandle,
                 0x400u,
                 (POBJECT_TYPE)PsThreadType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      v103 = result;
      if ( result < 0 )
        return result;
      v15 = Object;
      v16 = *((_QWORD *)Object + 68);
      v17 = (unsigned int)(v14 + 16);
      if ( (unsigned int)v17 > 0x20 || (v18 = 0x10007C001LL, !_bittest64(&v18, v17)) )
      {
        if ( *((_QWORD *)CurrentThread + 23) != *((_QWORD *)sub_140204738(0LL) + 110) && *(_BYTE *)(v16 + 1463) != 4 )
        {
          ObfDereferenceObjectWithTag(v15, 0x79517350u);
          return -1073741811;
        }
      }
      v19 = *(_DWORD **)(v16 + 1296);
      v112 = v19;
      if ( v19 && (v19[260] & 0x20) != 0 && *(_BYTE *)(v16 + 1463) != 4 )
      {
        v20 = Increment;
        if ( Increment > 0 )
        {
          v21 = Object;
          goto LABEL_33;
        }
      }
      else
      {
        v20 = Increment;
      }
      v21 = Object;
      KeSetBasePriorityThread((PKTHREAD)Object, v20);
LABEL_33:
      v22 = v103;
      ObfDereferenceObjectWithTag(v21, 0x79517350u);
      return v22;
    case ThreadAffinityMask:
      if ( (_DWORD)v4 != 8 )
        return -1073741820;
      *(_QWORD *)&v118 = *(_QWORD *)ThreadInformation;
      v28 = v118;
      if ( !(_QWORD)v118 )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 ThreadHandle,
                 0x400u,
                 (POBJECT_TYPE)PsThreadType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        v29 = Object;
        v30 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)Object + 68);
        if ( sub_140347810(v30 + 139) )
        {
          v31 = -1073741811;
          if ( sub_14020E6EC((__int64)v29, v28) )
            v31 = 0;
          sub_1402AD030(v30 + 139);
          ObfDereferenceObjectWithTag(v29, 0x79517350u);
          return v31;
        }
        else
        {
          ObfDereferenceObjectWithTag(v29, 0x79517350u);
          return -1073741558;
        }
      }
      return result;
    case ThreadImpersonationToken:
      if ( (_DWORD)v4 != 8 )
        return -1073741820;
      v36 = *(void **)ThreadInformation;
      v140 = *(_QWORD *)ThreadInformation;
      result = ObReferenceObjectByHandleWithTag(
                 ThreadHandle,
                 0x80u,
                 (POBJECT_TYPE)PsThreadType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        v35 = PsAssignImpersonationToken((PETHREAD)Object, v36);
        goto LABEL_66;
      }
      return result;
    case ThreadEnableAlignmentFaultFixup:
      if ( (_DWORD)v4 != 1 )
        return -1073741820;
      v26 = *(unsigned __int8 *)ThreadInformation;
      v110 = *(_BYTE *)ThreadInformation;
      result = ObReferenceObjectByHandleWithTag(
                 ThreadHandle,
                 0x20u,
                 (POBJECT_TYPE)PsThreadType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        sub_140961444(Object, v26);
        ObfDereferenceObjectWithTag(v27, 0x79517350u);
        return 0;
      }
      return result;
    case ThreadQuerySetWin32StartAddress:
      return -1073741811;
    case ThreadZeroTlsCell:
      if ( (_DWORD)v4 != 4 )
        return -1073741820;
      v45 = *(_DWORD *)ThreadInformation;
      v114 = v45;
      result = ObReferenceObjectByHandleWithTag(
                 ThreadHandle,
                 0x20u,
                 (POBJECT_TYPE)PsThreadType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      LODWORD(v113) = result;
      v103 = result;
      if ( result < 0 )
        return result;
      v46 = (struct _KTHREAD *)Object;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      if ( v46 != CurrentThread )
        return -1073741811;
      v47 = *((_QWORD *)v46 + 68);
      v131 = v47;
      for ( i = (struct _EX_RUNDOWN_REF *)sub_1407E7750(v47, 0LL); ; i = (struct _EX_RUNDOWN_REF *)sub_1407E7750(
                                                                                                     v47,
                                                                                                     v49) )
      {
        Object = i;
        v49 = i;
        if ( !i )
          break;
        if ( sub_140347810(i + 169) )
        {
          Count = v49[30].Count;
          if ( Count )
          {
            v51 = *(_QWORD *)(v47 + 1408);
            v53 = 0;
            if ( v51 )
            {
              v52 = *(_WORD *)(v47 + 2412);
              if ( v52 == 332 || v52 == 452 )
                v53 = 1;
            }
            v106 = v53;
            v54 = Count + 0x2000;
            if ( !v53 )
              v54 = 0LL;
            if ( v45 < 0x40 )
            {
              if ( v51 && ((v60 = *(_WORD *)(v47 + 2412), v60 == 332) || v60 == 452) )
              {
                if ( v54 )
                  *(_DWORD *)(v54 + 4LL * v45 + 3600) = 0;
              }
              else
              {
                *(_QWORD *)(Count + 8LL * v45 + 5248) = 0LL;
              }
            }
            else if ( v45 < 0x440 )
            {
              if ( v51 && ((v55 = *(_WORD *)(v47 + 2412), v55 == 332) || v55 == 452) )
              {
                if ( v54 )
                {
                  v56 = sub_140251BD0(*(_DWORD *)(v54 + 3988));
                  if ( v56 )
                  {
                    v57 = v56 + 4LL * (v45 - 64);
                    if ( v57 >= 0x7FFFFFFF0000LL )
                      v57 = 0x7FFFFFFF0000LL;
                    *(_DWORD *)v57 = 0;
                  }
                }
              }
              else
              {
                v58 = *(_QWORD *)(Count + 6016);
                v138 = v58;
                if ( v58 )
                {
                  v59 = v58 + 8LL * (v45 - 64);
                  if ( v59 >= 0x7FFFFFFF0000LL )
                    v59 = 0x7FFFFFFF0000LL;
                  *(_QWORD *)v59 = 0LL;
                }
              }
            }
          }
          sub_1402AD030(v49 + 169);
        }
      }
      return (int)v113;
    case ThreadIdealProcessor:
      if ( (_DWORD)v4 != 4 )
        return -1073741820;
      v115 = *(_DWORD *)ThreadInformation;
      v37 = v115;
      if ( v115 > 0x40 )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 ThreadHandle,
                 0x20u,
                 (POBJECT_TYPE)PsThreadType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v38 = Object;
      v39 = KeSetIdealProcessorThread((PKTHREAD)Object, v37);
      if ( (v38[29] & 0x400) == 0 )
        sub_1407028B8((__int64)CurrentThread, (__int64)v38, v40, v41);
LABEL_75:
      ObfDereferenceObjectWithTag(v38, 0x79517350u);
      return v39;
    case ThreadPriorityBoost:
      if ( (_DWORD)v4 != 4 )
        return -1073741820;
      v42 = *(_DWORD *)ThreadInformation;
      v125 = *(_DWORD *)ThreadInformation;
      result = ObReferenceObjectByHandleWithTag(
                 ThreadHandle,
                 0x400u,
                 (POBJECT_TYPE)PsThreadType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      v43 = result;
      if ( result >= 0 )
      {
        LOBYTE(v8) = v42 != 0;
        sub_1406EBB50((__int64)Object, (int)v8);
        ObfDereferenceObjectWithTag(v44, 0x79517350u);
        return v43;
      }
      return result;
    case ThreadSetTlsArrayAddress:
      return -1073741822;
    case ThreadHideFromDebugger:
      if ( (_DWORD)v4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ThreadHandle,
                 0x20u,
                 (POBJECT_TYPE)PsThreadType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      v103 = result;
      if ( result < 0 )
        return result;
      _InterlockedOr((volatile signed __int32 *)Object + 344, 4u);
      goto LABEL_120;
    case ThreadBreakOnTermination:
      if ( (_DWORD)v4 != 4 )
        return -1073741820;
      v61 = *(_DWORD *)ThreadInformation;
      v126 = *(_DWORD *)ThreadInformation;
      if ( !SeSinglePrivilegeCheck(stru_140D3CA18, v10) )
        return -1073741727;
      result = ObReferenceObjectByHandleWithTag(
                 ThreadHandle,
                 0x20u,
                 (POBJECT_TYPE)PsThreadType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      v103 = result;
      if ( result < 0 )
        return result;
      if ( v61 )
        _InterlockedOr((volatile signed __int32 *)Object + 344, 0x20u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 344, 0xFFFFFFDF);
      goto LABEL_18;
    case ThreadSwitchLegacyState:
      if ( ThreadHandle != (HANDLE)-2LL )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 (HANDLE)0xFFFFFFFFFFFFFFFELL,
                 0x20u,
                 (POBJECT_TYPE)PsThreadType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        v62 = Object;
        *((_QWORD *)Object + 74) |= MEMORY[0xFFFFF780000003D8] | 3LL;
        ObfDereferenceObjectWithTag(v62, 0x79517350u);
        return 0;
      }
      return result;
    case ThreadIoPriority:
      if ( (((_DWORD)v4 - 4) & 0xFFFFFFFB) != 0 )
        return -1073741820;
      if ( (_DWORD)v4 == 4 )
      {
        v63 = *(_DWORD *)ThreadInformation;
        v127 = *(_DWORD *)ThreadInformation;
        LOBYTE(ThreadInformation) = 0;
      }
      else
      {
        v132 = *(_QWORD *)ThreadInformation;
        v63 = v132;
        ThreadInformation = (PVOID)HIDWORD(v132);
      }
      if ( v63 >= 4 )
        return -1073741811;
      if ( v63 >= 3 && !sub_1406E856C(stru_140D3CA68, (int)ThreadHandle, 32, v10) )
        return -1073741727;
      result = ObReferenceObjectByHandleWithTag(
                 ThreadHandle,
                 0x20u,
                 (POBJECT_TYPE)PsThreadType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        v64 = Object;
        if ( (_BYTE)ThreadInformation == 1 && ((*((_DWORD *)Object + 344) >> 9) & 7) < (int)v63 )
          sub_140280754((KSPIN_LOCK *)Object, v63, 0);
        sub_14028F698((__int64)v64, v63);
        ObfDereferenceObjectWithTag(v64, 0x79517350u);
        return 0;
      }
      return result;
    case ThreadPagePriority:
      if ( (_DWORD)v4 != 4 )
        return -1073741820;
      v128 = *(_DWORD *)ThreadInformation;
      v65 = v128;
      if ( v128 > (unsigned int)std::codecvt<wchar_t,char,int>::do_max_length() || v128 < (unsigned int)sub_14024DA70() )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 ThreadHandle,
                 0x20u,
                 (POBJECT_TYPE)PsThreadType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      sub_14028F63C((__int64)Object, v65);
      goto LABEL_18;
    case ThreadActualBasePriority:
      if ( (_DWORD)v4 != 4 )
        return -1073741820;
      Increment = *(_DWORD *)ThreadInformation;
      v23 = Increment;
      if ( (unsigned int)(Increment - 1) > 0x1E )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 ThreadHandle,
                 0x400u,
                 (POBJECT_TYPE)PsThreadType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      v24 = result;
      if ( result >= 0 )
      {
        v25 = Object;
        if ( *(_BYTE *)(*((_QWORD *)Object + 68) + 1463LL) == 4
          || v23 < 16
          || SeSinglePrivilegeCheck(stru_140D3CA68, v10) )
        {
          KeSetActualBasePriorityThread((ULONG_PTR)v25, v23);
          ObfDereferenceObjectWithTag(v25, 0x79517350u);
          return v24;
        }
        else
        {
          ObfDereferenceObjectWithTag(v25, 0x79517350u);
          return -1073741727;
        }
      }
      return result;
    case ThreadWow64Context:
      result = ObReferenceObjectByHandleWithTag(
                 ThreadHandle,
                 0x10u,
                 (POBJECT_TYPE)PsThreadType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        v71 = Object;
        if ( sub_140347810((struct _EX_RUNDOWN_REF *)Object + 169) )
        {
          v72 = sub_140705578((struct _KTHREAD *)v71, (ULONG *)ThreadInformation, v4, v10);
          sub_1402AD030((struct _EX_RUNDOWN_REF *)v71 + 169);
          ObfDereferenceObjectWithTag(v71, 0x79517350u);
          return v72;
        }
        else
        {
          ObfDereferenceObjectWithTag(v71, 0x79517350u);
          return -1073741749;
        }
      }
      return result;
    case ThreadGroupInformation:
      if ( (_DWORD)v4 != 16 )
        return -1073741820;
      v118 = *(_OWORD *)ThreadInformation;
      if ( !sub_1402585E8((__int64)&v118, 1) )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 ThreadHandle,
                 0x20u,
                 (POBJECT_TYPE)PsThreadType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v141[0] = 2097153;
      memset(&v141[1], 0, 0x104uLL);
      KeAddGroupAffinityEx((unsigned __int16 *)v141, WORD4(v118), v118);
      v103 = 0;
      v32 = *((_QWORD *)Object + 68);
      sub_14025A668(v32, (__int64)CurrentThread);
      v33 = *(char **)(v32 + 1296);
      v112 = v33;
      v34 = v33;
      if ( v33 )
      {
        ExAcquireResourceSharedLite((PERESOURCE)(v33 + 56), 1u);
        v35 = sub_1406EB2C4((__int64)v34, (__int64)v141);
        v103 = v35;
      }
      else
      {
        v35 = v103;
      }
      if ( v35 >= 0 )
      {
        sub_14020E9E8((__int64)Object, (__int64)v141);
        sub_140257BB4(v32, v107);
        if ( !(unsigned int)KeIsEmptyAffinityEx(v141) && v107[0] != WORD4(v118) )
        {
          _interlockedbittestandset((volatile signed __int32 *)(v32 + 632), 0xCu);
          v35 = v103;
          v34 = (char *)v112;
        }
      }
      if ( v34 )
        ExReleaseResourceLite((PERESOURCE)(v34 + 56));
      sub_140258A0C(v32, (__int64)CurrentThread);
LABEL_66:
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return v35;
    case ThreadCounterProfiling:
      if ( (_DWORD)v4 != 24 )
        return -1073741820;
      v119 = *(_OWORD *)ThreadInformation;
      v120 = *((_QWORD *)ThreadInformation + 2);
      v66 = v120;
      if ( (v120 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v120 >= 0x7FFFFFFF0000LL )
        v66 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v66 = *(_BYTE *)v66;
      *(_BYTE *)(v66 + 447) = *(_BYTE *)(v66 + 447);
      result = ObReferenceObjectByHandleWithTag(
                 ThreadHandle,
                 0x20u,
                 (POBJECT_TYPE)PsThreadType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        v67 = Object;
        if ( Object == KeGetCurrentThread() )
        {
          if ( HIDWORD(v119) )
            v68 = sub_140961F3C(Object, DWORD2(v119), v119, v120);
          else
            v68 = sub_1405714E8((__int64)Object, v120);
          ObfDereferenceObjectWithTag(v67, 0x79517350u);
          return v68;
        }
        else
        {
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return -1073741637;
        }
      }
      return result;
    case ThreadIdealProcessorEx:
      if ( (_DWORD)v4 != 4 )
        return -1073741820;
      v108 = *(_PROCESSOR_NUMBER *)ThreadInformation;
      result = ObReferenceObjectByHandleWithTag(
                 ThreadHandle,
                 0x20u,
                 (POBJECT_TYPE)PsThreadType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v38 = Object;
      v39 = sub_1403861B4((__int64)Object, &v108, &v108);
      if ( v39 >= 0 )
      {
        if ( (v38[29] & 0x400) == 0 )
          sub_1407028B8((__int64)CurrentThread, (__int64)v38, v69, v70);
        *(_PROCESSOR_NUMBER *)ThreadInformation = v108;
      }
      goto LABEL_75;
    case ThreadCpuAccountingInformation:
      if ( ThreadHandle != (HANDLE)-2LL )
        return -1073741811;
      if ( (_DWORD)v4 != 8 )
        return -1073741820;
      v139 = *(HANDLE *)ThreadInformation;
      if ( v139 )
      {
        result = ObReferenceObjectByHandleWithTag(v139, 2u, qword_140D06BB0, v10, 0x79517350u, &v121, 0LL);
        if ( result < 0 )
          return result;
        v8 = v121;
        v73 = *((_QWORD *)v121 + 4);
        if ( !v73 )
        {
          ObfDereferenceObjectWithTag(v121, 0x79517350u);
          return -1073740715;
        }
        if ( !sub_140310810((__int64)CurrentThread, v73) )
        {
          ObfDereferenceObjectWithTag(v8, 0x79517350u);
          return -1073740714;
        }
      }
      else
      {
        if ( !sub_140310810((__int64)CurrentThread, 0LL) )
          return -1073740713;
        ObfDereferenceObject(*((PVOID *)CurrentThread + 165));
      }
      *((_QWORD *)CurrentThread + 165) = v8;
      return 0;
    case ThreadHeterogeneousCpuPolicy:
      if ( (_DWORD)v4 != 4 )
        return -1073741820;
      v74 = MEMORY[4];
      v129 = MEMORY[4];
      if ( MEMORY[4] > 8u )
        return -1073741811;
      v75 = ObReferenceObjectByHandleWithTag(
              ThreadHandle,
              0x400u,
              (POBJECT_TYPE)PsThreadType,
              v10,
              0x79517350u,
              &Object,
              0LL);
      if ( v75 < 0 )
        return v75;
      sub_14056C00C((__int64)Object, v74);
      goto LABEL_184;
    case ThreadNameInformation:
      v105 = 0;
      v109 = 0LL;
      P = 0LL;
      v104 = 0;
      if ( (_DWORD)v4 != 16 )
      {
        v75 = -1073741820;
LABEL_216:
        v103 = v75;
        goto LABEL_217;
      }
      v75 = ObReferenceObjectByHandleWithTag(
              ThreadHandle,
              0x400u,
              (POBJECT_TYPE)PsThreadType,
              v10,
              0x79517350u,
              &Object,
              0LL);
      v103 = v75;
      if ( v75 < 0 )
      {
LABEL_217:
        v82 = v109;
        goto LABEL_218;
      }
      v105 = 1;
      if ( v10 )
      {
        v136 = 0LL;
        v76 = 0x7FFFFFFF0000LL;
        if ( (unsigned __int64)ThreadInformation < 0x7FFFFFFF0000LL )
          v76 = (__int64)ThreadInformation;
        v77 = *(_DWORD *)v76;
        LODWORD(v136) = v77;
        v78 = *(_QWORD *)(v76 + 8);
        *((_QWORD *)&v136 + 1) = v78;
        *(_OWORD *)Src = v136;
        if ( (_WORD)v77 )
        {
          if ( (v78 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v79 = (unsigned __int16)v77 + v78;
          if ( v79 > 0x7FFFFFFF0000LL || v79 < v78 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        v75 = v103;
      }
      else
      {
        *(_OWORD *)Src = *(_OWORD *)ThreadInformation;
      }
      v80 = (unsigned __int16)Src[0];
      if ( ((__int64)Src[0] & 1) != 0 || LOWORD(Src[0]) > WORD1(Src[0]) )
      {
        v75 = -1073741811;
        goto LABEL_216;
      }
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, LOWORD(Src[0]) + 16LL, 0x6D4E6854u);
      v82 = PoolWithTag;
      v109 = PoolWithTag;
      if ( PoolWithTag )
      {
        *((_QWORD *)PoolWithTag + 1) = PoolWithTag + 8;
        *PoolWithTag = v80;
        PoolWithTag[1] = v80;
        memmove(PoolWithTag + 8, Src[1], v80);
        v83 = Object;
        sub_1402F7280((__int64)Object, (__int64)CurrentThread);
        v104 = 1;
        P = (PVOID)*((_QWORD *)v83 + 204);
        *((_QWORD *)v83 + 204) = v82;
        v82 = 0LL;
        v109 = 0LL;
        sub_1407D7FC4(v83);
      }
      else
      {
        v75 = -1073741670;
        v103 = -1073741670;
      }
LABEL_218:
      if ( v104 )
        sub_1402F7118((__int64)Object, (__int64)CurrentThread);
      if ( v105 )
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
      if ( P )
        ExFreePoolWithTag(P, 0x6D4E6854u);
      if ( !v82 )
        return v75;
      ExFreePoolWithTag(v82, 0x6D4E6854u);
      return v75;
    case ThreadSelectedCpuSets:
      if ( (v4 & 7) != 0 || (unsigned int)v4 > 0x100 )
        return -1073741820;
      memmove(v142, ThreadInformation, v4);
      result = ObReferenceObjectByHandleWithTag(
                 ThreadHandle,
                 0x400u,
                 (POBJECT_TYPE)PsThreadType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v35 = KeSetSelectedCpuSetsThread((__int64)Object, (unsigned int)v4 >> 3, v142);
      goto LABEL_66;
    case ThreadDynamicCodePolicyInfo:
      if ( ThreadHandle != (HANDLE)-2LL )
        return -1073741811;
      if ( (_DWORD)v4 != 4 )
        return -1073741820;
      v130 = *(_DWORD *)ThreadInformation;
      result = v130;
      if ( v130 == 1 )
      {
        if ( (*(_DWORD *)(*((_QWORD *)CurrentThread + 68) + 2512LL) & 0x200) == 0 )
          return -1073741790;
        _InterlockedOr((volatile signed __int32 *)CurrentThread + 344, 0x40000u);
        return 0;
      }
      else
      {
        if ( v130 )
          return -1073741811;
        _InterlockedAnd((volatile signed __int32 *)CurrentThread + 344, 0xFFFBFFFF);
      }
      return result;
    case ThreadExplicitCaseSensitivity:
      if ( (_DWORD)v4 != 4 )
        return -1073741820;
      v84 = *(_DWORD *)ThreadInformation;
      v134 = *(_DWORD *)ThreadInformation;
      if ( !v10 )
        goto LABEL_231;
      if ( !SeSinglePrivilegeCheck(stru_140D3CA18, v10) )
        return -1073741727;
      if ( !sub_14066D068(*(_BYTE *)(*((_QWORD *)CurrentThread + 68) + 2170LL), 0x51u) )
        return -1073741790;
LABEL_231:
      result = ObReferenceObjectByHandleWithTag(
                 ThreadHandle,
                 0x20u,
                 (POBJECT_TYPE)PsThreadType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      v103 = result;
      if ( result >= 0 )
      {
        if ( v84 )
          _InterlockedOr((volatile signed __int32 *)Object + 344, 0x80000u);
        else
          _InterlockedAnd((volatile signed __int32 *)Object + 344, 0xFFF7FFFF);
LABEL_120:
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return v103;
      }
      return result;
    case ThreadWorkOnBehalfTicket:
      if ( ThreadHandle != (HANDLE)-2LL )
        return -1073741811;
      if ( (_DWORD)v4 != 8 )
        return -1073741820;
      v85 = *(_QWORD *)ThreadInformation;
      v122 = *(_QWORD *)ThreadInformation;
      v75 = ObReferenceObjectByHandleWithTag(
              (HANDLE)0xFFFFFFFFFFFFFFFELL,
              0x400u,
              (POBJECT_TYPE)PsThreadType,
              v10,
              0x79517350u,
              &Object,
              0LL);
      if ( v75 < 0 )
        return v75;
      v117 = 0LL;
      if ( v85 )
      {
        v75 = sub_1407A87D0(&v122, &v117);
        if ( v75 >= 0 )
        {
          sub_1402A86B0((ULONG_PTR)CurrentThread);
          sub_14030F330((__int64)v117);
          ObfDereferenceObject(v117);
        }
      }
      else
      {
        sub_1402A86B0((ULONG_PTR)CurrentThread);
      }
LABEL_184:
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return v75;
    case ThreadDbgkWerReportActive:
      if ( (_DWORD)v4 != 4 )
        return -1073741820;
      v86 = *(_DWORD *)ThreadInformation;
      v135 = *(_DWORD *)ThreadInformation;
      result = ObReferenceObjectByHandleWithTag(
                 ThreadHandle,
                 0x20u,
                 (POBJECT_TYPE)PsThreadType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      v103 = result;
      if ( result < 0 )
        return result;
      if ( v86 )
        _InterlockedOr((volatile signed __int32 *)Object + 344, 0x200000u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 344, 0xFFDFFFFF);
      goto LABEL_120;
    case ThreadAttachContainer:
      if ( ThreadHandle != (HANDLE)-2LL )
        return -1073741811;
      if ( (_DWORD)v4 != 8 )
        return -1073741820;
      v133 = *(_QWORD *)ThreadInformation;
      v87 = KeGetCurrentThread();
      v88 = sub_1402F09BC((__int64)v87, 0LL);
      if ( v90 )
      {
        if ( v88 )
          return -1073741811;
        result = ObReferenceObjectByHandleWithTag(v90, 0x20u, (POBJECT_TYPE)PsJobType, v10, 0x6D497350u, &v112, 0LL);
        if ( result >= 0 )
        {
          v92 = v112;
          if ( (*((_DWORD *)v112 + 379) & 2) == 0 )
          {
            ObfDereferenceObjectWithTag(v112, 0x6D497350u);
            return -1073741811;
          }
          ThreadProcess = PsGetThreadProcess(v87);
          ProcessSilo = PsGetProcessSilo((__int64)ThreadProcess);
          v95 = sub_1406E1570((__int64)v92, ProcessSilo);
          v96 = v92;
          if ( v95
            && (EffectiveServerSilo = PsGetEffectiveServerSilo((__int64)v92),
                ProcessServerSilo = PsGetProcessServerSilo((__int64)ThreadProcess),
                v96 = v92,
                ProcessServerSilo == EffectiveServerSilo) )
          {
            PsAttachSiloToCurrentThread((__int64)v92);
            return 0;
          }
          else
          {
            ObfDereferenceObjectWithTag(v96, 0x6D497350u);
            return -1073741811;
          }
        }
      }
      else
      {
        if ( !v88 )
          return -1073741811;
        v91 = (void *)PsAttachSiloToCurrentThread(v89 - 3);
        ObfDereferenceObjectWithTag(v91, 0x6D497350u);
        return 0;
      }
      return result;
    case ThreadManageWritesToExecutableMemory:
      return -1073741637;
    case ThreadPowerThrottlingState:
      if ( (_DWORD)v4 != 12 )
        return -1073741820;
      v117 = *(PVOID *)ThreadInformation;
      v99 = *((_DWORD *)ThreadInformation + 2);
      if ( (_DWORD)v117 != 1 || (HIDWORD(v117) & 0xFFFFFFFE) != 0 || (~HIDWORD(v117) & v99) != 0 )
        return -1073741811;
      if ( (BYTE4(v117) & 1) != 0 )
      {
        v100 = 8;
        if ( (v99 & 1) == 0 )
          v100 = 3;
      }
      else
      {
        v100 = 0;
      }
      result = ObReferenceObjectByHandleWithTag(
                 ThreadHandle,
                 0x20u,
                 (POBJECT_TYPE)PsThreadType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      sub_1406E9750((__int64)Object, v100);
LABEL_18:
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return 0;
    case ThreadWorkloadClass:
      if ( ThreadHandle != (HANDLE)-2LL || v10 )
        return -1073741790;
      if ( (_DWORD)v4 != 4 )
        return -1073741820;
      v137 = *(_DWORD *)ThreadInformation;
      if ( v137 >= 2 )
        return -1073741811;
      v101 = KeGetCurrentThread();
      *((_DWORD *)v101 + 345) ^= (*((_DWORD *)v101 + 345) ^ (v137 << 11)) & 0x800;
      sub_1403D2F9C((__int64)v101);
      return 0;
    default:
      return -1073741821;
  }
}
