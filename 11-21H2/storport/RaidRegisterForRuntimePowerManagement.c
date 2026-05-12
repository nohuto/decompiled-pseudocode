/*
 * XREFs of RaidRegisterForRuntimePowerManagement @ 0x1C0049514
 * Callers:
 *     StorpAdapterInitializePoFxPower @ 0x1C00446A8 (StorpAdapterInitializePoFxPower.c)
 *     StorpUnitInitializePoFxPower @ 0x1C00472D0 (StorpUnitInitializePoFxPower.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C0088388 (RaUnitRegisterForIdleDetection.c)
 * Callees:
 *     RaidGetStorPoFxComponent @ 0x1C000C8F8 (RaidGetStorPoFxComponent.c)
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     _tlgKeywordOn @ 0x1C001354C (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002017C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     RaidGetStorPoFxFState @ 0x1C0041ED4 (RaidGetStorPoFxFState.c)
 */

__int64 __fastcall RaidRegisterForRuntimePowerManagement(__int64 a1, int *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  unsigned int v5; // r13d
  unsigned int v6; // r10d
  unsigned int v9; // r9d
  char v11; // r14
  char *StorPoFxComponent; // rax
  int v13; // r10d
  char *v14; // r11
  unsigned int v15; // ebx
  unsigned int i; // edx
  char *StorPoFxFState; // rax
  int v18; // edx
  unsigned int v19; // r9d
  unsigned int v20; // ecx
  __int64 Pool; // rax
  __int64 v22; // rbx
  __int64 v24; // rcx
  unsigned int v25; // r10d
  __int64 v26; // rsi
  char *v27; // rax
  int v28; // r10d
  __int64 v29; // r11
  char *v30; // r13
  unsigned int v31; // edx
  __int128 v32; // xmm0
  char v33; // cl
  unsigned int v34; // r15d
  char *v35; // rax
  __int64 v36; // r9
  __int64 v37; // r11
  __int64 v38; // rcx
  __int64 v39; // r15
  bool v40; // zf
  _QWORD *v41; // rax
  KSPIN_LOCK *v42; // rcx
  char v43; // r14
  int v44; // esi
  __int64 v45; // rcx
  int v46; // eax
  int v47; // eax
  int v48; // ebx
  __int64 v49; // r8
  __int64 v50; // r9
  int v51; // r10d
  int v52; // r11d
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  int v57; // r10d
  char v58; // [rsp+30h] [rbp-D0h] BYREF
  char v59; // [rsp+31h] [rbp-CFh] BYREF
  char v60; // [rsp+32h] [rbp-CEh] BYREF
  unsigned int v61; // [rsp+34h] [rbp-CCh] BYREF
  int v62; // [rsp+38h] [rbp-C8h] BYREF
  int v63; // [rsp+3Ch] [rbp-C4h] BYREF
  int v64; // [rsp+40h] [rbp-C0h] BYREF
  int v65; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v66; // [rsp+48h] [rbp-B8h] BYREF
  int v67; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD InputBuffer[2]; // [rsp+58h] [rbp-A8h] BYREF
  int v69; // [rsp+68h] [rbp-98h]
  int v70; // [rsp+6Ch] [rbp-94h]
  struct _EVENT_DATA_DESCRIPTOR v71; // [rsp+70h] [rbp-90h] BYREF
  __int64 v72; // [rsp+90h] [rbp-70h]
  __int64 v73; // [rsp+98h] [rbp-68h]
  __int64 *v74; // [rsp+A0h] [rbp-60h]
  __int64 v75; // [rsp+A8h] [rbp-58h]
  int *v76; // [rsp+B0h] [rbp-50h]
  __int64 v77; // [rsp+B8h] [rbp-48h]
  char *v78; // [rsp+C0h] [rbp-40h]
  __int64 v79; // [rsp+C8h] [rbp-38h]
  int *v80; // [rsp+D0h] [rbp-30h]
  __int64 v81; // [rsp+D8h] [rbp-28h]
  int *v82; // [rsp+E0h] [rbp-20h]
  __int64 v83; // [rsp+E8h] [rbp-18h]
  int *v84; // [rsp+F0h] [rbp-10h]
  __int64 v85; // [rsp+F8h] [rbp-8h]
  int *v86; // [rsp+100h] [rbp+0h]
  __int64 v87; // [rsp+108h] [rbp+8h]
  int *v88; // [rsp+110h] [rbp+10h]
  __int64 v89; // [rsp+118h] [rbp+18h]
  int *v90; // [rsp+120h] [rbp+20h]
  __int64 v91; // [rsp+128h] [rbp+28h]
  int *v92; // [rsp+130h] [rbp+30h]
  __int64 v93; // [rsp+138h] [rbp+38h]
  __int64 *v94; // [rsp+140h] [rbp+40h]
  __int64 v95; // [rsp+148h] [rbp+48h]

  v4 = a2[2];
  v5 = 0;
  v6 = 0;
  v66 = a4;
  v58 = 0;
  v61 = 0;
  v9 = 104;
  v11 = 1;
  if ( v4 )
  {
    do
    {
      StorPoFxComponent = RaidGetStorPoFxComponent(a2, v6);
      v14 = StorPoFxComponent;
      if ( StorPoFxComponent )
      {
        v9 += 56;
        if ( *((_DWORD *)StorPoFxComponent + 2) > v5 )
          v5 = *((_DWORD *)StorPoFxComponent + 2);
      }
      v15 = *((_DWORD *)StorPoFxComponent + 2);
      for ( i = 0; i < v15; v9 = v20 )
      {
        StorPoFxFState = RaidGetStorPoFxFState(v14, i);
        v20 = v19 + 24;
        if ( !StorPoFxFState )
          v20 = v19;
        i = v18 + 1;
      }
      v6 = v13 + 1;
    }
    while ( v6 < v4 );
    v61 = v5;
  }
  Pool = RaidAllocatePool(64LL, v9, 1330667858LL, a1);
  v22 = Pool;
  if ( !Pool )
    return 3221225626LL;
  *(_DWORD *)Pool = 3;
  *(_DWORD *)(Pool + 96) = v4;
  *(_QWORD *)(Pool + 88) = a3;
  v24 = *(_QWORD *)(a1 + 64);
  if ( !*(_DWORD *)v24 && ((a2[3] & 2) != 0 || *(char *)(v24 + 107) < 0 && *(_DWORD *)(v24 + 4848) == -1) )
    *(_QWORD *)(Pool + 8) |= 0xFFEE000000000000uLL;
  v25 = 0;
  if ( v4 )
  {
    do
    {
      v26 = 56LL * v25;
      v27 = RaidGetStorPoFxComponent(a2, v25);
      *(_QWORD *)(v26 + v22 + 136) = v29;
      v30 = v27;
      v31 = *((_DWORD *)v27 + 2);
      *(_DWORD *)(v26 + v22 + 132) = v31;
      *(_DWORD *)(v26 + v22 + 128) = *((_DWORD *)v27 + 3);
      v32 = *((_OWORD *)v27 + 1);
      *(_QWORD *)(v26 + v22 + 120) = 1LL;
      *(_OWORD *)(v26 + v22 + 104) = v32;
      if ( (a2[3] & 0x100) != 0 )
        *(_QWORD *)(v26 + v22 + 120) = 3LL;
      v33 = 0;
      if ( v31 <= 1 )
        v33 = v11;
      v34 = 0;
      v11 = v33;
      if ( v31 )
      {
        do
        {
          v35 = RaidGetStorPoFxFState(v30, v34++);
          *(_DWORD *)(v37 + 8 * v36 + 16) = *((_DWORD *)v35 + 6);
          *(_QWORD *)(v37 + 8 * v36 + 8) = *((_QWORD *)v35 + 2);
          *(_QWORD *)(v37 + 8 * v36) = *((_QWORD *)v35 + 1);
        }
        while ( v34 < *(_DWORD *)(v26 + v22 + 132) );
      }
      v25 = v28 + 1;
    }
    while ( v25 < *(_DWORD *)(v22 + 96) );
    v5 = v61;
  }
  v38 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)v38 != 1 )
  {
    v39 = *(_QWORD *)(v38 + 32);
    if ( !v11 )
      *(_QWORD *)(v22 + 32) = StorPortAdapterIdleState;
    v40 = DFxEnabled == 0;
    *(_QWORD *)(v22 + 16) = StorPortAdapterActiveCondition;
    *(_QWORD *)(v22 + 24) = StorPortAdapterIdleCondition;
    *(_QWORD *)(v22 + 48) = StorPortAdapterPowerNotRequiredStep1;
    *(_QWORD *)(v22 + 40) = StorPortAdapterPowerRequiredStep1;
    *(_QWORD *)(v22 + 56) = StorPortAdapterPowerControl;
    if ( !v40 && (a2[3] & 3) == 0 )
    {
      *(_QWORD *)(v22 + 64) = StorPortAdapterDirectedPowerUp;
      *(_QWORD *)(v22 + 72) = StorPortAdapterDirectedPowerDown;
      if ( (a2[3] & 0x40) != 0 )
        *(_QWORD *)(v22 + 8) |= 6uLL;
      v41 = (_QWORD *)(v38 + 5592);
      v42 = (KSPIN_LOCK *)(v38 + 5616);
      goto LABEL_40;
    }
LABEL_41:
    v43 = 1;
    goto LABEL_42;
  }
  v39 = *(_QWORD *)(v38 + 8);
  if ( !v11 )
    *(_QWORD *)(v22 + 32) = StorPortUnitIdleState;
  v40 = DFxEnabled == 0;
  *(_QWORD *)(v22 + 16) = StorPortUnitActiveConditionStep1;
  *(_QWORD *)(v22 + 24) = StorPortUnitIdleCondition;
  *(_QWORD *)(v22 + 48) = StorPortUnitPowerNotRequiredStep1;
  *(_QWORD *)(v22 + 40) = StorPortUnitPowerRequiredStep1;
  *(_QWORD *)(v22 + 56) = StorPortUnitPowerControl;
  if ( v40 || (a2[3] & 3) != 0 )
    goto LABEL_41;
  *(_QWORD *)(v22 + 8) |= 6uLL;
  *(_QWORD *)(v22 + 64) = StorPortUnitDirectedPowerUp;
  *(_QWORD *)(v22 + 72) = StorPortUnitDirectedPowerDown;
  v41 = (_QWORD *)(v38 + 3352);
  v42 = (KSPIN_LOCK *)(v38 + 3376);
