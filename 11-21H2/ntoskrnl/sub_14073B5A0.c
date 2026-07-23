/*
 * XREFs of sub_14073B5A0 @ 0x14073B5A0
 * Callers:
 *     NtQuerySystemInformationEx @ 0x1406B62F0 (NtQuerySystemInformationEx.c)
 *     NtQuerySystemInformation @ 0x14073D860 (NtQuerySystemInformation.c)
 * Callees:
 *     sub_14020DB30 @ 0x14020DB30 (sub_14020DB30.c)
 *     sub_14023559C @ 0x14023559C (sub_14023559C.c)
 *     sub_140235738 @ 0x140235738 (sub_140235738.c)
 *     sub_140242E98 @ 0x140242E98 (sub_140242E98.c)
 *     sub_140243A18 @ 0x140243A18 (sub_140243A18.c)
 *     sub_1402485E0 @ 0x1402485E0 (sub_1402485E0.c)
 *     sub_140258040 @ 0x140258040 (sub_140258040.c)
 *     sub_14025E350 @ 0x14025E350 (sub_14025E350.c)
 *     sub_14025E490 @ 0x14025E490 (sub_14025E490.c)
 *     sub_14025E5E0 @ 0x14025E5E0 (sub_14025E5E0.c)
 *     sub_14025E5F4 @ 0x14025E5F4 (sub_14025E5F4.c)
 *     sub_14025E6F8 @ 0x14025E6F8 (sub_14025E6F8.c)
 *     KeQueryActiveGroupCount @ 0x1402622B0 (KeQueryActiveGroupCount.c)
 *     sub_1402630FC @ 0x1402630FC (sub_1402630FC.c)
 *     sub_140263154 @ 0x140263154 (sub_140263154.c)
 *     sub_140263404 @ 0x140263404 (sub_140263404.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140263790 (KeQueryLogicalProcessorRelationship.c)
 *     sub_14026924C @ 0x14026924C (sub_14026924C.c)
 *     sub_14026925C @ 0x14026925C (sub_14026925C.c)
 *     sub_14026A03C @ 0x14026A03C (sub_14026A03C.c)
 *     sub_14026A05C @ 0x14026A05C (sub_14026A05C.c)
 *     sub_14026A07C @ 0x14026A07C (sub_14026A07C.c)
 *     sub_14026A09C @ 0x14026A09C (sub_14026A09C.c)
 *     sub_14026A0BC @ 0x14026A0BC (sub_14026A0BC.c)
 *     sub_140293444 @ 0x140293444 (sub_140293444.c)
 *     KeGetProcessorIndexFromNumber @ 0x140293580 (KeGetProcessorIndexFromNumber.c)
 *     sub_140294CC0 @ 0x140294CC0 (sub_140294CC0.c)
 *     sub_1402A08A8 @ 0x1402A08A8 (sub_1402A08A8.c)
 *     PsIsHostSilo @ 0x1402A6DF0 (PsIsHostSilo.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     KeGetRecommendedSharedDataAlignment @ 0x1402D3250 (KeGetRecommendedSharedDataAlignment.c)
 *     KeQueryGroupAffinity @ 0x1402D75B0 (KeQueryGroupAffinity.c)
 *     sub_1402F374C @ 0x1402F374C (sub_1402F374C.c)
 *     PoEnergyEstimationEnabled @ 0x1402F6160 (PoEnergyEstimationEnabled.c)
 *     PsGetCurrentServerSilo @ 0x1402F61B0 (PsGetCurrentServerSilo.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     sub_140354698 @ 0x140354698 (sub_140354698.c)
 *     sub_140360AC0 @ 0x140360AC0 (sub_140360AC0.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140367B10 (ExAllocatePoolWithQuotaTag.c)
 *     sub_1403DF48C @ 0x1403DF48C (sub_1403DF48C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14041D480 @ 0x14041D480 (sub_14041D480.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     HvlQueryActiveProcessors @ 0x140543A70 (HvlQueryActiveProcessors.c)
 *     HvlQueryProcessorTopologyCount @ 0x140543C60 (HvlQueryProcessorTopologyCount.c)
 *     sub_14054E7B4 @ 0x14054E7B4 (sub_14054E7B4.c)
 *     sub_14054EE64 @ 0x14054EE64 (sub_14054EE64.c)
 *     sub_1405683C0 @ 0x1405683C0 (sub_1405683C0.c)
 *     sub_14056D75C @ 0x14056D75C (sub_14056D75C.c)
 *     sub_1405711E4 @ 0x1405711E4 (sub_1405711E4.c)
 *     sub_140577F60 @ 0x140577F60 (sub_140577F60.c)
 *     sub_1405C5B98 @ 0x1405C5B98 (sub_1405C5B98.c)
 *     sub_1405D6FBC @ 0x1405D6FBC (sub_1405D6FBC.c)
 *     sub_1405E04A0 @ 0x1405E04A0 (sub_1405E04A0.c)
 *     sub_1405EE7E0 @ 0x1405EE7E0 (sub_1405EE7E0.c)
 *     sub_1405F5398 @ 0x1405F5398 (sub_1405F5398.c)
 *     sub_140601D00 @ 0x140601D00 (sub_140601D00.c)
 *     sub_1406384AC @ 0x1406384AC (sub_1406384AC.c)
 *     sub_1406389A8 @ 0x1406389A8 (sub_1406389A8.c)
 *     sub_14063A8C0 @ 0x14063A8C0 (sub_14063A8C0.c)
 *     sub_14063AC94 @ 0x14063AC94 (sub_14063AC94.c)
 *     sub_1406A8B68 @ 0x1406A8B68 (sub_1406A8B68.c)
 *     sub_1406AD42C @ 0x1406AD42C (sub_1406AD42C.c)
 *     sub_1406B6054 @ 0x1406B6054 (sub_1406B6054.c)
 *     sub_1406BC564 @ 0x1406BC564 (sub_1406BC564.c)
 *     sub_1406C5900 @ 0x1406C5900 (sub_1406C5900.c)
 *     sub_1406C6384 @ 0x1406C6384 (sub_1406C6384.c)
 *     sub_1406C8B78 @ 0x1406C8B78 (sub_1406C8B78.c)
 *     sub_1406C955C @ 0x1406C955C (sub_1406C955C.c)
 *     sub_1406C9754 @ 0x1406C9754 (sub_1406C9754.c)
 *     sub_1406CD16C @ 0x1406CD16C (sub_1406CD16C.c)
 *     sub_1406CDACC @ 0x1406CDACC (sub_1406CDACC.c)
 *     sub_1406D5A94 @ 0x1406D5A94 (sub_1406D5A94.c)
 *     sub_1406E0D3C @ 0x1406E0D3C (sub_1406E0D3C.c)
 *     sub_1406E47F0 @ 0x1406E47F0 (sub_1406E47F0.c)
 *     sub_1406F2350 @ 0x1406F2350 (sub_1406F2350.c)
 *     sub_1406F2420 @ 0x1406F2420 (sub_1406F2420.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     sub_14072ACC0 @ 0x14072ACC0 (sub_14072ACC0.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     sub_140759300 @ 0x140759300 (sub_140759300.c)
 *     sub_140759A80 @ 0x140759A80 (sub_140759A80.c)
 *     sub_14075AF98 @ 0x14075AF98 (sub_14075AF98.c)
 *     PsLookupProcessByProcessId @ 0x1407A8720 (PsLookupProcessByProcessId.c)
 *     sub_1407B6CA0 @ 0x1407B6CA0 (sub_1407B6CA0.c)
 *     sub_1407D6F54 @ 0x1407D6F54 (sub_1407D6F54.c)
 *     sub_1407E2B70 @ 0x1407E2B70 (sub_1407E2B70.c)
 *     sub_1407F8664 @ 0x1407F8664 (sub_1407F8664.c)
 *     sub_1407F9820 @ 0x1407F9820 (sub_1407F9820.c)
 *     sub_1407FA644 @ 0x1407FA644 (sub_1407FA644.c)
 *     sub_1407FC0D0 @ 0x1407FC0D0 (sub_1407FC0D0.c)
 *     sub_1407FCA14 @ 0x1407FCA14 (sub_1407FCA14.c)
 *     sub_14080B5A8 @ 0x14080B5A8 (sub_14080B5A8.c)
 *     sub_14081C05C @ 0x14081C05C (sub_14081C05C.c)
 *     sub_140855DD8 @ 0x140855DD8 (sub_140855DD8.c)
 *     sub_14085634C @ 0x14085634C (sub_14085634C.c)
 *     sub_14085F318 @ 0x14085F318 (sub_14085F318.c)
 *     sub_14085FAA4 @ 0x14085FAA4 (sub_14085FAA4.c)
 *     sub_1408624E8 @ 0x1408624E8 (sub_1408624E8.c)
 *     sub_140862FD8 @ 0x140862FD8 (sub_140862FD8.c)
 *     sub_140863390 @ 0x140863390 (sub_140863390.c)
 *     sub_14086423C @ 0x14086423C (sub_14086423C.c)
 *     sub_140911230 @ 0x140911230 (sub_140911230.c)
 *     sub_140930DA8 @ 0x140930DA8 (sub_140930DA8.c)
 *     sub_140930EC4 @ 0x140930EC4 (sub_140930EC4.c)
 *     sub_140932544 @ 0x140932544 (sub_140932544.c)
 *     sub_140932F44 @ 0x140932F44 (sub_140932F44.c)
 *     sub_140961998 @ 0x140961998 (sub_140961998.c)
 *     sub_140962C48 @ 0x140962C48 (sub_140962C48.c)
 *     sub_1409855BC @ 0x1409855BC (sub_1409855BC.c)
 *     sub_1409AB8A0 @ 0x1409AB8A0 (sub_1409AB8A0.c)
 *     sub_1409C674C @ 0x1409C674C (sub_1409C674C.c)
 *     sub_1409F5D80 @ 0x1409F5D80 (sub_1409F5D80.c)
 *     sub_1409F6464 @ 0x1409F6464 (sub_1409F6464.c)
 *     sub_1409F6670 @ 0x1409F6670 (sub_1409F6670.c)
 *     sub_1409F66F0 @ 0x1409F66F0 (sub_1409F66F0.c)
 *     sub_1409F6770 @ 0x1409F6770 (sub_1409F6770.c)
 *     sub_1409F67F0 @ 0x1409F67F0 (sub_1409F67F0.c)
 *     sub_1409F6880 @ 0x1409F6880 (sub_1409F6880.c)
 *     sub_1409F68DC @ 0x1409F68DC (sub_1409F68DC.c)
 *     sub_1409F6A1C @ 0x1409F6A1C (sub_1409F6A1C.c)
 *     sub_1409F6F98 @ 0x1409F6F98 (sub_1409F6F98.c)
 *     sub_1409F7090 @ 0x1409F7090 (sub_1409F7090.c)
 *     sub_1409F7240 @ 0x1409F7240 (sub_1409F7240.c)
 *     sub_1409F7390 @ 0x1409F7390 (sub_1409F7390.c)
 *     sub_1409F75A0 @ 0x1409F75A0 (sub_1409F75A0.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     sub_140A0350C @ 0x140A0350C (sub_140A0350C.c)
 *     sub_140A08710 @ 0x140A08710 (sub_140A08710.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     sub_140A9C7B0 @ 0x140A9C7B0 (sub_140A9C7B0.c)
 *     sub_140AACB50 @ 0x140AACB50 (sub_140AACB50.c)
 */

