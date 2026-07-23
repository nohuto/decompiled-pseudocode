/*
 * XREFs of sub_14070BD10 @ 0x14070BD10
 * Callers:
 *     sub_14066D650 @ 0x14066D650 (sub_14066D650.c)
 *     sub_140831810 @ 0x140831810 (sub_140831810.c)
 *     sub_14085DACC @ 0x14085DACC (sub_14085DACC.c)
 * Callees:
 *     KeStackAttachProcess @ 0x140203630 (KeStackAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x1402037B0 (KeUnstackDetachProcess.c)
 *     sub_140205DD4 @ 0x140205DD4 (sub_140205DD4.c)
 *     sub_1402361E4 @ 0x1402361E4 (sub_1402361E4.c)
 *     sub_1402395A0 @ 0x1402395A0 (sub_1402395A0.c)
 *     PsIsProtectedProcessLight @ 0x140242520 (PsIsProtectedProcessLight.c)
 *     sub_140250060 @ 0x140250060 (sub_140250060.c)
 *     sub_14025302C @ 0x14025302C (sub_14025302C.c)
 *     KeCopyAffinityEx2 @ 0x140256360 (KeCopyAffinityEx2.c)
 *     KeQueryActiveGroupCount @ 0x1402622B0 (KeQueryActiveGroupCount.c)
 *     PsIsSystemProcess @ 0x1402820E0 (PsIsSystemProcess.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     PsIsProtectedProcess @ 0x1402A0790 (PsIsProtectedProcess.c)
 *     ExInitializeRundownProtection @ 0x1402A0840 (ExInitializeRundownProtection.c)
 *     KeQueryUnbiasedInterruptTime @ 0x1402A0850 (KeQueryUnbiasedInterruptTime.c)
 *     sub_1402A0880 @ 0x1402A0880 (sub_1402A0880.c)
 *     sub_1402A08A8 @ 0x1402A08A8 (sub_1402A08A8.c)
 *     sub_1402A08BC @ 0x1402A08BC (sub_1402A08BC.c)
 *     sub_1402A0D30 @ 0x1402A0D30 (sub_1402A0D30.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402F0880 @ 0x1402F0880 (sub_1402F0880.c)
 *     KeQuerySystemTimePrecise @ 0x1402F08A0 (KeQuerySystemTimePrecise.c)
 *     KeQueryMaximumGroupCount @ 0x1402F5110 (KeQueryMaximumGroupCount.c)
 *     PoEnergyEstimationEnabled @ 0x1402F6160 (PoEnergyEstimationEnabled.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     ?do_max_length@?$codecvt@_WDH@std@@MEBAHXZ @ 0x140360698 (-do_max_length@-$codecvt@_WDH@std@@MEBAHXZ.c)
 *     sub_1403606EC @ 0x1403606EC (sub_1403606EC.c)
 *     sub_1403D2D98 @ 0x1403D2D98 (sub_1403D2D98.c)
 *     sub_1403DE5C8 @ 0x1403DE5C8 (sub_1403DE5C8.c)
 *     KeQueryGroupAffinityEx @ 0x1403DF470 (KeQueryGroupAffinityEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14045ECC6 @ 0x14045ECC6 (sub_14045ECC6.c)
 *     sub_14056C6B8 @ 0x14056C6B8 (sub_14056C6B8.c)
 *     ObCreateObject @ 0x14066BA00 (ObCreateObject.c)
 *     MmGetSectionInformation @ 0x14066C980 (MmGetSectionInformation.c)
 *     sub_14066EFE8 @ 0x14066EFE8 (sub_14066EFE8.c)
 *     sub_14067259C @ 0x14067259C (sub_14067259C.c)
 *     sub_1406727EC @ 0x1406727EC (sub_1406727EC.c)
 *     sub_140672A7C @ 0x140672A7C (sub_140672A7C.c)
 *     sub_140672A98 @ 0x140672A98 (sub_140672A98.c)
 *     sub_140672AD0 @ 0x140672AD0 (sub_140672AD0.c)
 *     sub_140672BD8 @ 0x140672BD8 (sub_140672BD8.c)
 *     sub_140683990 @ 0x140683990 (sub_140683990.c)
 *     sub_140695160 @ 0x140695160 (sub_140695160.c)
 *     MmSecureVirtualMemory @ 0x1406A2410 (MmSecureVirtualMemory.c)
 *     sub_1406A6448 @ 0x1406A6448 (sub_1406A6448.c)
 *     sub_1406A8EC8 @ 0x1406A8EC8 (sub_1406A8EC8.c)
 *     sub_1406A8EEC @ 0x1406A8EEC (sub_1406A8EEC.c)
 *     sub_1406C86A0 @ 0x1406C86A0 (sub_1406C86A0.c)
 *     sub_1406CB6DC @ 0x1406CB6DC (sub_1406CB6DC.c)
 *     sub_1406CC6A0 @ 0x1406CC6A0 (sub_1406CC6A0.c)
 *     RtlQueryImageFileKeyOption @ 0x1406CC700 (RtlQueryImageFileKeyOption.c)
 *     sub_1406D2718 @ 0x1406D2718 (sub_1406D2718.c)
 *     sub_1406D811C @ 0x1406D811C (sub_1406D811C.c)
 *     sub_1406D94F0 @ 0x1406D94F0 (sub_1406D94F0.c)
 *     sub_1406DA7B0 @ 0x1406DA7B0 (sub_1406DA7B0.c)
 *     sub_1406DAE08 @ 0x1406DAE08 (sub_1406DAE08.c)
 *     sub_1406DBC80 @ 0x1406DBC80 (sub_1406DBC80.c)
 *     sub_1406DD840 @ 0x1406DD840 (sub_1406DD840.c)
 *     RtlOpenImageFileOptionsKey @ 0x1406DD890 (RtlOpenImageFileOptionsKey.c)
 *     sub_1406DD8A8 @ 0x1406DD8A8 (sub_1406DD8A8.c)
 *     sub_1406DF640 @ 0x1406DF640 (sub_1406DF640.c)
 *     sub_1406E8FE0 @ 0x1406E8FE0 (sub_1406E8FE0.c)
 *     sub_14070A268 @ 0x14070A268 (sub_14070A268.c)
 *     sub_14070A4FC @ 0x14070A4FC (sub_14070A4FC.c)
 *     sub_14070BA00 @ 0x14070BA00 (sub_14070BA00.c)
 *     sub_14070E104 @ 0x14070E104 (sub_14070E104.c)
 *     sub_14070ED0C @ 0x14070ED0C (sub_14070ED0C.c)
 *     sub_14070EDE0 @ 0x14070EDE0 (sub_14070EDE0.c)
 *     sub_14070EE20 @ 0x14070EE20 (sub_14070EE20.c)
 *     sub_14070EE70 @ 0x14070EE70 (sub_14070EE70.c)
 *     sub_14070EF5C @ 0x14070EF5C (sub_14070EF5C.c)
 *     sub_14070EFE4 @ 0x14070EFE4 (sub_14070EFE4.c)
 *     sub_14070F0D8 @ 0x14070F0D8 (sub_14070F0D8.c)
 *     sub_14070F320 @ 0x14070F320 (sub_14070F320.c)
 *     sub_14070F34C @ 0x14070F34C (sub_14070F34C.c)
 *     sub_14070F37C @ 0x14070F37C (sub_14070F37C.c)
 *     sub_14070F3A8 @ 0x14070F3A8 (sub_14070F3A8.c)
 *     sub_140711058 @ 0x140711058 (sub_140711058.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     sub_140755B70 @ 0x140755B70 (sub_140755B70.c)
 *     sub_14079D364 @ 0x14079D364 (sub_14079D364.c)
 *     SeQueryInformationToken @ 0x14079F290 (SeQueryInformationToken.c)
 *     SeQuerySessionIdToken @ 0x14079FB80 (SeQuerySessionIdToken.c)
 *     sub_1407A347C @ 0x1407A347C (sub_1407A347C.c)
 *     sub_1407F1710 @ 0x1407F1710 (sub_1407F1710.c)
 *     sub_1407F17B4 @ 0x1407F17B4 (sub_1407F17B4.c)
 *     sub_1407F6CE0 @ 0x1407F6CE0 (sub_1407F6CE0.c)
 *     sub_1407F7128 @ 0x1407F7128 (sub_1407F7128.c)
 *     sub_14085D8F8 @ 0x14085D8F8 (sub_14085D8F8.c)
 *     sub_140860DAC @ 0x140860DAC (sub_140860DAC.c)
 *     sub_140881A7E @ 0x140881A7E (sub_140881A7E.c)
 *     sub_140960988 @ 0x140960988 (sub_140960988.c)
 *     sub_14097F148 @ 0x14097F148 (sub_14097F148.c)
 *     sub_1409AE810 @ 0x1409AE810 (sub_1409AE810.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14070BD10(
        __int64 a1,
        char a2,
        _WORD *a3,
        char a4,
        char a5,
        char a6,
        void *a7,
        void *a8,
        int a9,
        char a10,
        __int64 a11,
        int a12,
        PVOID a13,
        __int64 a14,
        _QWORD *a15)
{
  int v16; // r15d
  __int64 v18; // r13
  unsigned int v19; // ebx
  __int16 v20; // r12
  __int64 result; // rax
  unsigned int v22; // r14d
  int MaximumGroupCount; // eax
  int v24; // ecx
  unsigned int v25; // r12d
  __int64 v26; // rdx
  _QWORD *v27; // r15
  __int16 v28; // r9
  char *v29; // rcx
  char v30; // al
  __int16 v31; // cx
  int v32; // r9d
  __int64 v33; // rax
  _QWORD *v34; // rcx
  int v35; // eax
  __int64 v36; // r14
  int v37; // ecx
  int v38; // edx
  __int64 v39; // r8
  int SectionInformation; // r14d
  PVOID v41; // rcx
  void *v42; // rax
  __int64 v43; // rax
  int v44; // edi
  int v45; // ecx
  HANDLE *v46; // r12
  int v47; // eax
  NTSTATUS v48; // eax
  int v49; // r14d
  unsigned int v50; // edi
  PVOID PoolWithTag; // rax
  _DWORD *v52; // r10
  int v53; // eax
  __int16 v54; // r11
  _QWORD *v55; // rax
  unsigned int v56; // edi
  KPROCESSOR_MODE v57; // al
  int v58; // ecx
  __int16 v59; // r14
  BOOL v60; // eax
  bool v61; // sf
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  unsigned __int16 *v65; // r14
  unsigned __int16 v66; // di
  ULONG v67; // r14d
  char v68; // r12
  BOOL v69; // edi
  int v70; // eax
  int v71; // edx
  __int64 v72; // rdx
  int v73; // r8d
  __int64 v74; // rax
  __int64 v75; // rcx
  char v76; // r8
  _DWORD *v77; // r14
  __int64 v78; // rcx
  _DWORD *v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rdi
  char v82; // al
  __int64 v83; // r9
  int v84; // r8d
  int v85; // eax
  __int64 v86; // r8
  __int64 v87; // r9
  int v88; // edi
  __int16 v89; // r11
  int v90; // r11d
  int v91; // eax
  unsigned int v92; // eax
  unsigned __int64 v93; // rdx
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // rdx
  __int64 v97; // r9
  PVOID v98; // rdi
  int v99; // eax
  __int64 v100; // rax
  __int64 v101; // rcx
  ULONG_PTR v102; // rdi
  __int64 v103; // rdi
  PVOID v104; // rax
  size_t v105; // r8
  __int64 v106; // rdi
  bool IsProtectedProcess; // di
  bool IsProtectedProcessLight; // al
  char v109; // di
  __int64 v110; // rcx
  unsigned __int64 **v111; // rdx
  __int16 v112; // cx
  char v113; // al
  struct _KTHREAD *v114; // rdi
  __int64 v115; // rax
  __int64 v116; // r8
  __int64 v117; // r9
  unsigned int v118; // eax
  __int64 v119; // rcx
  ULONGLONG UnbiasedInterruptTime; // rax
  _QWORD *v121; // rcx
  int v122[2]; // [rsp+20h] [rbp-808h]
  unsigned __int16 v124[2]; // [rsp+78h] [rbp-7B0h] BYREF
  char v125; // [rsp+7Ch] [rbp-7ACh] BYREF
  char v126; // [rsp+7Dh] [rbp-7ABh] BYREF
  _BYTE v127[2]; // [rsp+7Eh] [rbp-7AAh] BYREF
  __int64 v128; // [rsp+80h] [rbp-7A8h]
  unsigned __int16 v129; // [rsp+88h] [rbp-7A0h]
  ULONG NumberOfBytes; // [rsp+8Ch] [rbp-79Ch] BYREF
  int NumberOfBytes_4; // [rsp+90h] [rbp-798h]
  int v132; // [rsp+94h] [rbp-794h]
  int v133; // [rsp+98h] [rbp-790h]
  ULONG v134; // [rsp+9Ch] [rbp-78Ch] BYREF
  ULONG v135; // [rsp+A0h] [rbp-788h] BYREF
  int v136; // [rsp+A4h] [rbp-784h]
  int v137; // [rsp+A8h] [rbp-780h]
  ULONG v138; // [rsp+ACh] [rbp-77Ch]
  int v139; // [rsp+B0h] [rbp-778h] BYREF
  int v140; // [rsp+B4h] [rbp-774h]
  PVOID TokenInformation; // [rsp+B8h] [rbp-770h] BYREF
  unsigned __int16 *v142; // [rsp+C0h] [rbp-768h]
  unsigned __int16 *v143; // [rsp+C8h] [rbp-760h]
  PVOID v144; // [rsp+D0h] [rbp-758h]
  int v145; // [rsp+D8h] [rbp-750h]
  _WORD *v146; // [rsp+E0h] [rbp-748h]
  int v147; // [rsp+E8h] [rbp-740h]
  int v148; // [rsp+ECh] [rbp-73Ch]
  volatile signed __int32 *v149; // [rsp+F0h] [rbp-738h]
  ULONG SessionId; // [rsp+F8h] [rbp-730h] BYREF
  __int64 v151; // [rsp+100h] [rbp-728h]
  PVOID Object; // [rsp+108h] [rbp-720h]
  int v153; // [rsp+110h] [rbp-718h]
  int v154; // [rsp+114h] [rbp-714h]
  ULONG v155; // [rsp+118h] [rbp-710h] BYREF
  ULONG v156; // [rsp+11Ch] [rbp-70Ch] BYREF
  int v157; // [rsp+120h] [rbp-708h]
  __int64 v158; // [rsp+128h] [rbp-700h]
  PACCESS_TOKEN Token; // [rsp+130h] [rbp-6F8h]
  PVOID Address; // [rsp+138h] [rbp-6F0h]
  unsigned __int64 v161; // [rsp+140h] [rbp-6E8h]
  struct _KTHREAD *CurrentThread; // [rsp+148h] [rbp-6E0h]
  __int64 v163; // [rsp+150h] [rbp-6D8h]
  HANDLE Handle; // [rsp+158h] [rbp-6D0h] BYREF
  PVOID v165; // [rsp+160h] [rbp-6C8h]
  PVOID v166; // [rsp+168h] [rbp-6C0h] BYREF
  PVOID v167; // [rsp+170h] [rbp-6B8h] BYREF
  PVOID P; // [rsp+178h] [rbp-6B0h]
  int v169; // [rsp+180h] [rbp-6A8h]
  HANDLE KeyHandle; // [rsp+188h] [rbp-6A0h] BYREF
  unsigned __int64 *v171; // [rsp+190h] [rbp-698h]
  __int128 v172; // [rsp+198h] [rbp-690h] BYREF
  __int64 v173; // [rsp+1B0h] [rbp-678h]
  __int64 v174; // [rsp+1C0h] [rbp-668h] BYREF
  __int64 v175; // [rsp+1C8h] [rbp-660h]
  __int64 v176; // [rsp+1D0h] [rbp-658h]
  __int64 v177; // [rsp+1D8h] [rbp-650h]
  _QWORD *v178; // [rsp+1E0h] [rbp-648h]
  __int128 v179; // [rsp+1E8h] [rbp-640h] BYREF
  __int128 v180; // [rsp+1F8h] [rbp-630h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+208h] [rbp-620h] BYREF
  OBJECT_ATTRIBUTES v182; // [rsp+238h] [rbp-5F0h] BYREF
  __int128 v183; // [rsp+270h] [rbp-5B8h] BYREF
  __int64 v184; // [rsp+280h] [rbp-5A8h]
  __m128i v185; // [rsp+290h] [rbp-598h] BYREF
  unsigned __int64 v186; // [rsp+2A0h] [rbp-588h]
  __int128 v187; // [rsp+2B0h] [rbp-578h] BYREF
  __int64 v188; // [rsp+2C0h] [rbp-568h]
  __int128 v189; // [rsp+2D0h] [rbp-558h] BYREF
  __int64 v190; // [rsp+2E0h] [rbp-548h]
  __int128 v191; // [rsp+2F0h] [rbp-538h] BYREF
  __int64 v192; // [rsp+300h] [rbp-528h]
  __int128 v193; // [rsp+310h] [rbp-518h] BYREF
  __int64 v194; // [rsp+320h] [rbp-508h]
  __m128i v195; // [rsp+330h] [rbp-4F8h] BYREF
  unsigned __int64 v196; // [rsp+340h] [rbp-4E8h]
  __int128 v197; // [rsp+350h] [rbp-4D8h] BYREF
  __int64 v198; // [rsp+360h] [rbp-4C8h]
  _DWORD v199[20]; // [rsp+370h] [rbp-4B8h] BYREF
  __m128i v200; // [rsp+3C0h] [rbp-468h] BYREF
  unsigned __int64 v201; // [rsp+3D0h] [rbp-458h]
  __int128 v202; // [rsp+3D8h] [rbp-450h] BYREF
  __int64 v203; // [rsp+3E8h] [rbp-440h]
  __int128 v204; // [rsp+3F0h] [rbp-438h] BYREF
  __int128 v205; // [rsp+400h] [rbp-428h]
  __int64 v206; // [rsp+410h] [rbp-418h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+418h] [rbp-410h] BYREF
  _DWORD v208[68]; // [rsp+450h] [rbp-3D8h] BYREF
  _DWORD v209[136]; // [rsp+560h] [rbp-2C8h] BYREF
  unsigned int v210[8]; // [rsp+780h] [rbp-A8h] BYREF
  _OWORD v211[4]; // [rsp+7A0h] [rbp-88h] BYREF

  v16 = (int)a3;
  v146 = a3;
  v128 = a1;
  v176 = a1;
  Object = a7;
  Token = a8;
  v18 = a11;
  v173 = a11;
  v165 = a13;
  v177 = a14;
  v178 = a15;
  v169 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  v209[131] = 0;
  memset(&ObjectAttributes, 0, 44);
  v180 = 0LL;
  KeyHandle = 0LL;
  memset(&v208[2], 0, 0x100uLL);
  v19 = 0;
  v139 = 0;
  v200 = 0LL;
  v201 = 0LL;
  v202 = 0LL;
  v203 = 0LL;
  v127[0] = 0;
  memset(&v182, 0, 44);
  Handle = 0LL;
  v144 = 0LL;
  v126 = 0;
  LOWORD(v134) = 0;
  NumberOfBytes = 0;
  memset(v199, 0, 0x48uLL);
  LODWORD(TokenInformation) = 0;
  v174 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v151 = *((_QWORD *)CurrentThread + 23);
  v142 = 0LL;
  v143 = 0LL;
  P = 0LL;
  v138 = 0;
  v132 = 0;
  v133 = 0;
  v148 = 0;
  v147 = 0;
  v136 = 34404;
  v157 = 0;
  v137 = 0;
  v154 = 0;
  v140 = 0;
  Address = 0LL;
  v153 = 0;
  v175 = 0LL;
  v129 = 0;
  memset(v209, 0, 0x218uLL);
  v20 = a9;
  NumberOfBytes_4 = a9;
  if ( (a9 & 0x800) != 0 )
  {
    v19 = 2;
    if ( (a9 & 0x2000) != 0 )
    {
      v19 = 6;
      if ( (a9 & 0x4000) != 0 )
        v19 = 14;
    }
  }
  else if ( !Object )
  {
    v19 = a1 != 0 ? 4 : 1;
  }
  if ( (v19 & 4) != 0 )
  {
    if ( a12 && (v19 & 2) == 0 )
      return 3221225520LL;
    if ( PsIsSystemProcess(a1) )
      return 3221225485LL;
  }
  else if ( (a9 & 0x1000) != 0 )
  {
    return 3221225520LL;
  }
  v158 = a1 & -(__int64)((v20 & 0x100) != 0);
  if ( v18 && (*(_DWORD *)(v18 + 4) & 0x2000) != 0 )
  {
    if ( (a1 & -(__int64)((v20 & 0x100) != 0)) == 0 )
    {
      v142 = (unsigned __int16 *)qword_140D31700[*(unsigned __int16 *)(v18 + 250)];
      v143 = v142;
      v158 = 0LL;
      goto LABEL_20;
    }
    return 3221225520LL;
  }
  if ( a1 )
  {
    v158 = a1 & -(__int64)((v20 & 0x100) != 0);
    if ( (*(_DWORD *)(a1 + 1120) & 0x200000) != 0 )
    {
      v158 = a1;
      v133 = 0x200000;
    }
  }
LABEL_20:
  if ( v18 && (*(_DWORD *)(v18 + 4) & 0x40000) != 0 )
    v19 |= 0x10000u;
  v204 = 0LL;
  v205 = 0LL;
  v206 = 0LL;
  v167 = 0LL;
  v22 = 2944;
  LODWORD(v149) = 0;
  v163 = 0LL;
  if ( !dword_140D06BE8 )
  {
    v22 = 2984;
    v19 |= 0x8000u;
    v163 = 2944LL;
  }
  if ( (unsigned __int8)PoEnergyEstimationEnabled() )
  {
    LODWORD(v149) = (v22 + 7) & 0xFFFFFFF8;
    v22 = (_DWORD)v149 + 480;
    v19 |= 0x20000u;
    v16 = (int)v146;
  }
  MaximumGroupCount = KeQueryMaximumGroupCount();
  LODWORD(v146) = MaximumGroupCount;
  v25 = 0;
  if ( (unsigned __int16)MaximumGroupCount > 1u )
  {
    v25 = (v22 + 7) & 0xFFFFFFF8;
    v22 = 16 * (unsigned __int16)MaximumGroupCount + v25;
  }
  *(_QWORD *)v122 = 0LL;
  LOBYTE(v24) = a2;
  result = ObCreateObject(v24, (int)PsProcessType, v16, a2);
  if ( (int)result >= 0 )
  {
    v27 = v144;
    sub_14070F37C(v144, v26, 1917023056LL);
    memset(v144, 0, v22);
    sub_14070F34C(v144);
    ExInitializeRundownProtection((PEX_RUNDOWN_REF)v144 + 139);
    *((_QWORD *)v144 + 135) = 0LL;
    v27[189] = v27 + 188;
    v27[188] = v27 + 188;
    v27[277] = v27 + 276;
    v27[276] = v27 + 276;
    v27[307] = v27 + 306;
    v27[306] = v27 + 306;
    *((_BYTE *)v27 + 2170) = a4;
    *((_BYTE *)v27 + 2168) = a5;
    *((_BYTE *)v27 + 2169) = a6;
    v27[283] = 0LL;
    v171 = v27 + 320;
    sub_1402A0D30((__int64)(v27 + 320));
    v27[356] = 0LL;
    v27[355] = 0LL;
    v27[358] = 0LL;
    v27[357] = 0LL;
    v27[360] = 0LL;
    if ( (v19 & 2) != 0 )
      *((_DWORD *)v27 + 543) |= 1u;
    v28 = NumberOfBytes_4;
    v145 = 32;
    if ( (NumberOfBytes_4 & 0x8000) != 0 )
      *((_DWORD *)v27 + 543) |= 0x20u;
    if ( v25 )
    {
      *((_DWORD *)v27 + 543) |= 0x80u;
      v29 = (char *)v27 + v25;
      v27[297] = v29;
      v27[298] = &v29[8 * (unsigned int)v146];
    }
    v30 = a10;
    if ( (a10 & 1) != 0 )
      *((_DWORD *)v27 + 543) |= 0x1000u;
    if ( (v30 & 4) != 0 )
      *((_DWORD *)v27 + 543) |= 0x800000u;
    if ( (v30 & 8) != 0 )
      *((_DWORD *)v27 + 543) |= 0x8000000u;
    v31 = v28;
    v32 = 512;
    v33 = *(_QWORD *)(v151 + 1088) | 2LL;
    if ( (v31 & 0x200) != 0 )
      v33 = *(_QWORD *)(v151 + 1088);
    v27[169] = v33;
    if ( (v19 & 0x8000) != 0 )
      v27[279] = (char *)v27 + v163;
    if ( v19 >= 0x20000 )
    {
      v34 = (_QWORD *)((char *)v27 + (unsigned int)v149);
      v27[285] = v34;
      sub_1406D811C(v34);
    }
    if ( v18 && (v32 & *(_DWORD *)(v18 + 4)) != 0 )
    {
      v35 = *(_DWORD *)(v18 + 316);
      v36 = v128;
    }
    else
    {
      v36 = v128;
      if ( v128 )
        v35 = *(_DWORD *)(v128 + 1528);
      else
        v35 = 5;
    }
    *((_DWORD *)v27 + 382) = v35;
    *((_DWORD *)v27 + 501) = 259;
    if ( v36 )
    {
      v37 = (*(_DWORD *)(v36 + 1124) >> 27) & 7;
      v38 = (*(_DWORD *)(v36 + 1120) >> 12) & 7;
      v27[168] = *(_QWORD *)(v36 + 1088);
    }
    else
    {
      v38 = std::codecvt<wchar_t,char,int>::do_max_length();
    }
    *((_DWORD *)v27 + 281) = *((_DWORD *)v27 + 281) & 0xC7FFFFFF | (v37 << 27);
    v149 = (volatile signed __int32 *)(v27 + 140);
    *((_DWORD *)v27 + 280) = (v38 << 12) | v27[140] & 0xFFFF8FFF;
    if ( v165 )
    {
      if ( !sub_1403606EC((__int64)v165) )
      {
        SectionInformation = -1073740640;
LABEL_161:
        sub_140683990((ULONG_PTR)v27, 0);
        ObfDereferenceObjectWithTag(v27, 0x72437350u);
LABEL_162:
        if ( P )
          ExFreePoolWithTag(P, 0x73437350u);
        sub_14070EDE0(v209);
        return (unsigned int)SectionInformation;
      }
    }
    else
    {
      v165 = qword_140D06C40;
      sub_14045ECC6((__int64)qword_140D06C40);
    }
    v27[315] = v39;
    v41 = Object;
    if ( Object )
    {
      ObfReferenceObject(Object);
      v41 = Object;
    }
    if ( (v19 & 4) == 0 || (v136 = *(unsigned __int16 *)(v36 + 2412), (v19 & 2) != 0) )
    {
      v44 = 0;
    }
    else
    {
      if ( sub_140347810((struct _EX_RUNDOWN_REF *)(v36 + 1112)) )
      {
        v42 = *(void **)(v36 + 1304);
        Object = v42;
        if ( v42 )
          ObfReferenceObject(v42);
        sub_1402AD030((struct _EX_RUNDOWN_REF *)(v36 + 1112));
      }
      v41 = Object;
      if ( !Object )
      {
        SectionInformation = -1073741558;
        goto LABEL_161;
      }
      v43 = *(_QWORD *)(v36 + 1408);
      if ( v43 )
      {
        v19 |= 0x40u;
        v157 = *(_DWORD *)(v43 + 8);
      }
      v44 = 0;
      if ( (*(_DWORD *)(v36 + 1124) & 0x20000) != 0 )
        v44 = 0x20000;
      v132 = v44;
    }
    v163 = (__int64)(v27 + 163);
    v27[163] = v41;
    if ( v18 )
    {
      v27[270] = *(_QWORD *)(v18 + 440);
      SectionInformation = MmGetSectionInformation((__int64)v41, 4, v18 + 48);
      if ( SectionInformation < 0 )
        goto LABEL_161;
      v19 |= (*(_BYTE *)(v18 + 99) & 4 | (4
                                        * (*(_BYTE *)(v18 + 99) & 2 | (32
                                                                     * (*(_DWORD *)(v18 + 112) & 1 | (2 * (*(_DWORD *)(v18 + 112) & 2 | (2 * (*(_DWORD *)(v18 + 112) & 0xFC))))))))) << 11;
      v148 = *(unsigned __int16 *)(v18 + 86);
      v147 = *(unsigned __int16 *)(v18 + 84);
      if ( (*(_WORD *)(v18 + 92) & *(_WORD *)(v18 + 10)) != 0 )
      {
        SectionInformation = -1073741701;
        v45 = 3;
LABEL_81:
        sub_14066EFE8(v45, v18, 0LL);
        goto LABEL_161;
      }
      if ( (v19 & 4) == 0 )
      {
        ObfReferenceObjectWithTag(*(PVOID *)(v18 + 176), 0x72437350u);
        v27[180] = *(_QWORD *)(v18 + 176);
        v129 = *(_WORD *)(v18 + 94);
        v46 = (HANDLE *)(v18 + 192);
        v47 = RtlOpenImageFileOptionsKey((unsigned __int16 *)(v18 + 232), 0LL, (HANDLE *)(v18 + 192));
        if ( v47 < 0 )
        {
          if ( v47 == -1073741772 )
            *(_BYTE *)(v18 + 8) |= 0x40u;
          *v46 = 0LL;
        }
        SectionInformation = sub_140711058(v128, v18, &v139);
        if ( SectionInformation < 0 )
        {
          v45 = 4;
          goto LABEL_81;
        }
        v136 = (unsigned __int16)v139;
        if ( BYTE2(v139) )
          v19 |= 0x40u;
        if ( HIBYTE(v139) )
          v132 = v44 | 0x20000;
        if ( *v46 )
        {
          if ( *(char *)(v18 + 8) >= 0 )
          {
            if ( (v48 = RtlQueryImageFileKeyOption(*v46, L"Debugger", 1, &v134, 2u, &NumberOfBytes), v48 == -2147483643)
              || v48 >= 0 && NumberOfBytes == 2 && (_WORD)v134
              || (v155 = 0, RtlQueryImageFileKeyOption(*v46, L"AppExecutionAliasRedirect", 4, &v155, 4u, 0LL) >= 0)
              && v155 == 1 )
            {
              SectionInformation = -1073741767;
              v45 = 5;
              goto LABEL_81;
            }
          }
          v135 = 0;
          if ( RtlQueryImageFileKeyOption(*v46, L"UseLargePages", 4, &v135, 4u, 0LL) >= 0 )
          {
            if ( v135 )
            {
              v49 = NumberOfBytes_4 | 0x10;
              NumberOfBytes_4 = v49;
              a9 = v49;
              if ( (v19 & 0x40) == 0 )
              {
                ObjectAttributes.Length = 48;
                ObjectAttributes.RootDirectory = *v46;
                ObjectAttributes.Attributes = 576;
                ObjectAttributes.ObjectName = (PUNICODE_STRING)&qword_140A38B20;
                *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0 )
                {
                  v135 = 0;
                  if ( RtlQueryImageFileKeyOption(KeyHandle, L"ntdll.dll", 4, &v135, 4u, 0LL) >= 0 && v135 )
                  {
                    NumberOfBytes_4 = v49 | 0x20;
                    a9 = v49 | 0x20;
                  }
                  ObCloseHandle(KeyHandle, 0);
                }
              }
            }
          }
          if ( !v158 )
          {
            sub_1406CC6A0((__int64)v27, *v46);
            v142 = v143;
          }
          v156 = 0;
          if ( RtlQueryImageFileKeyOption(*v46, L"ForceWakeCharge", 4, &v156, 4u, 0LL) >= 0 && v156 )
            v133 |= 0x40u;
          if ( RtlQueryImageFileKeyOption(*v46, L"AllowedCpuSets", 3, 0LL, 0, &NumberOfBytes) == -2147483643 )
          {
            v50 = NumberOfBytes;
            if ( NumberOfBytes <= 0x100 && (NumberOfBytes & 7) == 0 )
            {
              PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, 0x73437350u);
              P = PoolWithTag;
              if ( !PoolWithTag )
              {
LABEL_119:
                SectionInformation = -1073741801;
                goto LABEL_161;
              }
              if ( RtlQueryImageFileKeyOption(*v46, L"AllowedCpuSets", 3, (ULONG *)PoolWithTag, v50, &NumberOfBytes) >= 0
                && (NumberOfBytes & 7) == 0 )
              {
                v19 |= 0x200000u;
                v138 = NumberOfBytes >> 3;
              }
            }
          }
          v182.Length = 48;
          v182.RootDirectory = *v46;
          v182.Attributes = 576;
          v182.ObjectName = (PUNICODE_STRING)&qword_140A38B10;
          *(_OWORD *)&v182.SecurityDescriptor = 0LL;
          if ( ZwOpenKey(&Handle, 1u, &v182) >= 0 )
          {
            sub_1407F6CE0(Handle);
            ObCloseHandle(Handle, 0);
          }
        }
      }
    }
    else if ( v41 )
    {
      SectionInformation = MmGetSectionInformation((__int64)v41, 4, (__int64)v199);
      if ( SectionInformation < 0 )
        goto LABEL_161;
      v19 |= (HIBYTE(v199[12]) & 4 | (4
                                    * (HIBYTE(v199[12]) & 2 | (32
                                                             * (v199[16] & 1 | (2
                                                                              * (v199[16] & 2 | (2 * (v199[16] & 0xFC))))))))) << 11;
      v129 = HIWORD(v199[11]);
      v148 = HIWORD(v199[9]);
      v147 = LOWORD(v199[9]);
      if ( (v19 & 4) != 0 )
      {
        v132 = v44 | 8;
        v19 |= 0x18u;
      }
    }
    if ( (v19 & 0x40) != 0 )
    {
      v52 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x50776F57u);
      v27[176] = v52;
      if ( !v52 )
        goto LABEL_119;
      v53 = v157;
      v54 = v136;
      if ( !v157 )
        v53 = sub_1402361E4(v18);
      v52[2] = v53;
      v55 = (_QWORD *)v27[176];
      if ( v55 )
        *v55 = 1LL;
    }
    else
    {
      v54 = v136;
    }
    v146 = (_WORD *)v27 + 1206;
    *((_WORD *)v27 + 1206) = v54;
    SectionInformation = SeQueryInformationToken(Token, TokenIsAppContainer, &TokenInformation);
    if ( SectionInformation < 0 )
      goto LABEL_161;
    v56 = 0;
    v57 = a2;
    if ( a2 )
    {
      if ( v18 && (*(_DWORD *)(v18 + 4) & 0x100) != 0 && *(_BYTE *)(v18 + 248) == 4 )
      {
        v210[0] = 14;
        v56 = 1;
      }
      v58 = a12;
      if ( a12 )
        v210[v56++] = 3;
      v59 = NumberOfBytes_4;
      if ( (NumberOfBytes_4 & 0x30) != 0 )
        v210[v56++] = 4;
      if ( (v59 & 0x80u) != 0 )
      {
        v60 = sub_1406E8FE0();
        v58 = a12;
        if ( !v60 )
          v210[v56++] = 10;
      }
      if ( (v59 & 0x8400) != 0 )
        v210[v56++] = 7;
      if ( v56 )
      {
        v61 = (int)sub_1406CB6DC(v210, v56, v58 != 0, &v167) < 0;
        v57 = a2;
        if ( !v61 )
          v19 |= 0x400u;
      }
      else
      {
        v57 = a2;
      }
    }
    else
    {
      v59 = NumberOfBytes_4;
    }
    if ( (v59 & 0x8400) != 0 && !SeSinglePrivilegeCheck(stru_140D3CA10, v57) )
      goto LABEL_158;
    v124[0] = -1;
    v208[0] = 2097153;
    memset(&v208[1], 0, 0x104uLL);
    if ( v158 )
    {
      sub_1402395A0(v158, (__int64)v208, 0LL, v211, v124);
      v142 = (unsigned __int16 *)qword_140D31700[*((unsigned __int16 *)v211 + v124[0])];
      v143 = v142;
      goto LABEL_173;
    }
    v65 = v142;
    if ( !v142 )
    {
      if ( !v128 )
      {
        v66 = 0;
        v124[0] = 0;
        KeAddProcessorAffinityEx((unsigned __int16 *)v208, 0);
LABEL_171:
        KeCopyAffinityEx2((__int64)v208, (__int64)dword_140D06E40);
        if ( !v65 )
        {
          v179 = 0LL;
          WORD4(v179) = v66;
          *(_QWORD *)&v179 = KeQueryGroupAffinityEx((unsigned __int16 *)v208, v66);
          v142 = (unsigned __int16 *)sub_1403DE5C8((__int64)&v179);
          v143 = v142;
        }
LABEL_173:
        *((_DWORD *)v27 + 281) |= v132;
        *v149 |= v133;
        if ( v128 )
        {
          v166 = 0LL;
          v67 = 0;
          SessionId = 0;
          v68 = 0;
          v125 = 0;
          if ( a12 )
          {
            if ( SeSinglePrivilegeCheck(stru_140D3CB50, a2) )
              v19 |= 0x200u;
            SectionInformation = sub_140695160((__int64)Token, &v125);
            if ( SectionInformation < 0 )
              goto LABEL_159;
            v68 = v125;
            if ( v125 )
            {
              v69 = (v19 & 0x200) != 0;
            }
            else
            {
              v69 = (v19 & 0x200) != 0;
              if ( (v19 & 0x200) == 0 )
                goto LABEL_158;
            }
            SectionInformation = SeQuerySessionIdToken(Token, &SessionId);
            if ( SectionInformation < 0 )
              goto LABEL_159;
            v70 = sub_140287F30(v151);
            v67 = SessionId;
            if ( SessionId != v70 )
            {
              if ( !v69 )
              {
LABEL_158:
                SectionInformation = -1073741727;
                goto LABEL_159;
              }
              if ( (NumberOfBytes_4 & 0x80u) != 0 )
              {
                SectionInformation = -1073741811;
                goto LABEL_159;
              }
              v19 |= 0x20u;
            }
          }
          else if ( (v19 & 4) != 0 )
          {
            v67 = sub_140287F30(v128);
            SessionId = v67;
            v19 |= (unsigned int)sub_140287F30(v151) != v67 ? 0x20 : 0;
          }
          if ( (v19 & 0x20) != 0 )
          {
            SectionInformation = sub_1406A8EEC(v67, (__int64)&ApcState, (ULONG_PTR *)&v166);
            if ( SectionInformation < 0 )
            {
              LOWORD(v19) = v19 & 0xFFDF;
              goto LABEL_159;
            }
            *v149 |= 0x80u;
          }
          if ( !a12 || v68 )
          {
            v72 = v128;
            if ( v68 )
              v72 = v151;
            sub_1406DBC80((__int64)v27, v72);
          }
          else
          {
            SectionInformation = sub_1406C86A0(0LL, (__int64)v27, (__int64)Token);
            if ( SectionInformation < 0 )
            {
              if ( (v19 & 0x20) != 0 )
                sub_1406A8EC8(v166, (__int64)&ApcState);
              goto LABEL_159;
            }
          }
          v73 = qword_140D3B250;
          if ( (BYTE4(v204) & 1) != 0 )
            v73 = DWORD2(v205);
          v19 |= (sub_1407F17B4((_DWORD)v165, v71, v73, BYTE4(v204) & 1, (unsigned int)*v142 + 1, (__int64)v27) & 1) << 11;
          if ( (v19 & 0x20) != 0 )
            sub_1406A8EC8(v166, (__int64)&ApcState);
          if ( (v19 & 0x800) == 0 )
            goto LABEL_213;
        }
        else
        {
          sub_1406DBC80((__int64)v27, 0LL);
          *((_BYTE *)v27 + 912) = 1;
          SectionInformation = sub_14085D8F8();
          if ( SectionInformation < 0 )
            goto LABEL_159;
        }
        _InterlockedOr((volatile signed __int32 *)v27 + 281, 0x40000u);
        v27 = v144;
        v74 = sub_14070F320(v144);
        SectionInformation = sub_14070A268(v75, 8, v124[0], (unsigned __int16 *)v208, v143, v74, v76);
        if ( SectionInformation < 0 )
          goto LABEL_159;
        if ( v18 )
        {
          v137 = *(_DWORD *)(v18 + 392);
          v154 = *(_DWORD *)(v18 + 396);
          Address = *(PVOID *)(v18 + 416);
          v153 = *(_DWORD *)(v18 + 424);
          v175 = *(_QWORD *)(v18 + 208);
          v77 = *(_DWORD **)(v18 + 400);
          v140 = *(_DWORD *)(v18 + 408);
          v78 = *(_QWORD *)(v18 + 176);
          if ( v78 && (int)sub_1406DD8A8(v78, (__int64)v209) >= 0 )
          {
            if ( !v209[0] && v77 && v140 == 524 )
            {
              v79 = v209;
              v80 = 4LL;
              do
              {
                *(_OWORD *)v79 = *(_OWORD *)v77;
                *((_OWORD *)v79 + 1) = *((_OWORD *)v77 + 1);
                *((_OWORD *)v79 + 2) = *((_OWORD *)v77 + 2);
                *((_OWORD *)v79 + 3) = *((_OWORD *)v77 + 3);
                *((_OWORD *)v79 + 4) = *((_OWORD *)v77 + 4);
                *((_OWORD *)v79 + 5) = *((_OWORD *)v77 + 5);
                *((_OWORD *)v79 + 6) = *((_OWORD *)v77 + 6);
                v79 += 32;
                *((_OWORD *)v79 - 1) = *((_OWORD *)v77 + 7);
                v77 += 32;
                --v80;
              }
              while ( v80 );
              *(_QWORD *)v79 = *(_QWORD *)v77;
              v79[2] = v77[2];
            }
            v77 = v209;
            v140 = 536;
          }
        }
        else
        {
          v77 = 0LL;
        }
        v81 = v128;
        SectionInformation = sub_14070F0D8(
                               v128,
                               (_DWORD)v27,
                               (_DWORD)Token,
                               a12,
                               v137,
                               (v19 >> 4) & 1,
                               HIWORD(v19) & 1,
                               v154,
                               (__int64)v77,
                               v140,
                               (__int64)Address,
                               v153,
                               v175,
                               v177);
        if ( SectionInformation < 0 )
          goto LABEL_159;
        *((_BYTE *)v27 + 1463) = 2;
        if ( v81 )
        {
          v82 = *((_BYTE *)v27 + 1463);
          if ( ((*(_BYTE *)(v81 + 1463) - 1) & 0xFB) == 0 )
            v82 = *(_BYTE *)(v81 + 1463);
          *((_BYTE *)v27 + 1463) = v82;
          if ( v18 )
            v83 = *(_QWORD *)(v18 + 296);
          else
            LODWORD(v83) = 0;
          v84 = v18 ? *(_DWORD *)(v18 + 292) : 0;
          v85 = sub_1406A6448((struct _EX_RUNDOWN_REF *)(v81 & -(__int64)((a9 & 4) != 0)), (__int64)v27, v84, v83);
        }
        else
        {
          v27[174] = *(_QWORD *)(v151 + 1392);
          v85 = sub_140860DAC((ULONG_PTR)v27);
        }
        SectionInformation = v85;
        if ( v85 < 0 )
          goto LABEL_159;
        if ( (v204 & 7) != 0 )
        {
          LOBYTE(v86) = a2;
          sub_1407F7128(v27, &v204, v86);
        }
        if ( (v19 & 0x200000) != 0 )
          sub_1403D2D98((__int64)v27, v138, (char *)P);
        sub_1402A08BC(
          (__int64)v171,
          (__int64)v27,
          (unsigned int *)((unsigned __int64)&v206 & -(__int64)((BYTE4(v204) & 2) != 0)));
        if ( v18 )
        {
          if ( (*(_DWORD *)(v18 + 4) & 0x100) != 0 )
          {
            LOBYTE(v87) = a2;
            SectionInformation = sub_1406D2718((__int64)v27, *(_BYTE *)(v18 + 248), 0LL, v87);
            if ( SectionInformation < 0 )
              goto LABEL_159;
          }
        }
        *((_BYTE *)v27 + 640) = sub_14079D364((_DWORD)v27, 0, (unsigned int)&v126, 0, 0LL);
        *((_BYTE *)v27 + 641) = v126;
        SectionInformation = 0;
        v137 = 0;
        sub_14070EF5C(v18, &v200);
        v185 = v200;
        v186 = v201;
        v187 = xmmword_140D06DE8;
        v188 = qword_140D06DF8;
        sub_14070ED0C(&v187, &v185, &v200);
        sub_14070EFE4(v18, &v202);
        v189 = v202;
        v190 = v203;
        v191 = xmmword_140D07070;
        v192 = qword_140D07080;
        sub_14070EE70(&v191, &v189, &v202);
        v88 = (HIWORD(v200.m128i_i64[0]) & 3) << 16;
        if ( v18 )
        {
          if ( (*(_DWORD *)(v18 + 4) & 0x10000) != 0 )
          {
            v193 = *(_OWORD *)(v18 + 336);
            v194 = *(_QWORD *)(v18 + 352);
            v195 = v200;
            v196 = v201;
            sub_14070ED0C(&v195, &v193, &v200);
          }
          if ( (*(_DWORD *)(v18 + 4) & 0x8000000) != 0 )
          {
            v183 = *(_OWORD *)(v18 + 464);
            v184 = *(_QWORD *)(v18 + 480);
            v197 = v202;
            v198 = v203;
            sub_14070EE70(&v197, &v183, &v202);
          }
        }
        if ( (_DWORD)TokenInformation )
          LOWORD(v88) = v88 | 4;
        v89 = v88 | 0x100;
        if ( (v88 & 4) == 0 )
          v89 = v88;
        if ( (v89 & 0xFF00) != 0 )
          sub_1406DA7B0(&v200);
        if ( !sub_1402A08A8() )
          v200.m128i_i64[1] = v200.m128i_i64[1] & 0xCFFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
        if ( (v129 & 0x4000) == 0 || (v19 & 0x40000) == 0 )
          v145 = 0;
        if ( (v129 & 0x4000) == 0 || (v91 = 0x80000, (v19 & 0x400000) == 0) )
          v91 = 0;
        v92 = v90 | ((v129 & 0x4000) != 0 ? 8 : 0) | (v129 >> 4) & 2 | ((v19 & 0x6000) != 0) | v145 | ((v19 & 0x100000 | (v19 >> 1) & 0x7C00000) >> 2) | v91;
        if ( (v19 & 2) != 0 )
        {
          v200.m128i_i64[1] = v200.m128i_i64[1] & 0xCFFFFFFFFFFFFFFCuLL | 0x2000000000000002LL;
          if ( (a10 & 2) != 0 )
            v93 = v200.m128i_i64[0] & 0xFFFFFCFFFFCCFFFFuLL | 0x20000220000LL;
          else
            v93 = v200.m128i_i64[0] & 0xFFFFFCFFFFCCFFFFuLL | 0x20000110000LL;
          v200.m128i_i64[0] = v93;
        }
        if ( (v19 & 4) != 0 && (*(_DWORD *)(v128 + 2516) & 0x4000) == 0 )
          v200.m128i_i64[1] = v200.m128i_i64[1] & 0xCFFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
        if ( (v19 & 0x40) != 0 )
          v200.m128i_i64[1] = v200.m128i_i64[1] & 0xCFFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
        v201 = v201 & 0xFFFFFFFFFFFFCFFFuLL | 0x2000;
        sub_14070E104((_DWORD)v27, v128, (unsigned int)&v200, (unsigned int)&v202, v92);
        if ( v18 )
        {
          sub_1406DD840((__int64)v27, v18);
          sub_1406DF640(v95, v94);
          *(__m128i *)(v18 + 336) = v200;
          *(_QWORD *)(v18 + 352) = v201;
          *(_OWORD *)(v18 + 464) = v202;
          *(_QWORD *)(v18 + 480) = v203;
        }
        sub_14070BA00((__int64)v27, 0LL, (__int64)v127);
        v96 = ((_DWORD)TokenInformation != 0) | 2u;
        if ( (a9 & 0x20000) == 0 )
          v96 = (_DWORD)TokenInformation != 0;
        sub_14070EE20(v27, v96);
        if ( (*((_DWORD *)v27 + 629) & 0x4000) != 0 )
        {
          SectionInformation = sub_140960988(v27);
          if ( SectionInformation < 0 )
            goto LABEL_159;
        }
        if ( (a9 & 0x80u) != 0 && !sub_1406E8FE0() && !SeSinglePrivilegeCheck(PrivilegeValue, a2) )
          goto LABEL_158;
        if ( (v19 & 1) != 0 )
        {
LABEL_302:
          if ( (v19 & 0x400) != 0 )
            sub_1406DAE08((char *)v167);
          if ( *v146 == 332 )
            *((_DWORD *)v27 + 158) |= 1u;
          v138 = v19 & 0x80;
          if ( (v19 & 0x80) != 0 )
          {
            if ( v18 )
            {
              SectionInformation = sub_1406D94F0((ULONG_PTR)v27, (__int64)&ApcState, (_QWORD *)v18, v97);
              if ( SectionInformation < 0 )
                goto LABEL_161;
            }
          }
          LODWORD(v146) = v19 & 0x100;
          if ( (v19 & 0x100) != 0 )
          {
            *(_QWORD *)&v172 = 0LL;
            *((_QWORD *)&v172 + 1) = -1LL;
            IsProtectedProcess = PsIsProtectedProcess((__int64)v27);
            IsProtectedProcessLight = PsIsProtectedProcessLight((__int64)v27);
            v109 = BYTE3(v172) & 0x88 | ((v19 & 0x1000) != 0) | (2
                                                               * (IsProtectedProcess | (2
                                                                                      * ((16 * IsProtectedProcessLight) | ((v19 & 0x2000) != 0))))) & 0xCF | (16 * (((_DWORD)TokenInformation != 0 ? 2 : 0) | v127[0] & 1));
            BYTE3(v172) = v109;
            if ( (v19 & 4) != 0 )
            {
              v110 = v128;
              Address = *(PVOID *)(v128 + 1360);
              v27[170] = Address;
              if ( (v19 & 0x10) != 0 )
              {
LABEL_330:
                if ( (v19 & 0x80) != 0 && v18 )
                {
                  sub_14067259C(v110, v27, (__int64)&ApcState, v18);
                }
                else if ( (_DWORD)v146 && (v19 & 0x10) == 0 )
                {
                  KeStackAttachProcess((PRKPROCESS)v27, &ApcState);
                  sub_140205DD4(v27);
                  v114 = CurrentThread;
                  sub_140672BD8((__int64)CurrentThread, (ULONG_PTR)v27, v116, v117);
                  if ( (v19 & 0x80) != 0
                    && (int)sub_140672AD0((__int64)v27) >= 0
                    && (int)sub_140672A98((__int64)v27) >= 0
                    && (int)sub_1406727EC(0LL, 0LL) >= 0
                    && v27[176] )
                  {
                    v118 = sub_140672A7C((__int64)v27);
                    sub_1406727EC(v118, 0LL);
                  }
                  KeUnstackDetachProcess(&ApcState);
LABEL_334:
                  sub_1402A0880((__int64)v27, (__int64)v114);
                  v115 = sub_1407A347C(qword_140D06A60, v27);
                  v27[136] = v115;
                  if ( !v115 )
                  {
                    sub_14025302C((__int64)v27, (__int64)v114);
                    SectionInformation = -1073741670;
                    goto LABEL_161;
                  }
                  if ( (v19 & 0x10000) != 0 )
                  {
                    SectionInformation = sub_14097F148(0LL, 0LL, v27[163], &v174);
                    v119 = (__int64)v27;
                    if ( SectionInformation < 0 )
                    {
LABEL_347:
                      sub_14025302C(v119, (__int64)v114);
                      goto LABEL_161;
                    }
                    SectionInformation = sub_14056C6B8(
                                           (ULONG_PTR)v27,
                                           **(_QWORD **)(v18 + 368),
                                           v27[170],
                                           v27[136],
                                           v174,
                                           v27[164],
                                           *(struct _MDL **)(v18 + 368),
                                           *(unsigned int *)(v18 + 384));
                    if ( SectionInformation < 0 )
                    {
                      v119 = (__int64)v27;
                      goto LABEL_347;
                    }
                  }
                  if ( sub_1402F0880() )
                  {
                    KeQuerySystemTimePrecise(v27 + 141);
                  }
                  else
                  {
                    v27 = v144;
                    *((_QWORD *)v144 + 141) = MEMORY[0xFFFFF78000000014];
                  }
                  v27[288] = MEMORY[0xFFFFF78000000008];
                  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
                  v121 = v144;
                  *((_QWORD *)v144 + 289) = UnbiasedInterruptTime;
                  v121[291] = v27[288];
                  *v178 = v121;
                  SectionInformation = v137;
                  goto LABEL_162;
                }
                v114 = CurrentThread;
                goto LABEL_334;
              }
              LOBYTE(v172) = 1;
              KeStackAttachProcess((PRKPROCESS)v27, &ApcState);
              if ( MmSecureVirtualMemory(Address, 0x7D0uLL, 4u) )
                *(_OWORD *)Address = v172;
              else
                SectionInformation = -1073741503;
              if ( SectionInformation >= 0 )
              {
                v111 = (unsigned __int64 **)v27[176];
                if ( v111 )
                {
                  v112 = *((_WORD *)v27 + 1206);
                  if ( v112 == 332 || (v113 = 0, v112 == 452) )
                    v113 = 1;
                  if ( v113 )
                  {
                    v171 = *v111;
                    if ( MmSecureVirtualMemory(v171, 0x488uLL, 4u) )
                    {
                      v161 = 0xFFFFFFFF00000001uLL;
                      BYTE3(v161) = v109;
                      *v171 = v161;
                    }
                    else
                    {
                      SectionInformation = -1073741503;
                    }
                  }
                }
              }
              KeUnstackDetachProcess(&ApcState);
              if ( SectionInformation < 0 )
                goto LABEL_161;
            }
            else
            {
              SectionInformation = sub_140755B70(v27, &v172, v27 + 170, &v180);
              if ( SectionInformation < 0 )
              {
                v27[170] = 0LL;
                goto LABEL_161;
              }
              if ( (_QWORD)v180 )
              {
                _InterlockedAnd(v149, 0xFFCFFFFF);
                v27 = v144;
                sub_1409AE810(v144, 1LL, 0LL);
              }
            }
          }
          v110 = v128;
          goto LABEL_330;
        }
        if ( (v19 & 4) != 0 )
        {
          v102 = v128;
          v27[164] = *(_QWORD *)(v128 + 1312);
          SectionInformation = sub_14070A4FC((ULONG_PTR)v27, v102, 0LL, &a9, (v19 & 8) != 0);
          if ( SectionInformation >= 0 )
          {
            v103 = *(unsigned __int16 *)(*(_QWORD *)(v102 + 1472) + 2LL);
            v104 = ExAllocatePoolWithTag(NonPagedPoolNx, v103 + 16, 0x61506553u);
            v27[184] = v104;
            if ( !v104 )
            {
LABEL_213:
              SectionInformation = -1073741670;
              goto LABEL_159;
            }
            v105 = v103 + 16;
            v106 = v128;
            memmove(v104, *(const void **)(v128 + 1472), v105);
            *(_QWORD *)(v27[184] + 8LL) = v27[184] + 16LL;
            *((_DWORD *)v27 + 330) = *(_DWORD *)(v106 + 1320);
            if ( (*(_DWORD *)(v106 + 1120) & 0x1000000) != 0 )
              *v149 |= 0x1000000u;
            if ( (a9 & 0x1000) != 0 )
            {
              *(_QWORD *)v163 = 0LL;
              ObfDereferenceObject(Object);
            }
            goto LABEL_299;
          }
        }
        else
        {
          SectionInformation = sub_14070F3A8(v18, v27);
          if ( SectionInformation >= 0 )
          {
            v98 = Object;
            v99 = sub_14070A4FC((ULONG_PTR)v27, 0LL, (__int64)Object, &a9, 0);
            SectionInformation = v99;
            if ( v99 >= 0 )
            {
              v137 = v99;
              if ( v18 )
              {
                v100 = sub_140881A7E(v98);
                v101 = v27[164];
                if ( v100 != v101 )
                  *(_QWORD *)(v18 + 48) += v101 - v100;
              }
              v19 |= 0x80u;
LABEL_299:
              if ( (v19 & 1) == 0 )
              {
                v19 |= (a9 & 0x10) << 8;
                if ( (v19 & 2) == 0 )
                  v19 |= 0x100u;
              }
              goto LABEL_302;
            }
          }
        }
LABEL_159:
        if ( (v19 & 0x400) != 0 )
          sub_1406DAE08((char *)v167);
        goto LABEL_161;
      }
      if ( (*(_DWORD *)(v128 + 1120) & 0x100000) == 0 )
      {
        v65 = (unsigned __int16 *)sub_1407F1710(v128, v62, v63, v64, *(_QWORD *)v122);
        v142 = v65;
        v143 = v65;
        v66 = sub_140250060((__int64)v65);
        v124[0] = v66;
        if ( byte_140D068FB && KeQueryActiveGroupCount() > 1u && !v66 )
        {
          v65 = 0LL;
          v142 = 0LL;
          v143 = 0LL;
          v66 = 1;
          v124[0] = 1;
        }
        goto LABEL_171;
      }
      v133 |= 0x100000u;
      v65 = (unsigned __int16 *)qword_140D31700[*(unsigned __int16 *)(v128 + 836)];
      v142 = v65;
      v143 = v65;
    }
    v124[0] = sub_140250060((__int64)v65);
    v66 = v124[0];
    goto LABEL_171;
  }
  return result;
}