LABEL_40:
  v41[1] = v41;
  *v41 = v41;
  KeInitializeSpinLock(v42);
  v43 = v58;
LABEL_42:
  v44 = PoFxRegisterDevice(a1, v22, v66);
  ExFreePoolWithTag((PVOID)v22, 0x4F506152u);
  if ( v44 >= 0 )
  {
    if ( v43 )
    {
      InputBuffer[0] = 58LL;
      v40 = (a2[3] & 0x40) == 0;
      v70 = 0;
      InputBuffer[1] = v39;
      v46 = 2;
      if ( !v40 )
        v46 = 6;
      v69 = v46;
      ZwPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0x18u, 0LL, 0);
    }
    v47 = **(_DWORD **)(a1 + 64);
    if ( v47 == 1 )
    {
      v48 = 0;
      if ( (unsigned int)*a2 >= 2 )
        v48 = a2[4];
      if ( (unsigned int)dword_1C0079058 > 5 )
      {
        if ( tlgKeywordOn(v45, 0x400000000000LL) )
        {
          v53 = *(_QWORD *)(v50 + 24);
          v73 = 16LL;
          v75 = 16LL;
          v72 = v53 + 4936;
          v74 = (__int64 *)(v50 + 1976);
          v61 = *(_DWORD *)(v53 + 56);
          v76 = (int *)&v61;
          v58 = *(_BYTE *)(v50 + 96);
          v78 = &v58;
          v59 = *(_BYTE *)(v50 + 97);
          v80 = (int *)&v59;
          v60 = *(_BYTE *)(v50 + 98);
          v82 = (int *)&v60;
          v84 = &v67;
          v62 = a2[2];
          v86 = &v62;
          v88 = &v63;
          v64 = a2[3];
          v90 = &v64;
          v92 = &v65;
          v94 = &v66;
          v77 = 4LL;
          v79 = 1LL;
          v81 = 1LL;
          v83 = 1LL;
          v67 = v51;
          v85 = 4LL;
          v87 = 4LL;
          v63 = v5;
          v89 = 4LL;
          v91 = 4LL;
          v65 = v48;
          v93 = 4LL;
          LODWORD(v66) = v52;
          v95 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(v53, byte_1C006CB47, v49, v50, 0xEu, &v71);
        }
      }
    }
    else if ( !v47 && (unsigned int)dword_1C0079058 > 5 && tlgKeywordOn((unsigned int)*a2, 0x400000000000LL) )
    {
      v73 = 16LL;
      v72 = v56 + 4936;
      LODWORD(v66) = v54;
      v74 = &v66;
      v65 = a2[2];
      v76 = &v65;
      v78 = (char *)&v64;
      v63 = a2[3];
      v80 = &v63;
      v82 = &v62;
      v75 = 4LL;
      v77 = 4LL;
      v64 = v5;
      v79 = 4LL;
      v81 = 4LL;
      v62 = v57;
      v83 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(v54, (unsigned __int8 *)dword_1C006CC0E, v55, v56, 8u, &v71);
    }
  }
  return (unsigned int)v44;
}