int __fastcall sub_14073B5A0(int a1, void *a2, unsigned int a3, unsigned __int64 a4, unsigned int Length, ULONG *a6)
{
  unsigned int v8; // edi
  __int64 v9; // rcx
  ULONG v10; // r8d
  LOGICAL_PROCESSOR_RELATIONSHIP v11; // r15d
  __int64 v12; // r9
  WORD v13; // r12
  void *v14; // r13
  __int64 v15; // r8
  __int64 v16; // rdx
  int v17; // eax
  int result; // eax
  ULONG ActiveProcessorCount; // eax
  unsigned int v20; // edi
  PVOID v21; // rdi
  unsigned __int16 v22; // ax
  unsigned __int16 v23; // cx
  unsigned __int16 v24; // cx
  unsigned __int16 v25; // cx
  unsigned __int16 v26; // cx
  __int64 v27; // rcx
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *Pool2; // r12
  ULONG v29; // r13d
  _PROCESSOR_NUMBER *p_ProcNumber; // rax
  _OWORD *v31; // rsi
  __int64 v32; // rcx
  _OWORD *v33; // rax
  __int64 v34; // r15
  __int64 v35; // rcx
  _OWORD *v36; // rax
  ULONG v37; // eax
  unsigned int v38; // ecx
  unsigned int v39; // r15d
  _DWORD *v40; // r13
  ULONG v41; // ecx
  __int64 v42; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  ULONG v46; // ecx
  __int64 v47; // rsi
  __int64 v48; // rcx
  unsigned __int16 v49; // ax
  unsigned __int16 v50; // cx
  unsigned __int16 v51; // cx
  unsigned __int16 v52; // cx
  unsigned int v53; // r15d
  ULONG v54; // r15d
  unsigned __int64 v55; // rdi
  char v56; // si
  __int64 v57; // rsi
  __int64 v58; // rdx
  unsigned int v59; // esi
  _DWORD *v60; // rdx
  struct _KTHREAD *v61; // rax
  int v62; // ecx
  ULONG v63; // eax
  int v64; // edx
  int v65; // r8d
  unsigned int v66; // ecx
  __int64 v67; // rax
  __int64 v68; // rdx
  unsigned __int16 v69; // ax
  unsigned __int16 v70; // cx
  bool v71; // al
  int v72; // ecx
  bool v73; // al
  int v74; // r8d
  bool v75; // al
  int v76; // edx
  unsigned int v77; // r10d
  unsigned int i; // r9d
  __int64 v79; // rdx
  struct _MDL *PoolWithQuotaTag; // rdi
  int v81; // eax
  void *v82; // rcx
  PVOID v83; // rdi
  unsigned int v84; // eax
  unsigned __int64 v85; // r15
  _DWORD *PoolWithTag; // rax
  _DWORD *v87; // rdi
  char *v88; // rdx
  struct _KTHREAD *v89; // r15
  NTSTATUS v90; // edi
  unsigned int v91; // ebx
  unsigned int v92; // ecx
  unsigned int v93; // ecx
  __int64 v94; // rdx
  unsigned int v95; // eax
  unsigned int v96; // esi
  unsigned int v97; // r15d
  __int64 v98; // rcx
  _QWORD *v99; // rax
  ULONG v100; // eax
  int v101; // ecx
  ULONG v102; // edi
  __int64 v103; // r8
  __int64 v104; // r9
  PVOID v105; // rdi
  __int64 v106; // rax
  int v107; // esi
  PVOID v108; // r15
  unsigned int v109; // eax
  unsigned int v110; // esi
  __int64 v111; // rcx
  __int64 CurrentServerSilo; // rax
  __int16 v113; // di
  char v114; // cl
  __int64 v115; // rdx
  __int64 v116; // rcx
  char v117; // al
  unsigned __int16 *v118; // rax
  unsigned __int16 *v119; // rsi
  unsigned __int16 *v120; // rax
  __int64 v121; // r15
  struct _MDL *v122; // rax
  int v123; // eax
  int ProcessorTopologyCount; // [rsp+40h] [rbp-828h]
  ULONG v125; // [rsp+44h] [rbp-824h] BYREF
  unsigned int Size; // [rsp+48h] [rbp-820h]
  unsigned __int8 Size_4; // [rsp+4Ch] [rbp-81Ch]
  int v128; // [rsp+50h] [rbp-818h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+54h] [rbp-814h] BYREF
  unsigned __int16 v130; // [rsp+58h] [rbp-810h]
  int v131; // [rsp+5Ch] [rbp-80Ch]
  unsigned int v132; // [rsp+60h] [rbp-808h]
  unsigned int v133; // [rsp+64h] [rbp-804h]
  PVOID P; // [rsp+68h] [rbp-800h]
  USHORT v135; // [rsp+70h] [rbp-7F8h]
  ULONG NumberOfBytes; // [rsp+74h] [rbp-7F4h] BYREF
  char NumberOfBytes_4; // [rsp+78h] [rbp-7F0h] BYREF
  ULONG *v138; // [rsp+80h] [rbp-7E8h]
  char v139; // [rsp+BFh] [rbp-7A9h]
  _DWORD v140[3]; // [rsp+114h] [rbp-754h] BYREF
  _QWORD *v141; // [rsp+120h] [rbp-748h]
  _PROCESSOR_NUMBER *v142; // [rsp+128h] [rbp-740h]
  PVOID Object; // [rsp+130h] [rbp-738h] BYREF
  int v144; // [rsp+138h] [rbp-730h]
  unsigned int v145; // [rsp+13Ch] [rbp-72Ch] BYREF
  unsigned int v146; // [rsp+140h] [rbp-728h]
  unsigned int v147; // [rsp+144h] [rbp-724h] BYREF
  _DWORD v148[2]; // [rsp+148h] [rbp-720h] BYREF
  int v149; // [rsp+150h] [rbp-718h]
  PVOID v150; // [rsp+158h] [rbp-710h] BYREF
  PVOID v151; // [rsp+160h] [rbp-708h] BYREF
  __int64 v152; // [rsp+168h] [rbp-700h]
  HANDLE ProcessId[2]; // [rsp+170h] [rbp-6F8h]
  char *v154; // [rsp+180h] [rbp-6E8h]
  __int64 v155; // [rsp+188h] [rbp-6E0h] BYREF
  volatile void *v156; // [rsp+190h] [rbp-6D8h]
  __int64 v157; // [rsp+198h] [rbp-6D0h] BYREF
  PVOID v158; // [rsp+1A0h] [rbp-6C8h] BYREF
  __int64 v159; // [rsp+1A8h] [rbp-6C0h]
  PVOID v160; // [rsp+1B0h] [rbp-6B8h] BYREF
  __int128 v161; // [rsp+1B8h] [rbp-6B0h] BYREF
  __int64 v162; // [rsp+1F8h] [rbp-670h]
  int v163; // [rsp+628h] [rbp-240h]
  __int128 v164; // [rsp+630h] [rbp-238h] BYREF
  PVOID BaseAddress[2]; // [rsp+640h] [rbp-228h]
  __int128 v166; // [rsp+650h] [rbp-218h]
  _OWORD Src[27]; // [rsp+670h] [rbp-1F8h] BYREF

  v132 = a3;
  P = a2;
  Size = Length;
  v138 = a6;
  v8 = 0;
  NumberOfBytes = 0;
  v155 = 0LL;
  v147 = 0;
  v148[0] = 0;
  v131 = 0;
  v140[0] = 0;
  v130 = 0;
  v135 = 0;
  v161 = 0LL;
  Object = 0LL;
  ProcNumber = 0;
  *(_OWORD *)BaseAddress = 0LL;
  v166 = 0LL;
  v151 = 0LL;
  v150 = 0LL;
  v144 = 0;
  v157 = 0LL;
  v164 = 0LL;
  memset(Src, 0, sizeof(Src));
  ProcessorTopologyCount = 0;
  Size_4 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( Size_4 )
  {
    if ( a1 < 88 && a1 >= 73 || a1 >= 174 && a1 < 188 )
    {
LABEL_4:
      v10 = 4;
LABEL_5:
      v128 = 1;
    }
    else
    {
      switch ( a1 )
      {
        case 12:
          v10 = 8;
          goto LABEL_5;
        case 35:
        case 145:
        case 147:
        case 149:
        case 158:
        case 163:
        case 169:
        case 202:
        case 227:
          v128 = 1;
          v10 = 1;
          break;
        default:
          goto LABEL_4;
      }
    }
    ProbeForWrite((volatile void *)a4, Length, v10);
    if ( a6 )
    {
      v9 = (__int64)a6;
      if ( (unsigned __int64)a6 >= 0x7FFFFFFF0000LL )
        v9 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v9 = *(_DWORD *)v9;
    }
  }
  else
  {
    v128 = 1;
  }
  v125 = 0;
  v11 = RelationAll;
  v149 = 0xFFFF;
  v12 = 0LL;
  LODWORD(v142) = 0;
  v13 = 0;
  v135 = 0;
  v130 = 0;
  v152 = 0LL;
  v14 = 0LL;
  v162 = 0LL;
  v159 = 0LL;
  v133 = 9;
  v144 = 9;
  if ( a1 < 83 && a1 >= 74 || a1 >= 182 && a1 < 230 )
  {
LABEL_12:
    v15 = v130;
LABEL_13:
    v16 = v133;
LABEL_14:
    if ( a1 == 79 )
    {
      v17 = sub_14072ACC0(v9, (__int128 *)a4, Size, Size_4, &v125);
    }
    else
    {
      if ( a1 != 185 )
      {
        switch ( a1 )
        {
          case 0:
          case 114:
            if ( Size == 64 )
            {
              v17 = sub_140235738(a4);
              v125 = 64;
              goto LABEL_16;
            }
            if ( a6 )
              *a6 = 64;
            goto LABEL_236;
          case 1:
            if ( Size >= 0xC )
            {
              v17 = sub_140263154(a4);
              v125 = 12;
              goto LABEL_16;
            }
            if ( a6 )
              *a6 = 12;
            goto LABEL_236;
          case 2:
            v20 = Size;
            if ( Size >= 0x138 )
            {
              if ( Size > 0x158 )
                v20 = 344;
              sub_1406F2420(v12, (void *)a4, v20);
              goto LABEL_39;
            }
            if ( a6 )
              *a6 = 344;
            goto LABEL_236;
          case 3:
            v20 = Size;
            if ( Size > 0x30 )
            {
              if ( a6 )
                *a6 = 48;
              goto LABEL_236;
            }
            sub_140243A18((_QWORD *)Src + 1, (LARGE_INTEGER *)Src, &Src[2]);
            v27 = *((_QWORD *)sub_140347DB0() + 157);
            *(_QWORD *)&Src[1] = *(_QWORD *)(v27 + 440);
            DWORD2(Src[1]) = *(_DWORD *)(v27 + 432);
            *((_QWORD *)&Src[2] + 1) = MEMORY[0xFFFFF780000003B0];
            memmove((void *)a4, Src, Size);
LABEL_39:
            v125 = v20;
            goto LABEL_17;
          case 4:
          case 10:
          case 25:
          case 29:
          case 96:
            return -1073741822;
          case 5:
          case 57:
          case 148:
            v17 = sub_1407B6CA0(a4, Size, (unsigned int)&v125, 0, a1);
            goto LABEL_16;
          case 6:
            return -1073741637;
          case 7:
            if ( Size == 24 )
            {
              *(_DWORD *)a4 = dword_140D3B848;
              *(_DWORD *)(a4 + 4) = dword_140D3B84C;
              *(_DWORD *)(a4 + 8) = dword_140D3B850;
              *(_DWORD *)(a4 + 12) = dword_140D3B854;
              *(_DWORD *)(a4 + 16) = dword_140D3B85C;
              *(_DWORD *)(a4 + 20) = dword_140D3B860;
              goto LABEL_206;
            }
            if ( a6 )
              *a6 = 24;
            goto LABEL_236;
          case 8:
          case 141:
            v38 = 48;
            if ( a1 != 8 )
              v38 = 72;
            v132 = v38;
            if ( !Size || Size % v38 )
            {
              if ( a6 )
                *a6 = v12 * v38;
              goto LABEL_236;
            }
            v133 = 0;
            v39 = 0;
            v131 = 0;
            while ( 1 )
            {
              v141 = (_QWORD *)a4;
              if ( v39 >= (unsigned int)v12 )
                break;
              ProcNumber.Group = v13;
              ProcNumber.Number = v39;
              ProcNumber.Reserved = 0;
              v40 = (_DWORD *)qword_140D088C0[KeGetProcessorIndexFromNumber(&ProcNumber)];
              v41 = v133;
              if ( Size < v133 + v132 )
                goto LABEL_93;
              v133 += v132;
              sub_140293444(&ProcNumber, 0LL, (__int64)Src);
              v42 = DesiredTime;
              *(_QWORD *)(a4 + 16) = DesiredTime * (unsigned __int64)(unsigned int)v40[8274];
              *(_QWORD *)(a4 + 8) = v42 * DWORD1(Src[0]);
              *(_QWORD *)(a4 + 24) = v42 * (unsigned int)v40[8275];
              *(_QWORD *)(a4 + 32) = v42 * (unsigned int)v40[8276];
              *(_QWORD *)a4 = v42 * LODWORD(Src[0]);
              *(_DWORD *)(a4 + 40) = v40[8272];
              if ( a1 == 141 )
              {
                *(_QWORD *)(a4 + 48) = v42 * (unsigned int)v40[8283];
                *(_DWORD *)(a4 + 44) = 0;
                *(_QWORD *)(a4 + 56) = 0LL;
                *(_QWORD *)(a4 + 64) = 0LL;
              }
              a4 += v132;
              v131 = ++v39;
              LODWORD(v12) = (_DWORD)v142;
            }
            v41 = v133;
            goto LABEL_93;
          case 9:
            if ( Size == 4 )
            {
              *(_DWORD *)a4 = NtGlobalFlag;
              goto LABEL_164;
            }
            if ( a6 )
              *a6 = 4;
            goto LABEL_236;
          case 11:
            if ( sub_1406C5900(Size_4) )
              return -1073741790;
            CurrentThread = KeGetCurrentThread();
            --*((_WORD *)CurrentThread + 242);
            ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
            ProcessorTopologyCount = sub_140759A80(v44, a4, Size, &v125);
            ExReleaseResourceLite(&PsLoadedModuleResource);
            KeLeaveCriticalRegion();
            goto LABEL_17;
          case 12:
            if ( Size < 0x38 )
            {
              if ( a6 )
                *a6 = 56;
              goto LABEL_236;
            }
            if ( sub_1406C5900(Size_4) )
              return -1073741790;
            v17 = sub_1409F6770(a4, Size, &v125);
            goto LABEL_16;
          case 13:
            if ( Size >= 0x128 )
              goto LABEL_373;
            if ( a6 )
              *a6 = 296;
            goto LABEL_236;
          case 14:
          case 15:
          case 19:
LABEL_373:
            ProcessorTopologyCount = -1073741822;
            goto LABEL_17;
          case 16:
            if ( Size < 0x20 )
            {
              if ( a6 )
                *a6 = 32;
              goto LABEL_236;
            }
            if ( (a4 & 7) != 0 )
              return -2147483646;
            if ( !sub_1406C5900(Size_4) )
            {
              v17 = sub_1409F6670(a4, Size, &v125);
              goto LABEL_16;
            }
            return -1073741790;
          case 17:
            if ( Size < 0x40 )
            {
              if ( a6 )
                *a6 = 64;
              goto LABEL_236;
            }
            if ( sub_1406C5900(Size_4) )
              return -1073741790;
            v17 = sub_1409F67F0(a4, Size, &v125);
            goto LABEL_16;
          case 18:
          case 144:
            v63 = 32;
            if ( a1 != 18 )
              v63 = 40;
            v125 = v63;
            if ( Size >= v63 )
            {
              v125 = 0;
              LOBYTE(v8) = a1 == 144;
              v17 = sub_1407FC0D0(Size, a4, Size, v8, (__int64)&v125);
              goto LABEL_16;
            }
            if ( a6 )
              *a6 = v63;
            goto LABEL_236;
          case 21:
          case 81:
          case 119:
          case 120:
            if ( Size >= 0x40 )
            {
              v53 = 2;
              if ( a1 == 119 )
              {
                v53 = 3;
              }
              else if ( a1 == 120 )
              {
                v53 = 4;
              }
              sub_140263404(v53, Src);
              *(_OWORD *)a4 = Src[0];
              *(_DWORD *)(a4 + 16) = Src[1];
              v131 = 64;
              *(_QWORD *)(a4 + 24) = *((_QWORD *)&Src[1] + 1);
              *(_OWORD *)(a4 + 32) = Src[2];
              *(_OWORD *)(a4 + 48) = Src[3];
              v125 = 64;
              goto LABEL_17;
            }
            if ( a6 )
              *a6 = 64;
            goto LABEL_236;
          case 22:
            if ( Size >= 0x30 )
            {
              v17 = sub_1407F9820(a4, Size, &v125, v12);
              goto LABEL_16;
            }
            if ( a6 )
              *a6 = 48;
            goto LABEL_236;
          case 23:
            v125 = 24 * v12;
            if ( Size >= 24 * (int)v12 )
            {
              v59 = 0;
              v131 = 0;
              while ( 1 )
              {
                v141 = (_QWORD *)a4;
                if ( v59 >= (unsigned int)v12 )
                  break;
                ProcNumber.Group = v13;
                ProcNumber.Number = v59;
                ProcNumber.Reserved = 0;
                v60 = (_DWORD *)qword_140D088C0[KeGetProcessorIndexFromNumber(&ProcNumber)];
                *(_DWORD *)a4 = v60[2895];
                *(_DWORD *)(a4 + 4) = v60[3287];
                *(_DWORD *)(a4 + 8) = v60[3307];
                *(_DWORD *)(a4 + 12) = dword_140D06938;
                *(_DWORD *)(a4 + 16) = 0;
                *(_DWORD *)(a4 + 20) = 0;
                a4 += 24LL;
                v131 = ++v59;
                LODWORD(v12) = (_DWORD)v142;
              }
              goto LABEL_158;
            }
            if ( a6 )
              *a6 = 24 * v12;
            goto LABEL_236;
          case 24:
            if ( Size == 20 )
            {
              *(_DWORD *)(a4 + 4) = dword_140D05094;
              *(_DWORD *)(a4 + 8) = dword_140D050C4;
              *(_DWORD *)(a4 + 12) = dword_140D05098;
              *(_DWORD *)(a4 + 16) = dword_140D05170;
              goto LABEL_438;
            }
            if ( a6 )
              *a6 = 20;
            goto LABEL_236;
          case 28:
            v54 = Size;
            if ( Size == 24 || Size == 12 )
            {
              LOBYTE(v9) = 1;
              sub_1407D6F54(v9);
              v55 = qword_140D06DB8;
              v56 = byte_140D0501A;
              ExReleaseResourceLite(&stru_140C15AC0);
              KeLeaveCriticalRegion();
              if ( Size == 24 )
              {
                *(_QWORD *)a4 = v55;
                *(_QWORD *)(a4 + 8) = MEMORY[0xFFFFF78000000300];
                *(_BYTE *)(a4 + 16) = v56;
              }
              else
              {
                *(_DWORD *)a4 = MEMORY[0xFFFFF78000000300] * (unsigned __int64)DesiredTime / v55;
                *(_DWORD *)(a4 + 4) = DesiredTime;
                *(_BYTE *)(a4 + 8) = v56;
              }
              goto LABEL_144;
            }
            if ( a6 )
              *a6 = 12;
            goto LABEL_236;
          case 31:
            v17 = sub_14081C05C(a4, Size, Size_4, &v125);
            goto LABEL_16;
          case 33:
            if ( Size >= 0x10 )
            {
              v125 = 16;
              v64 = 0;
              v65 = 0;
              v66 = 0;
              v131 = 0;
              while ( v66 < (unsigned int)v12 )
              {
                v67 = qword_140D088C0[v66];
                v64 += *(_DWORD *)(v67 + 34488);
                v65 += *(_DWORD *)(v67 + 33136);
                ++v66;
              }
              v131 = v66;
              *(_DWORD *)a4 = v64;
              *(_DWORD *)(a4 + 4) = v65;
              *(_DWORD *)(a4 + 8) = 0;
              *(_DWORD *)(a4 + 12) = 0;
              goto LABEL_17;
            }
            if ( a6 )
              *a6 = 16;
            goto LABEL_236;
          case 35:
            if ( Size < 2 )
            {
              if ( a6 )
                *a6 = 2;
              goto LABEL_236;
            }
            *(_BYTE *)a4 = (_BYTE)KdDebuggerEnabled;
            *(_BYTE *)(a4 + 1) = (_BYTE)KdDebuggerNotPresent;
            v54 = 2;
LABEL_144:
            v125 = v54;
            goto LABEL_17;
          case 36:
            if ( Size >= 0x30 )
            {
              v92 = 0;
              v131 = 0;
              while ( v92 < (unsigned int)v12 )
                v8 += *(_DWORD *)(qword_140D088C0[v92++] + 11580);
              v131 = v92;
              *(_DWORD *)a4 = v8;
              *(_DWORD *)(a4 + 4) = dword_140C2B840;
              *(_DWORD *)(a4 + 8) = dword_140C2B848;
              *(_DWORD *)(a4 + 12) = dword_140C2B844;
              *(_DWORD *)(a4 + 16) = dword_140C2B84C;
              *(_DWORD *)(a4 + 20) = dword_140C2B850;
              *(_DWORD *)(a4 + 24) = dword_140C2B858;
              *(_DWORD *)(a4 + 28) = dword_140C2B854;
              *(_DWORD *)(a4 + 32) = dword_140C2B85C;
              *(_DWORD *)(a4 + 36) = dword_140C2B860;
              *(_DWORD *)(a4 + 40) = dword_140C2B864;
              *(_DWORD *)(a4 + 44) = dword_140C2B868;
              v125 = 48;
              goto LABEL_17;
            }
            if ( a6 )
              *a6 = 48;
            goto LABEL_236;
          case 37:
            if ( Size >= 0x10 )
            {
              v17 = sub_14080B5A8(a4, v16, v15, v12);
              v125 = 16;
              goto LABEL_16;
            }
            if ( a6 )
              *a6 = 16;
            goto LABEL_236;
          case 42:
            v125 = 48 * v12;
            if ( Size < 48 * (int)v12 )
              goto LABEL_279;
            while ( 1 )
            {
              v131 = v8;
              v141 = (_QWORD *)a4;
              if ( v8 >= (unsigned int)v12 )
                break;
              ProcNumber.Group = v13;
              ProcNumber.Number = v8;
              ProcNumber.Reserved = 0;
              sub_140293444(&ProcNumber, (__int64)Src, 0LL);
              *(_OWORD *)a4 = Src[0];
              *(_OWORD *)(a4 + 16) = Src[1];
              *(_OWORD *)(a4 + 32) = Src[2];
              a4 += 48LL;
              ++v8;
              LODWORD(v12) = (_DWORD)v142;
            }
            goto LABEL_17;
          case 43:
            if ( Size >= 0x18 )
            {
              v125 = Size;
              v17 = sub_1409F6F98(a4, &v125, v15, v12);
              goto LABEL_16;
            }
            if ( a6 )
              *a6 = 24;
            goto LABEL_236;
          case 44:
            if ( Size >= 0xAC )
            {
              v47 = *((_QWORD *)sub_140347DB0() + 157);
              LOBYTE(v48) = 1;
              sub_1407D6F54(v48);
              Src[0] = *(_OWORD *)v47;
              Src[1] = *(_OWORD *)(v47 + 16);
              Src[2] = *(_OWORD *)(v47 + 32);
              Src[3] = *(_OWORD *)(v47 + 48);
              Src[4] = *(_OWORD *)(v47 + 64);
              Src[5] = *(_OWORD *)(v47 + 80);
              Src[6] = *(_OWORD *)(v47 + 96);
              Src[7] = *(_OWORD *)(v47 + 112);
              Src[8] = *(_OWORD *)(v47 + 128);
              Src[9] = *(_OWORD *)(v47 + 144);
              *(_QWORD *)&Src[10] = *(_QWORD *)(v47 + 160);
              DWORD2(Src[10]) = *(_DWORD *)(v47 + 168);
              ExReleaseResourceLite(&stru_140C15AC0);
              KeLeaveCriticalRegion();
              *(_OWORD *)a4 = Src[0];
              *(_OWORD *)(a4 + 16) = Src[1];
              *(_OWORD *)(a4 + 32) = Src[2];
              *(_OWORD *)(a4 + 48) = Src[3];
              *(_OWORD *)(a4 + 64) = Src[4];
              *(_OWORD *)(a4 + 80) = Src[5];
              *(_OWORD *)(a4 + 96) = Src[6];
              *(_OWORD *)(a4 + 112) = Src[7];
              *(_OWORD *)(a4 + 128) = Src[8];
              *(_OWORD *)(a4 + 144) = Src[9];
              *(_QWORD *)(a4 + 160) = *(_QWORD *)&Src[10];
              *(_DWORD *)(a4 + 168) = DWORD2(Src[10]);
              v125 = 172;
              ProcessorTopologyCount = 0;
              goto LABEL_17;
            }
            if ( a6 )
              *a6 = 172;
            goto LABEL_236;
          case 45:
            v17 = sub_1406384AC(a4, Size, &v125);
            goto LABEL_16;
          case 50:
            if ( Size == 8 )
            {
              *(_QWORD *)a4 = 0xFFFF800000000000uLL;
              goto LABEL_112;
            }
            if ( a6 )
              *a6 = 8;
            goto LABEL_236;
          case 51:
            if ( Size >= 0x90 )
            {
              v17 = sub_140601D00((void *)a4, Size, &v125, 0);
              goto LABEL_16;
            }
            if ( a6 )
              *a6 = 144;
            goto LABEL_236;
          case 53:
            if ( Size >= 0x10 )
            {
              v140[0] = *(_DWORD *)a4;
              v156 = *(volatile void **)(a4 + 8);
              v146 = *(_DWORD *)(a4 + 4);
              ProbeForWrite(v156, v146, 4u);
              v17 = sub_1407B6CA0((_DWORD)v156, v146, (unsigned int)&v125, (unsigned int)v140, 5);
              goto LABEL_16;
            }
            if ( a6 )
              *a6 = 16;
            goto LABEL_236;
          case 55:
            v17 = sub_1406F2350((_DWORD *)a4, Size, &v125);
            goto LABEL_16;
          case 56:
            v17 = sub_1406C8B78(v9, (__int128 *)a4, Size, Size_4, &v125);
            goto LABEL_16;
          case 58:
            if ( Size >= 4 )
            {
              *(_DWORD *)a4 = KeGetRecommendedSharedDataAlignment();
              goto LABEL_164;
            }
            if ( a6 )
              *a6 = 4;
            goto LABEL_236;
          case 59:
            if ( Size != 4 )
            {
              if ( a6 )
                *a6 = 4;
              goto LABEL_236;
            }
            if ( MEMORY[0xFFFFF780000002E0] != -1
              || (result = sub_1407F8664(v9, v16, v15, v12), ProcessorTopologyCount = result, result >= 0) )
            {
              *(_DWORD *)a4 = MEMORY[0xFFFFF780000002E0];
              goto LABEL_164;
            }
            return result;
          case 60:
            v17 = sub_1409F7090(a4, Size, &v125, v12);
            goto LABEL_16;
          case 61:
            v125 = 80 * v12;
            if ( Size < 80 * (int)v12 )
              goto LABEL_279;
            v141 = (_QWORD *)a4;
            while ( 1 )
            {
              v131 = v8;
              if ( v8 >= (unsigned int)v12 )
                break;
              ProcNumber.Group = v13;
              ProcNumber.Number = v8;
              ProcNumber.Reserved = 0;
              v57 = qword_140D088C0[KeGetProcessorIndexFromNumber(&ProcNumber)];
              sub_1402485E0(&ProcNumber, (__int64)Src, 0LL, &v155);
              memset((void *)a4, 0, 0x50uLL);
              v58 = DesiredTime;
              *(_QWORD *)(a4 + 40) = DesiredTime
                                   * (unsigned __int64)(unsigned int)(*(_DWORD *)(v57 + 33092) + *(_DWORD *)(v57 + 33096));
              *(_QWORD *)(a4 + 48) = v58 * *(unsigned int *)(*(_QWORD *)(v57 + 24) + 652LL);
              if ( BYTE12(Src[1]) )
              {
                *(_BYTE *)a4 = BYTE8(Src[0]);
                *(_BYTE *)(a4 + 7) = BYTE12(Src[0]);
                *(_BYTE *)(a4 + 8) = Src[1];
                *(_DWORD *)(a4 + 12) = 1;
              }
              *(_QWORD *)(a4 + 72) = v155;
              a4 += 80LL;
              v141 = (_QWORD *)a4;
              ++v8;
              LODWORD(v12) = (_DWORD)v142;
            }
            goto LABEL_17;
          case 62:
            if ( Size == 64 )
            {
              v17 = sub_14023559C(a4);
              v125 = 64;
              goto LABEL_16;
            }
            if ( a6 )
              *a6 = 64;
            goto LABEL_236;
          case 63:
            if ( Size >= 0xC )
            {
              v17 = sub_1402630FC(a4);
              v125 = 12;
              goto LABEL_16;
            }
            if ( a6 )
              *a6 = 12;
            goto LABEL_236;
          case 64:
            if ( Size < 0x38 )
            {
              if ( a6 )
                *a6 = 56;
              goto LABEL_236;
            }
            if ( (a4 & 7) != 0 )
              return -2147483646;
            if ( !sub_1406C5900(Size_4) )
            {
              v17 = sub_1409F66F0(a4, Size, &v125);
              goto LABEL_16;
            }
            return -1073741790;
          case 65:
            if ( Size >= 4 )
            {
              v93 = 0;
              v131 = 0;
              while ( v93 < (unsigned int)v12 )
                v8 += *(_DWORD *)(qword_140D088C0[v93++] + 33532);
              v131 = v93;
              *(_DWORD *)a4 = v8;
              goto LABEL_164;
            }
            if ( a6 )
              *a6 = 4;
            goto LABEL_236;
          case 66:
            if ( Size < 0x20 )
            {
              if ( a6 )
                *a6 = 32;
              goto LABEL_236;
            }
            if ( sub_1406C5900(Size_4) )
              return -1073741790;
            v17 = sub_14063A8C0((_DWORD *)a4, Size, 1, &v125);
            goto LABEL_16;
          case 67:
            if ( Size < 0x10 )
            {
              if ( a6 )
                *a6 = 16;
              goto LABEL_236;
            }
            v140[0] = *(_DWORD *)a4;
            v156 = *(volatile void **)(a4 + 8);
            v68 = *(unsigned int *)(a4 + 4);
            v146 = *(_DWORD *)(a4 + 4);
            if ( ((unsigned __int8)v156 & 7) != 0 )
              return -2147483646;
            v17 = sub_1406A8B68((__int64)v156, v68, &v125, v140);
            goto LABEL_16;
          case 68:
            if ( Size < 0x20 )
            {
              if ( a6 )
                *a6 = 32;
              goto LABEL_236;
            }
            v140[0] = *(_DWORD *)(a4 + 8);
            if ( (a4 & 7) == 0 )
            {
LABEL_158:
              ProcessorTopologyCount = 0;
              goto LABEL_17;
            }
            return -2147483646;
          case 69:
            goto LABEL_102;
          case 70:
            if ( Size == 4 )
            {
              *(_DWORD *)a4 = dword_140C0C7D0;
              goto LABEL_164;
            }
            if ( a6 )
              *a6 = 4;
            goto LABEL_236;
          case 72:
            if ( Size != 8 )
              goto LABEL_491;
            v94 = (unsigned int)(v16 - 7);
            if ( (_DWORD)v94 )
            {
              if ( (_DWORD)v94 != 1 )
                return -1073741637;
              *(_DWORD *)a4 = 8;
              *(_DWORD *)(a4 + 4) = (unsigned __int8)sub_14042A5E0(v9, v94);
            }
            else
            {
              *(_DWORD *)a4 = 7;
              LOBYTE(v8) = off_140C01F28[0] != SkIsSecureKernel;
              *(_DWORD *)(a4 + 4) = v8;
            }
            goto LABEL_112;
          case 73:
            ProcessorTopologyCount = sub_1406CD16C(v13, a4, Size, &v125);
            goto LABEL_17;
          case 76:
            v17 = sub_1406C9754((char *)a4, Size_4, Size, &v125);
            goto LABEL_16;
          case 77:
            if ( sub_1406C5900(Size_4) )
              return -1073741790;
            if ( SeSinglePrivilegeCheck(PrivilegeValue, Size_4) )
              v128 = 0;
            v61 = KeGetCurrentThread();
            --*((_WORD *)v61 + 242);
            ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
            ProcessorTopologyCount = sub_140759300(v62, a4, Size, v128, (__int64)&v125);
            ExReleaseResourceLite(&PsLoadedModuleResource);
            KeLeaveCriticalRegion();
            goto LABEL_17;
          case 80:
            v17 = sub_140360AC0((ULONG_PTR **)0xFFFFFFFFFFFFFFFFLL, (_OWORD *)a4, Size, v12, &v125);
            goto LABEL_16;
          case 83:
            v95 = 8 * v12;
            v125 = 8 * v12;
            if ( Size < 8 )
              goto LABEL_511;
            v96 = Size >> 3;
            if ( Size >= v95 )
              v96 = v12;
            v97 = Size < v95 ? 0xC0000004 : 0;
            v141 = (_QWORD *)a4;
            sub_1402F374C(1);
            while ( 1 )
            {
              v131 = v8;
              if ( v8 >= v96 )
                break;
              ProcNumber.Group = v13;
              ProcNumber.Number = v8;
              ProcNumber.Reserved = 0;
              v98 = *(_QWORD *)(*(_QWORD *)(qword_140D088C0[KeGetProcessorIndexFromNumber(&ProcNumber)] + 24) + 72LL);
              v99 = v141;
              *v141 = v98;
              v141 = v99 + 1;
              v8 = v131 + 1;
              v13 = v135;
            }
            goto LABEL_502;
          case 86:
            v17 = sub_1409855BC((volatile void *)a4, Size);
            goto LABEL_16;
          case 87:
            v125 = 8;
            if ( Size == 8 )
            {
              *(_DWORD *)a4 = dword_140D069F4;
              LOBYTE(v8) = dword_140D05168 != 0;
              *(_DWORD *)(a4 + 4) = v8;
            }
            else
            {
              ProcessorTopologyCount = -1073741820;
            }
            goto LABEL_17;
          case 88:
            *(_OWORD *)ProcessId = 0LL;
            v154 = 0LL;
            v125 = 24;
            if ( Size != 24 )
            {
              ProcessorTopologyCount = -1073741820;
              goto LABEL_17;
            }
            *(_OWORD *)ProcessId = *(_OWORD *)a4;
            v154 = *(char **)(a4 + 16);
            if ( LOWORD(ProcessId[1]) || (BYTE2(ProcessId[1]) & 1) != 0 )
              goto LABEL_491;
            if ( Size_4 && WORD1(ProcessId[1]) )
            {
              if ( ((unsigned __int8)v154 & 1) != 0 )
                ExRaiseDatatypeMisalignment();
              v88 = &v154[WORD1(ProcessId[1])];
              if ( (unsigned __int64)v88 > 0x7FFFFFFF0000LL || v88 < v154 )
                MEMORY[0x7FFFFFFF0000] = 0;
            }
            v89 = KeGetCurrentThread();
            v145 = WORD1(ProcessId[1]);
            --*((_WORD *)v89 + 242);
            v90 = PsLookupProcessByProcessId(ProcessId[0], (PEPROCESS *)&Object);
            if ( v90 < 0 )
            {
              sub_1402AC800((__int64)v89);
              return v90;
            }
            ProcessorTopologyCount = sub_1406C6384((__int64)Object, (_OWORD *)(a4 + 8), v154, &v145);
            ObfDereferenceObjectWithTag(Object, 0x746C6644u);
            sub_1402AC800((__int64)v89);
            if ( ProcessorTopologyCount == -1073741820 )
              *(_WORD *)(a4 + 10) = v145;
            goto LABEL_17;
          case 90:
            v125 = 32;
            v46 = Size;
            if ( Size < 0x14 )
            {
              if ( a6 )
                *a6 = 32;
              goto LABEL_236;
            }
            *(_OWORD *)a4 = *(_OWORD *)&xmmword_140C15C60;
            *(_DWORD *)(a4 + 16) = dword_140C15C70;
            if ( v46 < v125 )
LABEL_438:
              v125 = 20;
            else
              *(_QWORD *)(a4 + 24) = qword_140C15C78;
            goto LABEL_17;
          case 91:
            v17 = sub_140862FD8(a4, Size, v15, &v125);
            goto LABEL_16;
          case 92:
            if ( Size != 40 )
            {
              if ( a6 )
                *a6 = 40;
              goto LABEL_236;
            }
            v17 = sub_140A9C7B0(a4, v16, v15, v12);
            if ( v17 >= 0 )
              v8 = 40;
            v125 = v8;
            goto LABEL_16;
          case 95:
            if ( !Size_4 || !SeSinglePrivilegeCheck(stru_140D3CA18, Size_4) )
              return -1073741790;
            if ( Size >= 0x40 )
            {
              v17 = sub_140A0350C(a4, Size, &v125);
              goto LABEL_16;
            }
            if ( a6 )
              *a6 = 64;
            goto LABEL_236;
          case 98:
            v17 = sub_1406CDACC(98);
            goto LABEL_16;
          case 99:
            v17 = sub_1406CDACC(99);
            goto LABEL_16;
          case 100:
            WORD4(v161) = v13;
            *(_QWORD *)&v161 = KeQueryGroupAffinity(v13);
            v85 = (0x101010101010101LL
                 * (((((_QWORD)v161 - (((unsigned __int64)v161 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                   + ((((unsigned __int64)v161 - (((unsigned __int64)v161 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                   + (((((_QWORD)v161 - (((unsigned __int64)v161 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                     + ((((unsigned __int64)v161 - (((unsigned __int64)v161 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
            ProcessorTopologyCount = sub_1405D6FBC(
                                       0LL,
                                       0,
                                       (unsigned int)((0x101010101010101LL
                                                     * (((((_QWORD)v161
                                                         - (((unsigned __int64)v161 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                       + ((((unsigned __int64)v161
                                                          - (((unsigned __int64)v161 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                                       + (((((_QWORD)v161
                                                           - (((unsigned __int64)v161 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                         + ((((unsigned __int64)v161
                                                            - (((unsigned __int64)v161 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24,
                                       (__int64)&v161,
                                       (int *)&NumberOfBytes);
            if ( ProcessorTopologyCount == -1073741820 )
            {
              if ( NumberOfBytes <= Size )
              {
                PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, 0x744D5050u);
                v87 = PoolWithTag;
                P = PoolWithTag;
                if ( PoolWithTag )
                {
                  memset(PoolWithTag, 0, NumberOfBytes);
                  ProcessorTopologyCount = sub_1405D6FBC(v87, NumberOfBytes, v85, (__int64)&v161, (int *)&v125);
                  if ( ProcessorTopologyCount >= 0 )
                    memmove((void *)a4, v87, v125);
                  ExFreePoolWithTag(v87, 0x744D5050u);
                }
                else
                {
                  ProcessorTopologyCount = -1073741670;
                }
              }
              else
              {
                ProcessorTopologyCount = -1073741820;
                v125 = NumberOfBytes;
              }
            }
            goto LABEL_17;
          case 101:
            v17 = sub_1409F7240(a4, Size, &v125, v12);
            goto LABEL_16;
          case 102:
            if ( Size >= 0x1B0 )
            {
              v31 = (_OWORD *)*((_QWORD *)sub_140347DB0() + 157);
              LOBYTE(v32) = 1;
              sub_1407D6F54(v32);
              v33 = Src;
              v34 = 3LL;
              v35 = 3LL;
              do
              {
                *v33 = *v31;
                v33[1] = v31[1];
                v33[2] = v31[2];
                v33[3] = v31[3];
                v33[4] = v31[4];
                v33[5] = v31[5];
                v33[6] = v31[6];
                v33 += 8;
                *(v33 - 1) = v31[7];
                v31 += 8;
                --v35;
              }
              while ( v35 );
              *v33 = *v31;
              v33[1] = v31[1];
              v33[2] = v31[2];
              ExReleaseResourceLite(&stru_140C15AC0);
              KeLeaveCriticalRegion();
              v36 = Src;
              do
              {
                *(_OWORD *)a4 = *v36;
                *(_OWORD *)(a4 + 16) = v36[1];
                *(_OWORD *)(a4 + 32) = v36[2];
                *(_OWORD *)(a4 + 48) = v36[3];
                *(_OWORD *)(a4 + 64) = v36[4];
                *(_OWORD *)(a4 + 80) = v36[5];
                *(_OWORD *)(a4 + 96) = v36[6];
                a4 += 128LL;
                *(_OWORD *)(a4 - 16) = v36[7];
                v36 += 8;
                --v34;
              }
              while ( v34 );
              *(_OWORD *)a4 = *v36;
              *(_OWORD *)(a4 + 16) = v36[1];
              *(_OWORD *)(a4 + 32) = v36[2];
              v125 = 432;
              ProcessorTopologyCount = 0;
              goto LABEL_17;
            }
            if ( a6 )
              *a6 = 432;
            goto LABEL_236;
          case 103:
            v17 = sub_1406D5A94(a4, Size);
            goto LABEL_16;
          case 105:
            ProcessorTopologyCount = sub_14042A5E0(23LL, 0LL);
            if ( ProcessorTopologyCount != -1073741820 )
              goto LABEL_102;
            v79 = NumberOfBytes;
            if ( Size < NumberOfBytes || !a4 )
            {
              v125 = NumberOfBytes;
              goto LABEL_17;
            }
            if ( Size_4 )
            {
              PoolWithQuotaTag = (struct _MDL *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, NumberOfBytes, 0x6F666E49u);
              P = PoolWithQuotaTag;
              if ( !PoolWithQuotaTag )
              {
                ProcessorTopologyCount = -1073741670;
                goto LABEL_17;
              }
              v79 = NumberOfBytes;
            }
            else
            {
              PoolWithQuotaTag = (struct _MDL *)a4;
              P = (PVOID)a4;
            }
            v81 = sub_14042A5E0(23LL, v79);
            ProcessorTopologyCount = v81;
            if ( !Size_4 )
              goto LABEL_17;
            if ( v81 >= 0 )
              goto LABEL_530;
            goto LABEL_531;
          case 106:
            ProcessorTopologyCount = -1073741821;
            goto LABEL_17;
          case 107:
          case 231:
            Pool2 = (_SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)Src;
            P = Src;
            v29 = 80;
            NumberOfBytes = 80;
            if ( Size < 0x50 )
            {
              v29 = Size;
              NumberOfBytes = Size;
            }
            v125 = v29;
            if ( a1 == 231 )
              p_ProcNumber = &ProcNumber;
            else
              p_ProcNumber = 0LL;
            v142 = p_ProcNumber;
            while ( 2 )
            {
              ProcessorTopologyCount = KeQueryLogicalProcessorRelationship(p_ProcNumber, v11, Pool2, &v125);
              if ( ProcessorTopologyCount < 0 )
              {
                if ( ProcessorTopologyCount == -1073741820 )
                {
                  if ( v125 <= Size )
                  {
                    if ( Pool2 && Pool2 != (_SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)Src )
                      ExFreePoolWithTag(Pool2, 0);
                    Pool2 = (_SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)ExAllocatePool2(257LL, v125, 1868983881LL);
                    P = Pool2;
                    if ( Pool2 )
                    {
                      NumberOfBytes = v125;
                      p_ProcNumber = v142;
                      continue;
                    }
                    ProcessorTopologyCount = -1073741670;
                  }
                  else
                  {
                    ProcessorTopologyCount = -1073741820;
                  }
                }
              }
              else
              {
                memmove((void *)a4, Pool2, v125);
                ProcessorTopologyCount = 0;
              }
              break;
            }
            if ( Pool2 && Pool2 != (_SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)Src )
              ExFreePoolWithTag(Pool2, 0);
            goto LABEL_17;
          case 108:
            v125 = 8 * v12;
            if ( Size < 8 )
              goto LABEL_511;
            if ( Size < 8 * (int)v12 )
            {
              LODWORD(v12) = Size >> 3;
              LODWORD(v142) = Size >> 3;
              ProcessorTopologyCount = -1073741820;
            }
            v141 = (_QWORD *)a4;
            while ( 1 )
            {
              v131 = v8;
              if ( v8 >= (unsigned int)v12 )
                break;
              ProcNumber.Group = v13;
              ProcNumber.Number = v8;
              ProcNumber.Reserved = 0;
              *(_QWORD *)a4 = *(_QWORD *)(qword_140D088C0[KeGetProcessorIndexFromNumber(&ProcNumber)] + 33400);
              a4 += 8LL;
              v141 = (_QWORD *)a4;
              ++v8;
              LODWORD(v12) = (_DWORD)v142;
            }
            goto LABEL_17;
          case 109:
            v17 = sub_1407FA644(v9, a4, Size, Size_4, &v125);
            goto LABEL_16;
          case 112:
            v17 = sub_140863390(v9, a4, Size, &v125);
            goto LABEL_16;
          case 113:
            v17 = sub_1403DF48C((_DWORD *)a4, Size, Size_4, &v125);
            goto LABEL_16;
          case 115:
            if ( v132 )
            {
              ProcessorTopologyCount = -1073741820;
            }
            else
            {
              v125 = 8;
              if ( Size < 8 )
              {
                ProcessorTopologyCount = -1073741820;
              }
              else
              {
                *(_DWORD *)a4 = dword_140D05198;
                *(_DWORD *)(a4 + 4) = dword_140D0530C;
              }
            }
            goto LABEL_17;
          case 116:
            v17 = sub_1406E47F0(v9, (_DWORD *)a4, Size, &v125);
            goto LABEL_16;
          case 117:
            v125 = 1096;
            if ( Size != 1096 )
            {
              ProcessorTopologyCount = -1073741820;
              goto LABEL_17;
            }
            if ( Size_4 )
              return -1073741790;
            v17 = sub_14086423C(a4, v16, v15, v12);
            goto LABEL_16;
          case 118:
            if ( Size >= 0x110 )
            {
              v17 = sub_140601D00((void *)a4, Size, &v125, 1);
              goto LABEL_16;
            }
            if ( a6 )
              *a6 = 272;
            goto LABEL_236;
          case 121:
            v77 = (unsigned __int16)word_140D05000;
            v125 = 4 * (unsigned __int16)word_140D05000;
            if ( Size < v125 )
            {
              ProcessorTopologyCount = -1073741820;
            }
            else
            {
              v131 = 0;
              for ( i = 0; i < v77; v131 = i )
              {
                *(_DWORD *)(a4 + 4LL * i++) = *((_DWORD *)off_140D05088 + v8 + v77 * (unsigned __int16)v15);
                v8 = i;
              }
            }
            goto LABEL_17;
          case 122:
            v125 = 8;
            if ( Size != 8 || !a4 )
              goto LABEL_279;
            PoolWithQuotaTag = (struct _MDL *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 8uLL, 0x6F666E49u);
            P = PoolWithQuotaTag;
            if ( !PoolWithQuotaTag )
            {
              ProcessorTopologyCount = -1073741670;
              goto LABEL_17;
            }
            ProcessorTopologyCount = sub_14042A5E0(26LL, 8LL);
            if ( ProcessorTopologyCount >= 0 )
            {
              *(_DWORD *)a4 = PoolWithQuotaTag->Next;
              *(_DWORD *)(a4 + 4) ^= (*(_DWORD *)(a4 + 4) ^ HIDWORD(PoolWithQuotaTag->Next)) & 1;
              v101 = *(_DWORD *)(a4 + 4) ^ (HIDWORD(PoolWithQuotaTag->Next) ^ *(_DWORD *)(a4 + 4)) & 2;
              *(_DWORD *)(a4 + 4) = v101;
              *(_DWORD *)(a4 + 4) = v101 ^ (HIDWORD(PoolWithQuotaTag->Next) ^ v101) & 4;
            }
            goto LABEL_531;
          case 123:
            if ( Size == 32 )
            {
              v49 = sub_14026A0BC(*((_QWORD *)KeGetCurrentThread() + 23));
              *(_QWORD *)&Src[0] = sub_14026A09C(v49);
              *((_QWORD *)&Src[0] + 1) = sub_14026A07C(v50);
              *(_QWORD *)&Src[1] = sub_14026A05C(v51);
              *((_QWORD *)&Src[1] + 1) = sub_14026A03C(v52);
              if ( *((_QWORD *)&Src[1] + 1) < *((_QWORD *)&Src[0] + 1) )
                *((_QWORD *)&Src[1] + 1) = *((_QWORD *)&Src[0] + 1);
              *(_OWORD *)a4 = Src[0];
              *(_OWORD *)(a4 + 16) = Src[1];
              goto LABEL_128;
            }
            if ( a6 )
              *a6 = 32;
            goto LABEL_236;
          case 124:
            v125 = 12;
            if ( Size >= 4 )
            {
              v163 = *(_DWORD *)a4;
              if ( v163 == 1 )
              {
                if ( Size >= 0xC )
                {
                  *(_DWORD *)(a4 + 8) = 0;
                  *(_DWORD *)(a4 + 4) = 0;
                  *(_DWORD *)(a4 + 8) = 1;
                  *(_DWORD *)(a4 + 4) = 1;
                  if ( MEMORY[0xFFFFF780000003C6] )
                    *(_DWORD *)(a4 + 4) &= ~1u;
                }
                else
                {
                  ProcessorTopologyCount = -1073741820;
                }
              }
              else
              {
                ProcessorTopologyCount = -1073741637;
              }
            }
            else
            {
              ProcessorTopologyCount = -1073741820;
            }
            goto LABEL_17;
          case 125:
            if ( Size < 0x10 )
            {
              if ( a6 )
                *a6 = 16;
              goto LABEL_236;
            }
            v140[0] = *(_DWORD *)a4;
            v156 = *(volatile void **)(a4 + 8);
            v91 = *(_DWORD *)(a4 + 4);
            v146 = v91;
            if ( ((unsigned __int8)v156 & 7) != 0 )
              return -2147483646;
            if ( !sub_1406C5900(Size_4) )
            {
              v17 = sub_1409F5D80(v156, v91, &v125, v140);
              goto LABEL_16;
            }
            return -1073741790;
          case 126:
            v125 = 32;
            if ( Size != 32 )
            {
              ProcessorTopologyCount = -1073741820;
              goto LABEL_17;
            }
            ProcessorTopologyCount = sub_140AACB50(0LL, Src, v15, v12);
            if ( ProcessorTopologyCount < 0 )
              goto LABEL_17;
            if ( Size_4 )
              *(_QWORD *)&Src[0] = 0LL;
            goto LABEL_252;
          case 128:
            if ( v132 )
            {
              ProcessorTopologyCount = -1073741820;
            }
            else
            {
              v107 = sub_1405C5B98(&v151);
              v108 = v151;
              if ( v151 )
                v8 = 8 * *(_DWORD *)v151;
              v125 = v8;
              if ( Size < v8 )
                v107 = -1073741820;
              ProcessorTopologyCount = v107;
              if ( v151 )
              {
                if ( v107 >= 0 )
                  memmove((void *)a4, (char *)v151 + 8, v8);
                ExFreePoolWithTag(v108, 0);
              }
            }
            goto LABEL_17;
          case 133:
            if ( !SeSinglePrivilegeCheck(stru_140D3CA10, Size_4) )
              return -1073741727;
            v17 = sub_14085FAA4(a4, Size, Size_4);
            goto LABEL_16;
          case 134:
            v125 = 32;
            if ( Size == 32 )
            {
              v17 = sub_1406B6054(v9, a4);
              goto LABEL_16;
            }
            ProcessorTopologyCount = -1073741820;
            goto LABEL_17;
          case 135:
            v125 = 8;
            if ( Size >= 8 )
            {
              if ( (unsigned int)HvlQueryActiveProcessors(&v147, 0LL) )
              {
                ProcessorTopologyCount = -1073741637;
              }
              else
              {
                ProcessorTopologyCount = HvlQueryProcessorTopologyCount(0LL, v148);
                if ( ProcessorTopologyCount )
                {
                  ProcessorTopologyCount = -1073741637;
                }
                else
                {
                  *(_DWORD *)a4 = v147;
                  *(_DWORD *)(a4 + 4) = v148[0];
                }
              }
            }
            else
            {
              ProcessorTopologyCount = -1073741820;
            }
            goto LABEL_17;
          case 136:
          case 137:
            if ( Size == 48 )
              return sub_1409F6464((unsigned int)a1, a4, 48LL, v12);
            if ( a6 )
              *a6 = 48;
            goto LABEL_236;
          case 138:
            v17 = sub_140855DD8((void *)a4);
            goto LABEL_16;
          case 139:
            v17 = sub_1409F68DC((void *)a4);
            goto LABEL_16;
          case 140:
            v102 = Size;
            if ( a6 || Size >= 8 )
            {
              ProcessorTopologyCount = sub_140AACB50(2LL, &v125, v15, v12);
              if ( ProcessorTopologyCount >= 0 )
              {
                if ( v125 )
                {
                  if ( v102 >= v125 )
                  {
                    ProcessorTopologyCount = sub_140AACB50(1LL, &v150, v103, v104);
                    if ( ProcessorTopologyCount >= 0 )
                    {
                      v105 = v150;
                      if ( v150 )
                      {
                        memmove((void *)a4, v150, v125);
                        ExFreePoolWithTag(v105, 0x4B494742u);
                      }
                      else
                      {
                        ProcessorTopologyCount = -1073741670;
                      }
                    }
                  }
                  else
                  {
                    ProcessorTopologyCount = -1073741789;
                  }
                }
                else
                {
                  ProcessorTopologyCount = -1073741670;
                }
              }
            }
            else
            {
              ProcessorTopologyCount = -1073741811;
            }
            goto LABEL_17;
          case 143:
          case 145:
          case 171:
          case 179:
            v17 = sub_1406E0D3C(a1, a4, Size, &v125);
            goto LABEL_16;
          case 147:
            v17 = sub_1409F7390(a4, Size, &v125, v12);
            goto LABEL_16;
          case 149:
            if ( Size >= 3 )
            {
              *(_BYTE *)a4 = byte_140C097FC == 0;
              *(_BYTE *)(a4 + 1) = (_BYTE)KdDebuggerEnabled;
              *(_BYTE *)(a4 + 2) = (_BYTE)KdDebuggerNotPresent == 0;
              v125 = 3;
              goto LABEL_17;
            }
            if ( a6 )
              *a6 = 3;
            goto LABEL_236;
          case 150:
            if ( a4 && !SeSinglePrivilegeCheck(stru_140D3CA10, Size_4) )
              return -1073741727;
            v17 = sub_1406389A8((void *)a4, Size, &v125);
            goto LABEL_16;
          case 151:
            v125 = 4;
            if ( Size >= 4 )
            {
              *(_DWORD *)a4 = dword_140C5B11C;
              goto LABEL_17;
            }
            if ( a6 )
              *a6 = 4;
            goto LABEL_236;
          case 153:
            if ( v132 )
            {
              ProcessorTopologyCount = -1073741820;
            }
            else
            {
              v125 = 32;
              if ( Size < 0x20 )
              {
                if ( Size < 0xC )
                {
                  ProcessorTopologyCount = -1073741820;
                }
                else
                {
                  v125 = 12;
                  *(_QWORD *)a4 = xmmword_140C24540;
                  *(_DWORD *)(a4 + 8) = DWORD2(xmmword_140C24540);
                }
              }
              else
              {
                *(_QWORD *)a4 = xmmword_140C24540;
                *(_DWORD *)(a4 + 8) = DWORD2(xmmword_140C24540);
                *(_QWORD *)(a4 + 16) = xmmword_140C24550;
                *(_DWORD *)(a4 + 24) = DWORD2(xmmword_140C24550);
              }
            }
            goto LABEL_17;
          case 154:
            if ( Size < 0x20 )
            {
              if ( a6 )
                *a6 = 32;
              goto LABEL_236;
            }
            ProcessorTopologyCount = sub_1409F6880(a4, v16, v15, v12);
LABEL_128:
            v125 = 32;
            goto LABEL_17;
          case 156:
            v125 = 128;
            if ( Size == 128 )
            {
              ProcessorTopologyCount = sub_140AACB50(3LL, Src, v15, v12);
              if ( ProcessorTopologyCount >= 0 )
LABEL_252:
                memmove((void *)a4, Src, v125);
            }
            else
            {
              ProcessorTopologyCount = -1073741820;
            }
            goto LABEL_17;
          case 157:
            v125 = WORD5(xmmword_140C15C80) + 24;
            if ( Size < v125 )
            {
              ProcessorTopologyCount = -1073741820;
            }
            else
            {
              v82 = (void *)(a4 + 24);
              *(_OWORD *)a4 = 0LL;
              *(_QWORD *)(a4 + 16) = 0LL;
              *(_DWORD *)a4 = xmmword_140C15C80;
              *(_DWORD *)(a4 + 8) = DWORD2(xmmword_140C15C80);
              if ( WORD4(xmmword_140C15C80) )
              {
                *(_QWORD *)(a4 + 16) = v82;
                memmove(v82, Data, WORD5(xmmword_140C15C80));
              }
            }
            goto LABEL_17;
          case 158:
            v125 = 1;
            if ( Size )
            {
              *(_BYTE *)a4 = PoEnergyEstimationEnabled();
              goto LABEL_17;
            }
            if ( a6 )
              *a6 = 1;
            goto LABEL_279;
          case 159:
            v17 = sub_140930DA8(a4, Size, v15, &v125);
            goto LABEL_16;
          case 160:
            v109 = (_DWORD)v12 << 6;
            v125 = (_DWORD)v12 << 6;
            if ( Size < 0x40 )
              goto LABEL_511;
            v110 = Size >> 6;
            if ( Size >= v109 )
              v110 = v12;
            v97 = Size < v109 ? 0xC0000004 : 0;
            v141 = (_QWORD *)a4;
            while ( 1 )
            {
              v131 = v8;
              if ( v8 >= v110 )
                break;
              ProcNumber.Group = v13;
              ProcNumber.Number = v8;
              ProcNumber.Reserved = 0;
              v111 = qword_140D088C0[KeGetProcessorIndexFromNumber(&ProcNumber)];
              sub_140242E98(v111, (_QWORD *)a4);
              a4 += 64LL;
              v141 = (_QWORD *)a4;
              ++v8;
            }
LABEL_502:
            ProcessorTopologyCount = v97;
            goto LABEL_17;
          case 162:
            v17 = sub_1405F5398((int *)a4, Size, &v125);
            goto LABEL_16;
          case 163:
            if ( Size )
            {
              *(_BYTE *)a4 = byte_140C40501;
              v125 = 1;
              goto LABEL_17;
            }
            if ( a6 )
              *a6 = 1;
            goto LABEL_236;
          case 164:
          case 172:
          case 189:
          case 190:
          case 199:
          case 209:
            if ( qword_140C1B928 )
              v17 = sub_14042A5E0((unsigned int)a1, P);
            else
              v17 = -1073741823;
            goto LABEL_16;
          case 165:
            v125 = 16;
            if ( Size == 16 )
            {
              LOBYTE(Src[0]) ^= (LOBYTE(Src[0]) ^ (16 * byte_140C15C48)) & 0x10;
              if ( sub_14025E6F8() )
              {
                CurrentServerSilo = PsGetCurrentServerSilo();
                if ( PsIsHostSilo(CurrentServerSilo) )
                {
                  NumberOfBytes_4 = 0;
                  LOBYTE(Src[0]) |= 1u;
                  v113 = sub_140294CC0();
                  v114 = Src[0];
                  if ( (v113 & 2) != 0 )
                  {
                    v114 = LOBYTE(Src[0]) | 2;
                    LOBYTE(Src[0]) |= 2u;
                  }
                  if ( (v113 & 0x20) != 0 )
                  {
                    v114 |= 4u;
                    LOBYTE(Src[0]) = v114;
                  }
                  if ( (v113 & 0x10) != 0 )
                    LOBYTE(Src[0]) = v114 | 8;
                  v115 = BYTE1(Src[0]);
                  if ( (v113 & 0x200) != 0 )
                  {
                    LOBYTE(v115) = BYTE1(Src[0]) | 2;
                    BYTE1(Src[0]) |= 2u;
                  }
                  v116 = v152;
                  if ( v152 )
                  {
                    ProcessorTopologyCount = sub_14054E7B4(v152, &NumberOfBytes_4);
                    v115 = BYTE1(Src[0]);
                    LOBYTE(v115) = (NumberOfBytes_4 ^ BYTE1(Src[0])) & 1 ^ BYTE1(Src[0]);
                    BYTE1(Src[0]) = v115;
                  }
                  if ( (v113 & 0x800) != 0 )
                  {
                    LOBYTE(v115) = v115 | 4;
                    BYTE1(Src[0]) = v115;
                  }
                  v117 = sub_140932544(v116, v115);
                  LOBYTE(Src[0]) ^= (LOBYTE(Src[0]) ^ (32 * v117)) & 0x20;
                }
              }
              *(_OWORD *)a4 = Src[0];
              goto LABEL_17;
            }
            if ( a6 )
              *a6 = 16;
            goto LABEL_279;
          case 166:
            v17 = sub_1407FCA14(a4, Size, &v125, v12);
            goto LABEL_16;
          case 167:
            v17 = sub_1409F75A0(a4, Size, Size_4, &v125);
            goto LABEL_16;
          case 169:
            v17 = sub_140930EC4((void *)a4);
            goto LABEL_16;
          case 173:
            result = sub_140258040(Size_4);
            ProcessorTopologyCount = result;
            if ( result < 0 )
              return result;
            v125 = 264;
            if ( Size != 264 )
            {
              ProcessorTopologyCount = -1073741820;
              goto LABEL_17;
            }
            v118 = (unsigned __int16 *)ExAllocatePool2(256LL, 264LL, 1868983881LL);
            v119 = v118;
            P = v118;
            if ( !v118 )
              return -1073741670;
            *v118 = 1;
            v118[1] = 32;
            *((_DWORD *)v118 + 1) = 0;
            memset(v118 + 4, 0, 0x100uLL);
            sub_140577F60(v119);
            v120 = v119;
            v121 = 2LL;
            do
            {
              *(_OWORD *)a4 = *(_OWORD *)v120;
              *(_OWORD *)(a4 + 16) = *((_OWORD *)v120 + 1);
              *(_OWORD *)(a4 + 32) = *((_OWORD *)v120 + 2);
              *(_OWORD *)(a4 + 48) = *((_OWORD *)v120 + 3);
              *(_OWORD *)(a4 + 64) = *((_OWORD *)v120 + 4);
              *(_OWORD *)(a4 + 80) = *((_OWORD *)v120 + 5);
              *(_OWORD *)(a4 + 96) = *((_OWORD *)v120 + 6);
              a4 += 128LL;
              *(_OWORD *)(a4 - 16) = *((_OWORD *)v120 + 7);
              v120 += 64;
              --v121;
            }
            while ( v121 );
            *(_QWORD *)a4 = *(_QWORD *)v120;
            ExFreePoolWithTag(v119, 0);
            goto LABEL_17;
          case 174:
            v17 = sub_1409AB8A0(a4, Size, &v125, v12);
            goto LABEL_16;
          case 175:
            if ( v14 )
            {
              v158 = 0LL;
              result = ObReferenceObjectByHandle(v14, 0x1000u, (POBJECT_TYPE)PsProcessType, Size_4, &v158, 0LL);
              v83 = v158;
              Object = v158;
              if ( result < 0 )
                return result;
            }
            else
            {
              v83 = Object;
            }
            ProcessorTopologyCount = sub_14085634C((void *)a4);
            if ( v83 )
              ObfDereferenceObject(v83);
            goto LABEL_17;
          case 178:
            if ( !Size )
            {
              ProcessorTopologyCount = -1073741789;
              goto LABEL_17;
            }
            if ( Size_4 && !SeSinglePrivilegeCheck(stru_140D3CB00, Size_4) )
              return -1073741727;
            v122 = (struct _MDL *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, Size, 0x6F666E49u);
            PoolWithQuotaTag = v122;
            P = v122;
            if ( !v122 )
            {
              ProcessorTopologyCount = -1073741670;
              goto LABEL_17;
            }
            memset(v122, 0, Size);
            ProcessorTopologyCount = sub_14054EE64(v159, PoolWithQuotaTag, Size, &v125);
            if ( ProcessorTopologyCount >= 0 )
              memmove((void *)a4, PoolWithQuotaTag, v125);
            goto LABEL_531;
          case 180:
            v17 = sub_14085F318((_DWORD)P, v132, a4, Size, (__int64)&v125);
            goto LABEL_16;
          case 181:
          case 230:
            if ( v14 )
            {
              v160 = 0LL;
              result = ObReferenceObjectByHandle(v14, 0x1000u, (POBJECT_TYPE)PsProcessType, Size_4, &v160, 0LL);
              v21 = v160;
              Object = v160;
              if ( result < 0 )
                return result;
            }
            else
            {
              v21 = Object;
            }
            ProcessorTopologyCount = sub_1406AD42C((_DWORD *)a4, v16, Size, &v125, (__int64)v21);
            if ( v21 )
              ObfDereferenceObject(v21);
            goto LABEL_17;
          case 182:
            if ( Size == 56 )
            {
              v22 = sub_14026A0BC(*((_QWORD *)KeGetCurrentThread() + 23));
              *(_QWORD *)&Src[0] = *(_QWORD *)(*(_QWORD *)(qword_140C51F48 + 8LL * v22) + 16720LL) << 12;
              *((_QWORD *)&Src[0] + 1) = sub_14026A09C(v22) << 12;
              *(_QWORD *)&Src[1] = sub_14026925C(v23) << 12;
              *((_QWORD *)&Src[1] + 1) = sub_14026A07C(v24) << 12;
              *((_QWORD *)&Src[2] + 1) = sub_14026A05C(v25) << 12;
              *(_QWORD *)&Src[3] = sub_14026A03C(v26) << 12;
              *(_QWORD *)&Src[2] = sub_14026924C() << 12;
              if ( *(_QWORD *)&Src[0] < *((_QWORD *)&Src[0] + 1) )
                *(_QWORD *)&Src[0] = *((_QWORD *)&Src[0] + 1);
              if ( *((_QWORD *)&Src[2] + 1) < *((_QWORD *)&Src[1] + 1) )
                *((_QWORD *)&Src[2] + 1) = *((_QWORD *)&Src[1] + 1);
              if ( *(_QWORD *)&Src[3] < *((_QWORD *)&Src[1] + 1) )
                *(_QWORD *)&Src[3] = *((_QWORD *)&Src[1] + 1);
              *(_OWORD *)a4 = Src[0];
              *(_OWORD *)(a4 + 16) = Src[1];
              *(_OWORD *)(a4 + 32) = Src[2];
              *(_QWORD *)(a4 + 48) = *(_QWORD *)&Src[3];
              v125 = 56;
              goto LABEL_17;
            }
            if ( a6 )
              *a6 = 56;
            goto LABEL_236;
          case 183:
            if ( Size != 16 )
              goto LABEL_236;
            v17 = sub_1409F6A1C(*(_QWORD *)a4, *(unsigned int *)(a4 + 8), v15, v12);
            goto LABEL_16;
          case 184:
            if ( Size != 24 )
            {
              if ( a6 )
                *a6 = 24;
              goto LABEL_236;
            }
            v69 = sub_14026A0BC(*((_QWORD *)KeGetCurrentThread() + 23));
            *(_QWORD *)&Src[0] = *(_QWORD *)(*(_QWORD *)(qword_140C51F48 + 8LL * v69) + 16720LL) << 12;
            *((_QWORD *)&Src[0] + 1) = sub_14025E350(v69) << 12;
            *(_QWORD *)&Src[1] = (sub_14020DB30(v70) << 12) + 4095;
            *(_OWORD *)a4 = Src[0];
            *(_QWORD *)(a4 + 16) = *(_QWORD *)&Src[1];
LABEL_206:
            v125 = 24;
            goto LABEL_17;
          case 186:
            if ( !Size )
            {
              v139 = 1;
              return sub_14041D480(1LL, 270532611LL);
            }
            if ( a6 )
              *a6 = 0;
            goto LABEL_236;
          case 188:
            if ( Size != 8 )
              goto LABEL_236;
            ProcessorTopologyCount = sub_1405E04A0(Src);
            if ( ProcessorTopologyCount >= 0 )
              *(_QWORD *)a4 = *(_QWORD *)&Src[0];
            goto LABEL_17;
          case 192:
            if ( Size >= 0x20 )
            {
              ProcessorTopologyCount = sub_1406C955C(a4);
              v125 = 32;
              goto LABEL_17;
            }
            if ( a6 )
              *a6 = 32;
            goto LABEL_236;
          case 193:
            v100 = 8 * KeQueryActiveGroupCount();
            v125 = v100;
            if ( Size < v100 )
            {
LABEL_511:
              ProcessorTopologyCount = -1073741789;
            }
            else
            {
              memset((void *)a4, 0, v100);
              while ( 1 )
              {
                v131 = v8;
                if ( v8 >= (unsigned __int16)word_140D05000 )
                  break;
                sub_14056D75C(&v164, qword_140D31700[v8]);
                while ( !(unsigned int)sub_140354698((__int64)&v164, &v157) )
                {
                  v135 = *(_WORD *)(v157 + 136);
                  *(_QWORD *)(a4 + 8LL * v135) |= *(_QWORD *)(v157 + 40);
                  v8 = v131;
                }
                ++v8;
              }
            }
            goto LABEL_17;
          case 194:
            v17 = sub_140932F44(P, v132, (void *)a4, Size, (__int64)&v125, Size_4);
            goto LABEL_16;
          case 195:
            if ( Size >= 8 )
            {
              v17 = sub_1408624E8(a4, v16, v15, v12);
              v125 = 8;
              goto LABEL_16;
            }
            if ( a6 )
              *a6 = 8;
            goto LABEL_236;
          case 196:
            v17 = sub_140962C48(a4, Size, &v125, v12);
            goto LABEL_16;
          case 197:
            v125 = 8;
            if ( Size < 8 )
            {
              ProcessorTopologyCount = -1073741820;
            }
            else
            {
              v45 = qword_140C50678;
              *(_QWORD *)a4 = 0LL;
              *(_QWORD *)a4 = v45;
            }
            goto LABEL_17;
          case 198:
            ProcessorTopologyCount = sub_14042A5E0(34LL, 0LL);
            if ( ProcessorTopologyCount != -1073741820 )
              return -1073741637;
            v41 = NumberOfBytes;
            if ( Size < NumberOfBytes || !a4 )
            {
LABEL_93:
              v125 = v41;
              goto LABEL_17;
            }
            if ( Size_4 )
            {
              PoolWithQuotaTag = (struct _MDL *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, NumberOfBytes, 0x6F666E49u);
              P = PoolWithQuotaTag;
              if ( !PoolWithQuotaTag )
              {
                ProcessorTopologyCount = -1073741670;
                goto LABEL_17;
              }
              v41 = NumberOfBytes;
            }
            else
            {
              PoolWithQuotaTag = (struct _MDL *)a4;
              P = (PVOID)a4;
            }
            v123 = sub_14042A5E0(34LL, v41);
            ProcessorTopologyCount = v123;
            if ( Size_4 )
            {
              if ( v123 >= 0 )
LABEL_530:
                memmove((void *)a4, PoolWithQuotaTag, v125);
LABEL_531:
              ExFreePoolWithTag(PoolWithQuotaTag, 0x6F666E49u);
            }
            goto LABEL_17;
          case 200:
            v17 = sub_1406CDACC(200);
            goto LABEL_16;
          case 201:
            v17 = sub_140961998((void *)a4, Size);
            goto LABEL_16;
          case 202:
            v125 = 1;
            if ( Size != 1 )
            {
              if ( a6 )
                *a6 = 1;
              goto LABEL_279;
            }
            v148[1] = 0;
            sub_14042A5E0(47LL, 1LL);
LABEL_102:
            ProcessorTopologyCount = -1073741637;
            goto LABEL_17;
          case 206:
            if ( Size != 8 )
            {
              if ( a6 )
                *a6 = 8;
              goto LABEL_236;
            }
            *(_BYTE *)a4 = *(_BYTE *)qword_140C15B58 != 0;
            *(_DWORD *)(a4 + 4) = 0;
LABEL_112:
            v125 = 8;
            goto LABEL_17;
          case 207:
            if ( Size == 4 )
            {
              *(_DWORD *)a4 = dword_140C4E7B0;
              goto LABEL_164;
            }
            if ( a6 )
              *a6 = 4;
            goto LABEL_236;
          case 208:
            v17 = sub_1409C674C(a4, Size, &v125, v12);
            goto LABEL_16;
          case 210:
            v17 = sub_140911230((_DWORD)P, v132, a4, Size, (__int64)&v125);
            goto LABEL_16;
          case 211:
            v17 = sub_1406BC564((__int128 *)P, v132, (_OWORD *)a4, Size, &v125, *((_BYTE *)KeGetCurrentThread() + 562));
            goto LABEL_16;
          case 213:
            v17 = sub_1405711E4((unsigned int *)a4, Size, &v125);
            goto LABEL_16;
          case 214:
            if ( Size_4 )
              return -1073741727;
            if ( qword_140C15B78 )
            {
              if ( *(_QWORD *)qword_140C15B78 )
              {
                v84 = *(_DWORD *)qword_140C15B78;
                v125 = *(_DWORD *)qword_140C15B78;
                if ( a4 )
                {
                  if ( Size < v84 )
                    ProcessorTopologyCount = -1073741820;
                  else
                    memmove((void *)a4, (const void *)(qword_140C15B78 + 8), v84);
                }
              }
            }
            goto LABEL_17;
          case 215:
            if ( Size_4 )
              return -1073741727;
            v106 = qword_140C15B80;
            if ( qword_140C15B80 )
            {
              v125 = 24;
              if ( Size >= 0x18 )
              {
                *(_OWORD *)a4 = *(_OWORD *)qword_140C15B80;
                *(_QWORD *)(a4 + 16) = *(_QWORD *)(v106 + 16);
              }
              else
              {
                ProcessorTopologyCount = -1073741820;
              }
            }
            else
            {
              ProcessorTopologyCount = -1073741810;
            }
            goto LABEL_17;
          case 216:
            v125 = 32;
            if ( Size != 32 )
            {
              ProcessorTopologyCount = -1073741820;
              goto LABEL_17;
            }
            v17 = sub_140A08710(a4, 32LL, v15, v12);
            goto LABEL_16;
          case 221:
            if ( Size == 4 )
            {
              *(_DWORD *)a4 = 0;
              *(_DWORD *)a4 = sub_14025E5E0();
              v71 = sub_1402A08A8();
              *(_DWORD *)a4 = v72 ^ ((unsigned __int8)v72 ^ (unsigned __int8)(2 * v71)) & 2;
              v73 = sub_14025E490();
              *(_DWORD *)a4 = v74 | (v73 << 8);
              v75 = sub_14025E5F4();
              *(_DWORD *)a4 = v76 | (v75 << 9);
LABEL_164:
              v125 = 4;
              goto LABEL_17;
            }
            if ( a6 )
              *a6 = 4;
LABEL_236:
            result = -1073741820;
            break;
          case 222:
            v17 = sub_14075AF98(P, v132, a4, Size, &v125, *((_BYTE *)KeGetCurrentThread() + 562));
            goto LABEL_16;
          case 223:
            if ( !P )
              return -1073741821;
            v20 = v132;
            ProcessorTopologyCount = sub_14063AC94(P, v132, (void *)a4, Size, *((_BYTE *)KeGetCurrentThread() + 562));
            if ( ProcessorTopologyCount >= 0 )
              goto LABEL_39;
            goto LABEL_17;
          case 227:
            v125 = 1;
            if ( Size == 1 )
            {
              *(_BYTE *)a4 = 1;
            }
            else
            {
              if ( a6 )
                *a6 = 1;
LABEL_279:
              ProcessorTopologyCount = -1073741820;
            }
            goto LABEL_17;
          case 228:
          case 229:
            v125 = Size;
            v17 = sub_1405683C0((void *)a4, Size, a1);
            goto LABEL_16;
          case 232:
            v17 = sub_1405EE7E0((char *)BaseAddress[1]);
            goto LABEL_16;
          default:
            return -1073741821;
        }
        return result;
      }
      v17 = sub_1407E2B70((void *)a4, Size);
    }
LABEL_16:
    ProcessorTopologyCount = v17;
LABEL_17:
    if ( a6 )
      *a6 = v125;
    return ProcessorTopologyCount;
  }
  switch ( a1 )
  {
    case 2:
    case 33:
    case 36:
    case 65:
      v13 = -1;
      v135 = -1;
      ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
      v12 = ActiveProcessorCount;
      LODWORD(v142) = ActiveProcessorCount;
      goto LABEL_12;
    case 8:
    case 23:
    case 42:
    case 61:
    case 73:
    case 83:
    case 100:
    case 108:
    case 141:
    case 160:
      if ( v132 < 2 )
        goto LABEL_491;
      v135 = *(_WORD *)P;
      v13 = v135;
      if ( v135 >= KeQueryActiveGroupCount() )
        goto LABEL_491;
      v37 = KeQueryActiveProcessorCountEx(v135);
      v12 = v37;
      LODWORD(v142) = v37;
      goto LABEL_12;
    case 72:
      if ( v132 != 4 )
        goto LABEL_491;
      v16 = *(unsigned int *)P;
      v144 = *(_DWORD *)P;
      v15 = v130;
      goto LABEL_14;
    case 107:
      if ( v132 < 4 )
        goto LABEL_491;
      v11 = *(_DWORD *)P;
      v149 = *(_DWORD *)P;
      goto LABEL_12;
    case 121:
      if ( v132 >= 2 )
      {
        v130 = *(_WORD *)P;
        v15 = v130;
        if ( v130 < (unsigned __int16)word_140D05000 )
          goto LABEL_13;
      }
      goto LABEL_491;
    case 165:
      if ( !v132 )
      {
        v152 = 0LL;
        goto LABEL_12;
      }
      if ( v132 == 8 )
      {
        v152 = *(_QWORD *)P;
        goto LABEL_12;
      }
LABEL_491:
      result = -1073741811;
      break;
    case 175:
    case 181:
    case 230:
      if ( v132 != 8 )
        goto LABEL_491;
      v14 = *(void **)P;
      v162 = *(_QWORD *)P;
      goto LABEL_12;
    case 178:
      if ( v132 != 8 )
        goto LABEL_491;
      v159 = *(_QWORD *)P;
      goto LABEL_12;
    case 231:
      if ( v132 < 8 )
        goto LABEL_491;
      v9 = (__int64)P;
      ProcNumber = (_PROCESSOR_NUMBER)*((_DWORD *)P + 1);
      v11 = *(_DWORD *)P;
      v149 = *(_DWORD *)P;
      goto LABEL_12;
    case 232:
      if ( v132 < 0x20 )
        goto LABEL_491;
      *(_OWORD *)BaseAddress = *(_OWORD *)P;
      v166 = *((_OWORD *)P + 1);
      goto LABEL_12;
    default:
      goto LABEL_12;
  }
  return result;
}
