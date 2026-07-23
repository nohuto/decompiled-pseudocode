/*
 * XREFs of NtQueryInformationProcess @ 0x14073DA00
 * Callers:
 *     <none>
 * Callees:
 *     sub_140231450 @ 0x140231450 (sub_140231450.c)
 *     PsGetWin32KFilterSet @ 0x140233410 (PsGetWin32KFilterSet.c)
 *     sub_1402395A0 @ 0x1402395A0 (sub_1402395A0.c)
 *     PsQueryProcessCommandLine @ 0x140241D20 (PsQueryProcessCommandLine.c)
 *     sub_14024DC34 @ 0x14024DC34 (sub_14024DC34.c)
 *     sub_14025C4BC @ 0x14025C4BC (sub_14025C4BC.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402D02F0 @ 0x1402D02F0 (sub_1402D02F0.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_1402D7598 @ 0x1402D7598 (sub_1402D7598.c)
 *     KeQuerySystemTimePrecise @ 0x1402F08A0 (KeQuerySystemTimePrecise.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_140300B40 @ 0x140300B40 (sub_140300B40.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_1403614E0 @ 0x1403614E0 (sub_1403614E0.c)
 *     sub_1403614FC @ 0x1403614FC (sub_1403614FC.c)
 *     sub_140363220 @ 0x140363220 (sub_140363220.c)
 *     SkIsSecureKernel @ 0x1403DF740 (SkIsSecureKernel.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140417880 @ 0x140417880 (sub_140417880.c)
 *     ZwQueryInformationJobObject @ 0x14041E180 (ZwQueryInformationJobObject.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140572490 @ 0x140572490 (sub_140572490.c)
 *     ExEnumHandleTable @ 0x14066A8E0 (ExEnumHandleTable.c)
 *     sub_14066B3D8 @ 0x14066B3D8 (sub_14066B3D8.c)
 *     sub_14066C174 @ 0x14066C174 (sub_14066C174.c)
 *     MmGetSectionInformation @ 0x14066C980 (MmGetSectionInformation.c)
 *     PsReferenceProcessFilePointer @ 0x140673AD0 (PsReferenceProcessFilePointer.c)
 *     sub_14069C1E0 @ 0x14069C1E0 (sub_14069C1E0.c)
 *     sub_1406A904C @ 0x1406A904C (sub_1406A904C.c)
 *     sub_1406B48F0 @ 0x1406B48F0 (sub_1406B48F0.c)
 *     sub_1406C32B0 @ 0x1406C32B0 (sub_1406C32B0.c)
 *     sub_1406C5900 @ 0x1406C5900 (sub_1406C5900.c)
 *     sub_1406C6384 @ 0x1406C6384 (sub_1406C6384.c)
 *     PsQueryTotalCycleTimeProcess @ 0x1406C73D0 (PsQueryTotalCycleTimeProcess.c)
 *     sub_1406CAB00 @ 0x1406CAB00 (sub_1406CAB00.c)
 *     sub_1406DEAEC @ 0x1406DEAEC (sub_1406DEAEC.c)
 *     sub_1406E9920 @ 0x1406E9920 (sub_1406E9920.c)
 *     sub_1406E9BE0 @ 0x1406E9BE0 (sub_1406E9BE0.c)
 *     sub_1406F2AA0 @ 0x1406F2AA0 (sub_1406F2AA0.c)
 *     sub_14070BA00 @ 0x14070BA00 (sub_14070BA00.c)
 *     IoQueryFileDosDeviceName @ 0x14070F660 (IoQueryFileDosDeviceName.c)
 *     sub_140711CD4 @ 0x140711CD4 (sub_140711CD4.c)
 *     sub_140711F48 @ 0x140711F48 (sub_140711F48.c)
 *     ObOpenObjectByPointer @ 0x1407277A0 (ObOpenObjectByPointer.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     sub_1407A8280 @ 0x1407A8280 (sub_1407A8280.c)
 *     sub_1407B81B0 @ 0x1407B81B0 (sub_1407B81B0.c)
 *     sub_1407BB560 @ 0x1407BB560 (sub_1407BB560.c)
 *     sub_1409272A0 @ 0x1409272A0 (sub_1409272A0.c)
 *     sub_140932260 @ 0x140932260 (sub_140932260.c)
 *     sub_14099A188 @ 0x14099A188 (sub_14099A188.c)
 *     sub_1409AE3D8 @ 0x1409AE3D8 (sub_1409AE3D8.c)
 *     sub_1409AE584 @ 0x1409AE584 (sub_1409AE584.c)
 *     sub_1409B314C @ 0x1409B314C (sub_1409B314C.c)
 *     sub_1409E4F10 @ 0x1409E4F10 (sub_1409E4F10.c)
 *     sub_1409F8D78 @ 0x1409F8D78 (sub_1409F8D78.c)
 *     sub_1409F8FB8 @ 0x1409F8FB8 (sub_1409F8FB8.c)
 *     sub_1409F91B8 @ 0x1409F91B8 (sub_1409F91B8.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtQueryInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength,
        PULONG ReturnLength)
{
  size_t v5; // r13
  unsigned __int64 v6; // rsi
  unsigned __int64 v9; // r14
  unsigned __int8 v10; // bl
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  NTSTATUS result; // eax
  __int128 *v16; // rdx
  void *v17; // rax
  void *v18; // rsi
  NTSTATUS SectionInformation; // edi
  struct _EX_RUNDOWN_REF *v20; // r12
  struct _FILE_OBJECT *v21; // rbx
  NTSTATUS v22; // r12d
  POBJECT_NAME_INFORMATION v23; // rbx
  ULONG v24; // edi
  unsigned __int64 v25; // r13
  int v26; // r12d
  char *v27; // rdi
  unsigned __int16 v28; // dx
  __int64 v29; // rax
  int v30; // eax
  __int16 v31; // cx
  _DWORD *v32; // rcx
  int v33; // edx
  int v34; // ecx
  int v35; // ebx
  __int64 v36; // r9
  _QWORD *v37; // rbx
  struct _EX_RUNDOWN_REF *v38; // rbx
  unsigned int v39; // eax
  __int64 v40; // rcx
  NTSTATUS v41; // ebx
  _DWORD *v42; // rcx
  HANDLE v43; // rdx
  int v44; // edi
  NTSTATUS IsSecureKernel; // eax
  int v46; // ebx
  int v47; // ebx
  int v48; // edi
  int v49; // ebx
  unsigned __int64 *v50; // rax
  int v51; // ebx
  unsigned __int64 v52; // r13
  NTSTATUS v53; // edi
  struct _EX_RUNDOWN_REF *v54; // r12
  ULONG_PTR v55; // rax
  ULONG_PTR v56; // rbx
  __int64 v57; // rax
  __int64 v58; // r8
  __int64 v59; // rdx
  _OWORD *v60; // rax
  __int64 v61; // r9
  int v62; // eax
  PVOID v63; // r12
  PVOID v64; // r10
  void *v65; // r10
  volatile signed __int32 *v66; // rdx
  int v67; // eax
  struct _KPRCB *CurrentPrcb; // rdi
  ULONG LowPart; // ebx
  int v70; // ecx
  unsigned __int64 v71; // rax
  struct _EX_RUNDOWN_REF *v72; // r13
  PVOID Ptr; // r12
  NTSTATUS v74; // ebx
  PVOID v75; // rdi
  __int64 v76; // r9
  __int64 v77; // rax
  __int64 v78; // rax
  ULONG_PTR v79; // rdi
  NTSTATUS v80; // edi
  PVOID v81; // rcx
  __int64 v82; // rsi
  PVOID v83; // rbx
  __int64 v84; // rdi
  NTSTATUS v85; // r12d
  int v86; // ecx
  __int64 v87; // rcx
  unsigned int v88; // eax
  void *v89; // r8
  ULONG v90; // ecx
  unsigned int v91; // edx
  NTSTATUS v92; // ebx
  __int64 v93; // rbx
  struct _EX_RUNDOWN_REF *v94; // rbx
  __int64 v95; // r9
  __int64 v96; // rax
  __int64 *Count; // rcx
  void *v98; // rbx
  __int64 v99; // rax
  __int64 v100; // rcx
  ULONG v101; // eax
  __int64 v102; // rbx
  struct _EX_RUNDOWN_REF *v103; // r14
  ULONG_PTR v104; // rax
  int v105; // edi
  _DWORD *v106; // rcx
  int v107; // eax
  ULONG_PTR v108; // rax
  int v109; // ecx
  int v110; // eax
  int v111; // ecx
  int v112; // eax
  _DWORD *v113; // rcx
  int v114; // eax
  int v115; // eax
  int v116; // eax
  _DWORD *v117; // rcx
  int v118; // eax
  _DWORD *v119; // rcx
  int v120; // eax
  int v121; // ecx
  int v122; // eax
  _DWORD *v123; // rcx
  int v124; // eax
  int v125; // eax
  int v126; // eax
  int v127; // eax
  _DWORD *v128; // rcx
  int v129; // eax
  int v130; // eax
  int v131; // eax
  int v132; // eax
  int v133; // eax
  int v134; // eax
  int v135; // eax
  int v136; // eax
  _DWORD *v137; // rcx
  int v138; // eax
  _DWORD *v139; // rcx
  int v140; // eax
  _DWORD *v141; // rcx
  int v142; // eax
  NTSTATUS v143; // edi
  ULONG_PTR v144; // rax
  NTSTATUS v145; // ebx
  struct _EX_RUNDOWN_REF *v146; // rbx
  ULONG_PTR v147; // rax
  char v148; // r9
  PVOID v149; // rbx
  NTSTATUS ProcessCommandLine; // eax
  PVOID v151; // r8
  char v152; // r9
  ULONG_PTR v153; // rax
  __int64 v154; // r8
  ULONG v155; // ebx
  _QWORD *v156; // rbx
  int v157; // eax
  int v158; // eax
  int v159; // eax
  size_t v160; // r8
  NTSTATUS v161; // ebx
  PVOID v162; // rdi
  _DWORD *v163; // rcx
  int v164; // edx
  int v165; // eax
  __int64 v166; // rax
  NTSTATUS v167; // ebx
  _DWORD *v168; // r8
  PVOID *v169; // r10
  __int64 v170; // rbx
  _QWORD *v171; // rdi
  __int64 v172; // rdx
  int v173; // r8d
  _QWORD *v174; // rcx
  __int64 v175; // r8
  __int64 v176; // rax
  __int64 *v177; // rdx
  int v178; // eax
  signed __int32 v179[8]; // [rsp+0h] [rbp-9A8h] BYREF
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-980h]
  PVOID Object; // [rsp+40h] [rbp-968h] BYREF
  NTSTATUS i; // [rsp+48h] [rbp-960h]
  _BYTE v183[2]; // [rsp+4Ch] [rbp-95Ch] BYREF
  char v184; // [rsp+4Eh] [rbp-95Ah] BYREF
  char v185; // [rsp+4Fh] [rbp-959h] BYREF
  PVOID P; // [rsp+50h] [rbp-958h] BYREF
  unsigned __int16 v187; // [rsp+58h] [rbp-950h] BYREF
  HANDLE v188; // [rsp+60h] [rbp-948h]
  ULONG v189[7]; // [rsp+68h] [rbp-940h] BYREF
  unsigned int v190; // [rsp+84h] [rbp-924h] BYREF
  unsigned __int64 v191; // [rsp+88h] [rbp-920h] BYREF
  int v192; // [rsp+90h] [rbp-918h] BYREF
  __int16 v193; // [rsp+94h] [rbp-914h]
  PVOID v194; // [rsp+98h] [rbp-910h] BYREF
  unsigned int v195; // [rsp+A0h] [rbp-908h]
  volatile signed __int32 *v196; // [rsp+A8h] [rbp-900h]
  _OBJECT_NAME_INFORMATION v197; // [rsp+B0h] [rbp-8F8h] BYREF
  __int128 v198; // [rsp+C0h] [rbp-8E8h] BYREF
  int v199; // [rsp+D0h] [rbp-8D8h]
  struct _KTHREAD *v200; // [rsp+D8h] [rbp-8D0h]
  POBJECT_NAME_INFORMATION ObjectNameInformation; // [rsp+E0h] [rbp-8C8h] BYREF
  HANDLE Handle; // [rsp+E8h] [rbp-8C0h] BYREF
  unsigned int v203; // [rsp+F0h] [rbp-8B8h] BYREF
  int v204; // [rsp+F4h] [rbp-8B4h]
  int v205; // [rsp+F8h] [rbp-8B0h] BYREF
  __int64 v206; // [rsp+100h] [rbp-8A8h]
  HANDLE v207[3]; // [rsp+108h] [rbp-8A0h] BYREF
  _OBJECT_NAME_INFORMATION v208; // [rsp+120h] [rbp-888h] BYREF
  ULONG v209; // [rsp+130h] [rbp-878h]
  int v210; // [rsp+138h] [rbp-870h]
  int v211; // [rsp+13Ch] [rbp-86Ch] BYREF
  int v212; // [rsp+140h] [rbp-868h]
  ULONG v213; // [rsp+144h] [rbp-864h]
  __int64 v214; // [rsp+148h] [rbp-860h] BYREF
  ULONG_PTR v215; // [rsp+150h] [rbp-858h] BYREF
  PVOID v216; // [rsp+158h] [rbp-850h] BYREF
  _BYTE v217[40]; // [rsp+160h] [rbp-848h] BYREF
  __int64 v218; // [rsp+188h] [rbp-820h]
  __int128 v219; // [rsp+190h] [rbp-818h] BYREF
  __int64 v220; // [rsp+1A0h] [rbp-808h]
  __int64 v221; // [rsp+1A8h] [rbp-800h]
  __int64 v222; // [rsp+1B0h] [rbp-7F8h]
  __int64 v223; // [rsp+1B8h] [rbp-7F0h]
  __int64 v224; // [rsp+1C0h] [rbp-7E8h]
  int v225; // [rsp+1C8h] [rbp-7E0h]
  __int64 v226; // [rsp+1D0h] [rbp-7D8h] BYREF
  int v227; // [rsp+1D8h] [rbp-7D0h]
  __int128 v228; // [rsp+1E0h] [rbp-7C8h]
  __int128 v229; // [rsp+1F0h] [rbp-7B8h]
  __int128 v230; // [rsp+200h] [rbp-7A8h]
  _OWORD Src[3]; // [rsp+210h] [rbp-798h] BYREF
  __int128 v232; // [rsp+240h] [rbp-768h]
  __int128 v233; // [rsp+250h] [rbp-758h]
  __int128 v234; // [rsp+260h] [rbp-748h]
  __int128 v235; // [rsp+270h] [rbp-738h] BYREF
  __int128 v236; // [rsp+280h] [rbp-728h] BYREF
  __int128 v237; // [rsp+290h] [rbp-718h]
  _OWORD v238[6]; // [rsp+2A0h] [rbp-708h] BYREF
  __int64 v239; // [rsp+300h] [rbp-6A8h]
  unsigned __int64 v240; // [rsp+310h] [rbp-698h]
  ULONG_PTR v241; // [rsp+318h] [rbp-690h]
  __int128 v242; // [rsp+320h] [rbp-688h] BYREF
  unsigned __int64 v243; // [rsp+330h] [rbp-678h]
  __int64 v244; // [rsp+338h] [rbp-670h] BYREF
  int v245; // [rsp+340h] [rbp-668h]
  __int128 JobObjectInformation; // [rsp+348h] [rbp-660h] BYREF
  __int128 v247; // [rsp+358h] [rbp-650h]
  __int64 v248; // [rsp+368h] [rbp-640h]
  _OWORD v249[3]; // [rsp+370h] [rbp-638h] BYREF
  __int128 v250; // [rsp+3A0h] [rbp-608h] BYREF
  __int128 v251; // [rsp+3B0h] [rbp-5F8h]
  __int128 v252; // [rsp+3C0h] [rbp-5E8h]
  __int128 v253; // [rsp+3D0h] [rbp-5D8h]
  __int128 v254; // [rsp+3E0h] [rbp-5C8h]
  __int128 v255; // [rsp+3F0h] [rbp-5B8h]
  __int128 v256; // [rsp+400h] [rbp-5A8h]
  __int128 v257; // [rsp+410h] [rbp-598h]
  __int128 v258; // [rsp+420h] [rbp-588h]
  __int128 v259; // [rsp+430h] [rbp-578h]
  _OWORD v260[3]; // [rsp+440h] [rbp-568h] BYREF
  __int128 v261; // [rsp+470h] [rbp-538h] BYREF
  __int128 v262; // [rsp+480h] [rbp-528h]
  __int128 v263; // [rsp+490h] [rbp-518h]
  __int128 v264; // [rsp+4A0h] [rbp-508h]
  __int128 v265; // [rsp+4B0h] [rbp-4F8h]
  __int128 v266; // [rsp+4C0h] [rbp-4E8h]
  __int128 v267; // [rsp+4D0h] [rbp-4D8h]
  __int128 v268; // [rsp+4E0h] [rbp-4C8h]
  __int128 v269; // [rsp+4F0h] [rbp-4B8h]
  __int64 v270; // [rsp+500h] [rbp-4A8h]
  _OWORD v271[9]; // [rsp+510h] [rbp-498h] BYREF
  _QWORD v272[34]; // [rsp+5A0h] [rbp-408h] BYREF
  _BYTE v273[432]; // [rsp+6B0h] [rbp-2F8h] BYREF
  _QWORD v274[32]; // [rsp+860h] [rbp-148h] BYREF

  v5 = ProcessInformationLength;
  v6 = (unsigned __int64)ProcessInformation;
  v188 = ProcessHandle;
  v207[1] = ProcessInformation;
  v209 = ProcessInformationLength;
  v196 = (volatile signed __int32 *)ReturnLength;
  memset(v249, 0, sizeof(v249));
  v9 = 0LL;
  v189[0] = 0;
  Handle = 0LL;
  v192 = 0;
  memset(v272, 0, 0x108uLL);
  v194 = 0LL;
  v190 = 0;
  v211 = 0;
  v227 = 0;
  v228 = 0LL;
  v229 = 0LL;
  v230 = 0LL;
  v261 = 0LL;
  v262 = 0LL;
  v263 = 0LL;
  v264 = 0LL;
  v265 = 0LL;
  v266 = 0LL;
  v267 = 0LL;
  v268 = 0LL;
  v269 = 0LL;
  v270 = 0LL;
  v218 = 0LL;
  v206 = 0LL;
  v242 = 0LL;
  v214 = 0LL;
  JobObjectInformation = 0LL;
  v247 = 0LL;
  v248 = 0LL;
  v215 = 0LL;
  ObjectNameInformation = 0LL;
  v187 = 0;
  v193 = 0;
  Object = 0LL;
  memset(v217, 0, sizeof(v217));
  v203 = 0;
  memset(v238, 0, sizeof(v238));
  v239 = 0LL;
  memset(Src, 0, sizeof(Src));
  v232 = 0LL;
  v233 = 0LL;
  v234 = 0LL;
  v235 = 0LL;
  v10 = *((_BYTE *)KeGetCurrentThread() + 562);
  v183[1] = v10;
  CurrentThread = KeGetCurrentThread();
  v200 = CurrentThread;
  if ( v10 )
  {
    if ( ProcessInformationClass != ProcessProtectionInformation )
    {
      if ( ProcessInformationClass == ProcessCommitReleaseInformation )
      {
        v12 = 7LL;
LABEL_14:
        if ( (_DWORD)v5 )
        {
          if ( (v12 & v6) != 0 )
            ExRaiseDatatypeMisalignment();
          v13 = 0x7FFFFFFF0000LL;
          if ( v6 + v5 > 0x7FFFFFFF0000LL || v6 + v5 < v6 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        else
        {
          v13 = 0x7FFFFFFF0000LL;
        }
        if ( ReturnLength )
        {
          v14 = 0x7FFFFFFF0000LL;
          if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
            v14 = (__int64)ReturnLength;
          *(_DWORD *)v14 = *(_DWORD *)v14;
          CurrentThread = v200;
        }
        goto LABEL_26;
      }
      if ( ((ProcessInformationClass - 70) & 0xFFFFFFFB) != 0 )
      {
        if ( ProcessInformationClass == ProcessSequenceNumber )
        {
          v12 = 7LL;
        }
        else if ( ProcessInformationClass == ProcessSecurityDomainInformation )
        {
          v12 = 7LL;
        }
        else
        {
          v12 = 3LL;
          if ( ProcessInformationClass == ProcessEnableReadWriteVmLogging )
            v12 = 0LL;
        }
        goto LABEL_14;
      }
    }
    v12 = 0LL;
    goto LABEL_14;
  }
  v13 = 0x7FFFFFFF0000LL;
LABEL_26:
  switch ( ProcessInformationClass )
  {
    case ProcessBasicInformation:
      v183[0] = 0;
      if ( (_DWORD)v5 == 64 )
      {
        v25 = v6;
        ObjectNameInformation = (POBJECT_NAME_INFORMATION)v6;
        v194 = (PVOID)64;
        *(_QWORD *)v6 = 64LL;
        v6 += 8LL;
        v189[0] = 64;
      }
      else
      {
        if ( (_DWORD)v5 != 48 )
          return -1073741820;
        v25 = 0LL;
        ObjectNameInformation = 0LL;
        v194 = (PVOID)48;
        v189[0] = 48;
      }
      v191 = v6;
      result = sub_140732D40(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      v26 = result;
      i = result;
      if ( result < 0 )
        return result;
      v27 = (char *)Object;
      *(_DWORD *)v6 = *((_DWORD *)Object + 501);
      *(_QWORD *)(v6 + 8) = *((_QWORD *)v27 + 170);
      if ( (v27[992] & 1) != 0 )
        sub_140932260(v27);
      if ( v26 < 0 )
        goto LABEL_65;
      v191 = 0LL;
      v207[0] = v27 + 632;
      if ( (*((_DWORD *)v27 + 158) & 0x1000) != 0 && v27 != *((char **)v200 + 68) )
        goto LABEL_74;
      LODWORD(v272[0]) = 2097153;
      memset((char *)v272 + 4, 0, 0x104uLL);
      sub_1402395A0((__int64)v27, (__int64)v272, &v190, 0LL, &v187);
      if ( v27 == *((char **)v200 + 68) )
      {
        v28 = *((_WORD *)v200 + 280);
        v29 = v190;
        if ( !_bittest64(&v29, v28) )
          goto LABEL_74;
      }
      else
      {
        v28 = v187;
      }
      if ( v28 != 32 )
        v191 = v272[v28 + 1];
LABEL_74:
      if ( v25 )
        sub_14070BA00((__int64)v27, (__int64)v183, 0LL);
      *(_QWORD *)(v6 + 16) = v191;
      *(_DWORD *)(v6 + 24) = v27[640];
      *(_QWORD *)(v6 + 32) = *((_QWORD *)v27 + 136);
      *(_QWORD *)(v6 + 40) = *((_QWORD *)v27 + 168);
      if ( v25 )
      {
        *(_DWORD *)(v25 + 56) = 0;
        if ( (v27[2170] & 7) != 0 )
        {
          *(_DWORD *)(v25 + 56) = 1;
          v30 = 3;
        }
        else
        {
          v30 = 2;
        }
        if ( *((_QWORD *)v27 + 176) )
        {
          v31 = *((_WORD *)v27 + 1206);
          if ( v31 == 332 || v31 == 452 )
            *(_DWORD *)(v25 + 56) = v30;
        }
        v32 = v27 + 1124;
        if ( (*((_DWORD *)v27 + 281) & 0x40000008) != 0 )
          *(_DWORD *)(v25 + 56) |= 4u;
        v27 = (char *)Object;
        v33 = *(_DWORD *)(v25 + 56) ^ ((unsigned __int8)*(_DWORD *)(v25 + 56) ^ (unsigned __int8)(*((_DWORD *)Object
                                                                                                  + 280) >> 4)) & 8;
        *(_DWORD *)(v25 + 56) = v33;
        if ( *((_DWORD *)v27 + 222) + ((*(_DWORD *)v207[0] >> 3) & 1) )
        {
          v33 |= 0x10u;
          *(_DWORD *)(v25 + 56) = v33;
        }
        v34 = v33 ^ ((unsigned __int8)v33 ^ (unsigned __int8)(*v32 >> 15)) & 0x20;
        *(_DWORD *)(v25 + 56) = v34;
        if ( v183[0] )
        {
          v34 |= 0x40u;
          *(_DWORD *)(v25 + 56) = v34;
        }
        if ( (v27[992] & 1) != 0 )
        {
          v34 |= 0x80u;
          *(_DWORD *)(v25 + 56) = v34;
        }
        if ( *((_QWORD *)v27 + 280) )
          *(_DWORD *)(v25 + 56) = v34 | 0x100;
        v26 = i;
      }
      if ( ReturnLength )
        *ReturnLength = (unsigned int)v194;
LABEL_65:
      ObfDereferenceObjectWithTag(v27, 0x79517350u);
      return v26;
    case ProcessQuotaLimits:
      LOBYTE(HandleInformation) = v10;
      return sub_1406B48F0((ULONG_PTR)ProcessHandle, 0x7FFFFFFF0000LL, (void *)v6, v5, ReturnLength);
    case ProcessIoCounters:
      if ( (_DWORD)v5 != 48 )
        return -1073741820;
      result = sub_140732D40(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      SectionInformation = result;
      if ( result >= 0 )
      {
        sub_1407B81B0(Object, v238);
        v228 = *(_OWORD *)((char *)&v238[2] + 8);
        v229 = *(_OWORD *)((char *)&v238[3] + 8);
        v230 = *(_OWORD *)((char *)&v238[4] + 8);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_OWORD *)v6 = v228;
        *(_OWORD *)(v6 + 16) = v229;
        *(_OWORD *)(v6 + 32) = v230;
        if ( ReturnLength )
          *ReturnLength = 48;
        return SectionInformation;
      }
      return result;
    case ProcessVmCounters:
      if ( (((_DWORD)v5 - 88) & 0xFFFFFFE7) != 0 || (_DWORD)v5 == 104 )
        return -1073741820;
      result = sub_140732D40(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result >= 0 )
      {
        memset((char *)&Src[1] + 4, 0, 20);
        *(_QWORD *)&v235 = 0LL;
        Src[0] = *((_OWORD *)Object + 73);
        LODWORD(Src[1]) = *((_DWORD *)Object + 417);
        v37 = Object;
        sub_14030D5C0((ULONG_PTR)Object, 0LL, (__int64)v249, v36);
        i = sub_1402D02F0((_QWORD *)&Src[1] + 1, &Src[2], &v235, &v215, &v214, &v211);
        sub_1402D0930((__int64)v249, 0LL);
        *(_QWORD *)&v232 = v37[143];
        *((_QWORD *)&Src[2] + 1) = *((_QWORD *)Object + 145);
        *(_QWORD *)&v233 = *((_QWORD *)Object + 142);
        *((_QWORD *)&v232 + 1) = *((_QWORD *)Object + 144);
        *((_QWORD *)&v233 + 1) = *((_QWORD *)Object + 201) << 12;
        *(_QWORD *)&v234 = *((_QWORD *)Object + 202) << 12;
        *((_QWORD *)&v235 + 1) = *((_QWORD *)Object + 293) << 12;
        *((_QWORD *)&v234 + 1) = *((_QWORD *)&v233 + 1);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        result = i;
        if ( i >= 0 )
        {
          memmove((void *)v6, Src, v5);
          if ( ReturnLength )
            *ReturnLength = v5;
          return 0;
        }
      }
      return result;
    case ProcessTimes:
      if ( (_DWORD)v5 != 32 )
        return -1073741820;
      result = sub_140732D40(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      SectionInformation = result;
      if ( result >= 0 )
      {
        v38 = (struct _EX_RUNDOWN_REF *)Object;
        v39 = sub_1406F2AA0((__int64)Object, &v203);
        v40 = DesiredTime;
        *(_QWORD *)(v6 + 16) = DesiredTime * (unsigned __int64)v39;
        *(_QWORD *)(v6 + 24) = v40 * v203;
        *(struct _EX_RUNDOWN_REF *)v6 = v38[141];
        *(struct _EX_RUNDOWN_REF *)(v6 + 8) = v38[264];
        if ( ReturnLength )
          *ReturnLength = 32;
        goto LABEL_359;
      }
      return result;
    case ProcessDebugPort:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = sub_140732D40(
                 (ULONG_PTR)ProcessHandle,
                 1024,
                 (__int64)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result >= 0 )
      {
        Handle = (HANDLE)((unsigned __int128)-(__int128)*((unsigned __int64 *)Object + 175) >> 64);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_QWORD *)v6 = Handle;
        if ( ReturnLength )
          *ReturnLength = 8;
        return 0;
      }
      return result;
    case ProcessLdtInformation:
      result = sub_140732D40(
                 (ULONG_PTR)ProcessHandle,
                 1040,
                 (__int64)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result >= 0 )
      {
        IsSecureKernel = SkIsSecureKernel();
        goto LABEL_153;
      }
      return result;
    case ProcessDefaultHardErrorMode:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = sub_140732D40(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result >= 0 )
      {
        v35 = *((_DWORD *)Object + 382);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_DWORD *)v6 = v35;
        if ( ReturnLength )
          *ReturnLength = 4;
        return 0;
      }
      return result;
    case ProcessPooledUsageAndLimits:
      return sub_1409AE3D8((ULONG_PTR)ProcessHandle, v10);
    case ProcessWorkingSetWatch:
    case ProcessWorkingSetWatchEx:
      return sub_1409AE584((ULONG_PTR)ProcessHandle, (__int64)ReturnLength, v10);
    case ProcessPriorityClass:
      if ( (_DWORD)v5 != 2 )
        return -1073741820;
      result = sub_140732D40(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result >= 0 )
      {
        HIBYTE(v193) = *((_BYTE *)Object + 1463);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_WORD *)v6 = v193;
        if ( ReturnLength )
          *ReturnLength = 2;
        return 0;
      }
      return result;
    case ProcessWx86Information:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      SectionInformation = sub_140732D40(
                             (ULONG_PTR)ProcessHandle,
                             1024,
                             (__int64)PsProcessType,
                             v10,
                             0x79517350u,
                             &Object,
                             0LL,
                             0LL);
      if ( SectionInformation >= 0 )
      {
        v46 = *((_BYTE *)Object + 1127) & 1;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_DWORD *)v6 = v46;
        if ( ReturnLength )
          *ReturnLength = 4;
      }
      return SectionInformation;
    case ProcessHandleCount:
      LODWORD(P) = 0;
      if ( (((_DWORD)v5 - 4) & 0xFFFFFFFB) != 0 )
        return -1073741820;
      result = sub_140732D40(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      v44 = sub_14066C174((struct _EX_RUNDOWN_REF *)Object, &P);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_DWORD *)v6 = v44;
      if ( (_DWORD)v5 != 4 )
        *(_DWORD *)(v6 + 4) = (_DWORD)P;
      if ( ReturnLength )
        *ReturnLength = 4;
      return 0;
    case ProcessAffinityMask:
      if ( (((_DWORD)v5 - 8) & 0xFFFFFFF7) != 0 )
        return -1073741820;
      result = sub_140732D40(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      SectionInformation = result;
      if ( result < 0 )
        return result;
      v38 = (struct _EX_RUNDOWN_REF *)Object;
      if ( (*((_DWORD *)Object + 158) & 0x1000) != 0 )
      {
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741811;
      }
      LODWORD(v272[0]) = 2097153;
      memset((char *)v272 + 4, 0, 0x104uLL);
      sub_1402395A0((__int64)Object, (__int64)v272, &v190, 0LL, &v187);
      v87 = v272[v187 + 1];
      if ( (_DWORD)v5 == 16 )
        *(_WORD *)(v6 + 8) = v187;
      *(_QWORD *)v6 = v87;
      if ( ReturnLength )
        *ReturnLength = v5;
      goto LABEL_359;
    case ProcessPriorityBoost:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      SectionInformation = sub_140732D40(
                             (ULONG_PTR)ProcessHandle,
                             4096,
                             (__int64)PsProcessType,
                             v10,
                             0x79517350u,
                             &Object,
                             0LL,
                             0LL);
      if ( SectionInformation >= 0 )
      {
        v47 = (*((_DWORD *)Object + 158) >> 1) & 1;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_DWORD *)v6 = v47;
        if ( ReturnLength )
          *ReturnLength = 4;
      }
      return SectionInformation;
    case ProcessDeviceMap:
      if ( (unsigned int)v5 < 0x24 )
        return -1073741820;
      if ( (_DWORD)v5 == 48 )
      {
        v195 = *(_DWORD *)(v6 + 40);
        v48 = v195;
        if ( (v195 & 0xFFFFFFFE) != 0 )
          return -1073741811;
      }
      else
      {
        if ( (_DWORD)v5 != 36 )
          return -1073741820;
        v48 = 0;
      }
      result = sub_140732D40(
                 (ULONG_PTR)ProcessHandle,
                 1024,
                 (__int64)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      SectionInformation = sub_14069C1E0((__int64)Object, v6, v48);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      if ( SectionInformation >= 0 && ReturnLength )
        *ReturnLength = v5;
      return SectionInformation;
    case ProcessSessionInformation:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = sub_140732D40(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      v49 = sub_140300B40((__int64)Object);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_DWORD *)v6 = v49;
      if ( ReturnLength )
        *ReturnLength = 4;
      return 0;
    case ProcessWow64Information:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = sub_140732D40(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      v50 = (unsigned __int64 *)*((_QWORD *)Object + 176);
      if ( v50 )
        v9 = *v50;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_QWORD *)v6 = v9;
      if ( ReturnLength )
        *ReturnLength = 8;
      return 0;
    case ProcessImageFileName:
      result = sub_140732D40(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      v16 = &v242;
      if ( (unsigned int)v5 >= 0x10 )
        v16 = (__int128 *)v6;
      v17 = (void *)(v6 + 16);
      v18 = 0LL;
      if ( (unsigned int)v5 >= 0x10 )
      {
        v18 = v17;
        LODWORD(v9) = v5 - 16;
      }
      v189[0] = v9;
      SectionInformation = sub_1406C6384((__int64)Object, v16, v18, v189);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      if ( SectionInformation >= 0 && !v18 )
        SectionInformation = -1073741820;
      if ( ReturnLength && ((int)(SectionInformation + 0x80000000) < 0 || SectionInformation == -1073741820) )
        *ReturnLength = v189[0] + 16;
      return SectionInformation;
    case ProcessLUIDDeviceMapsEnabled:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      *(_DWORD *)v6 = 1;
      if ( ReturnLength )
        *ReturnLength = 4;
      return 0;
    case ProcessBreakOnTermination:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = sub_140732D40(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      v51 = (*((_DWORD *)Object + 281) >> 13) & 1;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_DWORD *)v6 = v51;
      if ( ReturnLength )
        *ReturnLength = 4;
      return 0;
    case ProcessDebugObjectHandle:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = sub_140732D40(
                 (ULONG_PTR)ProcessHandle,
                 1024,
                 (__int64)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      SectionInformation = sub_1409272A0(Object, v10, &Handle);
      v43 = Handle;
      if ( SectionInformation < 0 )
        v43 = 0LL;
      Handle = v43;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_QWORD *)v6 = Handle;
      if ( ReturnLength )
        *ReturnLength = 8;
      return SectionInformation;
    case ProcessDebugFlags:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = sub_140732D40(
                 (ULONG_PTR)ProcessHandle,
                 1024,
                 (__int64)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      v41 = result;
      if ( result < 0 )
        return result;
      v42 = Object;
      *(_DWORD *)v6 = (*((_DWORD *)Object + 281) & 2) == 0;
      if ( ReturnLength )
        *ReturnLength = 4;
      goto LABEL_154;
    case ProcessHandleTracing:
      if ( (unsigned int)v5 < 0x10 )
        return -1073741820;
      if ( sub_1406C5900(v10) )
        return -1073741790;
      v191 = (unsigned int)(v5 - 16) / 0xA0uLL;
      v52 = v6 + 16;
      result = sub_140732D40(
                 (ULONG_PTR)ProcessHandle,
                 1024,
                 (__int64)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      v53 = result;
      if ( result >= 0 )
      {
        v54 = (struct _EX_RUNDOWN_REF *)Object;
        v55 = sub_14066B3D8((struct _EX_RUNDOWN_REF *)Object);
        v56 = v55;
        v215 = v55;
        if ( v55 )
        {
          v57 = sub_1409F91B8(v55);
          v58 = v57;
          v214 = v57;
          if ( v57 )
          {
            *(_DWORD *)(v6 + 8) = 0;
            v59 = (unsigned int)(*(_DWORD *)(v57 + 72) % *(_DWORD *)(v57 + 4));
            v204 = v59;
            while ( 1 )
            {
              v210 = v9;
              if ( (unsigned int)v9 >= *(_DWORD *)(v58 + 4) )
                break;
              v60 = (_OWORD *)(v58 + 160 * v59);
              v250 = v60[5];
              v251 = v60[6];
              v252 = v60[7];
              v253 = v60[8];
              v254 = v60[9];
              v255 = v60[10];
              v256 = v60[11];
              v257 = v60[12];
              v258 = v60[13];
              v259 = v60[14];
              v61 = v251;
              if ( *(_QWORD *)v6 == (_QWORD)v251 || !*(_QWORD *)v6 )
              {
                v62 = DWORD2(v251);
                if ( DWORD2(v251) )
                {
                  ++*(_DWORD *)(v6 + 8);
                  if ( (_DWORD)v191 )
                  {
                    v191 = (unsigned int)(v191 - 1);
                    v225 = v191;
                    *(_QWORD *)v52 = v61;
                    *(_OWORD *)(v52 + 8) = v250;
                    *(_DWORD *)(v52 + 24) = v62;
                    *(_OWORD *)(v52 + 32) = v252;
                    *(_OWORD *)(v52 + 48) = v253;
                    *(_OWORD *)(v52 + 64) = v254;
                    *(_OWORD *)(v52 + 80) = v255;
                    *(_OWORD *)(v52 + 96) = v256;
                    *(_OWORD *)(v52 + 112) = v257;
                    *(_OWORD *)(v52 + 128) = v258;
                    *(_OWORD *)(v52 + 144) = v259;
                    v52 += 160LL;
                    v240 = v52;
                  }
                  else
                  {
                    v53 = -1073741820;
                    i = -1073741820;
                  }
                }
              }
              if ( !(_DWORD)v59 )
                LODWORD(v59) = *(_DWORD *)(v58 + 4);
              v59 = (unsigned int)(v59 - 1);
              v204 = v59;
              LODWORD(v9) = v9 + 1;
            }
            if ( ReturnLength )
              *ReturnLength = v52 - v6;
            sub_1409F8D78(v56, v58);
            v63 = Object;
            sub_1402AD030((struct _EX_RUNDOWN_REF *)Object + 139);
            ObfDereferenceObjectWithTag(v63, 0x79517350u);
            return v53;
          }
          else
          {
            sub_1402AD030(v54 + 139);
            ObfDereferenceObjectWithTag(v54, 0x79517350u);
            return -1073741811;
          }
        }
        else
        {
          ObfDereferenceObjectWithTag(v54, 0x79517350u);
          return -1073741558;
        }
      }
      return result;
    case ProcessIoPriority:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = sub_140732D40(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      v41 = result;
      i = result;
      if ( result < 0 )
        return result;
      v42 = Object;
      *(_DWORD *)v6 = (*((_DWORD *)Object + 281) >> 27) & 7;
      if ( ReturnLength )
        *ReturnLength = 4;
      goto LABEL_154;
    case ProcessExecuteFlags:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        v64 = (PVOID)*((_QWORD *)KeGetCurrentThread() + 23);
      }
      else
      {
        result = sub_140732D40(
                   (ULONG_PTR)ProcessHandle,
                   1024,
                   (__int64)PsProcessType,
                   v10,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v64 = Object;
      }
      v41 = sub_1406CAB00((__int64)v64, &v192);
      if ( ProcessHandle != (HANDLE)-1LL )
        ObfDereferenceObjectWithTag(v65, 0x79517350u);
      if ( v41 >= 0 )
      {
        *(_DWORD *)v6 = v192;
        if ( ReturnLength )
          *ReturnLength = 4;
      }
      return v41;
    case ProcessCookie:
      v191 = 0LL;
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        v66 = (volatile signed __int32 *)*((_QWORD *)KeGetCurrentThread() + 23);
        v196 = v66;
        Object = (PVOID)v66;
      }
      else
      {
        v216 = 0LL;
        result = ObReferenceObjectByHandle(ProcessHandle, 0x20u, (POBJECT_TYPE)PsProcessType, v10, &v216, 0LL);
        v66 = (volatile signed __int32 *)v216;
        v196 = (volatile signed __int32 *)v216;
        Object = v216;
        if ( result < 0 )
          return result;
      }
      for ( i = 0; ; LODWORD(v9) = i )
      {
        v67 = *((_DWORD *)v66 + 330);
        if ( v67 )
          break;
        KeQuerySystemTimePrecise(&v191);
        CurrentPrcb = KeGetCurrentPrcb();
        LowPart = KeQueryPerformanceCounter(0LL).LowPart;
        v70 = sub_140363220(1);
        v71 = __rdtsc();
        _InterlockedCompareExchange(
          v196 + 330,
          v191 ^ v71 ^ v70 ^ *((_DWORD *)CurrentPrcb + 2884) ^ HIDWORD(v191) ^ LowPart ^ *((_DWORD *)CurrentPrcb + 8272) ^ *((_DWORD *)CurrentPrcb + 8276) ^ *((_DWORD *)CurrentPrcb + 2894),
          0);
        v66 = (volatile signed __int32 *)Object;
        v196 = (volatile signed __int32 *)Object;
      }
      *(_DWORD *)v6 = v67;
      if ( ReturnLength )
        *ReturnLength = 4;
      if ( ProcessHandle != (HANDLE)-1LL )
        ObfDereferenceObject((PVOID)v66);
      return v9;
    case ProcessImageInformation:
      if ( (_DWORD)v5 != 64 )
        return -1073741820;
      result = sub_140732D40(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      SectionInformation = result;
      if ( result < 0 )
        return result;
      v72 = (struct _EX_RUNDOWN_REF *)Object;
      if ( Object == *((PVOID *)v200 + 68) )
      {
        Ptr = (PVOID)*((_QWORD *)Object + 163);
        if ( !Ptr )
          result = -1073741558;
        SectionInformation = result;
      }
      else if ( sub_140347810((struct _EX_RUNDOWN_REF *)Object + 139) )
      {
        Ptr = v72[163].Ptr;
        if ( Ptr )
          ObfReferenceObject(v72[163].Ptr);
        else
          SectionInformation = -1073741811;
        sub_1402AD030(v72 + 139);
        LODWORD(v9) = 1;
      }
      else
      {
        SectionInformation = -1073741558;
        Ptr = 0LL;
        LODWORD(v9) = 1;
      }
      ObfDereferenceObjectWithTag(v72, 0x79517350u);
      if ( SectionInformation >= 0 )
      {
        SectionInformation = MmGetSectionInformation((__int64)Ptr, 1, v6);
        if ( (_DWORD)v9 )
          ObfDereferenceObject(Ptr);
        if ( SectionInformation >= 0 && ReturnLength )
          *ReturnLength = 64;
      }
      return SectionInformation;
    case ProcessCycleTime:
      if ( (_DWORD)v5 != 16 )
        return -1073741820;
      result = sub_140732D40(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      v74 = result;
      if ( result < 0 )
        return result;
      v75 = Object;
      *(_QWORD *)v6 = PsQueryTotalCycleTimeProcess((__int64)Object, (__int64)v217);
      *(_QWORD *)(v6 + 8) = *(_QWORD *)v217;
      if ( ReturnLength )
        *ReturnLength = 16;
      goto LABEL_658;
    case ProcessPagePriority:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = sub_140732D40(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      v41 = result;
      if ( result < 0 )
        return result;
      v42 = Object;
      *(_DWORD *)v6 = (*((_DWORD *)Object + 280) >> 12) & 7;
      if ( ReturnLength )
        *ReturnLength = 4;
      goto LABEL_154;
    case ProcessImageFileNameWin32:
      result = sub_140732D40(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      SectionInformation = result;
      if ( result < 0 )
        return result;
      v20 = (struct _EX_RUNDOWN_REF *)Object;
      v21 = (struct _FILE_OBJECT *)*((_QWORD *)Object + 180);
      v194 = v21;
      if ( v21 )
      {
        if ( sub_140347810((struct _EX_RUNDOWN_REF *)Object + 139) )
        {
          ObfReferenceObject(v21);
          sub_1402AD030(v20 + 139);
        }
        else
        {
          SectionInformation = -1073741558;
        }
      }
      else
      {
        SectionInformation = PsReferenceProcessFilePointer((struct _EX_RUNDOWN_REF *)Object, (__int64 *)&v194);
        v21 = (struct _FILE_OBJECT *)v194;
      }
      ObfDereferenceObjectWithTag(v20, 0x79517350u);
      if ( SectionInformation < 0 )
        return SectionInformation;
      v22 = IoQueryFileDosDeviceName(v21, &ObjectNameInformation);
      ObfDereferenceObject(v21);
      if ( v22 >= 0 )
      {
        v23 = ObjectNameInformation;
        v24 = ObjectNameInformation->Name.MaximumLength + 16;
        if ( v24 <= (unsigned int)v5 )
        {
          *(_WORD *)v6 = ObjectNameInformation->Name.Length;
          *(_WORD *)(v6 + 2) = v23->Name.MaximumLength;
          if ( v23->Name.MaximumLength )
          {
            v9 = v6 + 16;
            memmove((void *)(v6 + 16), v23->Name.Buffer, v23->Name.MaximumLength);
          }
          *(_QWORD *)(v6 + 8) = v9;
        }
        else
        {
          v22 = -1073741820;
          i = -1073741820;
        }
        if ( ReturnLength )
          *ReturnLength = v24;
        ExFreePoolWithTag(v23, 0);
      }
      return v22;
    case ProcessImageFileMapping:
      P = 0LL;
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      v79 = *(_QWORD *)v6;
      v241 = *(_QWORD *)v6;
      result = sub_140732D40(
                 (ULONG_PTR)ProcessHandle,
                 1024,
                 (__int64)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      v41 = sub_140732D40(v79, 1048608, (__int64)IoFileObjectType, v10, 0x79517350u, &v194, 0LL, 0LL);
      v42 = Object;
      if ( v41 < 0 )
        goto LABEL_154;
      v80 = PsReferenceProcessFilePointer((struct _EX_RUNDOWN_REF *)Object, (__int64 *)&P);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      v81 = v194;
      if ( v80 < 0 )
        goto LABEL_369;
      v82 = *((_QWORD *)v194 + 5);
      v83 = P;
      v84 = *((_QWORD *)P + 5);
      v85 = 0;
      if ( v82 != v84 )
        v85 = -1073741823;
      ObfDereferenceObject(v194);
      ObfDereferenceObject(v83);
      result = v85;
      if ( v82 == v84 && ReturnLength )
        *ReturnLength = 0;
      return result;
    case ProcessAffinityUpdateMode:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = sub_140732D40(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      v195 = *((_DWORD *)Object + 280);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      v86 = (v195 >> 19) & 1 | 2;
      if ( (v195 & 0x40000) == 0 )
        v86 = (v195 >> 19) & 1;
      *(_DWORD *)v6 = v86;
      if ( ReturnLength )
        *ReturnLength = 4;
      return 0;
    case ProcessMemoryAllocationMode:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = sub_140732D40(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      v195 = *((_DWORD *)Object + 281);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      LOBYTE(v9) = (v195 & 0x200000) != 0;
      *(_DWORD *)v6 = v9;
      if ( ReturnLength )
        *ReturnLength = 4;
      return 0;
    case ProcessGroupInformation:
      if ( !ReturnLength || (v5 & 1) != 0 )
        return -1073741811;
      result = sub_140732D40(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result >= 0 )
      {
        v88 = sub_1402D7598((__int64)Object);
        v190 = v88;
        v90 = v189[0];
        do
        {
          _BitScanForward(&v91, v88);
          v90 += 2;
          v189[0] = v90;
          if ( v90 <= (unsigned int)v5 )
          {
            *(_WORD *)v6 = v91;
            v6 += 2LL;
            v243 = v6;
          }
          _bittestandreset((signed __int32 *)&v190, v91);
          v88 = v190;
        }
        while ( v190 );
        *ReturnLength = v90;
        v92 = (unsigned int)v5 < v90 ? 0xC0000023 : 0;
        i = v92;
        ObfDereferenceObjectWithTag(v89, 0x79517350u);
        return v92;
      }
      return result;
    case ProcessConsoleHostProcess:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = sub_140732D40(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      v93 = *((_QWORD *)Object + 169);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_QWORD *)v6 = v93;
      if ( ReturnLength )
        *ReturnLength = 8;
      return 0;
    case ProcessWindowInformation:
      memset(v260, 0, sizeof(v260));
      v199 = 0;
      v197 = 0LL;
      v226 = 0LL;
      if ( v10 != 1 )
        return -1073741823;
      result = sub_140732D40((ULONG_PTR)ProcessHandle, 4096, (__int64)PsProcessType, 1, 0x79517350u, &Object, 0LL, 0LL);
      i = result;
      if ( result >= 0 )
      {
        v94 = (struct _EX_RUNDOWN_REF *)Object;
        if ( sub_140347810((struct _EX_RUNDOWN_REF *)Object + 139) )
        {
          sub_14030D5C0((ULONG_PTR)v94, 0LL, (__int64)v260, v95);
          v96 = 0LL;
          Count = (__int64 *)v94[176].Count;
          if ( Count )
            v96 = *Count;
          if ( v96 )
          {
            *(_QWORD *)&v208.Name.Length = *(unsigned int *)(v96 + 16);
            v199 = *(_DWORD *)(*(_QWORD *)&v208.Name.Length + 104LL);
            v98 = *(void **)(*(_QWORD *)&v208.Name.Length + 112LL);
            P = v98;
            *(_DWORD *)&v197.Name.Length = (_DWORD)v98;
            v197.Name.Buffer = (wchar_t *)HIDWORD(v98);
          }
          else
          {
            P = *(PVOID *)(v94[170].Count + 32);
            v99 = (__int64)P + 164;
            if ( (unsigned __int64)P + 164 >= 0x7FFFFFFF0000LL )
              v99 = 0x7FFFFFFF0000LL;
            v199 = *(_DWORD *)v99;
            v208 = 0LL;
            v100 = (__int64)P + 176;
            if ( (unsigned __int64)P + 176 >= 0x7FFFFFFF0000LL )
              v100 = 0x7FFFFFFF0000LL;
            *(_DWORD *)&v208.Name.Length = *(_DWORD *)v100;
            v208.Name.Buffer = *(wchar_t **)(v100 + 8);
            v197 = v208;
            LOWORD(v98) = v208.Name.Length;
          }
          SectionInformation = i;
          sub_1402D0930((__int64)v260, 0LL);
          if ( SectionInformation < 0 )
            goto LABEL_357;
          v101 = (unsigned __int16)v98 + 6;
          if ( ReturnLength )
            *ReturnLength = v101;
          if ( (unsigned int)v5 >= v101 )
          {
            *(_DWORD *)v6 = v199;
            *(_WORD *)(v6 + 4) = (_WORD)v98;
          }
          else
          {
            SectionInformation = -1073741820;
            i = -1073741820;
          }
          if ( SectionInformation >= 0 && (_WORD)v98 )
          {
            v38 = (struct _EX_RUNDOWN_REF *)Object;
            SectionInformation = sub_1407BB560((ULONG_PTR)Object, v197.Name.Length, 1, (__int64)&v226, 0);
          }
          else
          {
LABEL_357:
            v38 = (struct _EX_RUNDOWN_REF *)Object;
          }
          sub_1402AD030(v38 + 139);
LABEL_359:
          ObfDereferenceObjectWithTag(v38, 0x79517350u);
          return SectionInformation;
        }
        else
        {
LABEL_338:
          ObfDereferenceObjectWithTag(v94, 0x79517350u);
          return -1073741558;
        }
      }
      return result;
    case ProcessHandleInformation:
      if ( (unsigned int)v5 < 0x10 )
      {
        if ( ReturnLength )
          *ReturnLength = 16;
        return -1073741820;
      }
      P = 0LL;
      result = ObReferenceObjectByHandle(ProcessHandle, 0x400u, (POBJECT_TYPE)PsProcessType, v10, &P, 0LL);
      if ( result >= 0 )
      {
        v102 = (__int64)v200;
        --*((_WORD *)v200 + 242);
        v103 = (struct _EX_RUNDOWN_REF *)P;
        v104 = sub_14066B3D8((struct _EX_RUNDOWN_REF *)P);
        if ( v104 )
        {
          v80 = sub_1409F8FB8(v104, v6, (unsigned int)v5, ReturnLength);
          sub_1402AD030(v103 + 139);
        }
        else
        {
          v80 = -1073741558;
        }
        sub_1402F9540(v102);
        v81 = v103;
LABEL_369:
        ObfDereferenceObject(v81);
        return v80;
      }
      return result;
    case ProcessMitigationPolicy:
      v205 = 0;
      v184 = 0;
      v185 = 0;
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      v105 = *(_DWORD *)v6;
      v212 = *(_DWORD *)v6;
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        Object = (PVOID)*((_QWORD *)KeGetCurrentThread() + 23);
        v105 = v212;
      }
      else
      {
        result = sub_140732D40(
                   (ULONG_PTR)ProcessHandle,
                   4096,
                   (__int64)PsProcessType,
                   v10,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
      }
      break;
    case ProcessHandleCheckingMode:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = sub_140732D40(
                 (ULONG_PTR)ProcessHandle,
                 1024,
                 (__int64)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      v143 = result;
      i = result;
      if ( result < 0 )
        return result;
      v94 = (struct _EX_RUNDOWN_REF *)Object;
      v144 = sub_14066B3D8((struct _EX_RUNDOWN_REF *)Object);
      if ( !v144 )
        goto LABEL_338;
      LOBYTE(v9) = (*(_BYTE *)(v144 + 44) & 2) != 0;
      *(_DWORD *)v6 = v9;
      goto LABEL_526;
    case ProcessKeepAliveCount:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = sub_140732D40(
                 (ULONG_PTR)ProcessHandle,
                 1024,
                 (__int64)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      v41 = result;
      if ( result < 0 )
        return result;
      v42 = Object;
      *(_DWORD *)v6 = *((_DWORD *)Object + 619) & 0x7FFFFFFF;
      *(_DWORD *)(v6 + 4) = v42[627] & 0x7FFFFFFF;
      goto LABEL_154;
    case ProcessHandleTable:
      *(_QWORD *)&v208.Name.Length = 0LL;
      P = 0LL;
      if ( (unsigned int)v5 < 4 )
        return -1073741820;
      result = sub_1406A904C(v6, v5, *((_BYTE *)KeGetCurrentThread() + 562), IoWriteAccess, &v208, (struct _MDL **)&P);
      if ( result >= 0 )
      {
        v145 = sub_140732D40(
                 (ULONG_PTR)ProcessHandle,
                 1088,
                 (__int64)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
        if ( v145 >= 0 )
        {
          v197 = 0LL;
          v146 = (struct _EX_RUNDOWN_REF *)Object;
          v147 = sub_14066B3D8((struct _EX_RUNDOWN_REF *)Object);
          if ( v147 )
          {
            *(_QWORD *)&v197.Name.Length = *(_QWORD *)&v208.Name.Length;
            v197.Name.Buffer = (wchar_t *)((unsigned int)v5 >> 2);
            ExEnumHandleTable(v147, (__int64)sub_1405E07A0, (__int64)&v197, 0LL);
            sub_1402AD030(v146 + 139);
          }
          else
          {
            LODWORD(v9) = -1073741558;
          }
          ObfDereferenceObjectWithTag(v146, 0x79517350u);
          if ( ReturnLength )
            *ReturnLength = 4 * HIDWORD(v197.Name.Buffer);
          sub_140231450((struct _MDL *)P);
          return v9;
        }
        else
        {
          sub_140231450((struct _MDL *)P);
          return v145;
        }
      }
      return result;
    case ProcessCheckStackExtentsMode:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = sub_140732D40(
                 (ULONG_PTR)ProcessHandle,
                 1024,
                 (__int64)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      v41 = result;
      if ( result < 0 )
        return result;
      v42 = Object;
      *(_DWORD *)v6 = (*((_DWORD *)Object + 158) >> 5) & 1;
      goto LABEL_154;
    case ProcessCommandLineInformation:
      SectionInformation = sub_140732D40(
                             (ULONG_PTR)ProcessHandle,
                             4096,
                             (__int64)PsProcessType,
                             v10,
                             0x79517350u,
                             &Object,
                             0LL,
                             0LL);
      if ( SectionInformation < 0 )
        return SectionInformation;
      v148 = v10;
      v149 = Object;
      ProcessCommandLine = PsQueryProcessCommandLine((ULONG_PTR)Object, v6, v5, v148, ReturnLength);
      goto LABEL_543;
    case ProcessProtectionInformation:
      v22 = sub_140732D40((ULONG_PTR)ProcessHandle, 4096, (__int64)PsProcessType, v10, 0x79517350u, &Object, 0LL, 0LL);
      if ( v22 < 0 )
        return v22;
      if ( (_DWORD)v5 )
      {
        v151 = Object;
        *(_BYTE *)v6 = *((_BYTE *)Object + 2170);
        if ( ReturnLength )
          *ReturnLength = 1;
        v22 = 0;
      }
      else
      {
        v22 = -1073741820;
        v151 = Object;
      }
      if ( !v151 )
        return v22;
      ObfDereferenceObjectWithTag(v151, 0x79517350u);
      return v22;
    case ProcessTelemetryIdInformation:
      SectionInformation = sub_140732D40(
                             (ULONG_PTR)ProcessHandle,
                             4096,
                             (__int64)PsProcessType,
                             v10,
                             0x79517350u,
                             &Object,
                             0LL,
                             0LL);
      if ( SectionInformation < 0 )
        return SectionInformation;
      v152 = v10;
      v149 = Object;
      ProcessCommandLine = sub_140711F48((ULONG_PTR)Object, (char *)v6, (unsigned int)v5, v152, ReturnLength);
LABEL_543:
      SectionInformation = ProcessCommandLine;
      if ( v149 )
        goto LABEL_544;
      return SectionInformation;
    case ProcessCommitReleaseInformation:
      LODWORD(P) = 0;
      if ( (_DWORD)v5 == 32 )
      {
        v197 = *(_OBJECT_NAME_INFORMATION *)v6;
        v198 = *(_OWORD *)(v6 + 16);
        if ( *(_DWORD *)&v197.Name.Length == 3 )
        {
          if ( *(_DWORD *)(&v197.Name.MaximumLength + 1) >= 8u || v197.Name.Buffer )
          {
            v22 = -1073741811;
          }
          else
          {
            v22 = sub_140732D40(
                    (ULONG_PTR)ProcessHandle,
                    4096,
                    (__int64)PsProcessType,
                    v10,
                    0x79517350u,
                    &Object,
                    0LL,
                    0LL);
            if ( v22 >= 0 )
            {
              sub_14024DC34((ULONG_PTR)Object, &P, &v197.Name.Buffer, &v198, (_QWORD *)&v198 + 1);
              *(_DWORD *)(&v197.Name.MaximumLength + 1) ^= ((unsigned __int8)P ^ *((_BYTE *)&v197.Name.MaximumLength + 2)) & 1;
              v197.Name.Buffer = (wchar_t *)((__int64)v197.Name.Buffer << 12);
              *(_QWORD *)&v198 = (_QWORD)v198 << 12;
              *((_QWORD *)&v198 + 1) <<= 12;
              *(_OBJECT_NAME_INFORMATION *)v6 = v197;
              *(_OWORD *)(v6 + 16) = v198;
              v22 = 0;
            }
          }
        }
        else
        {
          v22 = -1073741735;
        }
      }
      else
      {
        v22 = -1073741820;
      }
      if ( !Object )
        return v22;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return v22;
    case ProcessDefaultCpuSetsInformation:
    case ProcessAllowedCpuSetsInformation:
      if ( (v5 & 7) != 0 || (unsigned int)v5 > 0x100 )
        return -1073741820;
      v22 = sub_140732D40((ULONG_PTR)ProcessHandle, 4096, (__int64)PsProcessType, v10, 0x79517350u, &Object, 0LL, 0LL);
      i = v22;
      if ( v22 >= 0 )
      {
        LOBYTE(v9) = ProcessInformationClass == ProcessAllowedCpuSetsInformation;
        v155 = 8 * sub_140572490((__int64)Object, v274, v154, v9);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        v213 = v155;
        if ( ReturnLength )
          *ReturnLength = v155;
        if ( v155 >= (unsigned int)v5 )
          v155 = v5;
        v213 = v155;
        memmove((void *)v6, v274, v155);
      }
      return v22;
    case ProcessJobMemoryInformation:
      if ( (_DWORD)v5 != 40 )
        return -1073741820;
      result = sub_140732D40(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      *(_QWORD *)&v217[32] = 0LL;
      v218 = 0LL;
      if ( *((_QWORD *)Object + 162) )
      {
        sub_14030D5C0((ULONG_PTR)Object, 0LL, (__int64)v249, v76);
        ZwQueryInformationJobObject(0LL, JobObjectReserved11Information, &JobObjectInformation, 0x28u, 0LL);
        ZwQueryInformationJobObject(0LL, JobObjectExtendedLimitInformation, &v261, 0x98u, 0LL);
        sub_1402D0930((__int64)v249, 0LL);
        *(_OWORD *)&v217[16] = JobObjectInformation;
        *(_QWORD *)&v217[8] = v247;
        v77 = v218;
        if ( (v262 & 0x200000) != 0 )
          v77 = v270;
        v218 = v77;
        v78 = *(_QWORD *)&v217[32];
        if ( (v262 & 0x200) != 0 )
          v78 = *((_QWORD *)&v268 + 1);
        *(_QWORD *)&v217[32] = v78;
        *(__m256i *)v6 = *(__m256i *)&v217[8];
        *(_QWORD *)(v6 + 32) = v218;
        if ( ReturnLength )
          *ReturnLength = 40;
      }
      else
      {
        LODWORD(v9) = -1073741394;
      }
      goto LABEL_289;
    case ProcessInPrivate:
      if ( (_DWORD)v5 != 1 )
        return -1073741820;
      result = sub_140732D40(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      v41 = result;
      if ( result < 0 )
        return result;
      v42 = Object;
      *(_BYTE *)v6 = *((int *)Object + 280) < 0;
      goto LABEL_154;
    case ProcessRaiseUMExceptionOnInvalidHandleClose:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = sub_140732D40(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      v143 = result;
      i = result;
      if ( result < 0 )
        return result;
      v94 = (struct _EX_RUNDOWN_REF *)Object;
      v153 = sub_14066B3D8((struct _EX_RUNDOWN_REF *)Object);
      if ( !v153 )
        goto LABEL_338;
      LOBYTE(v9) = (*(_BYTE *)(v153 + 44) & 0x10) != 0;
      *(_DWORD *)v6 = v9;
LABEL_526:
      sub_1402AD030(v94 + 139);
      ObfDereferenceObjectWithTag(v94, 0x79517350u);
      return v143;
    case ProcessIumChallengeResponse:
      return sub_1409B314C(ProcessHandle, v6, (unsigned int)v5, ReturnLength);
    case ProcessChildProcessInformation:
      if ( (_DWORD)v5 != 3 )
        return -1073741820;
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        v156 = (_QWORD *)*((_QWORD *)KeGetCurrentThread() + 23);
        Object = v156;
      }
      else
      {
        result = sub_140732D40(
                   (ULONG_PTR)ProcessHandle,
                   1024,
                   (__int64)PsProcessType,
                   v10,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v156 = Object;
      }
      v157 = sub_1406E9BE0((__int64)v156);
      *(_WORD *)v6 = 0;
      *(_BYTE *)(v6 + 2) = 0;
      v158 = v157 - 1;
      if ( !v158 )
        goto LABEL_595;
      v159 = v158 - 1;
      if ( v159 )
      {
        if ( v159 == 1 )
          *(_BYTE *)(v6 + 2) = 1;
      }
      else
      {
        *(_BYTE *)(v6 + 1) = 1;
LABEL_595:
        *(_BYTE *)v6 = 1;
      }
      if ( ReturnLength )
        *ReturnLength = 3;
      if ( ProcessHandle == (HANDLE)-1LL )
        return v9;
LABEL_599:
      ObfDereferenceObjectWithTag(v156, 0x79517350u);
      return 0;
    case ProcessHighGraphicsPriorityInformation:
      if ( (_DWORD)v5 != 1 )
        return -1073741820;
      result = sub_140732D40(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      v41 = result;
      if ( result < 0 )
        return result;
      v42 = Object;
      *(_BYTE *)v6 = (*((_DWORD *)Object + 543) & 0x200) != 0;
      goto LABEL_154;
    case ProcessSubsystemInformation:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = sub_140732D40(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      v41 = result;
      if ( result < 0 )
        return result;
      v42 = Object;
      if ( *((_QWORD *)Object + 280) )
        LODWORD(v9) = qword_140C1BE50;
      *(_DWORD *)v6 = v9;
      if ( ReturnLength )
        *ReturnLength = 4;
      goto LABEL_154;
    case ProcessEnergyValues:
      memset(v273, 0, sizeof(v273));
      result = sub_140732D40(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      v74 = result;
      i = result;
      if ( result < 0 )
        return result;
      v75 = Object;
      sub_1407A8280(Object, v273);
      v160 = 432LL;
      if ( (unsigned int)v5 <= 0x1B0 )
        v160 = (unsigned int)v5;
      memmove((void *)v6, v273, v160);
      if ( ReturnLength )
        *ReturnLength = 432;
      goto LABEL_658;
    case ProcessPowerThrottlingState:
      v244 = 0LL;
      v245 = 0;
      if ( (_DWORD)v5 != 12 )
        return -1073741820;
      if ( !sub_1403614FC((struct _EX_RUNDOWN_REF *)qword_140D06AA8) )
        return -1073741822;
      v161 = sub_140732D40((ULONG_PTR)ProcessHandle, 4096, (__int64)PsProcessType, v10, 0x79517350u, &Object, 0LL, 0LL);
      if ( v161 >= 0 )
      {
        v162 = Object;
        v161 = sub_14042A5E0(Object, &v244);
        i = v161;
        if ( v161 >= 0 )
        {
          *(_QWORD *)v6 = v244;
          *(_DWORD *)(v6 + 8) = v245;
          if ( ReturnLength )
            *ReturnLength = 12;
          v161 = 0;
          i = 0;
        }
        ObfDereferenceObjectWithTag(v162, 0x79517350u);
      }
      sub_1403614E0((struct _EX_RUNDOWN_REF *)qword_140D06AA8);
      return v161;
    case ProcessWin32kSyscallFilterInformation:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        v163 = (_DWORD *)*((_QWORD *)KeGetCurrentThread() + 23);
        Object = v163;
      }
      else
      {
        result = sub_140732D40(
                   (ULONG_PTR)ProcessHandle,
                   1024,
                   (__int64)PsProcessType,
                   v10,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v163 = Object;
      }
      *(_DWORD *)v6 = 0;
      v164 = v163[628];
      v165 = 0;
      if ( (v164 & 0x4000) != 0 )
      {
        v165 = 1;
        *(_DWORD *)v6 = 1;
        v164 = v163[628];
      }
      if ( (v164 & 0x8000) != 0 )
        *(_DWORD *)v6 = v165 | 2;
      *(_DWORD *)(v6 + 4) = v163[602];
      if ( ReturnLength )
        *ReturnLength = 8;
      if ( ProcessHandle == (HANDLE)-1LL )
        return v9;
      ObfDereferenceObjectWithTag(v163, 0x79517350u);
      return 0;
    case ProcessWakeInformation:
      if ( v10 )
        return -1073741790;
      if ( (_DWORD)v5 != 48 )
        return -1073741820;
      result = sub_140732D40((ULONG_PTR)ProcessHandle, 4096, (__int64)PsProcessType, 0, 0x79517350u, &Object, 0LL, 0LL);
      if ( result >= 0 )
      {
        v149 = Object;
        SectionInformation = sub_1406C32B0((__int64)v200, (__int64)Object, v6);
        if ( SectionInformation >= 0 && ReturnLength )
        {
          *ReturnLength = 48;
          ObfDereferenceObjectWithTag(v149, 0x79517350u);
          return SectionInformation;
        }
        else
        {
LABEL_544:
          ObfDereferenceObjectWithTag(v149, 0x79517350u);
          return SectionInformation;
        }
      }
      return result;
    case ProcessEnergyTrackingState:
      memset(v271, 0, sizeof(v271));
      if ( (unsigned int)v5 < 8 )
        return -1073741820;
      result = sub_140732D40(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      i = result;
      if ( result < 0 )
        return result;
      v156 = Object;
      sub_14099A188(Object, v271);
      if ( (unsigned int)v5 >= 0x90 )
        LODWORD(v5) = 144;
      memmove((void *)v6, v271, (unsigned int)v5);
      if ( ReturnLength )
        *ReturnLength = v5;
      i = 0;
      goto LABEL_599;
    case ProcessCaptureTrustletLiveDump:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = sub_140732D40(
                 (ULONG_PTR)ProcessHandle,
                 1048,
                 (__int64)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      v75 = Object;
      v166 = *((_QWORD *)Object + 124);
      if ( v166 )
      {
        *(_QWORD *)&v250 = 0LL;
        v251 = 0LL;
        v252 = 0LL;
        v253 = 0LL;
        v254 = 0LL;
        v255 = 0LL;
        *(_QWORD *)&v256 = 0LL;
        *((_QWORD *)&v250 + 1) = v166;
        v74 = sub_140358A20(2u, 61, 0, (__int64)&v250);
LABEL_658:
        ObfDereferenceObjectWithTag(v75, 0x79517350u);
        return v74;
      }
      else
      {
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741790;
      }
    case ProcessTelemetryCoverage:
      result = sub_140732D40(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      IsSecureKernel = sub_1409E4F10(Object, v6, (unsigned int)v5, ReturnLength);
LABEL_153:
      v41 = IsSecureKernel;
      v42 = Object;
      goto LABEL_154;
    case ProcessEnableReadWriteVmLogging:
    case ProcessEnableLogging:
      if ( ProcessInformationClass == ProcessEnableReadWriteVmLogging && !(_DWORD)v5
        || ProcessInformationClass == ProcessEnableLogging && (unsigned int)v5 < 4 )
      {
        return -1073741820;
      }
      result = sub_140732D40(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      v167 = result;
      if ( result >= 0 )
      {
        v168 = Object;
        *(_BYTE *)v6 = HIBYTE(*((_DWORD *)Object + 280)) & 3;
        if ( ProcessInformationClass == ProcessEnableLogging )
          *(_DWORD *)v6 |= (v168[543] & 0x180000 | ((v168[543] & 0x10000000 | (v168[543] >> 2) & 0x8000000u) >> 6)) >> 17;
        ObfDereferenceObjectWithTag(v168, 0x79517350u);
        return v167;
      }
      return result;
    case ProcessUptimeInformation:
      v236 = 0LL;
      v237 = 0LL;
      result = sub_140732D40(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      i = result;
      if ( result < 0 )
        return result;
      v220 = 0LL;
      v221 = 0LL;
      v222 = 0LL;
      v224 = 0LL;
      v170 = (__int64)v200;
      --*((_WORD *)v200 + 242);
      v171 = Object;
      ExAcquirePushLockSharedEx((ULONG_PTR)Object + 1080, 0LL);
      v172 = v171[292] >> 61;
      if ( (unsigned __int64)(v172 - 3) <= 1
        && (v222 = v171[292] & 0x1FFFFFFFFFFFFFFFLL, v220 = v171[291], v221 = v220 - v171[288], v172 == 3) )
      {
        v173 = 512;
      }
      else
      {
        v173 = v224;
      }
      LODWORD(v224) = v173 & 0xFFFFFE00 | *((_BYTE *)v171 + 2171) & 7 | (2
                                                                       * (*((_BYTE *)v171 + 2171) & 0x38 | (32 * (*((_DWORD *)v171 + 543) & 4))));
      if ( _InterlockedCompareExchange64(v171 + 135, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v171 + 135);
      sub_1402AFC00((ULONG_PTR)(v171 + 135));
      sub_1402AC800(v170);
      v156 = Object;
      sub_140711CD4((signed __int64 *)Object, &v236);
      v219 = v236;
      v223 = v237;
      if ( !v221 )
        v221 = v236 - v156[288];
      if ( !v222 )
        v222 = *((_QWORD *)&v236 + 1) - v156[289] - v237;
      if ( (unsigned int)v5 >= 0x38 )
        LODWORD(v5) = 56;
      memmove((void *)v6, &v219, (unsigned int)v5);
      if ( ReturnLength )
        *ReturnLength = v5;
      i = 0;
      goto LABEL_599;
    case ProcessImageSection:
      v207[0] = 0LL;
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      if ( v10 )
      {
        if ( v6 < 0x7FFFFFFF0000LL )
          v13 = v6;
        *(_QWORD *)v13 = *(_QWORD *)v13;
      }
      v169 = (PVOID *)*((_QWORD *)KeGetCurrentThread() + 23);
      Object = v169;
      if ( ProcessHandle != (HANDLE)-1LL || v169 != *((PVOID **)CurrentThread + 68) )
        return -1073741790;
      result = ObOpenObjectByPointer(v169[163], 0, 0LL, 5u, MmSectionObjectType, v10, v207);
      i = result;
      if ( result >= 0 )
      {
        *(HANDLE *)v6 = v207[0];
        if ( ReturnLength )
          *ReturnLength = 8;
      }
      return result;
    case ProcessSequenceNumber:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = sub_140732D40(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      v41 = result;
      if ( result < 0 )
        return result;
      v42 = Object;
      *(_QWORD *)v6 = *((_QWORD *)Object + 287);
      if ( ReturnLength )
        *ReturnLength = 8;
LABEL_154:
      ObfDereferenceObjectWithTag(v42, 0x79517350u);
      return v41;
    case ProcessSecurityDomainInformation:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = sub_140732D40(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      i = result;
      if ( result < 0 )
        return result;
      if ( (*((_DWORD *)Object + 280) & 0x8000) != 0 )
      {
        _InterlockedOr(v179, 0);
        *(_QWORD *)v6 = *((_QWORD *)Object + 316);
        if ( ReturnLength )
          *ReturnLength = 8;
        i = 0;
LABEL_289:
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return v9;
      }
      else
      {
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741700;
      }
    case ProcessLeapSecondInformation:
      if ( (_DWORD)v5 == 8 )
      {
        if ( ProcessHandle == (HANDLE)-1LL )
        {
          v174 = (_QWORD *)*((_QWORD *)KeGetCurrentThread() + 23);
          Object = v174;
          i = 0;
          v175 = v174[170];
          if ( v175 )
          {
            v176 = 0LL;
            v177 = (__int64 *)v174[176];
            if ( v177 )
              v176 = *v177;
            if ( v176 )
            {
              if ( (*(_DWORD *)(v176 + 1140) & 1) != 0 )
                LODWORD(v206) = 1;
            }
            else
            {
              v178 = v206;
              if ( (*(_BYTE *)(v175 + 1984) & 1) != 0 )
                v178 = 1;
              LODWORD(v206) = v178;
            }
          }
          *(_QWORD *)v6 = v206;
          if ( ReturnLength )
            *ReturnLength = 8;
          return v9;
        }
        else
        {
          return -1073741811;
        }
      }
      else
      {
        if ( ReturnLength )
          *ReturnLength = 8;
        return -1073741820;
      }
    default:
      return -1073741821;
  }
  switch ( v105 )
  {
    case 1:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v106 = Object;
      v107 = *((_DWORD *)Object + 628);
      if ( (v107 & 0x40) == 0 )
      {
        *(_DWORD *)(v6 + 4) |= 1u;
        v107 = v106[628];
      }
      if ( (v107 & 0x10) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 2u;
        v107 = v106[628];
      }
      if ( (v107 & 0x20) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 4u;
        v107 = v106[628];
      }
      if ( (v107 & 8) != 0 )
        *(_DWORD *)(v6 + 4) |= 8u;
      goto LABEL_519;
    case 2:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v113 = Object;
      v114 = *((_DWORD *)Object + 628);
      if ( (v114 & 0x100) != 0 )
      {
        v115 = *(_DWORD *)(v6 + 4) | 1;
      }
      else
      {
        if ( (v114 & 0x800) == 0 )
          goto LABEL_409;
        v115 = *(_DWORD *)(v6 + 4) | 8;
      }
      *(_DWORD *)(v6 + 4) = v115;
LABEL_409:
      v116 = v113[628];
      if ( (v116 & 0x200) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 2u;
        v116 = v113[628];
      }
      if ( (v116 & 0x400) != 0 )
        *(_DWORD *)(v6 + 4) |= 4u;
      goto LABEL_519;
    case 3:
      i = 0;
      v108 = sub_14066B3D8((struct _EX_RUNDOWN_REF *)Object);
      if ( v108 )
      {
        sub_14025C4BC(v108, &v184, &v185);
        *(_DWORD *)(v6 + 4) = 0;
        if ( v184 )
          *(_DWORD *)(v6 + 4) |= 1u;
        if ( v185 )
          *(_DWORD *)(v6 + 4) |= 2u;
        sub_1402AD030((struct _EX_RUNDOWN_REF *)Object + 139);
      }
      else
      {
        i = -1073741558;
      }
      goto LABEL_519;
    case 4:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v109 = *((_DWORD *)Object + 628);
      if ( (v109 & 0x1000) != 0 )
      {
        v110 = *(_DWORD *)(v6 + 4) | 1;
      }
      else
      {
        if ( (v109 & 0x2000) == 0 )
          goto LABEL_397;
        v110 = *(_DWORD *)(v6 + 4) | 2;
      }
      *(_DWORD *)(v6 + 4) = v110;
LABEL_397:
      if ( !(unsigned int)sub_140417880() )
        goto LABEL_519;
      v111 = *((_DWORD *)Object + 732);
      if ( (v111 & 2) != 0 )
      {
        v112 = *(_DWORD *)(v6 + 4) | 4;
      }
      else
      {
        if ( (v111 & 4) == 0 )
          goto LABEL_519;
        v112 = *(_DWORD *)(v6 + 4) | 8;
      }
      *(_DWORD *)(v6 + 4) = v112;
      goto LABEL_519;
    case 6:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      if ( (*((_DWORD *)Object + 628) & 0x80u) != 0 )
        *(_DWORD *)(v6 + 4) |= 1u;
      goto LABEL_519;
    case 7:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v117 = Object;
      v118 = *((_DWORD *)Object + 628);
      if ( (v118 & 1) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 1u;
        v118 = v117[628];
      }
      if ( (v118 & 2) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 2u;
        v118 = v117[628];
      }
      if ( (v118 & 4) != 0 )
        *(_DWORD *)(v6 + 4) |= 4u;
      v119 = Object;
      v120 = *((_DWORD *)Object + 629);
      if ( (v120 & 0x2000000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 8u;
        v120 = v119[629];
      }
      if ( (v120 & 0x4000000) != 0 )
        *(_DWORD *)(v6 + 4) |= 0x10u;
      goto LABEL_519;
    case 8:
      i = 0;
      sub_1406E9920((__int64)Object, &v205);
      *(_DWORD *)(v6 + 4) = v205;
      goto LABEL_519;
    case 9:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v121 = *((_DWORD *)Object + 628);
      if ( (v121 & 0x10000) != 0 )
      {
        v122 = *(_DWORD *)(v6 + 4) | 1;
      }
      else
      {
        if ( (v121 & 0x20000) == 0 )
          goto LABEL_519;
        v122 = *(_DWORD *)(v6 + 4) | 2;
      }
      *(_DWORD *)(v6 + 4) = v122;
      goto LABEL_519;
    case 10:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v123 = Object;
      v124 = *((_DWORD *)Object + 628);
      if ( (v124 & 0x80000) != 0 )
      {
        v125 = *(_DWORD *)(v6 + 4) | 1;
      }
      else
      {
        if ( (v124 & 0x100000) == 0 )
          goto LABEL_440;
        v125 = *(_DWORD *)(v6 + 4) | 8;
      }
      *(_DWORD *)(v6 + 4) = v125;
LABEL_440:
      v126 = v123[628];
      if ( (v126 & 0x200000) != 0 )
      {
        v127 = *(_DWORD *)(v6 + 4) | 2;
      }
      else
      {
        if ( (v126 & 0x400000) == 0 )
          goto LABEL_445;
        v127 = *(_DWORD *)(v6 + 4) | 0x10;
      }
      *(_DWORD *)(v6 + 4) = v127;
LABEL_445:
      if ( (v123[628] & 0x40000) != 0 )
        *(_DWORD *)(v6 + 4) |= 4u;
      goto LABEL_519;
    case 11:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      *(_DWORD *)(v6 + 4) = PsGetWin32KFilterSet() & 0xF | *(_DWORD *)(v6 + 4) & 0xFFFFFFF0;
      goto LABEL_519;
    case 12:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v128 = Object;
      v129 = *((_DWORD *)Object + 629);
      if ( (v129 & 1) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 1u;
        v129 = v128[629];
      }
      if ( (v129 & 4) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 4u;
        v129 = v128[629];
      }
      if ( (v129 & 0x400) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x10u;
        v129 = v128[629];
      }
      if ( (v129 & 0x10) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x40u;
        v129 = v128[629];
      }
      if ( (v129 & 0x40) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x100u;
        v129 = v128[629];
      }
      if ( (v129 & 0x100) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x400u;
        v129 = v128[629];
      }
      if ( (v129 & 2) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 2u;
        v129 = v128[629];
      }
      if ( (v129 & 8) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 8u;
        v129 = v128[629];
      }
      if ( (v129 & 0x800) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x20u;
        v129 = v128[629];
      }
      if ( (v129 & 0x20) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x80u;
        v129 = v128[629];
      }
      if ( (v129 & 0x80u) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x200u;
        v129 = v128[629];
      }
      if ( (v129 & 0x200) != 0 )
        *(_DWORD *)(v6 + 4) |= 0x800u;
      goto LABEL_519;
    case 13:
      i = 0;
      v130 = sub_1406E9BE0((__int64)Object);
      *(_DWORD *)(v6 + 4) = 0;
      v131 = v130 - 1;
      if ( !v131 )
        goto LABEL_479;
      v132 = v131 - 1;
      if ( v132 )
      {
        if ( v132 != 1 )
          goto LABEL_519;
        v133 = *(_DWORD *)(v6 + 4) | 2;
      }
      else
      {
        *(_DWORD *)(v6 + 4) |= 4u;
LABEL_479:
        v133 = *(_DWORD *)(v6 + 4) | 1;
      }
      *(_DWORD *)(v6 + 4) = v133;
      goto LABEL_519;
    case 14:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v137 = Object;
      v138 = *((_DWORD *)Object + 628);
      if ( (v138 & 0x40000000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 1u;
        v138 = v137[628];
      }
      if ( v138 < 0 )
        *(_DWORD *)(v6 + 4) |= 2u;
      v139 = Object;
      v140 = *((_DWORD *)Object + 629);
      if ( (v140 & 0x1000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 4u;
        v140 = v139[629];
      }
      if ( (v140 & 0x2000) != 0 )
        *(_DWORD *)(v6 + 4) |= 8u;
      goto LABEL_519;
    case 15:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v141 = Object;
      v142 = *((_DWORD *)Object + 629);
      if ( (v142 & 0x4000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 1u;
        v142 = v141[629];
      }
      if ( (v142 & 0x8000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 2u;
        v142 = v141[629];
      }
      if ( (v142 & 0x20000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 4u;
        v142 = v141[629];
      }
      if ( (v142 & 0x40000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 8u;
        v142 = v141[629];
      }
      if ( (v142 & 0x100000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x10u;
        v142 = v141[629];
      }
      if ( (v142 & 0x200000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x20u;
        v142 = v141[629];
      }
      if ( (v142 & 0x400000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x40u;
        v142 = v141[629];
      }
      if ( (v142 & 0x800000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x80u;
        v142 = v141[629];
      }
      if ( (v142 & 0x40000000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x100u;
        v142 = v141[629];
      }
      if ( v142 < 0 )
        *(_DWORD *)(v6 + 4) |= 0x200u;
      goto LABEL_519;
    case 16:
      i = 0;
      v134 = sub_1406DEAEC((__int64)Object);
      *(_DWORD *)(v6 + 4) = 0;
      v135 = v134 - 1;
      if ( v135 )
      {
        if ( v135 != 1 )
          goto LABEL_519;
        v136 = *(_DWORD *)(v6 + 4) | 2;
      }
      else
      {
        v136 = *(_DWORD *)(v6 + 4) | 1;
      }
      *(_DWORD *)(v6 + 4) = v136;
LABEL_519:
      if ( ProcessHandle != (HANDLE)-1LL )
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return i;
    default:
      i = -1073741637;
      goto LABEL_519;
  }
}
