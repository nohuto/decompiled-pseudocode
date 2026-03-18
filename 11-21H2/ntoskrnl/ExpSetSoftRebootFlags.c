/*
 * XREFs of ExpSetSoftRebootFlags @ 0x140638DC8
 * Callers:
 *     NtSetSystemInformation @ 0x1407D6120 (NtSetSystemInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ExpSetSoftRebootFlags(int a1)
{
  int v2; // r13d
  unsigned int v3; // edi
  int v4; // r8d
  signed __int32 *i; // rdx
  signed __int32 v6; // ett
  __int32 v7; // esi
  int v9; // ebx
  int v10; // r12d
  __int64 (__fastcall *v11)(_QWORD, _QWORD); // rax
  int v12; // r14d
  int v13; // ecx
  unsigned int v14; // r15d
  unsigned int v15; // ebx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  unsigned __int64 v19; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v21[5]; // [rsp+60h] [rbp-A8h]
  int v22; // [rsp+88h] [rbp-80h]
  int v23; // [rsp+8Ch] [rbp-7Ch]
  __int64 (__fastcall *v24)(int, int); // [rsp+90h] [rbp-78h]
  int v25; // [rsp+98h] [rbp-70h]
  int v26; // [rsp+9Ch] [rbp-6Ch]
  __int64 (__fastcall *v27)(int, int); // [rsp+A0h] [rbp-68h]
  __int64 v28; // [rsp+A8h] [rbp-60h]
  __int64 (__fastcall *v29)(int, int); // [rsp+B0h] [rbp-58h]
  int v30; // [rsp+B8h] [rbp-50h]
  int v31; // [rsp+BCh] [rbp-4Ch]
  __int64 (__fastcall *v32)(int, int); // [rsp+C0h] [rbp-48h]
  int v33; // [rsp+C8h] [rbp-40h]
  int v34; // [rsp+CCh] [rbp-3Ch]
  __int64 v35; // [rsp+D0h] [rbp-38h]
  __int64 v36; // [rsp+D8h] [rbp-30h]
  __int64 (__fastcall *v37)(int, int); // [rsp+E0h] [rbp-28h]
  int v38; // [rsp+E8h] [rbp-20h]
  int v39; // [rsp+ECh] [rbp-1Ch]
  __int64 (__fastcall *v40)(int, int); // [rsp+F0h] [rbp-18h]
  int v41; // [rsp+F8h] [rbp-10h]
  int v42; // [rsp+FCh] [rbp-Ch]
  __int64 v43; // [rsp+100h] [rbp-8h]
  int v44; // [rsp+108h] [rbp+0h]
  int v45; // [rsp+10Ch] [rbp+4h]
  __int64 (__fastcall *v46)(int, int); // [rsp+110h] [rbp+8h]
  int v47; // [rsp+118h] [rbp+10h]
  int v48; // [rsp+11Ch] [rbp+14h]
  __int64 (__fastcall *v49)(int, int); // [rsp+120h] [rbp+18h]
  int v50; // [rsp+128h] [rbp+20h]
  int v51; // [rsp+12Ch] [rbp+24h]
  __int64 (__fastcall *v52)(unsigned int, int); // [rsp+130h] [rbp+28h]
  int v53; // [rsp+138h] [rbp+30h]
  int v54; // [rsp+13Ch] [rbp+34h]
  __int64 v55; // [rsp+140h] [rbp+38h]
  int v56; // [rsp+148h] [rbp+40h]
  int v57; // [rsp+14Ch] [rbp+44h]
  __int64 (__fastcall *v58)(int, int); // [rsp+150h] [rbp+48h]
  int v59; // [rsp+158h] [rbp+50h]
  int v60; // [rsp+15Ch] [rbp+54h]
  __int64 (__fastcall *v61)(int, int); // [rsp+160h] [rbp+58h]
  __int64 v62; // [rsp+168h] [rbp+60h]
  __int64 v63; // [rsp+170h] [rbp+68h]
  int v64; // [rsp+178h] [rbp+70h]
  int v65; // [rsp+17Ch] [rbp+74h]
  __int64 v66; // [rsp+180h] [rbp+78h]

  v19 = 0LL;
  v20 = 0LL;
  v21[0] = 0LL;
  v27 = BapdpKsrCompleteScenarioPhase0;
  v23 = 8;
  v25 = 8;
  v28 = 8LL;
  v45 = 8;
  v29 = BapdpKsrCancelScenario;
  v37 = BapdpKsrCancelScenario;
  v57 = 8;
  v40 = BapdpKsrCompleteScenario;
  v2 = a1 & 0x20000000;
  v21[1] = 0x2000000000LL;
  v52 = BapdpKsrComplete;
  v21[2] = 0LL;
  v21[3] = 32LL;
  v21[4] = 0LL;
  v22 = 0;
  v24 = BapdpKsrInitiateScenarioPhase0;
  v26 = 16;
  v30 = 0;
  v31 = 16;
  v32 = BapdpKsrpInitiateScenario;
  v33 = 16;
  v34 = 16;
  v35 = 0LL;
  v36 = 16LL;
  v38 = 16;
  v39 = 2;
  v41 = 0;
  v42 = 1;
  v43 = 0LL;
  v44 = 2;
  v46 = BapdpKsrInitiateScenarioPhase0;
  v47 = 2;
  v48 = 16;
  v49 = BapdpKsrpInitiateScenario;
  v50 = 2;
  v51 = 1;
  v53 = 1;
  v54 = 1;
  v55 = 0LL;
  v56 = 1;
  v58 = BapdpKsrInitiateScenarioPhase0;
  v59 = 1;
  v60 = 16;
  v61 = BapdpKsrpInitiateScenario;
  v62 = 1LL;
  v63 = 0LL;
  v64 = 1;
  v65 = 32;
  v66 = 0LL;
  v3 = a1 & 0xC000003B;
  if ( a1 >= 0 && (a1 & 0x40000000) == 0 )
  {
    v4 = 0;
    for ( i = (signed __int32 *)&v20; ; i += 4 )
    {
      if ( v3 == i[1] )
      {
        v6 = *i;
        v7 = _InterlockedCompareExchange(&ExSoftRebootState, a1 & 0x4000003B | 0x80000000, *i);
        if ( v6 == v7 )
          break;
      }
      if ( (unsigned int)++v4 >= 0x13 )
        return 3221266435LL;
    }
    _m_prefetchw(&ExSoftRebootFlags);
    v9 = ExSoftRebootFlags;
    v10 = ExSoftRebootFlags & 0x40000000;
    v11 = (__int64 (__fastcall *)(_QWORD, _QWORD))v21[2 * v4];
    if ( v11 )
      v12 = v11((unsigned int)ExSoftRebootFlags, (unsigned int)a1);
    else
      v12 = 0;
    v13 = ExSoftRebootFlags & 0x3CFFFFC4;
    v14 = a1 & 0xC300003B;
    v15 = v9 & 0xC300003B;
    if ( v12 < 0 )
    {
      ExSoftRebootFlags = v13 | v15;
      _InterlockedExchange(&ExSoftRebootState, v7);
      return (unsigned int)v12;
    }
    v16 = v14 | 0x40000000;
    if ( !v10 )
      v16 = v14;
    v17 = v13 | v16;
    ExSoftRebootFlags = v17;
    if ( v3 == 32 )
    {
      v18 = v17 | 0x40000000;
    }
    else
    {
      if ( v7 != 32 || !v2 )
        goto LABEL_20;
      v18 = v17 & 0xBFFFFFFF;
    }
    ExSoftRebootFlags = v18;
LABEL_20:
    _InterlockedExchange(&ExSoftRebootState, v3);
    v19 = __PAIR64__(v3, v7);
    ZwUpdateWnfStateData((__int64)&WNF_KSR_STATE_TRANSITION, (__int64)&v19);
    return (unsigned int)v12;
  }
  return 3221225485LL;
}
