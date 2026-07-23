/*
 * XREFs of PopBatteryWorker @ 0x140870230
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x140212E84 (_tlgKeywordOn.c)
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     KiSetTimerEx @ 0x140252700 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x140252980 (KeCancelTimer.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402E7464 (KiQueryUnbiasedInterruptTime.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6B24 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     DbgPrintEx @ 0x14032A560 (DbgPrintEx.c)
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     IoCancelIrp @ 0x140351890 (IoCancelIrp.c)
 *     _tlgCreate1Sz_char @ 0x1403C3CBC (_tlgCreate1Sz_char.c)
 *     PopBatteryQueueWork @ 0x1403C5DF8 (PopBatteryQueueWork.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x140411A50 (ExfUnblockPushLock.c)
 *     ZwQueryWnfStateData @ 0x14041D460 (ZwQueryWnfStateData.c)
 *     ZwUpdateWnfStateData @ 0x14041E260 (ZwUpdateWnfStateData.c)
 *     PopSetPowerSettingValueAcDc @ 0x1407A7A80 (PopSetPowerSettingValueAcDc.c)
 *     PopResetCBTriggers @ 0x140825B3C (PopResetCBTriggers.c)
 *     PopBatteryApplyCompositeState @ 0x140870950 (PopBatteryApplyCompositeState.c)
 *     PopBatteryEstimatesSpoiled @ 0x140870EAC (PopBatteryEstimatesSpoiled.c)
 *     PopAccountBatteryEnergyChange @ 0x140994B70 (PopAccountBatteryEnergyChange.c)
 *     PopBatteryInitialize @ 0x1409953C8 (PopBatteryInitialize.c)
 *     PopBatteryQueryEstimatedTime @ 0x140995558 (PopBatteryQueryEstimatedTime.c)
 *     PopBatteryQueryStatus @ 0x1409955E0 (PopBatteryQueryStatus.c)
 *     PopBatteryReadTag @ 0x140995764 (PopBatteryReadTag.c)
 *     PopBatteryUpdateCompositeInformation @ 0x140995A68 (PopBatteryUpdateCompositeInformation.c)
 *     PopBatteryWaitTag @ 0x140995BC4 (PopBatteryWaitTag.c)
 *     PopEstimateChargeTime @ 0x140995C34 (PopEstimateChargeTime.c)
 *     PopEvaluateWeakChargerState @ 0x140995E40 (PopEvaluateWeakChargerState.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

void PopBatteryWorker()
{
  unsigned int v0; // esi
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v2; // eax
  __int64 v3; // rcx
  int v4; // r14d
  __int64 *i; // rbx
  __int64 *j; // rbx
  int v7; // eax
  __int64 v8; // rdx
  unsigned __int32 v9; // r15d
  bool v10; // di
  __int64 v11; // rax
  unsigned __int32 v12; // r13d
  __int64 k; // rbx
  __int64 v14; // rbx
  char v15; // al
  __int64 v16; // rcx
  unsigned int v17; // r9d
  __int64 v18; // r8
  int v19; // r10d
  int v20; // r12d
  unsigned int v21; // r15d
  int v22; // ebx
  char v23; // di
  int v24; // ecx
  int v25; // ebx
  __int64 *m; // rbx
  unsigned __int8 v27; // al
  unsigned int v28; // ebx
  __int64 v29; // rax
  const CHAR *v30; // rsi
  const CHAR *v31; // r12
  const CHAR *v32; // r13
  const CHAR *v33; // rdx
  char v34; // r8
  const CHAR *v35; // rdx
  unsigned __int8 v36; // r8
  unsigned __int8 v37; // r11
  const CHAR *v38; // rdx
  char v39; // r8
  const CHAR *v40; // rdx
  char v41; // r8
  const CHAR *v42; // rdx
  char v43; // r8
  const CHAR *v44; // rdx
  char v45; // r8
  const CHAR *v46; // rdx
  const CHAR *v47; // r8
  const CHAR *v48; // rdx
  int v49; // r9d
  unsigned int v50; // r10d
  __int64 v51; // r11
  unsigned int v52; // eax
  unsigned __int64 v53; // rax
  char v54; // bl
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 *v59; // rbx
  __int64 v60; // rsi
  __int64 **v61; // rcx
  _DWORD *v62; // rsi
  int v63; // edx
  int EstimatedTime; // eax
  int v65; // ecx
  int v66; // eax
  __int64 v67; // r11
  int v68; // esi
  int v69; // eax
  bool v70; // di
  int v71; // eax
  int v72; // edi
  int v73; // eax
  int v74; // eax
  unsigned int v75; // eax
  int v76; // eax
  __int64 v77; // rcx
  __int64 *v78; // rdi
  int v79; // eax
  unsigned int v80; // ecx
  NTSTATUS updated; // esi
  int v82; // r9d
  const CHAR *v83; // rdx
  const CHAR *v84; // r9
  const CHAR *v85; // rdx
  const CHAR *v86; // r9
  unsigned __int8 v87; // r8
  const CHAR *v88; // rdx
  const CHAR *v89; // r9
  const CHAR *v90; // rdx
  char v91; // r8
  unsigned __int8 v92; // r8
  unsigned __int8 v93; // r11
  char v94; // r8
  const CHAR *v95; // rdx
  char v96; // r8
  const CHAR *v97; // rdx
  char v98; // r8
  const CHAR *v99; // rdx
  char v100; // r8
  const CHAR *v101; // rdx
  const CHAR *v102; // rdx
  unsigned int v103; // r10d
  __int64 v104; // r11
  unsigned int v105; // eax
  unsigned __int64 v106; // rax
  const CHAR *v107; // rdx
  int v108; // r9d
  __int64 v109; // r11
  NTSTATUS v110; // eax
  signed __int32 v111[8]; // [rsp+8h] [rbp-100h] BYREF
  PVOID Buffer; // [rsp+28h] [rbp-E0h]
  PULONG BufferSize; // [rsp+30h] [rbp-D8h]
  LOGICAL CheckStamp; // [rsp+38h] [rbp-D0h]
  int v115; // [rsp+40h] [rbp-C8h]
  int v116; // [rsp+48h] [rbp-C0h]
  char v117; // [rsp+58h] [rbp-B0h]
  bool v118; // [rsp+59h] [rbp-AFh] BYREF
  bool v119; // [rsp+5Ah] [rbp-AEh] BYREF
  int v120; // [rsp+5Ch] [rbp-ACh]
  unsigned __int32 v121; // [rsp+60h] [rbp-A8h]
  int v122; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v123; // [rsp+68h] [rbp-A0h] BYREF
  int v124; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v125; // [rsp+74h] [rbp-94h] BYREF
  int v126; // [rsp+78h] [rbp-90h] BYREF
  int v127; // [rsp+7Ch] [rbp-8Ch] BYREF
  unsigned int v128; // [rsp+80h] [rbp-88h] BYREF
  int v129; // [rsp+84h] [rbp-84h] BYREF
  int v130; // [rsp+88h] [rbp-80h] BYREF
  int v131; // [rsp+90h] [rbp-78h] BYREF
  __int64 v132; // [rsp+94h] [rbp-74h]
  unsigned int v133; // [rsp+9Ch] [rbp-6Ch]
  ULONG v134; // [rsp+A0h] [rbp-68h] BYREF
  int v135; // [rsp+A4h] [rbp-64h]
  __int64 v136; // [rsp+A8h] [rbp-60h] BYREF
  ULONG ChangeStamp; // [rsp+B0h] [rbp-58h] BYREF
  BOOL v138; // [rsp+B4h] [rbp-54h] BYREF
  NTSTATUS v139; // [rsp+B8h] [rbp-50h] BYREF
  int v140; // [rsp+BCh] [rbp-4Ch] BYREF
  __int64 v141; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v142; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v143; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v144; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v145; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v146; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v147; // [rsp+F0h] [rbp-18h] BYREF
  __int128 v148; // [rsp+F8h] [rbp-10h]
  __int128 v149; // [rsp+108h] [rbp+0h] BYREF
  __int128 v150; // [rsp+118h] [rbp+10h]
  _BYTE v151[24]; // [rsp+128h] [rbp+20h] BYREF
  int v152; // [rsp+140h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v153; // [rsp+148h] [rbp+40h] BYREF
  int *v154; // [rsp+168h] [rbp+60h]
  __int64 v155; // [rsp+170h] [rbp+68h]
  char v156[16]; // [rsp+178h] [rbp+70h] BYREF
  char v157[16]; // [rsp+188h] [rbp+80h] BYREF
  char v158[16]; // [rsp+198h] [rbp+90h] BYREF
  char v159[16]; // [rsp+1A8h] [rbp+A0h] BYREF
  char v160[16]; // [rsp+1B8h] [rbp+B0h] BYREF
  char v161[16]; // [rsp+1C8h] [rbp+C0h] BYREF
  char v162[16]; // [rsp+1D8h] [rbp+D0h] BYREF
  char v163[16]; // [rsp+1E8h] [rbp+E0h] BYREF
  unsigned int *v164; // [rsp+1F8h] [rbp+F0h]
  __int64 v165; // [rsp+200h] [rbp+F8h]
  int *v166; // [rsp+208h] [rbp+100h]
  __int64 v167; // [rsp+210h] [rbp+108h]
  int *v168; // [rsp+218h] [rbp+110h]
  __int64 v169; // [rsp+220h] [rbp+118h]
  int *v170; // [rsp+228h] [rbp+120h]
  __int64 v171; // [rsp+230h] [rbp+128h]
  __int64 *v172; // [rsp+238h] [rbp+130h]
  __int64 v173; // [rsp+240h] [rbp+138h]
  char *v174; // [rsp+248h] [rbp+140h]
  __int64 v175; // [rsp+250h] [rbp+148h]
  int *v176; // [rsp+258h] [rbp+150h]
  __int64 v177; // [rsp+260h] [rbp+158h]
  __int64 *v178; // [rsp+268h] [rbp+160h]
  __int64 v179; // [rsp+270h] [rbp+168h]
  unsigned int *v180; // [rsp+278h] [rbp+170h]
  __int64 v181; // [rsp+280h] [rbp+178h]
  int *v182; // [rsp+288h] [rbp+180h]
  __int64 v183; // [rsp+290h] [rbp+188h]
  __int64 *v184; // [rsp+298h] [rbp+190h]
  __int64 v185; // [rsp+2A0h] [rbp+198h]
  struct _EVENT_DATA_DESCRIPTOR v186; // [rsp+2A8h] [rbp+1A0h] BYREF
  int *v187; // [rsp+2C8h] [rbp+1C0h]
  __int64 v188; // [rsp+2D0h] [rbp+1C8h]
  char v189[16]; // [rsp+2D8h] [rbp+1D0h] BYREF
  char v190[16]; // [rsp+2E8h] [rbp+1E0h] BYREF
  char v191[16]; // [rsp+2F8h] [rbp+1F0h] BYREF
  char v192[16]; // [rsp+308h] [rbp+200h] BYREF
  char v193[16]; // [rsp+318h] [rbp+210h] BYREF
  char v194[16]; // [rsp+328h] [rbp+220h] BYREF
  char v195[16]; // [rsp+338h] [rbp+230h] BYREF
  char v196[16]; // [rsp+348h] [rbp+240h] BYREF
  unsigned int *v197; // [rsp+358h] [rbp+250h]
  __int64 v198; // [rsp+360h] [rbp+258h]
  int *v199; // [rsp+368h] [rbp+260h]
  __int64 v200; // [rsp+370h] [rbp+268h]
  char *v201; // [rsp+378h] [rbp+270h]
  __int64 v202; // [rsp+380h] [rbp+278h]
  __int64 *v203; // [rsp+388h] [rbp+280h]
  __int64 v204; // [rsp+390h] [rbp+288h]
  int *v205; // [rsp+398h] [rbp+290h]
  __int64 v206; // [rsp+3A0h] [rbp+298h]
  int *v207; // [rsp+3A8h] [rbp+2A0h]
  __int64 v208; // [rsp+3B0h] [rbp+2A8h]
  int *v209; // [rsp+3B8h] [rbp+2B0h]
  __int64 v210; // [rsp+3C0h] [rbp+2B8h]
  unsigned int *v211; // [rsp+3C8h] [rbp+2C0h]
  __int64 v212; // [rsp+3D0h] [rbp+2C8h]
  char v213[16]; // [rsp+3D8h] [rbp+2D0h] BYREF
  int *v214; // [rsp+3E8h] [rbp+2E0h]
  __int64 v215; // [rsp+3F0h] [rbp+2E8h]
  __int64 *v216; // [rsp+3F8h] [rbp+2F0h]
  __int64 v217; // [rsp+400h] [rbp+2F8h]
  struct _EVENT_DATA_DESCRIPTOR v218; // [rsp+408h] [rbp+300h] BYREF
  bool *v219; // [rsp+428h] [rbp+320h]
  __int64 v220; // [rsp+430h] [rbp+328h]
  NTSTATUS *v221; // [rsp+438h] [rbp+330h]
  __int64 v222; // [rsp+440h] [rbp+338h]
  int *v223; // [rsp+448h] [rbp+340h]
  __int64 v224; // [rsp+450h] [rbp+348h]
  char v225[16]; // [rsp+458h] [rbp+350h] BYREF
  char v226[16]; // [rsp+468h] [rbp+360h] BYREF
  char v227[16]; // [rsp+478h] [rbp+370h] BYREF
  char v228[16]; // [rsp+488h] [rbp+380h] BYREF
  __int64 *v229; // [rsp+498h] [rbp+390h]
  __int64 v230; // [rsp+4A0h] [rbp+398h]
  struct _EVENT_DATA_DESCRIPTOR v231; // [rsp+4A8h] [rbp+3A0h] BYREF
  __int64 *v232; // [rsp+4C8h] [rbp+3C0h]
  __int64 v233; // [rsp+4D0h] [rbp+3C8h]

  v0 = 0;
  v141 = 0LL;
  v143 = 0LL;
  v145 = 0LL;
  v118 = 0;
  v149 = 0LL;
  v150 = 0LL;
  v152 = 0;
  memset(v151, 0, sizeof(v151));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopCB);
  v142 = 0LL;
  ChangeStamp = 0;
  v134 = 8;
  v2 = ZwQueryWnfStateData(&WNF_PO_DISCHARGE_START_FILETIME, 0LL, 0LL, &ChangeStamp, &v142, &v134);
  LODWORD(v3) = 1;
  if ( v2 == -1073741670 || v2 == -1073741431 )
  {
    v4 = 0;
  }
  else if ( !v2 && v134 == 8 )
  {
    v4 = (v142 != 0) + 2;
  }
  else
  {
    v4 = 1;
  }
  for ( i = (__int64 *)qword_140C3D110; i != &qword_140C3D110; i = (__int64 *)*i )
    IoCancelIrp((PIRP)*(i - 1));
  for ( j = (__int64 *)qword_140C3D110; j != &qword_140C3D110; j = (__int64 *)*j )
    KeWaitForSingleObject(j + 2, Executive, 0, 0, 0LL);
  LOBYTE(v7) = 0;
  v117 = 0;
  while ( 1 )
  {
    v8 = 1LL;
    v7 = (unsigned __int8)v7;
    v9 = _InterlockedExchange(&PopBatteryWorkRequests, 0x80000000);
    v10 = (v9 & 2) != 0;
    if ( (v9 & 8) != 0 )
      v7 = 1;
    v120 = v7;
    if ( (v9 & 0x10) != 0 )
    {
      PopAcquirePolicyLock(v3);
      PopResetCBTriggers(0x80u);
      PopReleasePolicyLock(v56, v55, v57, v58, Buffer, BufferSize);
      v8 = 1LL;
    }
    v11 = qword_140C3D110;
    v12 = v9 >> 6;
    LOBYTE(v12) = (v9 & 0x40) != 0;
    v121 = v12;
    if ( (__int64 *)qword_140C3D110 != &qword_140C3D110 )
    {
      do
      {
        v59 = *(__int64 **)v11;
        v60 = v11 - 64;
        if ( *(_DWORD *)(v11 - 64 + 104) == 2 )
        {
          if ( v59[1] != v11 || (v61 = *(__int64 ***)(v11 + 8), *v61 != (__int64 *)v11) )
            __fastfail(3u);
          *v61 = v59;
          v59[1] = (__int64)v61;
          *(_QWORD *)v11 = 0LL;
          --dword_140C3D0F4;
          ++dword_140C3D158;
          byte_140C3D0F8 = 1;
          if ( (int)PopBatteryReadTag(v11 - 64) < 0 )
            PopBatteryWaitTag(v60);
          v8 = 1LL;
          v10 = 1;
        }
        v11 = (__int64)v59;
      }
      while ( v59 != &qword_140C3D110 );
      v0 = 0;
    }
    for ( k = qword_140C3D100; (__int64 *)k != &qword_140C3D100; k = *(_QWORD *)k )
    {
      if ( *(_DWORD *)(k + 104) == 1 )
      {
        KeWaitForSingleObject((PVOID)(k + 80), Executive, 0, 0, 0LL);
        if ( (int)PopBatteryInitialize(k) < 0 )
        {
          PopBatteryWaitTag(k);
          v8 = 1LL;
        }
        else
        {
          v8 = 1LL;
          v10 = 1;
        }
      }
    }
    v14 = qword_140C3D110;
    if ( (__int64 *)qword_140C3D110 != &qword_140C3D110 )
    {
      do
      {
        v148 = *(_OWORD *)(v14 + 84);
        if ( (int)PopBatteryQueryStatus(v14 - 64) >= 0 )
        {
          PopAccountBatteryEnergyChange(v14 - 64);
          v62 = (_DWORD *)(v14 + 88);
          v63 = *(_DWORD *)(v14 + 84);
          if ( (((unsigned __int8)v63 ^ (unsigned __int8)v148) & 7) != 0 )
          {
            v117 = 1;
          }
          else if ( DWORD1(v148) != *v62 || HIDWORD(v148) != *(_DWORD *)(v14 + 96) )
          {
            LOBYTE(v120) = 1;
          }
          EstimatedTime = -1;
          if ( (v63 & 2) != 0 )
          {
            EstimatedTime = PopBatteryQueryEstimatedTime(v14 - 64, 0LL);
            v63 = *(_DWORD *)(v14 + 84);
          }
          v65 = 0;
          *(_DWORD *)(v14 + 100) = EstimatedTime;
          if ( EstimatedTime != -1 )
            v65 = EstimatedTime;
          v66 = *(_DWORD *)(v14 + 96);
          v116 = v65;
          v115 = v66;
          CheckStamp = *(_DWORD *)(v14 + 92);
          LODWORD(BufferSize) = *v62;
          LODWORD(Buffer) = v63;
          DbgPrintEx(
            0x92u,
            3u,
            "\n"
            "Battery Status [%p]\n"
            "|-- PowerState = 0x%08x\n"
            "|-- Capacity   = %u\n"
            "|-- Voltage    = %u\n"
            "|-- Rate       = %d\n"
            "|-- Est Time   = %u\n",
            v14 - 64,
            Buffer);
          v0 = 0;
        }
        else
        {
          *(_DWORD *)(v14 + 40) = 2;
          PopBatteryQueueWork(1u);
        }
        v14 = *(_QWORD *)v14;
      }
      while ( (__int64 *)v14 != &qword_140C3D110 );
      LOBYTE(v12) = v121;
    }
    if ( v10 )
    {
      PopBatteryUpdateCompositeInformation();
      PopMaxChargeRate = 0LL;
      v15 = 1;
      v117 = 1;
    }
    else
    {
      v15 = v117;
    }
    if ( (v9 & 4) != 0 || v15 )
    {
      if ( PopEstimateSpoilerMask )
      {
        PopEstimateSpoiledUntilTime = -1LL;
        KeCancelTimer(&stru_140C3A4C0);
      }
      else
      {
        PopEstimateSpoiledUntilTime = MEMORY[0xFFFFF78000000008] + 300000000LL;
        KiSetTimerEx((__int64)&stru_140C3A4C0, -300000000LL, 0, 0, (__int64)&PopPostSpoilingRefresh);
      }
    }
    v141 = -1LL;
    v16 = 0xFFFFFFFFLL;
    v131 = 0;
    v17 = 0x80000000;
    v133 = 0x80000000;
    v18 = 0xFFFFFFFFLL;
    v132 = -1LL;
    v19 = -1;
    v20 = 0;
    v135 = 0;
    v21 = -1;
    if ( dword_140C3D0F4 )
    {
      v67 = qword_140C3D110;
      v22 = v131;
      if ( (__int64 *)qword_140C3D110 != &qword_140C3D110 )
      {
        do
        {
          v8 = *(unsigned int *)(v67 + 84);
          v68 = *(_DWORD *)(v67 + 84) & 0x67 | 8;
          v69 = *(_DWORD *)(v67 + 84);
          if ( (v69 & 0xA) != 0xA )
            v68 = *(_DWORD *)(v67 + 84) & 0x67;
          v70 = (v69 & 0x11) == 17;
          v71 = *(_DWORD *)(v67 + 84) & 0x10;
          v72 = 16 * ((v131 & 0x10) == 0 && v70);
          if ( (v8 & 1) != 0 )
            v73 = v71 != 0 ? 2 : 8;
          else
            v73 = v71 != 0 ? 1 : 4;
          v20 |= v73;
          v74 = *(_DWORD *)(v67 + 88);
          v22 = v68 | v72 ^ v22;
          v131 = v22;
          if ( v74 == -1 )
          {
            v0 = 0;
          }
          else
          {
            v0 = 0;
            if ( v19 == -1 )
              v19 = 0;
            v19 += v74;
            LODWORD(v132) = v19;
          }
          v75 = *(_DWORD *)(v67 + 92);
          if ( v75 != -1 )
          {
            if ( (_DWORD)v18 == -1 )
              v18 = 0LL;
            if ( v75 > (unsigned int)v18 )
              v18 = v75;
            HIDWORD(v132) = v18;
          }
          v76 = *(_DWORD *)(v67 + 96);
          v16 = 0x80000000LL;
          if ( v76 != 0x80000000 )
          {
            if ( v17 == 0x80000000 )
              v17 = 0;
            v17 += v76;
            v133 = v17;
          }
          v67 = *(_QWORD *)v67;
        }
        while ( (__int64 *)v67 != &qword_140C3D110 );
        LOBYTE(v12) = v121;
        v135 = v20;
      }
      if ( (v22 & 2) != 0 )
      {
        v22 &= ~4u;
        v131 = v22;
      }
      if ( (v22 & 1) != 0 )
      {
        if ( (v22 & 4) != 0 )
          v141 = PopEstimateChargeTime(v16, v8, v18);
      }
      else
      {
        v77 = qword_140C3D110;
        if ( (__int64 *)qword_140C3D110 != &qword_140C3D110 )
        {
          do
          {
            v18 = *(unsigned int *)(v77 + 100);
            if ( (unsigned int)(v18 - 1) <= 0xFFFFFFFD )
              v0 -= 3600 * *(_DWORD *)(v77 + 88) / (unsigned int)v18;
            v77 = *(_QWORD *)v77;
          }
          while ( (__int64 *)v77 != &qword_140C3D110 );
          if ( v0 )
          {
            v78 = (__int64 *)qword_140C3D110;
            do
            {
              v79 = PopBatteryQueryEstimatedTime(v78 - 8, v0);
              if ( v79 != -1 )
              {
                v80 = 0;
                if ( v21 != -1 )
                  v80 = v21;
                v21 = v79 + v80;
              }
              v78 = (__int64 *)*v78;
            }
            while ( v78 != &qword_140C3D110 );
            LOBYTE(v20) = v135;
            LOBYTE(v12) = v121;
          }
        }
      }
    }
    else
    {
      LOBYTE(v22) = 1;
      v131 = 1;
      if ( v4 == 3 && (unsigned __int64)KiQueryUnbiasedInterruptTime() >= 0x11E1A300 )
        v4 = 1;
    }
    v23 = v131 & 1;
    if ( v4 == 2 && !v23 || v4 == 3 && v23 )
      v4 = 1;
    v24 = v22 & 0x10;
    if ( (xmmword_140C3D120 & 0x10) == v24
      || (v118 = v24 != 0,
          v138 = v24 != 0,
          updated = ZwUpdateWnfStateData(&WNF_PO_BATTERY_CHARGE_LIMITING_MODE, &v118, 1u, 0LL, 0LL, 0, 0),
          PopSetPowerSettingValueAcDc(&GUID_BATTERY_CHARGE_LIMITING_MODE, 4u, &v138),
          (unsigned int)dword_140C03950 <= 5)
      || !tlgKeywordOn((__int64)&dword_140C03950, 0x400000000000LL) )
    {
      v0 = 0;
    }
    else
    {
      v219 = &v119;
      v83 = "DC + BCL";
      v139 = updated;
      v221 = &v139;
      v140 = v82;
      v0 = 0;
      v119 = v118;
      v223 = &v140;
      v220 = 1LL;
      if ( (v20 & 1) == 0 )
        v83 = "-";
      v222 = 4LL;
      v224 = 4LL;
      tlgCreate1Sz_char((__int64)v225, v83);
      v85 = "AC + BCL";
      if ( (v20 & 2) == 0 )
        v85 = v84;
      tlgCreate1Sz_char((__int64)v226, v85);
      v88 = "DC + !BCL";
      if ( ((unsigned __int8)v20 & v87) == 0 )
        v88 = v86;
      tlgCreate1Sz_char((__int64)v227, v88);
      v90 = "AC + !BCL";
      if ( (v20 & 8) == 0 )
        v90 = v89;
      tlgCreate1Sz_char((__int64)v228, v90);
      v146 = 0x1000000LL;
      v229 = &v146;
      v230 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C03950,
        (unsigned __int8 *)byte_140030F65,
        0LL,
        0LL,
        0xAu,
        &v218);
    }
    if ( (v22 & 0x20) != 0 )
      v25 = ((v22 & 0x40) != 0) + 1;
    else
      v25 = 0;
    if ( (_DWORD)qword_140C3D29C != v25 )
    {
      PopAcquireRwLockExclusive((ULONG_PTR)&PopWeakChargerLock);
      LODWORD(qword_140C3D29C) = v25;
      PopWeakChargerNotificationBatteryMiniport = v25;
      PopReleaseRwLock(&PopWeakChargerLock);
      LOBYTE(v12) = 1;
    }
    PopBatteryApplyCompositeState(&v131, v21, v18);
    if ( (_BYTE)v12 )
    {
      LOBYTE(v3) = v23;
      PopEvaluateWeakChargerState(v3);
    }
    _InterlockedAnd(&PopBatteryWorkRequests, 0xFFFFFFDF);
    qword_140C3D2A8 = MEMORY[0xFFFFF78000000008];
    _InterlockedOr(v111, 0);
    if ( qword_140C3D2B0 )
      ExfUnblockPushLock(&qword_140C3D2B0, 0LL);
    if ( _InterlockedCompareExchange(&PopBatteryWorkRequests, 0, 0x80000000) == 0x80000000 )
      break;
    LOBYTE(v7) = v120;
  }
  for ( m = (__int64 *)qword_140C3D110; m != &qword_140C3D110; m = (__int64 *)*m )
    PopBatteryQueryStatus(m - 8);
  if ( !PopUserBatteryChargingEstimator )
    ZwUpdateWnfStateData(&WNF_PO_CHARGE_ESTIMATE, &v141, 8u, 0LL, 0LL, 0, 0);
  v27 = PopBatteryEstimatesSpoiled();
  v28 = v27;
  if ( !PopDisableBatteryDischargeEstimator )
  {
    if ( v21 == -1 || v27 )
      v29 = -1LL;
    else
      v29 = v21;
    v143 = v29;
    ZwUpdateWnfStateData(&WNF_PO_DISCHARGE_ESTIMATE, &v143, 8u, 0LL, 0LL, 0, 0);
  }
  v30 = "AC Power";
  v31 = "Battery Discharging";
  v32 = "Battery Charging";
  if ( (unsigned int)dword_140C03950 > 5 && tlgKeywordOn((__int64)&dword_140C03950, 0x400000000000LL) )
  {
    v127 = dword_140C3D0F4;
    v155 = 4LL;
    v154 = &v127;
    v33 = "AC Power";
    if ( (xmmword_140C3D120 & 1) == 0 )
      v33 = "DC Power";
    tlgCreate1Sz_char((__int64)v156, v33);
    v35 = "Battery Discharging";
    if ( (v34 & 2) == 0 )
      v35 = "-";
    tlgCreate1Sz_char((__int64)v157, v35);
    v38 = "Battery Charging";
    if ( (v36 & v37) == 0 )
      v38 = "-";
    tlgCreate1Sz_char((__int64)v158, v38);
    v40 = "Battery Critical";
    if ( (v39 & 8) == 0 )
      v40 = "-";
    tlgCreate1Sz_char((__int64)v159, v40);
    v42 = "Battery charge limiting mode";
    if ( (v41 & 0x10) == 0 )
      v42 = "-";
    tlgCreate1Sz_char((__int64)v160, v42);
    v44 = "Battery charging state power supply present";
    if ( (v43 & 0x20) == 0 )
      v44 = "-";
    tlgCreate1Sz_char((__int64)v161, v44);
    v46 = "Battery charging state adequate";
    if ( (v45 & 0x40) == 0 )
      v46 = "-";
    tlgCreate1Sz_char((__int64)v162, v46);
    v48 = "Platform BCL Enabled";
    if ( (byte_140C3D2F8 & 1) == 0 )
      v48 = v47;
    tlgCreate1Sz_char((__int64)v163, v48);
    if ( (_DWORD)xmmword_140C3D144 )
      v52 = (((unsigned int)xmmword_140C3D144 >> 1) + 100 * DWORD1(xmmword_140C3D120)) / (unsigned int)xmmword_140C3D144;
    else
      v52 = v50;
    v128 = v52;
    v164 = &v128;
    v165 = v51;
    if ( (_DWORD)xmmword_140C3D144 )
      v53 = 100000 * (unsigned __int64)DWORD1(xmmword_140C3D120) / (unsigned int)xmmword_140C3D144;
    else
      LODWORD(v53) = v50;
    v129 = v53;
    v122 = xmmword_140C3D144;
    v166 = &v129;
    v130 = DWORD1(xmmword_140C3D120);
    v168 = &v130;
    v170 = &v122;
    v123 = *((_QWORD *)&xmmword_140C3D120 + 1);
    v172 = &v123;
    v174 = (char *)&v123 + 4;
    v124 = PopDisableBatteryDischargeEstimator;
    v176 = &v124;
    v136 = v21;
    v178 = &v136;
    v180 = &v125;
    v182 = &v126;
    v184 = &v147;
    v126 = v49;
    v167 = v51;
    v169 = v51;
    v171 = v51;
    v173 = v51;
    v175 = v51;
    v177 = v51;
    v179 = 8LL;
    v125 = v28;
    v181 = v51;
    v183 = v51;
    v147 = 0x1000000LL;
    v185 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C03950,
      (unsigned __int8 *)&dword_140030D5C,
      0LL,
      0LL,
      0x16u,
      &v153);
  }
  v54 = v117;
  LOBYTE(v120) = v117 | v120;
  if ( (_BYTE)v120 )
  {
    *(_DWORD *)v151 = dword_140C3D154;
    v149 = xmmword_140C3D134;
    v152 = dword_140C3D0F0;
    *(_OWORD *)&v151[4] = xmmword_140C3D120;
    *(_DWORD *)&v151[20] = dword_140C3D0F4;
    v150 = xmmword_140C3D144;
    ZwUpdateWnfStateData(&WNF_PO_COMPOSITE_BATTERY, &v149, 0x3Cu, 0LL, 0LL, 0, 0);
    if ( (unsigned int)dword_140C03950 > 5 && tlgKeywordOn((__int64)&dword_140C03950, 0x400000000000LL) )
    {
      v187 = &v126;
      v126 = dword_140C3D0F4;
      if ( (xmmword_140C3D120 & 1) == 0 )
        v30 = "DC Power";
      v188 = 4LL;
      tlgCreate1Sz_char((__int64)v189, v30);
      if ( (v91 & 2) == 0 )
        v31 = "-";
      tlgCreate1Sz_char((__int64)v190, v31);
      if ( (v92 & v93) == 0 )
        v32 = "-";
      tlgCreate1Sz_char((__int64)v191, v32);
      v95 = "Battery Critical";
      if ( (v94 & 8) == 0 )
        v95 = "-";
      tlgCreate1Sz_char((__int64)v192, v95);
      v97 = "Battery charge limiting mode";
      if ( (v96 & 0x10) == 0 )
        v97 = "-";
      tlgCreate1Sz_char((__int64)v193, v97);
      v99 = "Battery charging state power supply present";
      if ( (v98 & 0x20) == 0 )
        v99 = "-";
      tlgCreate1Sz_char((__int64)v194, v99);
      v101 = "Battery charging state adequate";
      if ( (v100 & 0x40) == 0 )
        v101 = "-";
      tlgCreate1Sz_char((__int64)v195, v101);
      v102 = "Platform BCL Enabled";
      if ( (byte_140C3D2F8 & 1) == 0 )
        v102 = "-";
      tlgCreate1Sz_char((__int64)v196, v102);
      if ( (_DWORD)xmmword_140C3D144 )
        v105 = (((unsigned int)xmmword_140C3D144 >> 1) + 100 * DWORD1(xmmword_140C3D120))
             / (unsigned int)xmmword_140C3D144;
      else
        v105 = 0;
      v125 = v105;
      v197 = &v125;
      v198 = v104;
      if ( (_DWORD)xmmword_140C3D144 )
        v106 = 100000 * (unsigned __int64)DWORD1(xmmword_140C3D120) / (unsigned int)xmmword_140C3D144;
      else
        LODWORD(v106) = 0;
      v107 = "Relative Capacity Unit";
      v124 = v106;
      v200 = v104;
      v199 = &v124;
      HIDWORD(v123) = DWORD1(xmmword_140C3D120);
      v201 = (char *)&v123 + 4;
      v203 = &v123;
      v122 = DWORD2(xmmword_140C3D120);
      v205 = &v122;
      v130 = HIDWORD(xmmword_140C3D120);
      v207 = &v130;
      v129 = dword_140C3D0F0;
      v209 = &v129;
      v211 = &v128;
      if ( (xmmword_140C3D134 & 0x40000000) == 0 )
        v107 = "mWh Unit";
      v202 = v104;
      LODWORD(v123) = xmmword_140C3D144;
      v204 = v104;
      v206 = v104;
      v208 = v104;
      v210 = v104;
      v128 = v103;
      v212 = v104;
      tlgCreate1Sz_char((__int64)v213, v107);
      v214 = &v127;
      v127 = HIDWORD(xmmword_140C3D134);
      v216 = &v136;
      LODWORD(v136) = v108;
      v215 = v109;
      v217 = v109;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C03950,
        (unsigned __int8 *)byte_140031120,
        0LL,
        0LL,
        0x16u,
        &v186);
    }
    if ( v4 == 1 )
    {
      if ( v23 )
        v144 = 0LL;
      else
        v144 = MEMORY[0xFFFFF78000000014];
      ZwUpdateWnfStateData(&WNF_PO_DISCHARGE_START_FILETIME, &v144, 8u, 0LL, 0LL, 0, 0);
    }
    if ( v54 )
    {
      HIDWORD(v145) = -1;
      v110 = ZwUpdateWnfStateData(&WNF_PO_POWER_STATE_CHANGE, &v145, 8u, 0LL, 0LL, 0, 0);
      if ( (unsigned int)dword_140C03950 > 5 )
      {
        LODWORD(v136) = v110;
        v233 = 4LL;
        v232 = &v136;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C03950,
          (unsigned __int8 *)&dword_14003131C,
          0LL,
          0LL,
          3u,
          &v231);
      }
    }
  }
  PopReleaseRwLock((__int64 *)&PopCB);
  PopReleaseRwLock((__int64 *)&PopPolicyDeviceLock);
}
