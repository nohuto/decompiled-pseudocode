/*
 * XREFs of ?ActivateAPOs@CPipeInstance@@AEAAJ_K@Z @ 0x140018F70
 * Callers:
 *     ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x140018B80 (-AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@M@Z @ 0x140014BD0 (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@M@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400265D0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x14005A208 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CPipeInstance::ActivateAPOs(CPipeInstance *this, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 *v7; // rcx
  __int64 v8; // rax
  int v9; // r12d
  unsigned int v10; // edx
  int v12; // eax
  __int64 v13; // r14
  __int64 v14; // rdx
  unsigned int v15; // edx
  int v16; // eax
  int v17; // [rsp+20h] [rbp-C8h]
  int v18; // [rsp+20h] [rbp-C8h]
  char *v19; // [rsp+28h] [rbp-C0h]
  int v20; // [rsp+30h] [rbp-B8h]
  int v21; // [rsp+38h] [rbp-B0h]
  int v22; // [rsp+40h] [rbp-A8h]
  int v23; // [rsp+48h] [rbp-A0h]
  int v24; // [rsp+50h] [rbp-98h]
  int v25; // [rsp+58h] [rbp-90h]
  int v26; // [rsp+60h] [rbp-88h]
  int v27; // [rsp+68h] [rbp-80h]
  int v28; // [rsp+70h] [rbp-78h]
  int v29; // [rsp+78h] [rbp-70h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]
  __int64 v31; // [rsp+F0h] [rbp+8h]
  __int64 v32; // [rsp+100h] [rbp+18h] BYREF

  v4 = *((_QWORD *)this + 3);
  if ( !v4 )
    return 0LL;
  while ( 1 )
  {
    v5 = *(_QWORD *)(v4 + 16);
    v4 = *(_QWORD *)(v4 + 8);
    if ( *(_DWORD *)(v5 + 40) == 2 )
      break;
LABEL_10:
    if ( !v4 )
      return 0LL;
  }
  v31 = *(_QWORD *)(v5 + 32);
  v6 = *(_QWORD *)(v31 + 40);
  v32 = v6;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  v7 = (__int64 *)*((_QWORD *)this + 19);
  v8 = *v7;
  if ( *((_DWORD *)this + 3) == 1 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, _QWORD, int))(v8 + 56))(v7, a2, v6, 0LL, 1);
    if ( v9 < 0 )
    {
      v13 = v31;
      v29 = *(unsigned __int8 *)(v31 + 23);
      v28 = *(unsigned __int8 *)(v31 + 22);
      v14 = 3059LL;
      goto LABEL_17;
    }
    goto LABEL_7;
  }
  v9 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, _QWORD, _DWORD))(v8 + 56))(v7, a2, v6, 0LL, 0);
  if ( v9 >= 0 )
  {
LABEL_7:
    v10 = *(_DWORD *)(v31 + 4);
    if ( v10 )
    {
      v12 = TrackSystemEffectBehavior(*((_QWORD *)this + 24), v10, 1, 0, v31 + 8, SLODWORD(FLOAT_1_0));
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xBFF,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
          (const char *)(unsigned int)v12,
          v17);
    }
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    goto LABEL_10;
  }
  v13 = v31;
  v29 = *(unsigned __int8 *)(v31 + 23);
  v28 = *(unsigned __int8 *)(v31 + 22);
  v14 = 3064LL;
LABEL_17:
  v27 = *(unsigned __int8 *)(v13 + 21);
  v26 = *(unsigned __int8 *)(v13 + 20);
  v25 = *(unsigned __int8 *)(v13 + 19);
  v24 = *(unsigned __int8 *)(v13 + 18);
  v23 = *(unsigned __int8 *)(v13 + 17);
  v22 = *(unsigned __int8 *)(v13 + 16);
  v21 = *(unsigned __int16 *)(v13 + 14);
  v20 = *(unsigned __int16 *)(v13 + 12);
  LODWORD(v19) = *(_DWORD *)(v13 + 8);
  wil::details::in1diag3::Return_HrMsg(
    retaddr,
    (void *)v14,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
    (const char *)(unsigned int)v9,
    (int)"Activate failed for {%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
    v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v32);
  v15 = *(_DWORD *)(v31 + 4);
  if ( v15 )
  {
    v16 = TrackSystemEffectBehavior(*((_QWORD *)this + 24), v15, 0, 0, v31 + 8, SLODWORD(FLOAT_1_0));
    if ( v16 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xBE9,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
        (const char *)(unsigned int)v16,
        v18);
  }
  return (unsigned int)v9;
}
