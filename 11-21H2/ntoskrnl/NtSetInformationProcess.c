/*
 * XREFs of NtSetInformationProcess @ 0x1407E7850
 * Callers:
 *     <none>
 * Callees:
 *     KeStackAttachProcess @ 0x140203630 (KeStackAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x1402037B0 (KeUnstackDetachProcess.c)
 *     sub_140209344 @ 0x140209344 (sub_140209344.c)
 *     sub_14023E59C @ 0x14023E59C (sub_14023E59C.c)
 *     sub_14024BA3C @ 0x14024BA3C (sub_14024BA3C.c)
 *     sub_14024DA70 @ 0x14024DA70 (sub_14024DA70.c)
 *     sub_140251BD0 @ 0x140251BD0 (sub_140251BD0.c)
 *     sub_14025302C @ 0x14025302C (sub_14025302C.c)
 *     sub_140253A44 @ 0x140253A44 (sub_140253A44.c)
 *     sub_140255110 @ 0x140255110 (sub_140255110.c)
 *     sub_140255E2C @ 0x140255E2C (sub_140255E2C.c)
 *     sub_140257BB4 @ 0x140257BB4 (sub_140257BB4.c)
 *     sub_140258040 @ 0x140258040 (sub_140258040.c)
 *     sub_1402585E8 @ 0x1402585E8 (sub_1402585E8.c)
 *     sub_140258CE0 @ 0x140258CE0 (sub_140258CE0.c)
 *     sub_14025E6B4 @ 0x14025E6B4 (sub_14025E6B4.c)
 *     sub_140280754 @ 0x140280754 (sub_140280754.c)
 *     PsIsSystemProcess @ 0x1402820E0 (PsIsSystemProcess.c)
 *     sub_14028F63C @ 0x14028F63C (sub_14028F63C.c)
 *     sub_14028F698 @ 0x14028F698 (sub_14028F698.c)
 *     sub_1402A0880 @ 0x1402A0880 (sub_1402A0880.c)
 *     sub_1402A08A8 @ 0x1402A08A8 (sub_1402A08A8.c)
 *     sub_1402A0D88 @ 0x1402A0D88 (sub_1402A0D88.c)
 *     sub_1402A1054 @ 0x1402A1054 (sub_1402A1054.c)
 *     PsGetCurrentProcess @ 0x1402A3820 (PsGetCurrentProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     sub_1402EBB58 @ 0x1402EBB58 (sub_1402EBB58.c)
 *     sub_1402EC5B0 @ 0x1402EC5B0 (sub_1402EC5B0.c)
 *     sub_140300B40 @ 0x140300B40 (sub_140300B40.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x14030B700 (PsChargeProcessNonPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403107C0 (PsReturnProcessNonPagedPoolQuota.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     ?do_max_length@?$codecvt@_WDH@std@@MEBAHXZ @ 0x140360698 (-do_max_length@-$codecvt@_WDH@std@@MEBAHXZ.c)
 *     sub_1403614E0 @ 0x1403614E0 (sub_1403614E0.c)
 *     sub_1403614FC @ 0x1403614FC (sub_1403614FC.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140367B10 (ExAllocatePoolWithQuotaTag.c)
 *     sub_14036858C @ 0x14036858C (sub_14036858C.c)
 *     sub_14039ECF0 @ 0x14039ECF0 (sub_14039ECF0.c)
 *     sub_1403D2D98 @ 0x1403D2D98 (sub_1403D2D98.c)
 *     SkIsSecureKernel @ 0x1403DF740 (SkIsSecureKernel.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140417880 @ 0x140417880 (sub_140417880.c)
 *     sub_140419118 @ 0x140419118 (sub_140419118.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140558960 @ 0x140558960 (sub_140558960.c)
 *     sub_140572774 @ 0x140572774 (sub_140572774.c)
 *     sub_140581748 @ 0x140581748 (sub_140581748.c)
 *     sub_14058196C @ 0x14058196C (sub_14058196C.c)
 *     sub_1405E07FC @ 0x1405E07FC (sub_1405E07FC.c)
 *     sub_1405E097C @ 0x1405E097C (sub_1405E097C.c)
 *     sub_14062E19C @ 0x14062E19C (sub_14062E19C.c)
 *     sub_140659AD4 @ 0x140659AD4 (sub_140659AD4.c)
 *     sub_14066B3D8 @ 0x14066B3D8 (sub_14066B3D8.c)
 *     sub_140672BD8 @ 0x140672BD8 (sub_140672BD8.c)
 *     PsReleaseProcessExitSynchronization @ 0x1406BBE50 (PsReleaseProcessExitSynchronization.c)
 *     sub_1406CB004 @ 0x1406CB004 (sub_1406CB004.c)
 *     sub_1406D2718 @ 0x1406D2718 (sub_1406D2718.c)
 *     PsSetProcessFaultInformation @ 0x1406D40C0 (PsSetProcessFaultInformation.c)
 *     sub_1406D435C @ 0x1406D435C (sub_1406D435C.c)
 *     sub_1406D5E88 @ 0x1406D5E88 (sub_1406D5E88.c)
 *     sub_1406DAA90 @ 0x1406DAA90 (sub_1406DAA90.c)
 *     sub_1406DD598 @ 0x1406DD598 (sub_1406DD598.c)
 *     sub_1406DEAEC @ 0x1406DEAEC (sub_1406DEAEC.c)
 *     sub_1406E0450 @ 0x1406E0450 (sub_1406E0450.c)
 *     sub_1406E6FE8 @ 0x1406E6FE8 (sub_1406E6FE8.c)
 *     sub_1406E71BC @ 0x1406E71BC (sub_1406E71BC.c)
 *     sub_1406E837C @ 0x1406E837C (sub_1406E837C.c)
 *     sub_1406E856C @ 0x1406E856C (sub_1406E856C.c)
 *     sub_1406E9BE0 @ 0x1406E9BE0 (sub_1406E9BE0.c)
 *     sub_1406EBB50 @ 0x1406EBB50 (sub_1406EBB50.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     SeCaptureSubjectContextEx @ 0x14072A390 (SeCaptureSubjectContextEx.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140732CC0 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     sub_1407527F4 @ 0x1407527F4 (sub_1407527F4.c)
 *     PsSetProcessPriorityByClass @ 0x14079D240 (PsSetProcessPriorityByClass.c)
 *     sub_14079D270 @ 0x14079D270 (sub_14079D270.c)
 *     RtlIsSandboxedToken @ 0x14079F1E0 (RtlIsSandboxedToken.c)
 *     LpcRequestPort @ 0x1407A7CB0 (LpcRequestPort.c)
 *     PsReferencePrimaryToken @ 0x1407AFED0 (PsReferencePrimaryToken.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     sub_1407E75A4 @ 0x1407E75A4 (sub_1407E75A4.c)
 *     sub_1407E766C @ 0x1407E766C (sub_1407E766C.c)
 *     sub_1407E7694 @ 0x1407E7694 (sub_1407E7694.c)
 *     sub_1407E7750 @ 0x1407E7750 (sub_1407E7750.c)
 *     sub_1407F2DBC @ 0x1407F2DBC (sub_1407F2DBC.c)
 *     sub_1407F5540 @ 0x1407F5540 (sub_1407F5540.c)
 *     sub_1407FCBC0 @ 0x1407FCBC0 (sub_1407FCBC0.c)
 *     SeCompareSigningLevels @ 0x140811D10 (SeCompareSigningLevels.c)
 *     sub_140847028 @ 0x140847028 (sub_140847028.c)
 *     sub_1409614A8 @ 0x1409614A8 (sub_1409614A8.c)
 *     sub_1409614D0 @ 0x1409614D0 (sub_1409614D0.c)
 *     sub_14096ECCC @ 0x14096ECCC (sub_14096ECCC.c)
 *     sub_140986CD4 @ 0x140986CD4 (sub_140986CD4.c)
 *     sub_1409AD6F4 @ 0x1409AD6F4 (sub_1409AD6F4.c)
 *     sub_1409AD704 @ 0x1409AD704 (sub_1409AD704.c)
 *     sub_1409AD99C @ 0x1409AD99C (sub_1409AD99C.c)
 *     sub_1409ADDA4 @ 0x1409ADDA4 (sub_1409ADDA4.c)
 *     sub_1409AE050 @ 0x1409AE050 (sub_1409AE050.c)
 *     sub_1409AE810 @ 0x1409AE810 (sub_1409AE810.c)
 *     sub_1409AE968 @ 0x1409AE968 (sub_1409AE968.c)
 *     sub_1409AF728 @ 0x1409AF728 (sub_1409AF728.c)
 *     sub_1409AFAA0 @ 0x1409AFAA0 (sub_1409AFAA0.c)
 *     sub_1409B30B4 @ 0x1409B30B4 (sub_1409B30B4.c)
 *     sub_1409C5884 @ 0x1409C5884 (sub_1409C5884.c)
 *     ExSystemExceptionFilter @ 0x1409F8660 (ExSystemExceptionFilter.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __cdecl NtSetInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength)
{
  size_t v4; // rdi
  _BYTE *v5; // rbx
  unsigned int v7; // r14d
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int8 v9; // r15
  int v10; // eax
  NTSTATUS result; // eax
  NTSTATUS v12; // esi
  _DWORD *PoolWithTag; // rax
  void *v14; // rbx
  PVOID v15; // rcx
  int v16; // ebx
  unsigned int v17; // eax
  char v18; // di
  PVOID v19; // rcx
  BOOLEAN v20; // al
  __int16 v21; // bx
  NTSTATUS v22; // edi
  char v23; // bl
  int v24; // edi
  _QWORD *i; // rbx
  unsigned int v26; // ebx
  void *v27; // r12
  unsigned __int64 v28; // r12
  int v29; // esi
  signed __int64 v30; // rdx
  signed __int64 *v31; // roff
  signed __int64 v32; // r15
  signed __int64 v33; // rax
  void *v34; // r15
  int v35; // eax
  NTSTATUS IsSecureKernel; // eax
  NTSTATUS v37; // ebx
  PVOID v38; // rcx
  unsigned __int8 v39; // bl
  __int64 v40; // r13
  __int16 v41; // r8
  int v42; // ebx
  __int64 v43; // rcx
  __int64 v44; // r13
  __int64 v45; // r8
  __int64 v46; // r9
  _BOOL8 v47; // rdi
  __int64 v48; // r13
  PVOID v49; // rcx
  _QWORD *j; // rbx
  __int64 v51; // rbx
  int v52; // ebx
  int v53; // ebx
  int v54; // ecx
  unsigned int v55; // eax
  unsigned __int64 v56; // r12
  volatile signed __int32 *v57; // r8
  signed __int32 v58; // eax
  signed int v59; // r9d
  signed __int32 v60; // edx
  KSPIN_LOCK *v61; // rbx
  signed int v62; // r14d
  int v63; // ebx
  __int64 CurrentProcess; // rax
  unsigned int v65; // ebx
  unsigned int v66; // ebx
  volatile signed __int32 *v67; // r8
  signed __int32 v68; // eax
  signed __int32 v69; // edx
  _QWORD *v70; // rdi
  int v71; // ebx
  _DWORD *PoolWithQuotaTag; // r15
  __int64 v73; // r8
  unsigned int v74; // ecx
  _DWORD *v75; // rdx
  __int64 v76; // rax
  __int16 v77; // cx
  __int64 v78; // rcx
  struct _EX_RUNDOWN_REF *v79; // rdx
  __int64 k; // rcx
  struct _EX_RUNDOWN_REF *v81; // rbx
  ULONG_PTR Count; // rdi
  char *v83; // rbx
  char *v84; // r13
  __int64 v85; // rdx
  __int64 v86; // r8
  volatile void **v87; // rdi
  __int64 v88; // rdx
  __int64 v89; // rdx
  struct _EX_RUNDOWN_REF *v90; // rdx
  __int64 v91; // rdi
  __int64 v92; // rcx
  unsigned __int64 v93; // rax
  __int64 v94; // rbx
  int v95; // eax
  unsigned __int64 v96; // r8
  unsigned __int64 v97; // rax
  unsigned __int64 v98; // rdx
  __int64 v99; // rcx
  _DWORD *v100; // rax
  unsigned __int64 v101; // rbx
  __int64 v102; // rdi
  BOOLEAN v103; // al
  BOOLEAN v104; // al
  struct _EX_RUNDOWN_REF *v105; // rcx
  __int16 v106; // r8
  bool v107; // r9
  __int64 v108; // r8
  __int16 v109; // r8
  __int64 v110; // r13
  PVOID v111; // r8
  volatile signed __int32 *v112; // rcx
  __int16 v113; // r8
  __int64 v114; // rcx
  __int64 *v115; // rdx
  char *v116; // rsi
  int v117; // r9d
  int v118; // ebx
  int v119; // edi
  PACCESS_TOKEN v120; // rbx
  __int64 v121; // rbx
  __int64 v122; // rax
  __int64 v123; // rdx
  volatile signed __int32 *v124; // r9
  int v125; // edx
  int v126; // ecx
  ULONG_PTR v127; // rax
  unsigned int v128; // ebx
  int v129; // edi
  char v130; // al
  unsigned int v131; // ebx
  int v132; // edi
  char v133; // r12
  PVOID v134; // rax
  int v135; // eax
  bool IsSandboxedToken; // si
  BOOLEAN v137; // al
  int v138; // r8d
  int v139; // r10d
  int v140; // edx
  int v141; // ebx
  int v142; // eax
  bool v143; // zf
  int v144; // r8d
  int v145; // ecx
  int v146; // eax
  int v147; // ebx
  int v148; // eax
  int v149; // eax
  unsigned int v150; // ebx
  int v151; // r12d
  int v152; // edi
  __int64 v153; // rcx
  int v154; // r8d
  int v155; // edx
  unsigned int v156; // ecx
  int v157; // edi
  int v158; // r8d
  int v159; // edx
  int v160; // ebx
  int v161; // r11d
  int v162; // ecx
  int v163; // eax
  int v164; // edx
  unsigned int v165; // ebx
  int v166; // eax
  int v167; // r8d
  int v168; // edx
  int v169; // eax
  int v170; // ebx
  unsigned int v171; // ebx
  int v172; // eax
  int v173; // ecx
  int v174; // ebx
  int v175; // edx
  int v176; // ebx
  unsigned int v177; // ecx
  int v178; // r11d
  int v179; // ebx
  int v180; // edx
  int v181; // edi
  int v182; // esi
  int v183; // r15d
  int v184; // ecx
  int v185; // ebx
  ULONG_PTR v186; // rax
  void *v187; // rdi
  __int64 v188; // rax
  int v189; // edx
  void *v190; // rcx
  unsigned __int64 v191; // rdx
  PVOID v192; // rax
  _BOOL8 v193; // rdi
  __int64 v194; // r8
  __int64 v195; // r9
  unsigned int v196; // edi
  char v197; // bl
  int v198; // ebx
  ULONG_PTR v199; // rax
  char v200; // bl
  int v201; // ecx
  int v202; // edi
  NTSTATUS v203; // ebx
  NTSTATUS v204; // ebx
  __int128 v205; // xmm1
  __int64 v206; // r8
  __int64 v207; // rax
  int v208; // eax
  int v209; // r8d
  int v210; // edx
  unsigned int v211; // ecx
  unsigned int v212; // ecx
  int v213; // ebx
  PVOID v214; // rbx
  PVOID v215; // rbx
  _QWORD *v216; // rax
  __int64 v217; // rdx
  __int64 v218; // rcx
  __int64 *v219; // r8
  int v220; // ebx
  int v221; // eax
  unsigned int v222; // eax
  int v223; // eax
  unsigned int v224; // eax
  _DWORD *v225; // r12
  unsigned int v226; // eax
  const void *v227; // rbx
  size_t v228; // rdi
  PVOID v229; // rax
  PVOID v230; // rcx
  _DWORD *Pool2; // rax
  unsigned int v232; // ecx
  const void *v233; // rbx
  size_t v234; // rdi
  PVOID v235; // rax
  _DWORD *v236; // rax
  unsigned __int64 v237; // rbx
  _QWORD *v238; // rax
  signed __int32 v239[8]; // [rsp+0h] [rbp-4A8h] BYREF
  ULONG Tag[2]; // [rsp+20h] [rbp-488h]
  PVOID Object; // [rsp+40h] [rbp-468h] BYREF
  unsigned int v242; // [rsp+48h] [rbp-460h]
  NTSTATUS v243; // [rsp+4Ch] [rbp-45Ch]
  struct _KTHREAD *v244; // [rsp+50h] [rbp-458h]
  __int64 v245; // [rsp+58h] [rbp-450h]
  ULONG v246; // [rsp+60h] [rbp-448h]
  unsigned __int16 v247; // [rsp+68h] [rbp-440h] BYREF
  __int64 v248; // [rsp+70h] [rbp-438h] BYREF
  __int16 v249; // [rsp+78h] [rbp-430h]
  unsigned int v250; // [rsp+7Ch] [rbp-42Ch]
  ULONG Alignment; // [rsp+80h] [rbp-428h]
  struct _EX_RUNDOWN_REF *v252; // [rsp+88h] [rbp-420h]
  _DWORD *v253; // [rsp+90h] [rbp-418h]
  char v254; // [rsp+98h] [rbp-410h]
  char v255; // [rsp+99h] [rbp-40Fh]
  char v256; // [rsp+9Ah] [rbp-40Eh]
  char v257; // [rsp+9Bh] [rbp-40Dh]
  signed int v258; // [rsp+9Ch] [rbp-40Ch]
  unsigned int *v259; // [rsp+A0h] [rbp-408h]
  char *v260; // [rsp+A8h] [rbp-400h]
  unsigned int v261; // [rsp+B0h] [rbp-3F8h]
  int v262; // [rsp+B4h] [rbp-3F4h] BYREF
  __int64 v263; // [rsp+B8h] [rbp-3F0h]
  __int64 v264; // [rsp+C0h] [rbp-3E8h]
  __int128 v265; // [rsp+C8h] [rbp-3E0h]
  int v266; // [rsp+D8h] [rbp-3D0h]
  unsigned int v267; // [rsp+DCh] [rbp-3CCh]
  void *Src[2]; // [rsp+E0h] [rbp-3C8h] BYREF
  PVOID v269; // [rsp+F0h] [rbp-3B8h] BYREF
  ULONG_PTR v270; // [rsp+F8h] [rbp-3B0h]
  PVOID v271; // [rsp+100h] [rbp-3A8h]
  PVOID v272; // [rsp+108h] [rbp-3A0h] BYREF
  PVOID v273; // [rsp+110h] [rbp-398h] BYREF
  __int128 v274; // [rsp+118h] [rbp-390h] BYREF
  __int64 v275; // [rsp+128h] [rbp-380h]
  int v276; // [rsp+130h] [rbp-378h]
  int v277; // [rsp+134h] [rbp-374h]
  int v278; // [rsp+138h] [rbp-370h]
  int v279; // [rsp+13Ch] [rbp-36Ch]
  int v280; // [rsp+140h] [rbp-368h]
  int v281; // [rsp+144h] [rbp-364h]
  int v282; // [rsp+148h] [rbp-360h]
  int v283; // [rsp+14Ch] [rbp-35Ch]
  int v284; // [rsp+150h] [rbp-358h]
  int v285; // [rsp+154h] [rbp-354h]
  int v286; // [rsp+158h] [rbp-350h]
  int v287; // [rsp+15Ch] [rbp-34Ch]
  unsigned int *v288; // [rsp+160h] [rbp-348h]
  unsigned __int64 v289; // [rsp+168h] [rbp-340h]
  _DWORD *v290; // [rsp+170h] [rbp-338h]
  BOOL v291; // [rsp+178h] [rbp-330h]
  PVOID v292; // [rsp+180h] [rbp-328h]
  int v293; // [rsp+188h] [rbp-320h]
  __int64 v294; // [rsp+190h] [rbp-318h]
  void **v295; // [rsp+198h] [rbp-310h]
  PVOID v296; // [rsp+1A0h] [rbp-308h]
  unsigned __int64 v297; // [rsp+1A8h] [rbp-300h]
  __int64 v298; // [rsp+1B0h] [rbp-2F8h]
  __int64 v299; // [rsp+1B8h] [rbp-2F0h]
  PVOID v300; // [rsp+1C8h] [rbp-2E0h] BYREF
  int v301; // [rsp+1D0h] [rbp-2D8h]
  _BYTE SubjectContext[40]; // [rsp+1D8h] [rbp-2D0h] BYREF
  __int64 v303; // [rsp+200h] [rbp-2A8h]
  __int128 v304; // [rsp+208h] [rbp-2A0h] BYREF
  __int128 v305; // [rsp+218h] [rbp-290h]
  struct _KAPC_STATE ApcState; // [rsp+228h] [rbp-280h] BYREF
  _OWORD P[2]; // [rsp+258h] [rbp-250h] BYREF
  __int64 v308; // [rsp+278h] [rbp-230h]
  _OWORD v309[9]; // [rsp+280h] [rbp-228h] BYREF
  char v310[256]; // [rsp+310h] [rbp-198h] BYREF
  _OWORD v311[4]; // [rsp+410h] [rbp-98h] BYREF
  char v312; // [rsp+450h] [rbp-58h]

  v4 = ProcessInformationLength;
  v5 = ProcessInformation;
  Alignment = ProcessInformationClass;
  v253 = ProcessInformation;
  v246 = ProcessInformationLength;
  v7 = 0;
  Object = 0LL;
  v304 = 0LL;
  v242 = 0;
  v249 = 0;
  v292 = 0LL;
  v269 = 0LL;
  v289 = 0LL;
  v262 = 0;
  v305 = 0LL;
  v247 = 0;
  CurrentThread = KeGetCurrentThread();
  v244 = CurrentThread;
  v9 = *((_BYTE *)CurrentThread + 562);
  if ( v9 )
  {
    switch ( ProcessInformationClass )
    {
      case ProcessBasePriority:
        v10 = 4;
        break;
      case ProcessEnableAlignmentFaultFixup:
        v10 = 1;
        break;
      case ProcessForegroundInformation:
        v10 = 1;
        break;
      case ProcessPriorityClass:
        v10 = 1;
        break;
      case ProcessAffinityMask:
        v10 = 8;
        break;
      case ProcessIoPriority:
        v10 = 4;
        break;
      case ProcessPagePriority:
        v10 = 4;
        break;
      case ProcessTlsInformation:
        v10 = 8;
        break;
      case ProcessExceptionPort:
        v10 = 8;
        break;
      case ProcessInstrumentationCallback:
        v10 = 8;
        break;
      case ProcessThreadStackAllocation:
        v10 = 8;
        break;
      case ProcessFiberShadowStackAllocation:
        v10 = 8;
        break;
      case ProcessFreeFiberShadowStackAllocation:
        v10 = 8;
        break;
      case ProcessAffinityUpdateMode:
        v10 = 4;
        break;
      case ProcessMemoryAllocationMode:
        v10 = 4;
        break;
      case ProcessConsoleHostProcess:
        v10 = 8;
        break;
      case ProcessDynamicFunctionTableInformation:
        v10 = 8;
        break;
      case ProcessRevokeFileHandles:
        v10 = 8;
        break;
      case ProcessMemoryExhaustion:
        v10 = 8;
        break;
      case ProcessCommitReleaseInformation:
        v10 = 8;
        break;
      case ProcessInPrivate:
        v10 = 1;
        break;
      case ProcessHighGraphicsPriorityInformation:
        v10 = 1;
        break;
      case ProcessManageWritesToExecutableMemory:
        v10 = 8;
        break;
      case ProcessDebugAuthInformation:
        v10 = 1;
        break;
      case ProcessSystemResourceManagement:
        v10 = 4;
        break;
      case ProcessCombineSecurityDomainsInformation:
        v10 = 8;
        break;
      case ProcessEnableReadWriteVmLogging:
        v10 = 1;
        break;
      case ProcessAltSystemCallInformation:
        v10 = 4;
        break;
      case ProcessDynamicEHContinuationTargets:
        v10 = 8;
        break;
      case ProcessDynamicEnforcedCetCompatibleRanges:
        v10 = 8;
        break;
      default:
        v10 = 4;
        if ( ProcessInformationClass == ProcessEnableOptionalXStateFeatures )
          v10 = 8;
        break;
    }
    if ( ProcessInformationLength )
    {
      if ( ((v10 - 1) & (unsigned int)ProcessInformation) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)ProcessInformation + ProcessInformationLength > 0x7FFFFFFF0000LL
        || (char *)ProcessInformation + ProcessInformationLength < ProcessInformation )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
      CurrentThread = v244;
    }
  }
  switch ( ProcessInformationClass )
  {
    case ProcessQuotaLimits:
      return sub_1407F2DBC((ULONG_PTR)ProcessHandle);
    case ProcessBasePriority:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v16 = *(_DWORD *)ProcessInformation;
      v276 = v16;
      v17 = v16 & 0x80000000;
      if ( v16 < 0 )
        v16 &= ~0x80000000;
      v18 = v17 != 0 ? 2 : 0;
      if ( (unsigned int)(v16 - 1) > 0x1E )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v19 = Object;
      if ( v16 > *((char *)Object + 640) )
      {
        v20 = sub_1406E856C(stru_140D3CA68, (int)ProcessHandle, 512, v9);
        v19 = Object;
        if ( !v20 )
          goto LABEL_97;
      }
      sub_1402EBB58((__int64)v19, v16, 0, 0, 0);
      sub_1402EC5B0((__int64)Object, v18);
      goto LABEL_88;
    case ProcessRaisePriority:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v24 = *(_DWORD *)ProcessInformation;
      v277 = *(_DWORD *)ProcessInformation;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v12 = result;
      if ( result < 0 )
        return result;
      if ( !sub_140347810((struct _EX_RUNDOWN_REF *)Object + 139) )
        goto LABEL_115;
      for ( i = sub_1407E7750((__int64)Object, 0LL); i; i = sub_1407E7750((__int64)Object, i) )
        sub_140255110((__int64)i, v24);
      goto LABEL_114;
    case ProcessExceptionPort:
      if ( ProcessInformationLength == 8 )
      {
        v261 = 0;
        v27 = *(void **)ProcessInformation;
        v288 = *(unsigned int **)ProcessInformation;
      }
      else
      {
        if ( ProcessInformationLength != 16 )
          return -1073741820;
        v259 = *(unsigned int **)ProcessInformation;
        v288 = v259;
        v261 = *((_DWORD *)ProcessInformation + 2);
        if ( (v261 & 0xFFFFFFF8) != 0 )
          return -1073741811;
        v27 = v259;
      }
      if ( !SeSinglePrivilegeCheck(stru_140D3CA10, v9) )
        return -1073741727;
      v272 = 0LL;
      result = ObReferenceObjectByHandle(v27, 0, LpcPortObjectType, v9, &v272, 0LL);
      v28 = (unsigned __int64)v272;
      v259 = (unsigned int *)v272;
      if ( result < 0 )
        return result;
      v29 = ObReferenceObjectByHandleWithTag(
              ProcessHandle,
              0x800u,
              (POBJECT_TYPE)PsProcessType,
              v9,
              0x79517350u,
              &Object,
              0LL);
      if ( v29 < 0 )
      {
        ObfDereferenceObject((PVOID)v28);
        return v29;
      }
      v30 = v28 | v261;
      v264 = v30;
      v31 = (signed __int64 *)((char *)Object + 1200);
      _m_prefetchw((char *)Object + 1200);
      v32 = *v31;
      do
      {
        v252 = (struct _EX_RUNDOWN_REF *)v32;
        if ( (_DWORD)v4 == 16 )
        {
          *((_DWORD *)v5 + 2) = v32 & 7;
        }
        else if ( (v32 & 7) != 0 )
        {
          ObfDereferenceObject((PVOID)v28);
          goto LABEL_134;
        }
        v33 = _InterlockedCompareExchange64((volatile signed __int64 *)Object + 150, v30, v32);
        v143 = v32 == v33;
        v32 = v33;
      }
      while ( !v143 );
      if ( v33 )
      {
        v34 = (void *)(v33 & 0xFFFFFFFFFFFFFFF8uLL);
        *(_DWORD *)&SubjectContext[2] = 852016;
        strcpy(SubjectContext, "\b");
        memset(&SubjectContext[6], 0, 34);
        v303 = *((_QWORD *)Object + 136);
        while ( 1 )
        {
          v35 = LpcRequestPort((__int64)v34, (__int64)SubjectContext);
          if ( v35 != -1073741801 && v35 != -1073741670 )
            break;
          KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&stru_140015710);
        }
        sub_14024BA3C((__int64)Object, (__int64)v244);
        ObfDereferenceObject(v34);
      }
      goto LABEL_142;
    case ProcessAccessToken:
      if ( ProcessInformationLength != 16 )
        return -1073741820;
      v298 = *(_QWORD *)ProcessInformation;
      return sub_140847028(CurrentThread, v9, ProcessHandle);
    case ProcessLdtInformation:
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x220u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
        goto LABEL_146;
      return result;
    case ProcessLdtSize:
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x220u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
        goto LABEL_146;
      return result;
    case ProcessDefaultHardErrorMode:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v26 = *(_DWORD *)ProcessInformation;
      v278 = *(_DWORD *)ProcessInformation;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      sub_1407E7694((__int64)Object, (__int64)v244, v26);
      goto LABEL_88;
    case ProcessIoPortHandlers:
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
LABEL_146:
      IsSecureKernel = SkIsSecureKernel();
      goto LABEL_147;
    case ProcessWorkingSetWatch:
    case ProcessWorkingSetWatchEx:
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v12 = PsChargeProcessNonPagedPoolQuota((__int64)Object, 0x6028uLL);
      if ( v12 < 0 )
        goto LABEL_79;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x6028uLL, 0x73577350u);
      v14 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v12 = -1073741801;
LABEL_78:
        PsReturnProcessNonPagedPoolQuota((__int64)Object, 24616LL);
        goto LABEL_79;
      }
      byte_140C4EF1D = 1;
      *PoolWithTag = 0;
      *((_QWORD *)PoolWithTag + 1) = 0LL;
      sub_14025E6B4((__int64)(PoolWithTag + 4));
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)Object + 166, (signed __int64)v14, 0LL) )
      {
        ExFreePoolWithTag(v14, 0);
        v12 = -1073741752;
        goto LABEL_78;
      }
LABEL_142:
      v12 = 0;
      goto LABEL_79;
    case ProcessUserModeIOPL:
      if ( !SeSinglePrivilegeCheck(stru_140D3CA10, v9) )
        return -1073741727;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return -1073741822;
    case ProcessEnableAlignmentFaultFixup:
      if ( ProcessInformationLength != 1 )
        return -1073741820;
      v39 = *(_BYTE *)ProcessInformation;
      v254 = *(_BYTE *)ProcessInformation;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v40 = (__int64)v244;
      sub_1402A0880((__int64)Object, (__int64)v244);
      if ( v39 )
        *((_DWORD *)Object + 382) |= 4u;
      else
        *((_DWORD *)Object + 382) &= ~4u;
      if ( *((_QWORD *)Object + 176) )
      {
        v41 = *((_WORD *)Object + 1206);
        if ( v41 == 332 || v41 == 452 )
          v39 = 1;
      }
      sub_1407E766C((__int64)Object, v39);
      sub_14025302C((__int64)Object, v40);
      goto LABEL_88;
    case ProcessPriorityClass:
      if ( ProcessInformationLength != 2 )
        return -1073741820;
      v21 = *(_WORD *)ProcessInformation;
      v249 = *(_WORD *)ProcessInformation;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v22 = sub_1406D2718((__int64)Object, HIBYTE(v249), (__int64)ProcessHandle, v9);
      if ( v22 >= 0 )
      {
        LOBYTE(v7) = (_BYTE)v21 != 0;
        PsSetProcessPriorityByClass((__int64)Object, v7);
      }
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return v22;
    case ProcessWx86Information:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v42 = *(_DWORD *)ProcessInformation;
      v279 = *(_DWORD *)ProcessInformation;
      if ( !SeSinglePrivilegeCheck(stru_140D3CA10, v9) )
        return -1073741727;
      v12 = ObReferenceObjectByHandleWithTag(
              ProcessHandle,
              0x200u,
              (POBJECT_TYPE)PsProcessType,
              v9,
              0x79517350u,
              &Object,
              0LL);
      if ( v12 < 0 )
        return v12;
      if ( *((_QWORD *)Object + 280) )
      {
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741790;
      }
      if ( v42 )
        _InterlockedOr((volatile signed __int32 *)Object + 281, 0x1000000u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 281, 0xFEFFFFFF);
      goto LABEL_79;
    case ProcessAffinityMask:
      if ( ProcessInformationLength == 8 )
      {
        *(_QWORD *)&v304 = *(_QWORD *)ProcessInformation;
        if ( !(_QWORD)v304 )
          return -1073741811;
        goto LABEL_182;
      }
      if ( ProcessInformationLength != 16 )
        return -1073741820;
      v304 = *(_OWORD *)ProcessInformation;
      if ( sub_1402585E8((__int64)&v304, 0) )
      {
LABEL_182:
        result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   v9,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        if ( (*((_DWORD *)Object + 158) & 0x1000) != 0 )
        {
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return -1073741811;
        }
        sub_140257BB4((__int64)Object, &v247);
        if ( (_DWORD)v4 == 8 )
        {
          v43 = v304 & qword_140D06E48[v247];
          if ( v43 != (_QWORD)v304 )
          {
LABEL_134:
            v12 = -1073741811;
            goto LABEL_79;
          }
          WORD4(v304) = v247;
          *(_QWORD *)&v304 = v43;
        }
        v44 = (__int64)v244;
        sub_14039ECF0((__int64)v244);
        if ( sub_140347810((struct _EX_RUNDOWN_REF *)Object + 139) )
        {
          sub_1405E07FC((__int64)Object);
          *(_QWORD *)Tag = &v262;
          v12 = sub_1409AE810(Object, 0LL, 0LL);
          sub_1405E097C((__int64)Object);
          sub_1402AD030((struct _EX_RUNDOWN_REF *)Object + 139);
          if ( v12 >= 0 )
          {
            if ( v262 )
              sub_140672BD8(v44, (ULONG_PTR)Object, v45, v46);
            _InterlockedOr((volatile signed __int32 *)Object + 280, 0x200000u);
            sub_1402AC800(v44);
LABEL_79:
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            return v12;
          }
        }
        else
        {
          v12 = -1073741558;
        }
        sub_1402AC800(v44);
        goto LABEL_79;
      }
      return -1073741811;
    case ProcessPriorityBoost:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v280 = *(_DWORD *)ProcessInformation;
      v47 = v280 != 0;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v12 = result;
      if ( result < 0 )
        return result;
      if ( !sub_140347810((struct _EX_RUNDOWN_REF *)Object + 139) )
        goto LABEL_115;
      v48 = (__int64)v244;
      sub_1402A0880((__int64)Object, (__int64)v244);
      sub_1409614D0(Object, v47);
      v49 = Object;
      for ( j = (_QWORD *)*((_QWORD *)Object + 188); j != (_QWORD *)((char *)Object + 1504); v49 = Object )
      {
        sub_1406EBB50((__int64)(j - 167), v47);
        j = (_QWORD *)*j;
      }
      goto LABEL_268;
    case ProcessDeviceMap:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      v51 = *(_QWORD *)ProcessInformation;
      v299 = *(_QWORD *)ProcessInformation;
      if ( RtlIsSandboxedToken(0LL, v9) )
        return -1073741790;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      IsSecureKernel = sub_140986CD4(Object, v51, v9);
      goto LABEL_147;
    case ProcessSessionInformation:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v52 = *(_DWORD *)ProcessInformation;
      v293 = *(_DWORD *)ProcessInformation;
      if ( !SeSinglePrivilegeCheck(stru_140D3CA10, v9) )
        return -1073741727;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x204u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      if ( v52 != (unsigned int)sub_140300B40((__int64)Object) )
        v7 = -1073741790;
      goto LABEL_216;
    case ProcessForegroundInformation:
      if ( ProcessInformationLength != 1 )
        return -1073741820;
      v23 = *(_BYTE *)ProcessInformation;
      v257 = *(_BYTE *)ProcessInformation;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x2000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      LOBYTE(v7) = v23 != 0;
      PsSetProcessPriorityByClass((__int64)Object, v7);
      goto LABEL_88;
    case ProcessBreakOnTermination:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v53 = *(_DWORD *)ProcessInformation;
      v287 = *(_DWORD *)ProcessInformation;
      if ( !SeSinglePrivilegeCheck(stru_140D3CA18, v9) )
        return -1073741727;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      if ( v53 )
        _InterlockedOr((volatile signed __int32 *)Object + 281, 0x2000u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 281, 0xFFFFDFFF);
      goto LABEL_88;
    case ProcessDebugFlags:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v12 = result;
      if ( result < 0 )
        return result;
      v266 = *(_DWORD *)v5;
      if ( (v266 & 0xFFFFFFFE) != 0 )
        goto LABEL_134;
      if ( (v266 & 1) != 0 )
        _InterlockedAnd((volatile signed __int32 *)Object + 281, 0xFFFFFFFD);
      else
        _InterlockedOr((volatile signed __int32 *)Object + 281, 2u);
      goto LABEL_79;
    case ProcessHandleTracing:
      v248 = 0LL;
      if ( !ProcessInformationLength )
        goto LABEL_231;
      if ( ((ProcessInformationLength - 4) & 0xFFFFFFFB) != 0 )
        return -1073741820;
      v54 = *(_DWORD *)ProcessInformation;
      LODWORD(v248) = *(_DWORD *)ProcessInformation;
      if ( ProcessInformationLength == 8 )
        HIDWORD(v248) = *((_DWORD *)ProcessInformation + 1);
      else
        HIDWORD(v248) = 0;
      if ( v54 )
        return -1073741811;
LABEL_231:
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      if ( (_DWORD)v4 )
        IsSecureKernel = sub_1409AD704(Object, &v248);
      else
        IsSecureKernel = sub_1409AD704(Object, 0LL);
      goto LABEL_147;
    case ProcessIoPriority:
      if ( ((ProcessInformationLength - 4) & 0xFFFFFFFB) != 0 )
        return -1073741820;
      if ( ProcessInformationLength == 4 )
      {
        v55 = *(_DWORD *)ProcessInformation;
        v258 = *(_DWORD *)ProcessInformation;
        LOBYTE(v56) = 0;
      }
      else
      {
        v289 = *(_QWORD *)ProcessInformation;
        v55 = v289;
        v56 = HIDWORD(v289);
        v258 = v289;
      }
      if ( v55 >= 4 )
        return -1073741811;
      if ( v55 >= 3 && !sub_1406E856C(stru_140D3CA68, (int)ProcessHandle, 512, v9) )
        return -1073741727;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v12 = result;
      if ( result < 0 )
        return result;
      if ( sub_140347810((struct _EX_RUNDOWN_REF *)Object + 139) )
      {
        v48 = (__int64)v244;
        sub_1402A0880((__int64)Object, (__int64)v244);
        v57 = (volatile signed __int32 *)Object;
        v58 = *((_DWORD *)Object + 281);
        v59 = v258 << 27;
        do
        {
          v60 = v58;
          v58 = _InterlockedCompareExchange(v57 + 281, v59 | v58 & 0xC7FFFFFF, v58);
        }
        while ( v58 != v60 );
        v49 = Object;
        v61 = (KSPIN_LOCK *)*((_QWORD *)Object + 188);
        if ( v61 != (KSPIN_LOCK *)((char *)Object + 1504) )
        {
          v62 = v258;
          do
          {
            if ( (_BYTE)v56 == 1 && ((*((_DWORD *)v61 + 10) >> 9) & 7) < v62 )
              sub_140280754(v61 - 167, v62, 0);
            sub_14028F698((__int64)(v61 - 167), v62);
            v61 = (KSPIN_LOCK *)*v61;
            v49 = Object;
          }
          while ( v61 != (KSPIN_LOCK *)((char *)Object + 1504) );
        }
LABEL_268:
        sub_14025302C((__int64)v49, v48);
LABEL_114:
        sub_1402AD030((struct _EX_RUNDOWN_REF *)Object + 139);
      }
      else
      {
LABEL_115:
        v12 = -1073741558;
      }
      goto LABEL_79;
    case ProcessExecuteFlags:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      v63 = *(_DWORD *)ProcessInformation;
      v284 = v63;
      CurrentProcess = PsGetCurrentProcess();
      v22 = sub_140253A44(CurrentProcess, v63);
      if ( v22 < 0 || (v63 & 3) != 1 )
        return v22;
      sub_140258CE0();
      return v22;
    case ProcessTlsInformation:
      memset(P, 0, sizeof(P));
      v308 = 0LL;
      v260 = 0LL;
      v263 = 0LL;
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      if ( v9 != 1 )
        return -1073741823;
      if ( ProcessInformationLength < 0x28 || (ProcessInformationLength - 16) % 0x18uLL )
        return -1073741820;
      if ( ProcessInformationLength == 40 )
      {
        PoolWithQuotaTag = P;
        v244 = (struct _KTHREAD *)P;
      }
      else
      {
        PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, ProcessInformationLength, 0x736C5450u);
        v244 = (struct _KTHREAD *)PoolWithQuotaTag;
        if ( !PoolWithQuotaTag )
          return -1073741670;
      }
      v290 = PoolWithQuotaTag;
      v259 = PoolWithQuotaTag;
      memmove(PoolWithQuotaTag, v5, v4);
      if ( PoolWithQuotaTag[1] < 2u
        && (*PoolWithQuotaTag & 0xFFFFFFFE) == 0
        && (v73 = (unsigned int)PoolWithQuotaTag[2], (_DWORD)v73)
        && (unsigned int)(v4 - 16) / 0x18uLL == v73 )
      {
        v74 = 0;
        v242 = 0;
        v75 = PoolWithQuotaTag + 4;
        do
        {
          if ( *v75 )
            goto LABEL_327;
          v242 = ++v74;
          v75 += 6;
        }
        while ( v74 < (unsigned int)v73 );
        v76 = PsGetCurrentProcess();
        Object = (PVOID)v76;
        v246 = 0;
        if ( (*PoolWithQuotaTag & 1) != 0 )
        {
          if ( !*(_QWORD *)(v76 + 1408) || (v77 = *(_WORD *)(v76 + 2412), v77 != 332) && v77 != 452 )
          {
LABEL_327:
            v12 = -1073741811;
            goto LABEL_329;
          }
          v246 = 1;
        }
        v78 = v246 ^ 1;
        Alignment = 4 * v78 + 4;
        v264 = 4 * v78 + 4;
        v253 = v5;
        v242 = 0;
        v12 = 0;
        v243 = 0;
        v79 = 0LL;
        for ( k = v76; ; k = (__int64)Object )
        {
          v252 = (struct _EX_RUNDOWN_REF *)sub_1407E7750(k, v79);
          v81 = v252;
          if ( !v252 || v242 >= PoolWithQuotaTag[2] )
            break;
          if ( (HIDWORD(v252[14].Ptr) & 0x400) == 0 && sub_140347810(v252 + 169) )
          {
            Count = v81[30].Count;
            v270 = Count;
            if ( v246 )
            {
              v83 = (char *)(Count + 8236);
              v263 = Count + 8236;
              v84 = (char *)sub_140251BD0(*(_DWORD *)(Count + 8236));
            }
            else
            {
              v83 = (char *)(Count + 88);
              v263 = Count + 88;
              v84 = *(char **)(Count + 88);
            }
            v260 = v84;
            if ( v84 )
            {
              if ( PoolWithQuotaTag[1] == 1 )
              {
                if ( v84 == v83 )
                {
                  v260 = 0LL;
                }
                else
                {
                  v85 = (unsigned int)PoolWithQuotaTag[3];
                  v86 = v264 * v85;
                  if ( v264 * v85 )
                  {
                    if ( ((Alignment - 1) & (unsigned int)v84) != 0 )
                      ExRaiseDatatypeMisalignment();
                    if ( (unsigned __int64)&v84[v86] > 0x7FFFFFFF0000LL || &v84[v86] < v84 )
                    {
                      MEMORY[0x7FFFFFFF0000] = 0;
                      v85 = (unsigned int)v290[3];
                    }
                  }
                  v87 = (volatile void **)&PoolWithQuotaTag[6 * v242 + 6];
                  ProbeForWrite(*v87, v264 * v85, Alignment);
                  memmove((void *)*v87, v84, v264 * (unsigned int)PoolWithQuotaTag[3]);
                  _InterlockedOr(v239, 0);
                  Count = v270;
                }
                v88 = v242;
                v253[6 * v242 + 4] |= 1u;
                v89 = *(_QWORD *)&v259[6 * v88 + 6];
                if ( v246 )
                  *(_DWORD *)(Count + 8236) = sub_140251BD0(v89);
                else
                  *(_QWORD *)(Count + 88) = v89;
                v90 = (struct _EX_RUNDOWN_REF *)&v253[6 * v242];
                v90[4].Count = v252[154].Count;
                v90[3].Count = (ULONG_PTR)v260;
                LODWORD(v90[2].Count) ^= 3u;
                ++v242;
              }
              else
              {
                v91 = 6LL * v242;
                v253[v91 + 4] |= 1u;
                v92 = v259[3];
                if ( v246 )
                {
                  v93 = (unsigned __int64)&v84[4 * v92];
                  if ( v93 >= 0x7FFFFFFF0000LL )
                    v93 = 0x7FFFFFFF0000LL;
                  v94 = sub_140251BD0(*(_DWORD *)v93);
                  v263 = v94;
                  v95 = sub_140251BD0(*(_QWORD *)&PoolWithQuotaTag[v91 + 6]);
                  v96 = (unsigned __int64)&v260[4 * PoolWithQuotaTag[3]];
                  if ( v96 >= 0x7FFFFFFF0000LL )
                    v96 = 0x7FFFFFFF0000LL;
                  *(_DWORD *)v96 = v95;
                }
                else
                {
                  v97 = (unsigned __int64)&v84[8 * v92];
                  if ( v97 >= 0x7FFFFFFF0000LL )
                    v97 = 0x7FFFFFFF0000LL;
                  v94 = *(_QWORD *)v97;
                  v263 = *(_QWORD *)v97;
                  v98 = (unsigned __int64)&v260[8 * PoolWithQuotaTag[3]];
                  if ( v98 >= 0x7FFFFFFF0000LL )
                    v98 = 0x7FFFFFFF0000LL;
                  *(_QWORD *)v98 = *(_QWORD *)&PoolWithQuotaTag[v91 + 6];
                }
                v99 = 3LL * v242;
                v100 = v253;
                *(_QWORD *)&v253[2 * v99 + 6] = v94;
                v100[2 * v99 + 4] ^= 3u;
                ++v242;
              }
            }
            sub_1402AD030(v252 + 169);
          }
          v79 = v252;
        }
        if ( v252 )
          sub_1407FCBC0(v252);
      }
      else
      {
        v12 = -1073741820;
      }
LABEL_329:
      if ( PoolWithQuotaTag == (_DWORD *)P )
        return v12;
      ExFreePoolWithTag(PoolWithQuotaTag, 0);
      return v12;
    case ProcessPagePriority:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v65 = *(_DWORD *)ProcessInformation;
      v267 = v65;
      if ( v65 > (unsigned int)std::codecvt<wchar_t,char,int>::do_max_length() || v65 < (unsigned int)sub_14024DA70() )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v12 = result;
      if ( result < 0 )
        return result;
      if ( !sub_140347810((struct _EX_RUNDOWN_REF *)Object + 139) )
        goto LABEL_115;
      v48 = (__int64)v244;
      sub_1402A0880((__int64)Object, (__int64)v244);
      v66 = v65 << 12;
      v67 = (volatile signed __int32 *)Object;
      v68 = *((_DWORD *)Object + 280);
      do
      {
        v69 = v68;
        v68 = _InterlockedCompareExchange(v67 + 280, v66 | v68 & 0xFFFF8FFF, v68);
      }
      while ( v68 != v69 );
      v49 = Object;
      v70 = (_QWORD *)*((_QWORD *)Object + 188);
      if ( v70 != (_QWORD *)((char *)Object + 1504) )
      {
        v71 = v267;
        do
        {
          sub_14028F63C((__int64)(v70 - 167), v71);
          v70 = (_QWORD *)*v70;
          v49 = Object;
        }
        while ( v70 != (_QWORD *)((char *)Object + 1504) );
      }
      goto LABEL_268;
    case ProcessInstrumentationCallback:
      memset(&ApcState, 0, sizeof(ApcState));
      if ( ((ProcessInformationLength - 8) & 0xFFFFFFF7) != 0 )
        return -1073741820;
      if ( ProcessInformationLength == 8 )
      {
        *(_QWORD *)&v265 = 0LL;
        v101 = *(_QWORD *)ProcessInformation;
        *((_QWORD *)&v265 + 1) = *(_QWORD *)ProcessInformation;
      }
      else
      {
        v265 = *(_OWORD *)ProcessInformation;
        v101 = *((_QWORD *)&v265 + 1);
      }
      if ( DWORD1(v265) )
        return -1073741811;
      if ( (_DWORD)v265 != DWORD1(v265) )
        return -1073741736;
      if ( v101 != (__int64)(v101 << 16) >> 16 )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v102 = PsGetCurrentProcess();
      v103 = SeSinglePrivilegeCheck(stru_140D3CA18, v9);
      v19 = Object;
      if ( v103 || Object == (PVOID)v102 )
      {
        v104 = sub_140347810((struct _EX_RUNDOWN_REF *)Object + 139);
        v105 = (struct _EX_RUNDOWN_REF *)Object;
        if ( !v104 )
        {
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return -1073741558;
        }
        v107 = 0;
        if ( *((_QWORD *)Object + 176) )
        {
          v106 = *((_WORD *)Object + 1206);
          if ( v106 == 332 || v106 == 452 )
            v107 = 1;
        }
        v108 = *(_QWORD *)(v102 + 1408);
        if ( v107 )
        {
          if ( v108 )
          {
            v113 = *(_WORD *)(v102 + 2412);
            if ( v113 == 332 || v113 == 452 )
            {
              KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
              if ( v101 < sub_140419118() && (unsigned int)sub_14096ECCC(v101, 1LL) )
              {
                v114 = 0LL;
                v115 = (__int64 *)*((_QWORD *)Object + 176);
                if ( v115 )
                  v114 = *v115;
                *(_DWORD *)(v114 + 1168) = DWORD2(v265);
                KeUnstackDetachProcess(&ApcState);
                sub_1402AD030((struct _EX_RUNDOWN_REF *)Object + 139);
              }
              else
              {
                v7 = -1073741811;
                KeUnstackDetachProcess(&ApcState);
                sub_1402AD030((struct _EX_RUNDOWN_REF *)Object + 139);
              }
LABEL_216:
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              return v7;
            }
          }
        }
        else if ( !v108 || (v109 = *(_WORD *)(v102 + 2412), v109 != 332) && v109 != 452 )
        {
          KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
          if ( !(unsigned int)sub_14096ECCC(v101, 0LL) )
            v7 = -1073741811;
          KeUnstackDetachProcess(&ApcState);
          v105 = (struct _EX_RUNDOWN_REF *)Object;
          if ( (v7 & 0x80000000) == 0 )
          {
            v110 = (__int64)v244;
            sub_1402A0880((__int64)Object, (__int64)v244);
            *((_QWORD *)Object + 123) = v101;
            v111 = Object;
            v112 = (volatile signed __int32 *)*((_QWORD *)Object + 188);
            if ( v112 != (volatile signed __int32 *)((char *)Object + 1504) )
            {
              while ( 1 )
              {
                if ( v101 )
                  _interlockedbittestandset(v112 - 334, 0x19u);
                else
                  _interlockedbittestandreset(v112 - 334, 0x19u);
                v112 = *(volatile signed __int32 **)v112;
                v111 = Object;
                if ( v112 == (volatile signed __int32 *)((char *)Object + 1504) )
                  break;
                v101 = *((_QWORD *)&v265 + 1);
              }
            }
            sub_14025302C((__int64)v111, v110);
            sub_1402AD030((struct _EX_RUNDOWN_REF *)Object + 139);
            goto LABEL_216;
          }
LABEL_373:
          sub_1402AD030(v105 + 139);
          goto LABEL_216;
        }
        v7 = -1073741637;
        goto LABEL_373;
      }
LABEL_97:
      ObfDereferenceObjectWithTag(v19, 0x79517350u);
      return -1073741727;
    case ProcessThreadStackAllocation:
      memset(SubjectContext, 0, sizeof(SubjectContext));
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      v116 = 0LL;
      if ( ProcessInformationLength == 40 )
      {
        if ( v9 )
        {
          *(_OWORD *)SubjectContext = *(_OWORD *)ProcessInformation;
          *(_OWORD *)&SubjectContext[16] = *((_OWORD *)ProcessInformation + 1);
          *(_QWORD *)&SubjectContext[32] = *((_QWORD *)ProcessInformation + 4);
          v116 = (char *)ProcessInformation + 32;
          v5 = SubjectContext;
        }
        v117 = *(_DWORD *)v5;
        if ( *(_DWORD *)v5 > 0x40u || *((_DWORD *)v5 + 1) | *((_DWORD *)v5 + 2) | *((_DWORD *)v5 + 3) )
          return -1073741811;
        v5 += 16;
      }
      else
      {
        if ( ProcessInformationLength != 24 )
          return -1073741820;
        v117 = 0;
        if ( v9 )
        {
          *(_QWORD *)&SubjectContext[16] = *(_QWORD *)ProcessInformation;
          *(_QWORD *)&SubjectContext[24] = *((_QWORD *)ProcessInformation + 1);
          v116 = (char *)ProcessInformation + 16;
          v5 = &SubjectContext[16];
        }
      }
      if ( !*(_QWORD *)v5 )
        return -1073741811;
      v300 = *(PVOID *)v5;
      *((_QWORD *)v5 + 2) = 0LL;
      result = sub_1407E75A4((__int64 *)v5 + 2, *((_QWORD *)v5 + 1), (__int64 *)&v300, v117, 0);
      if ( result >= 0 && v9 )
        *(_QWORD *)v116 = *((_QWORD *)v5 + 2);
      return result;
    case ProcessAffinityUpdateMode:
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      LODWORD(v248) = *(_DWORD *)ProcessInformation;
      if ( (v248 & 0xFFFFFFFC) != 0 )
        return -1073741811;
      return sub_1409AE968(CurrentThread, &v248);
    case ProcessMemoryAllocationMode:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v118 = *(_DWORD *)ProcessInformation;
      v283 = v118;
      if ( (v118 & 0xFFFFFFFE) != 0 )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      if ( (v118 & 1) != 0 )
        _InterlockedOr((volatile signed __int32 *)Object + 281, 0x200000u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 281, 0xFFDFFFFF);
      goto LABEL_88;
    case ProcessTokenVirtualizationEnabled:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v119 = *(_DWORD *)ProcessInformation;
      v285 = *(_DWORD *)ProcessInformation;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v120 = PsReferencePrimaryToken((PEPROCESS)Object);
      sub_1406E6FE8((__int64)v120, v119);
      ObfDereferenceObject(v120);
      goto LABEL_88;
    case ProcessConsoleHostProcess:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      v121 = *(_QWORD *)ProcessInformation;
      v294 = v121;
      if ( (v121 & 3) != 1 )
        return -1073741811;
      *(_QWORD *)(PsGetCurrentProcess() + 1352) = v121;
      return 0;
    case ProcessMitigationPolicy:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      v245 = *(_QWORD *)ProcessInformation;
      if ( ProcessHandle != (HANDLE)-1LL && (_DWORD)v245 != 2 )
        return -1073741811;
      break;
    case ProcessDynamicFunctionTableInformation:
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      if ( ProcessInformationLength != 16 )
        return -1073741820;
      *(_OWORD *)SubjectContext = *(_OWORD *)ProcessInformation;
      if ( SubjectContext[8] )
        return sub_14023E59C(*(__int64 *)SubjectContext);
      else
        return sub_14036858C(*(__int64 *)SubjectContext);
    case ProcessHandleCheckingMode:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v185 = *(_DWORD *)ProcessInformation;
      v281 = v185;
      if ( (v185 & 0xFFFFFFFE) != 0 )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v186 = sub_14066B3D8((struct _EX_RUNDOWN_REF *)Object);
      if ( v186 )
      {
        sub_1406DAA90(v186, v185 & 1);
        PsReleaseProcessExitSynchronization((struct _EX_RUNDOWN_REF *)Object);
      }
      else
      {
LABEL_809:
        v7 = -1073741558;
      }
      goto LABEL_216;
    case ProcessRevokeFileHandles:
      *(_OWORD *)Src = 0LL;
      v187 = 0LL;
      v271 = 0LL;
      if ( v9 != 1 )
        goto LABEL_822;
      v188 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)ProcessInformation < 0x7FFFFFFF0000LL )
        v188 = (__int64)ProcessInformation;
      v189 = *(_DWORD *)v188;
      LODWORD(Src[0]) = v189;
      v190 = *(void **)(v188 + 8);
      Src[1] = v190;
      if ( !(_WORD)v189 )
        return -1073741811;
      if ( ((unsigned __int8)v190 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v191 = (unsigned __int64)v190 + (unsigned __int16)v189;
      if ( v191 > 0x7FFFFFFF0000LL || v191 < (unsigned __int64)v190 )
        MEMORY[0x7FFFFFFF0000] = 0;
      v192 = ExAllocatePoolWithTag(NonPagedPoolNx, LOWORD(Src[0]), 0x6E497350u);
      v187 = v192;
      v271 = v192;
      if ( !v192 )
        return -1073741670;
      memmove(v192, Src[1], LOWORD(Src[0]));
      Src[1] = v187;
      v5 = Src;
      v295 = Src;
LABEL_822:
      v12 = ObReferenceObjectByHandleWithTag(
              ProcessHandle,
              0x2000u,
              (POBJECT_TYPE)PsProcessType,
              v9,
              0x79517350u,
              &Object,
              0LL);
      if ( v12 >= 0 )
      {
        v37 = sub_140558960((__int64)v5, Object);
        if ( v187 )
          ExFreePoolWithTag(v187, 0);
        goto LABEL_148;
      }
      if ( !v187 )
        return v12;
      ExFreePoolWithTag(v187, 0);
      return v12;
    case ProcessWorkingSetControl:
      return sub_1407F5540((ULONG_PTR)ProcessHandle);
    case ProcessCheckStackExtentsMode:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v193 = *(_DWORD *)v5 != 0;
      v291 = *(_DWORD *)v5 != 0;
      if ( (PVOID)PsGetCurrentProcess() == Object )
      {
        v12 = -1073741790;
      }
      else if ( SeSinglePrivilegeCheck(stru_140D3CA18, v9) )
      {
        v12 = 0;
        sub_1409614A8(Object, v193);
        if ( !v193 && (*((_DWORD *)Object + 280) & 0x20000) != 0 )
          _InterlockedAnd((volatile signed __int32 *)Object + 280, 0xFFFDFFFF);
      }
      else
      {
        v12 = -1073741727;
      }
      goto LABEL_79;
    case ProcessMemoryExhaustion:
      if ( ProcessInformationLength != 16 )
        return -1073741820;
      v305 = *(_OWORD *)ProcessInformation;
      if ( (_WORD)v305 != 1 || DWORD1(v305) )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      if ( *((_QWORD *)&v305 + 1) )
        _InterlockedOr((volatile signed __int32 *)Object + 281, 0x100u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 281, 0xFFFFFEFF);
      goto LABEL_88;
    case ProcessFaultInformation:
      v248 = 0LL;
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v248 = *(_QWORD *)v5;
      IsSecureKernel = PsSetProcessFaultInformation((ULONG_PTR)Object, (int *)&v248);
      goto LABEL_147;
    case ProcessCommitReleaseInformation:
      if ( ProcessInformationLength != 32 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x2001u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      *(_OWORD *)SubjectContext = *(_OWORD *)v5;
      *(_OWORD *)&SubjectContext[16] = *((_OWORD *)v5 + 1);
      if ( *(_DWORD *)SubjectContext != 3 )
      {
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741735;
      }
      if ( (*(_DWORD *)&SubjectContext[4] & 0xFFFFFFF8) != 0
        || *(_QWORD *)&SubjectContext[8]
        || *(_QWORD *)&SubjectContext[16]
        || (((*(_DWORD *)&SubjectContext[4] >> 1) & 1) != 0 || (SubjectContext[4] & 4) != 0)
        && (SubjectContext[4] & 1) == 0 )
      {
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741811;
      }
      if ( ((*(_DWORD *)&SubjectContext[4] >> 1) & 1) != 0 || (SubjectContext[4] & 4) != 0 )
        IsSecureKernel = sub_140581748((volatile signed __int32 *)Object, (*(_DWORD *)&SubjectContext[4] >> 2) & 1);
      else
        IsSecureKernel = sub_14058196C((ULONG_PTR)Object, SubjectContext[4] & 1, v194, v195);
LABEL_147:
      v37 = IsSecureKernel;
LABEL_148:
      v38 = Object;
LABEL_149:
      ObfDereferenceObjectWithTag(v38, 0x79517350u);
      return v37;
    case ProcessDefaultCpuSetsInformation:
    case ProcessAllowedCpuSetsInformation:
      if ( (ProcessInformationLength & 7) != 0 || ProcessInformationLength > 0x100 )
        return -1073741820;
      memmove(v310, ProcessInformation, ProcessInformationLength);
      v196 = (unsigned int)v4 >> 3;
      if ( Alignment == 67 )
      {
        result = sub_140258040(v9);
        if ( result < 0 )
          return result;
      }
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x2000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      IsSecureKernel = sub_1403D2D98((__int64)Object, v196, v310);
      goto LABEL_147;
    case ProcessSubsystemProcess:
      if ( (*(_BYTE *)(PsGetCurrentProcess() + 1849) & 1) == 0 )
        return -1073741727;
      v273 = 0LL;
      v37 = ObReferenceObjectByHandle(ProcessHandle, 0x200u, (POBJECT_TYPE)PsProcessType, v9, &v273, 0LL);
      Object = v273;
      if ( v37 < 0 )
        return v37;
      _InterlockedOr((volatile signed __int32 *)v273 + 543, 0x40u);
      ObfDereferenceObject(Object);
      return v37;
    case ProcessInPrivate:
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      sub_14062E19C((__int64)Object);
      _InterlockedOr((volatile signed __int32 *)Object + 280, 0x80000000);
      goto LABEL_88;
    case ProcessRaiseUMExceptionOnInvalidHandleClose:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v198 = *(_DWORD *)ProcessInformation;
      v286 = *(_DWORD *)ProcessInformation;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v199 = sub_14066B3D8((struct _EX_RUNDOWN_REF *)Object);
      if ( !v199 )
        goto LABEL_809;
      sub_1406CB004(v199, v198);
      PsReleaseProcessExitSynchronization((struct _EX_RUNDOWN_REF *)Object);
      goto LABEL_216;
    case ProcessIumChallengeResponse:
      return sub_1409B30B4(ProcessHandle, ProcessInformation, ProcessInformationLength);
    case ProcessHighGraphicsPriorityInformation:
      if ( ProcessInformationLength != 1 )
        return -1073741820;
      v200 = *(_BYTE *)ProcessInformation;
      v256 = *(_BYTE *)ProcessInformation;
      if ( !SeSinglePrivilegeCheck(stru_140D3CA10, v9) )
        return -1073741727;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x2000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      if ( v200 )
        _InterlockedOr((volatile signed __int32 *)Object + 543, 0x200u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 543, 0xFFFFFDFF);
      goto LABEL_88;
    case ProcessPowerThrottlingState:
      v300 = 0LL;
      v301 = 0;
      if ( ProcessInformationLength != 12 )
        return -1073741820;
      v300 = *(PVOID *)ProcessInformation;
      v201 = *((_DWORD *)ProcessInformation + 2);
      v301 = v201;
      if ( (_DWORD)v300 != 1 || (HIDWORD(v300) & 0xFFFFFFF8) != 0 || (~HIDWORD(v300) & v201) != 0 )
        return -1073741811;
      if ( !sub_1403614FC((struct _EX_RUNDOWN_REF *)qword_140D06AA8) )
        return -1073741822;
      v202 = ObReferenceObjectByHandleWithTag(
               ProcessHandle,
               0x2000u,
               (POBJECT_TYPE)PsProcessType,
               v9,
               0x79517350u,
               &Object,
               0LL);
      if ( v202 >= 0 )
      {
        v203 = sub_14042A5E0(Object, &v300);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        sub_1403614E0((struct _EX_RUNDOWN_REF *)qword_140D06AA8);
        return v203;
      }
      else
      {
        sub_1403614E0((struct _EX_RUNDOWN_REF *)qword_140D06AA8);
        return v202;
      }
    case ProcessDisableSystemAllowedCpuSets:
      result = sub_140258040(v9);
      if ( result < 0 )
        return result;
      if ( (_DWORD)v4 != 1 )
        return -1073741820;
      v197 = *v5;
      v255 = v197;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x2000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      if ( v197 )
        _InterlockedOr((volatile signed __int32 *)Object + 280, 0x8000000u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 280, 0xF7FFFFFF);
      sub_140572774((__int64)Object);
      goto LABEL_88;
    case ProcessEnergyTrackingState:
      if ( ProcessInformationLength < 8 )
        return -1073741820;
      memset(v309, 0, sizeof(v309));
      if ( ProcessInformationLength >= 0x90 )
        LODWORD(v4) = 144;
      memmove(v309, ProcessInformation, (unsigned int)v4);
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v204 = sub_1406D5E88((__int64)Object, v309);
      v15 = Object;
      if ( v204 >= 0 )
        goto LABEL_89;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return v204;
    case ProcessManageWritesToExecutableMemory:
      return -1073741637;
    case ProcessTelemetryCoverage:
      if ( ProcessInformationLength != 24 )
        return -1073741820;
      memset(v311, 0, sizeof(v311));
      v312 = 0;
      v205 = *(_OWORD *)ProcessInformation;
      v274 = v205;
      v275 = *((_QWORD *)ProcessInformation + 2);
      v206 = v205;
      if ( (unsigned __int64)(v205 + 65) > 0x7FFFFFFF0000LL || (__int64)v205 + 65 < (unsigned __int64)v205 )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
        v206 = v274;
      }
      sub_1402A1054(v311, 65LL, v206);
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x220u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      *(_QWORD *)&v274 = v311;
      v312 = 0;
      v22 = sub_1406D435C((__int64)Object, (__int64)&v274);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *((_DWORD *)v5 + 3) = HIDWORD(v274);
      *((_DWORD *)v5 + 4) = v275;
      return v22;
    case ProcessEnableReadWriteVmLogging:
    case ProcessEnableLogging:
      if ( ProcessInformationClass == ProcessEnableReadWriteVmLogging && !ProcessInformationLength
        || ProcessInformationClass == ProcessEnableLogging && ProcessInformationLength < 4 )
      {
        return -1073741820;
      }
      v207 = PsGetCurrentProcess();
      result = sub_1406E0450(v207, v9);
      if ( result < 0 )
        return result;
      if ( !SeSinglePrivilegeCheck(stru_140D3CA18, v9) && !SeSinglePrivilegeCheck(stru_140D3CA10, v9) )
        return -1073741727;
      v250 = 0;
      if ( Alignment == 87 )
        v208 = (*v5 & 1 ^ *v5) & 2 ^ *v5 & 1;
      else
        v208 = *(_DWORD *)v5;
      v250 = v208;
      if ( (v208 & 0xFFFFFFC0) != 0 )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x2000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      _InterlockedAnd((volatile signed __int32 *)Object + 543, 0xFFE7FFFF);
      v209 = (((v250 >> 2) & 1) << 19) | 0x100000;
      if ( (v250 & 8) == 0 )
        v209 = ((v250 >> 2) & 1) << 19;
      v210 = v209 | 0x20000000;
      if ( (v250 & 0x10) == 0 )
        v210 = v209;
      v211 = v210 | 0x10000000;
      if ( (v250 & 0x20) == 0 )
        v211 = v210;
      _InterlockedOr((volatile signed __int32 *)Object + 543, v211);
      _InterlockedAnd((volatile signed __int32 *)Object + 280, 0xFCFFFFFF);
      v212 = ((v250 & 1) << 24) | 0x2000000;
      if ( (v250 & 2) == 0 )
        v212 = (v250 & 1) << 24;
      _InterlockedOr((volatile signed __int32 *)Object + 280, v212);
LABEL_88:
      v15 = Object;
LABEL_89:
      ObfDereferenceObjectWithTag(v15, 0x79517350u);
      return 0;
    case ProcessDebugAuthInformation:
      return sub_1409C5884(
               ProcessHandle,
               (unsigned int)ProcessInformationClass,
               ProcessInformation,
               ProcessInformationLength);
    case ProcessSystemResourceManagement:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v213 = *(_DWORD *)ProcessInformation;
      v282 = v213;
      if ( (v213 & 0xFFFFFFFE) != 0 )
        return -1073741811;
      if ( !SeSinglePrivilegeCheck(stru_140D3CA10, v9) )
        return -1073741727;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x2000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      sub_14079D270((__int64)Object, v213 & 1, 1);
      goto LABEL_88;
    case ProcessCombineSecurityDomainsInformation:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      v214 = *(PVOID *)ProcessInformation;
      v296 = *(PVOID *)ProcessInformation;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x2000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v37 = ObReferenceObjectByHandleWithTag(v214, 0x1000u, (POBJECT_TYPE)PsProcessType, v9, 0x79517350u, &v269, 0LL);
      v38 = Object;
      if ( v37 < 0 )
        goto LABEL_149;
      v37 = sub_1407527F4((signed __int32 *)Object, (signed __int32 *)v269);
      ObfDereferenceObjectWithTag(v269, 0x79517350u);
      goto LABEL_148;
    case ProcessLeapSecondInformation:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      v215 = *(PVOID *)ProcessInformation;
      v292 = v215;
      if ( ((unsigned int)v215 & 0xFFFFFFFE) != 0 || ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      v216 = (_QWORD *)PsGetCurrentProcess();
      Object = v216;
      v217 = v216[170];
      if ( !v217 )
        return -1073741790;
      v218 = 0LL;
      v219 = (__int64 *)v216[176];
      if ( v219 )
        v218 = *v219;
      v220 = (unsigned __int8)v215 & 1;
      v221 = *(_DWORD *)(v217 + 1984);
      if ( v220 )
        v222 = v221 | 1;
      else
        v222 = v221 & 0xFFFFFFFE;
      *(_DWORD *)(v217 + 1984) = v222;
      if ( v218 )
      {
        v223 = *(_DWORD *)(v218 + 1140);
        if ( v220 )
          v224 = v223 | 1;
        else
          v224 = v223 & 0xFFFFFFFE;
        *(_DWORD *)(v218 + 1140) = v224;
      }
      return v7;
    case ProcessFiberShadowStackAllocation:
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      if ( v9 != 1 )
        return -1073741823;
      if ( ProcessInformationLength != 32 )
        return -1073741820;
      if ( !sub_1402A08A8() || !_bittest((const signed __int32 *)KeGetCurrentThread() + 29, 0x14u) )
        return -1073741637;
      return sub_1409AFAA0(*(_QWORD *)v5, *((_QWORD *)v5 + 1), (unsigned int)*((_OWORD *)v5 + 1), v5 + 24);
    case ProcessFreeFiberShadowStackAllocation:
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      if ( v9 != 1 )
        return -1073741823;
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      if ( sub_1402A08A8() && _bittest((const signed __int32 *)KeGetCurrentThread() + 29, 0x14u) )
        return sub_1409AF728(*(PVOID *)v5);
      return -1073741637;
    case ProcessAltSystemCallInformation:
      memset(SubjectContext, 0, 20);
      if ( ProcessInformationLength != 20 )
        return -1073741820;
      *(_OWORD *)SubjectContext = *(_OWORD *)ProcessInformation;
      *(_DWORD *)&SubjectContext[16] = *((_DWORD *)ProcessInformation + 4);
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x20u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      IsSecureKernel = sub_140659AD4((__int64)Object, (__int64)SubjectContext);
      goto LABEL_147;
    case ProcessDynamicEHContinuationTargets:
      LODWORD(v248) = 0;
      v225 = 0LL;
      if ( ProcessInformationLength != 16 )
        return -1073741820;
      *(_OWORD *)SubjectContext = *(_OWORD *)ProcessInformation;
      v226 = 16 * *(unsigned __int16 *)SubjectContext;
      if ( !v226 )
        return -1073741811;
      v227 = *(const void **)&SubjectContext[8];
      if ( !*(_QWORD *)&SubjectContext[8] )
        return -1073741811;
      v228 = v226;
      ProbeForWrite(*(volatile void **)&SubjectContext[8], v226, 8u);
      if ( *(_WORD *)&SubjectContext[2] || *(_DWORD *)&SubjectContext[4] )
        return -1073741811;
      if ( v9 != 1 )
        return -1073741790;
      v300 = 0LL;
      result = ObReferenceObjectByHandle(ProcessHandle, 0x200u, (POBJECT_TYPE)PsProcessType, 1, &v300, 0LL);
      Object = v300;
      if ( result < 0 )
        return result;
      v229 = (PVOID)PsGetCurrentProcess();
      v230 = Object;
      if ( Object == v229 && (*((_DWORD *)Object + 629) & 0x40000000) != 0 )
      {
        v12 = -1073741790;
        goto LABEL_970;
      }
      if ( (*((_DWORD *)Object + 629) & 0x4000) == 0 )
        goto LABEL_969;
      Pool2 = (_DWORD *)ExAllocatePool2(257LL, v228, 1313359172LL);
      v225 = Pool2;
      v300 = Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, v227, v228);
        v12 = sub_1409ADDA4((ULONG_PTR)Object);
        v243 = v12;
        v242 = 0;
      }
      else
      {
        v12 = -1073741801;
      }
      goto LABEL_967;
    case ProcessDynamicEnforcedCetCompatibleRanges:
      LODWORD(v248) = 0;
      v225 = 0LL;
      if ( ProcessInformationLength != 16 )
        return -1073741820;
      *(_OWORD *)SubjectContext = *(_OWORD *)ProcessInformation;
      v232 = 24 * *(unsigned __int16 *)SubjectContext;
      if ( !v232 )
        return -1073741811;
      v233 = *(const void **)&SubjectContext[8];
      if ( !*(_QWORD *)&SubjectContext[8] )
        return -1073741811;
      v234 = v232;
      ProbeForWrite(*(volatile void **)&SubjectContext[8], v232, 8u);
      if ( *(_WORD *)&SubjectContext[2] || *(_DWORD *)&SubjectContext[4] )
        return -1073741811;
      if ( v9 != 1 )
        return -1073741790;
      v300 = 0LL;
      result = ObReferenceObjectByHandle(ProcessHandle, 0x200u, (POBJECT_TYPE)PsProcessType, 1, &v300, 0LL);
      Object = v300;
      if ( result < 0 )
        return result;
      v235 = (PVOID)PsGetCurrentProcess();
      v230 = Object;
      if ( Object == v235 && (*((_DWORD *)Object + 629) & 0x40000000) != 0 )
      {
        v12 = -1073741790;
      }
      else if ( (*((_DWORD *)Object + 629) & 0x4000) != 0 )
      {
        v236 = (_DWORD *)ExAllocatePool2(257LL, v234, 1380009284LL);
        v225 = v236;
        v300 = v236;
        if ( v236 )
        {
          memmove(v236, v233, v234);
          v12 = sub_1409AE050((ULONG_PTR)Object, (__int64)&v248);
          v243 = v12;
          while ( 1 )
          {
            v242 = v7;
            if ( v7 >= (unsigned int)v248 )
              break;
            *((_DWORD *)v233 + 6 * v7 + 4) = v225[6 * v7 + 4];
            ++v7;
          }
LABEL_967:
          v230 = Object;
        }
        else
        {
          v12 = -1073741801;
          v230 = Object;
        }
      }
      else
      {
LABEL_969:
        v12 = -1073741637;
      }
LABEL_970:
      if ( v230 )
        ObfDereferenceObject(v230);
      if ( !v225 )
        return v12;
      ExFreePoolWithTag(v225, 0);
      return v12;
    case ProcessEnableOptionalXStateFeatures:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      v237 = *(_QWORD *)ProcessInformation;
      v297 = v237;
      if ( (~MEMORY[0xFFFFF780000003D8] & v237) != 0 )
        return -1073741811;
      if ( v9 != 1 )
        return -1073741790;
      if ( ProcessHandle == (HANDLE)-1LL )
        goto LABEL_998;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 1,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      if ( Object != (PVOID)PsGetCurrentProcess() )
        return -1073741811;
LABEL_998:
      v238 = (_QWORD *)PsGetCurrentProcess();
      Object = v238;
      if ( v238[176] )
        return -1073741811;
      if ( PsIsSystemProcess((__int64)v238) )
        return -1073741637;
      else
        return sub_1409AD99C(Object, v237);
    default:
      return -1073741821;
  }
  v122 = PsGetCurrentProcess();
  v124 = (volatile signed __int32 *)v122;
  Object = (PVOID)v122;
  switch ( (int)v245 )
  {
    case 1:
      if ( (v245 & 0xFFFFFFF000000000uLL) != 0 )
      {
        v12 = -1073741811;
        goto LABEL_509;
      }
      v125 = (HIDWORD(v245) >> 1) & 1;
      if ( !v125 && (*(_DWORD *)(v122 + 2512) & 0x10) != 0 )
        goto LABEL_431;
      if ( (v245 & 0x100000000LL) == 0 && (*(_DWORD *)(v122 + 2512) & 0x40) == 0 )
        goto LABEL_431;
      v126 = (HIDWORD(v245) >> 3) & 1;
      if ( !v126 && (*(_DWORD *)(v122 + 2512) & 8) != 0 )
        goto LABEL_431;
      if ( v126 )
      {
        if ( !v125 )
        {
          v12 = -1073741776;
          goto LABEL_509;
        }
      }
      else if ( !v125 )
      {
LABEL_437:
        if ( (v245 & 0x100000000LL) != 0 )
        {
          _InterlockedAnd(v124 + 628, 0xFFFFFFBF);
          v124 = (volatile signed __int32 *)Object;
        }
        if ( v126 )
        {
          _InterlockedOr(v124 + 628, 8u);
          v124 = (volatile signed __int32 *)Object;
        }
        v12 = 0;
        goto LABEL_509;
      }
      _InterlockedOr((volatile signed __int32 *)(v122 + 2512), 0x10u);
      v124 = (volatile signed __int32 *)Object;
      goto LABEL_437;
    case 2:
      v131 = HIDWORD(v245);
      if ( (v245 & 0xFFFFFFF000000000uLL) != 0 )
      {
        v12 = -1073741811;
        goto LABEL_509;
      }
      if ( (v245 & 0x100000000LL) != 0 && (v245 & 0x800000000LL) != 0 )
        v131 = HIDWORD(v245) & 0xFFFFFFF7;
      v132 = v131 & 1;
      if ( (v131 & 1) == 0 && ((v131 & 2) != 0 || (v131 & 4) != 0) )
      {
        v12 = -1073741811;
        goto LABEL_509;
      }
      if ( sub_1406E837C() )
      {
        v124 = (volatile signed __int32 *)Object;
LABEL_508:
        v12 = -1073741637;
        goto LABEL_509;
      }
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        v124 = (volatile signed __int32 *)Object;
        v133 = 0;
      }
      else
      {
        v12 = ObReferenceObjectByHandleWithTag(
                ProcessHandle,
                0x200u,
                (POBJECT_TYPE)PsProcessType,
                v9,
                0x79517350u,
                &Object,
                0LL);
        if ( v12 < 0 )
          goto LABEL_452;
        v133 = 1;
        v134 = (PVOID)PsGetCurrentProcess();
        v124 = (volatile signed __int32 *)Object;
        if ( Object != v134 )
        {
          v135 = *((_DWORD *)Object + 628);
          if ( (v135 & 0x100) != 0 )
          {
            memset(SubjectContext, 0, 32);
            SeCaptureSubjectContextEx(0LL, (PEPROCESS)Object, (PSECURITY_SUBJECT_CONTEXT)SubjectContext);
            IsSandboxedToken = RtlIsSandboxedToken((PSECURITY_SUBJECT_CONTEXT)SubjectContext, 1);
            SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)SubjectContext);
            if ( !RtlIsSandboxedToken(0LL, v9) && IsSandboxedToken )
            {
              v124 = (volatile signed __int32 *)Object;
              if ( (*((_DWORD *)Object + 628) & 0x400) != 0 )
                goto LABEL_520;
            }
            v137 = SeSinglePrivilegeCheck(stru_140D3CA18, v9);
            v124 = (volatile signed __int32 *)Object;
            if ( v137 )
              goto LABEL_520;
          }
          else if ( (v131 & 8) != 0 || (v131 & 1) != 0 || (v135 & 0x800) == 0 )
          {
LABEL_520:
            v138 = 0;
            if ( (v131 & 1) == 0 )
              v138 = 2304;
            v139 = (v132 != 0 ? 0x100 : 0) | 0x800;
            if ( (v131 & 8) == 0 )
              v139 = v132 != 0 ? 0x900 : 0;
            if ( (v131 & 2) != 0 )
              v139 |= 0x200u;
            else
              v138 |= 0x200u;
            v140 = v139 | 0x400;
            v141 = (v131 >> 2) & 1;
            if ( !v141 )
              v140 = v139;
            v142 = v138 | 0x400;
            v143 = (v141 & 1) == 0;
            goto LABEL_559;
          }
          v12 = -1073741790;
          goto LABEL_510;
        }
      }
      if ( (v131 & 1) == 0 && (v124[628] & 0x100) != 0 )
      {
        v12 = -1073741790;
        goto LABEL_510;
      }
      v144 = (v131 >> 3) & 1;
      if ( !v144 && (v131 & 1) == 0 && (v124[628] & 0x800) != 0 )
      {
        v12 = -1073741790;
        goto LABEL_510;
      }
      v145 = (v131 >> 1) & 1;
      if ( v145 )
      {
        v146 = *((_DWORD *)v124 + 628);
        if ( (v146 & 0x100) != 0 && (v146 & 0x200) == 0 )
        {
          v12 = -1073741790;
          goto LABEL_510;
        }
      }
      v147 = (v131 >> 2) & 1;
      if ( v147 )
      {
        v148 = *((_DWORD *)v124 + 628);
        if ( (v148 & 0x100) != 0 && (v148 & 0x400) == 0 )
        {
          v12 = -1073741790;
          goto LABEL_510;
        }
      }
      if ( v132 )
      {
        v149 = 2304;
      }
      else
      {
        v149 = 0;
        if ( v144 )
          v149 = 2048;
      }
      v138 = (v145 ^ 1) << 9;
      v140 = v149 | 0x200;
      if ( !v145 )
        v140 = v149;
      if ( v147 )
        v140 |= 0x400u;
      v142 = v138 | 0x400;
      v143 = v147 == 0;
LABEL_559:
      if ( v143 )
        v138 = v142;
      sub_140209344(v124 + 628, v140, v138);
      v12 = 0;
      v124 = (volatile signed __int32 *)Object;
      goto LABEL_510;
    case 3:
      if ( (v245 & 0xFFFFFFFC00000000uLL) != 0 )
      {
        v12 = -1073741811;
        goto LABEL_509;
      }
      if ( ((HIDWORD(v245) >> 1) & 1) == 0 && (v245 & 0x100000000LL) != 0 )
      {
        v12 = -1073741811;
        goto LABEL_509;
      }
      if ( ((HIDWORD(v245) >> 1) & 1) != 0 && (v245 & 0x100000000LL) == 0 )
      {
        v12 = -1073741811;
        goto LABEL_509;
      }
      v127 = sub_14066B3D8((struct _EX_RUNDOWN_REF *)v122);
      if ( !v127 )
      {
        v12 = -1073741558;
        goto LABEL_452;
      }
      v12 = -1073741790;
      if ( sub_1406DAA90(v127, BYTE4(v245) & 1) )
        v12 = 0;
      PsReleaseProcessExitSynchronization((struct _EX_RUNDOWN_REF *)Object);
      v124 = (volatile signed __int32 *)Object;
      goto LABEL_509;
    case 4:
      v128 = HIDWORD(v245);
      if ( (v245 & 0xFFFFFFF000000000uLL) == 0 )
      {
        if ( (v245 & 0x100000000LL) != 0 && (v245 & 0x200000000LL) != 0 )
        {
          v128 = HIDWORD(v245) & 0xFFFFFFFD;
          HIDWORD(v245) &= ~2u;
        }
        sub_14024DA70();
        if ( (unsigned int)sub_140417880() && (v128 & 4) != 0 && (v128 & 8) != 0 )
        {
          v128 &= ~8u;
          HIDWORD(v245) = v128;
        }
        if ( (v128 & 1) == 0 )
        {
          v124 = (volatile signed __int32 *)Object;
          if ( (*((_DWORD *)Object + 628) & 0x1000) != 0 )
          {
            v12 = -1073741790;
            goto LABEL_509;
          }
        }
        sub_14024DA70();
        if ( !(unsigned int)sub_140417880() || (v128 & 4) != 0 )
        {
          v124 = (volatile signed __int32 *)Object;
        }
        else
        {
          v124 = (volatile signed __int32 *)Object;
          if ( (*((_DWORD *)Object + 732) & 2) != 0 )
          {
            v12 = -1073741790;
            goto LABEL_509;
          }
        }
        v129 = (v128 >> 1) & 1;
        if ( !v129 && (v128 & 1) == 0 && (v124[628] & 0x2000) != 0 )
        {
          v12 = -1073741790;
          goto LABEL_509;
        }
        sub_14024DA70();
        if ( !(unsigned int)sub_140417880() || (v128 & 8) != 0 || (v128 & 4) != 0 )
        {
          v124 = (volatile signed __int32 *)Object;
        }
        else
        {
          v124 = (volatile signed __int32 *)Object;
          if ( (*((_DWORD *)Object + 732) & 4) != 0 )
          {
            v12 = -1073741790;
            goto LABEL_509;
          }
        }
        if ( (v128 & 1) != 0 || v129 )
        {
          v130 = sub_1409AD6F4(v244);
          v124 = (volatile signed __int32 *)Object;
          if ( v130 )
          {
            v12 = -1073741431;
            goto LABEL_509;
          }
        }
        v12 = 0;
        if ( (v128 & 1) != 0 )
        {
          _InterlockedOr(v124 + 628, 0x3000u);
        }
        else
        {
          if ( !v129 )
            goto LABEL_492;
          _InterlockedOr(v124 + 628, 0x2000u);
        }
        LOBYTE(v128) = BYTE4(v245);
LABEL_492:
        sub_14024DA70();
        if ( (unsigned int)sub_140417880() )
        {
          if ( (v128 & 4) != 0 )
          {
            _InterlockedOr((volatile signed __int32 *)Object + 732, 6u);
            v124 = (volatile signed __int32 *)Object;
            goto LABEL_509;
          }
          if ( (v128 & 8) != 0 )
          {
            _InterlockedOr((volatile signed __int32 *)Object + 732, 4u);
            v124 = (volatile signed __int32 *)Object;
            goto LABEL_509;
          }
        }
LABEL_452:
        v124 = (volatile signed __int32 *)Object;
        goto LABEL_509;
      }
      v12 = -1073741811;
LABEL_509:
      v133 = 0;
LABEL_510:
      if ( v133 != 1 )
        return v12;
      ObfDereferenceObjectWithTag((PVOID)v124, 0x79517350u);
      return v12;
    case 6:
      if ( (v245 & 0xFFFFFFFE00000000uLL) != 0 )
      {
        v12 = -1073741811;
      }
      else if ( (v245 & 0x100000000LL) != 0 || (*(_DWORD *)(v122 + 2512) & 0x80u) == 0 )
      {
        v12 = 0;
        if ( (v245 & 0x100000000LL) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)(v122 + 2512), 0x80u);
          v124 = (volatile signed __int32 *)Object;
        }
      }
      else
      {
        v12 = -1073741790;
      }
      goto LABEL_509;
    case 7:
      if ( (v245 & 0xFFFFFFE000000000uLL) != 0 )
      {
        v12 = -1073741811;
        goto LABEL_509;
      }
      if ( ((HIDWORD(v245) >> 3) & 1) != 0 && (*(_DWORD *)(v122 + 2516) & 0x2000000) == 0 )
        goto LABEL_431;
      if ( ((HIDWORD(v245) >> 3) & 1) == 0 && (*(_DWORD *)(v122 + 2516) & 0x2000000) != 0 )
      {
        v12 = -1073741790;
        goto LABEL_509;
      }
      if ( ((HIDWORD(v245) >> 4) & 1) != 0 && (*(_DWORD *)(v122 + 2516) & 0x4000000) == 0 )
        goto LABEL_431;
      if ( ((HIDWORD(v245) >> 4) & 1) != 0 || (*(_DWORD *)(v122 + 2516) & 0x4000000) == 0 )
      {
        if ( (*(_DWORD *)(v122 + 2512) & 1) != 0 )
        {
          if ( (v245 & 0x400000000LL) != 0 )
          {
            _InterlockedOr((volatile signed __int32 *)(v122 + 2512), 4u);
            v12 = 0;
            v124 = (volatile signed __int32 *)Object;
          }
          else
          {
            v12 = -1073741790;
          }
        }
        else
        {
          v12 = -1073741790;
        }
      }
      else
      {
        v12 = -1073741790;
      }
      goto LABEL_509;
    case 8:
      v150 = HIDWORD(v245);
      if ( (v245 & 0xFFFFFFE000000000uLL) != 0 )
      {
        v12 = -1073741811;
        goto LABEL_509;
      }
      if ( (v245 & 0x100000000LL) != 0 && ((v245 & 0x800000000LL) != 0 || (v245 & 0x1000000000LL) != 0) )
        v150 = HIDWORD(v245) & 0xFFFFFFE7;
      if ( (v150 & 2) != 0 && (v150 & 0x10) != 0 )
        v150 &= ~0x10u;
      v151 = (v150 >> 3) & 1;
      if ( v151 && (v150 & 0x10) != 0 )
      {
        v12 = -1073741811;
        goto LABEL_509;
      }
      v152 = (v150 >> 1) & 1;
      if ( (v150 & 1) + v152 > 1 )
      {
        v12 = -1073741811;
        goto LABEL_509;
      }
      if ( (v150 & 1) != 0 )
        goto LABEL_609;
      if ( *(_BYTE *)(v122 + 2168) >= 8u && *(_BYTE *)(v122 + 2169) >= 8u )
      {
        v12 = -1073741790;
        goto LABEL_509;
      }
      if ( v152 )
        goto LABEL_609;
      LOBYTE(v123) = 6;
      if ( (unsigned int)SeCompareSigningLevels(*(unsigned __int8 *)(v122 + 2168), v123) )
      {
        LOBYTE(v123) = 6;
        if ( (unsigned int)SeCompareSigningLevels(*((unsigned __int8 *)Object + 2169), v123) )
        {
          v12 = -1073741790;
          v124 = (volatile signed __int32 *)Object;
          goto LABEL_509;
        }
      }
      v124 = (volatile signed __int32 *)Object;
LABEL_609:
      if ( (v124[628] & 0x3000000) != 0 && (v150 & 0x10) == 0 && !v152 && !v151 && (v150 & 1) == 0 )
      {
        v12 = -1073741790;
        goto LABEL_509;
      }
      v12 = 0;
      if ( (v150 & 1) != 0 )
      {
        if ( *((_BYTE *)v124 + 2168) < 8u )
        {
          *((_BYTE *)v124 + 2168) = 8;
          v124 = (volatile signed __int32 *)Object;
        }
        if ( *((_BYTE *)v124 + 2169) >= 8u )
        {
LABEL_626:
          if ( v150 )
            v7 = 0x800000;
          v154 = ((v150 & 8) == 0) << 24;
          v155 = v7 | 0x1000000;
          if ( !v151 )
            v155 = v7;
          if ( ((v150 >> 4) & 1) != 0 )
            v155 |= 0x2000000u;
          else
            v154 |= 0x2000000u;
          sub_140209344(v124 + 628, v155, v154);
          v124 = (volatile signed __int32 *)Object;
          goto LABEL_509;
        }
        *((_BYTE *)v124 + 2169) = 8;
      }
      else
      {
        if ( !v152 )
          goto LABEL_626;
        LOBYTE(v123) = 6;
        if ( !(unsigned int)SeCompareSigningLevels(*((unsigned __int8 *)v124 + 2168), v123) )
        {
          v12 = -1073741790;
          v124 = (volatile signed __int32 *)Object;
          goto LABEL_509;
        }
        LOBYTE(v153) = 6;
        if ( (unsigned int)SeCompareSigningLevels(v153, *((unsigned __int8 *)Object + 2169)) )
          *((_BYTE *)Object + 2169) = 6;
      }
      v124 = (volatile signed __int32 *)Object;
      goto LABEL_626;
    case 9:
      if ( (v245 & 0xFFFFFFFC00000000uLL) != 0 )
      {
        v12 = -1073741811;
      }
      else if ( (v245 & 0x100000000LL) != 0 || (*(_DWORD *)(v122 + 2512) & 0x10000) == 0 )
      {
        if ( (v245 & 0x100000000LL) != 0 || (v245 & 0x200000000LL) != 0 || (*(_DWORD *)(v122 + 2512) & 0x20000) == 0 )
        {
          v12 = 0;
          if ( (v245 & 0x100000000LL) != 0 )
          {
            sub_140209344((volatile signed __int32 *)(v122 + 2512), 0x10000, 0x20000);
            v124 = (volatile signed __int32 *)Object;
          }
          else if ( (v245 & 0x200000000LL) != 0 )
          {
            sub_140209344((volatile signed __int32 *)(v122 + 2512), 0x20000, 0x10000);
            v124 = (volatile signed __int32 *)Object;
          }
        }
        else
        {
          v12 = -1073741790;
        }
      }
      else
      {
        v12 = -1073741790;
      }
      goto LABEL_509;
    case 10:
      v156 = HIDWORD(v245);
      if ( (v245 & 0xFFFFFFE000000000uLL) != 0 )
      {
        v12 = -1073741811;
        goto LABEL_509;
      }
      if ( (v245 & 0x100000000LL) != 0 && (v245 & 0x800000000LL) != 0 )
        v156 = HIDWORD(v245) & 0xFFFFFFF7;
      if ( (v156 & 2) != 0 && (v156 & 0x10) != 0 )
        v156 &= ~0x10u;
      v157 = v156 & 1;
      v158 = 0x80000;
      if ( (v156 & 1) == 0 && (*(_DWORD *)(v122 + 2512) & 0x80000) != 0 )
        goto LABEL_431;
      v159 = (v156 >> 1) & 1;
      if ( !v159 && (*(_DWORD *)(v122 + 2512) & 0x200000) != 0 )
        goto LABEL_431;
      v160 = (v156 >> 2) & 1;
      if ( !v160 && (*(_DWORD *)(v122 + 2512) & 0x40000) != 0 )
      {
        v12 = -1073741790;
        goto LABEL_509;
      }
      v161 = (v156 >> 3) & 1;
      if ( !v161 && (v156 & 1) == 0 && (*(_DWORD *)(v122 + 2512) & 0x100000) != 0 )
        goto LABEL_431;
      v162 = (v156 >> 4) & 1;
      if ( v162 || v159 || (*(_DWORD *)(v122 + 2512) & 0x400000) == 0 )
      {
        v163 = 0;
        if ( v157 )
        {
          v163 = 0x100000;
        }
        else
        {
          v158 = 0;
          if ( v161 )
            v158 = 0x100000;
        }
        if ( v159 )
        {
          v158 |= 0x200000u;
          v163 |= 0x400000u;
        }
        else if ( v162 )
        {
          v158 |= 0x400000u;
        }
        v164 = v158 | 0x40000;
        if ( !v160 )
          v164 = v158;
        sub_140209344(v124 + 628, v164, v163);
        v12 = 0;
        v124 = (volatile signed __int32 *)Object;
      }
      else
      {
        v12 = -1073741790;
      }
      goto LABEL_509;
    case 13:
      v165 = HIDWORD(v245);
      if ( (v245 & 0xFFFFFFF800000000uLL) != 0 )
      {
        v12 = -1073741811;
        goto LABEL_509;
      }
      if ( (v245 & 0x100000000LL) == 0 && (v245 & 0x400000000LL) != 0 )
      {
        v12 = -1073741811;
        goto LABEL_509;
      }
      if ( (v245 & 0x100000000LL) != 0 && (v245 & 0x200000000LL) != 0 )
        v165 = HIDWORD(v245) & 0xFFFFFFFD;
      v166 = sub_1406E9BE0(v122);
      v167 = v166;
      v168 = v165 & 1;
      if ( (v165 & 1) == 0 && (unsigned int)(v166 - 1) <= 1 )
      {
        v12 = -1073741790;
        v124 = (volatile signed __int32 *)Object;
        goto LABEL_509;
      }
      v169 = (v165 >> 2) & 1;
      if ( v169 && v167 == 1 )
      {
        v12 = -1073741790;
        v124 = (volatile signed __int32 *)Object;
        goto LABEL_509;
      }
      v170 = (v165 >> 1) & 1;
      if ( v170 )
        goto LABEL_698;
      if ( v168 )
        goto LABEL_699;
      if ( v167 == 3 )
      {
        v12 = -1073741790;
        v124 = (volatile signed __int32 *)Object;
        goto LABEL_509;
      }
LABEL_698:
      if ( v168 )
      {
LABEL_699:
        if ( v169 )
          sub_1406E71BC((__int64)Object, 2);
        else
          sub_1406E71BC((__int64)Object, 1);
        v12 = 0;
        v124 = (volatile signed __int32 *)Object;
        goto LABEL_509;
      }
      if ( v170 )
        sub_1406E71BC((__int64)Object, 3);
      goto LABEL_705;
    case 14:
      if ( (v245 & 0xFFFFFFF000000000uLL) != 0 )
      {
        v12 = -1073741811;
        goto LABEL_509;
      }
      if ( (v245 & 0x100000000LL) == 0 && (*(_DWORD *)(v122 + 2512) & 0x40000000) != 0
        || ((HIDWORD(v245) >> 1) & 1) == 0 && *(int *)(v122 + 2512) < 0
        || ((HIDWORD(v245) >> 3) & 1) == 0 && (*(_DWORD *)(v122 + 2516) & 0x2000) != 0 )
      {
        goto LABEL_431;
      }
      v176 = (HIDWORD(v245) >> 2) & 1;
      if ( v176 || (*(_DWORD *)(v122 + 2516) & 0x1000) == 0 )
      {
        if ( (v245 & 0x100000000LL) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)(v122 + 2512), 0x40000000u);
          v124 = (volatile signed __int32 *)Object;
        }
        if ( ((HIDWORD(v245) >> 1) & 1) != 0 )
        {
          _InterlockedOr(v124 + 628, 0x80000000);
          _InterlockedOr((volatile signed __int32 *)Object + 543, 0x200000u);
          sub_1402A0D88((__int64)Object, _InterlockedIncrement64(&qword_140C0BAF8), 1);
          sub_140255E2C((__int64)Object);
          v124 = (volatile signed __int32 *)Object;
        }
        if ( v176 )
        {
          _InterlockedOr(v124 + 629, 0x1000u);
          v124 = (volatile signed __int32 *)Object;
        }
        if ( ((HIDWORD(v245) >> 3) & 1) != 0 )
        {
          _InterlockedOr(v124 + 629, 0x2000u);
          v124 = (volatile signed __int32 *)Object;
        }
        v12 = 0;
      }
      else
      {
        v12 = -1073741790;
      }
      goto LABEL_509;
    case 15:
      v177 = HIDWORD(v245);
      if ( (v245 & 0xFFFFFC0000000000uLL) != 0 )
      {
        v12 = -1073741811;
        goto LABEL_509;
      }
      if ( (v245 & 0x1000000000LL) != 0 )
      {
        v177 = HIDWORD(v245) | 1;
        HIDWORD(v245) |= 1u;
      }
      if ( (v177 & 0x200) != 0 )
      {
        v177 |= 4u;
        HIDWORD(v245) = v177;
      }
      if ( (v177 & 0x40) != 0 )
      {
        v177 |= 0x20u;
        HIDWORD(v245) = v177;
      }
      v178 = (v177 >> 4) & 1;
      if ( !v178 && (*(_DWORD *)(v122 + 2516) & 0x100000) != 0
        || (v177 & 1) == 0 && (*(_DWORD *)(v122 + 2516) & 0x4000) != 0 )
      {
        goto LABEL_431;
      }
      if ( (v177 & 1) != 0 && (*(_DWORD *)(v122 + 2516) & 0x4000) == 0 )
      {
        v12 = -1073741790;
        goto LABEL_509;
      }
      v179 = (v177 >> 9) & 1;
      if ( v179 )
      {
        if ( *(int *)(v122 + 2516) >= 0 )
          goto LABEL_431;
      }
      v180 = (v177 >> 2) & 1;
      if ( !v180 && (*(_DWORD *)(v122 + 2516) & 0x20000) != 0 )
        goto LABEL_431;
      if ( v180 && (*(_DWORD *)(v122 + 2516) & 0x20000) == 0 )
      {
        v12 = -1073741790;
        goto LABEL_509;
      }
      v181 = (v177 >> 6) & 1;
      if ( !v181 && (*(_DWORD *)(v122 + 2516) & 0x400000) != 0 )
        goto LABEL_431;
      v182 = (v177 >> 5) & 1;
      if ( !v182 && (*(_DWORD *)(v122 + 2516) & 0x200000) != 0 )
      {
        v12 = -1073741790;
        goto LABEL_509;
      }
      v183 = (v177 >> 8) & 1;
      if ( !v183 && (*(_DWORD *)(v122 + 2516) & 0x40000000) != 0 )
      {
        v12 = -1073741790;
        goto LABEL_509;
      }
      if ( ((v177 >> 1) & 1) == 0 && (*(_DWORD *)(v122 + 2516) & 0x8000) != 0
        || ((v177 >> 1) & 1) != 0 && (*(_DWORD *)(v122 + 2516) & 0x8000) == 0
        || ((v177 >> 3) & 1) == 0 && (*(_DWORD *)(v122 + 2516) & 0x40000) != 0
        || ((v177 >> 3) & 1) != 0 && (*(_DWORD *)(v122 + 2516) & 0x40000) == 0
        || (v184 = (v177 >> 7) & 1) == 0 && (*(_DWORD *)(v122 + 2516) & 0x800000) != 0 )
      {
LABEL_431:
        v12 = -1073741790;
        goto LABEL_509;
      }
      if ( v184 && (*(_DWORD *)(v122 + 2516) & 0x800000) == 0 )
      {
        v12 = -1073741790;
        goto LABEL_509;
      }
      if ( v178 )
      {
        _InterlockedOr((volatile signed __int32 *)(v122 + 2516), 0x100000u);
        v124 = (volatile signed __int32 *)Object;
      }
      if ( !v179 && v180 )
      {
        _InterlockedAnd(v124 + 629, 0x7FFFFFFFu);
        v124 = (volatile signed __int32 *)Object;
      }
      if ( v181 )
      {
        _InterlockedOr(v124 + 629, 0x200000u);
        _InterlockedOr((volatile signed __int32 *)Object + 629, 0x400000u);
      }
      else
      {
        if ( !v182 )
        {
LABEL_796:
          if ( v183 )
          {
            _InterlockedOr(v124 + 629, 0x40000000u);
            v124 = (volatile signed __int32 *)Object;
          }
          v12 = 0;
          goto LABEL_509;
        }
        _InterlockedOr(v124 + 629, 0x200000u);
      }
      v124 = (volatile signed __int32 *)Object;
      goto LABEL_796;
    case 16:
      v171 = HIDWORD(v245);
      if ( (v245 & 0xFFFFFFFC00000000uLL) != 0 )
      {
        v12 = -1073741811;
        goto LABEL_509;
      }
      if ( (v245 & 0x100000000LL) != 0 && (v245 & 0x200000000LL) != 0 )
        v171 = HIDWORD(v245) & 0xFFFFFFFD;
      v172 = sub_1406DEAEC(v122);
      v173 = v171 & 1;
      if ( (v171 & 1) == 0 && v172 == 1 )
      {
        v12 = -1073741790;
        v124 = (volatile signed __int32 *)Object;
        goto LABEL_509;
      }
      v174 = (v171 >> 1) & 1;
      if ( v174 )
        goto LABEL_718;
      if ( v173 )
        goto LABEL_719;
      if ( v172 == 2 )
      {
        v12 = -1073741790;
        v124 = (volatile signed __int32 *)Object;
      }
      else
      {
LABEL_718:
        if ( v173 )
        {
LABEL_719:
          v175 = 1;
        }
        else
        {
          if ( !v174 )
          {
LABEL_705:
            v12 = 0;
            v124 = (volatile signed __int32 *)Object;
            goto LABEL_509;
          }
          v175 = 2;
        }
        sub_1406DD598((__int64)Object, v175);
        v12 = 0;
        v124 = (volatile signed __int32 *)Object;
      }
      goto LABEL_509;
    default:
      goto LABEL_508;
  }
}
