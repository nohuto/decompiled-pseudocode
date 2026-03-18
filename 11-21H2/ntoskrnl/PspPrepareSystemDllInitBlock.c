/*
 * XREFs of PspPrepareSystemDllInitBlock @ 0x1406727EC
 * Callers:
 *     PspSetupUserProcessAddressSpace @ 0x14067259C (PspSetupUserProcessAddressSpace.c)
 *     PspAllocateProcess @ 0x14070BD10 (PspAllocateProcess.c)
 * Callees:
 *     ExGenRandom @ 0x140363220 (ExGenRandom.c)
 *     MmGetCfgBitMapInformation @ 0x140672A1C (MmGetCfgBitMapInformation.c)
 *     PspWow64GetSharedInformation @ 0x140672A64 (PspWow64GetSharedInformation.c)
 *     PsWow64GetProcessNtdllType @ 0x140672A7C (PsWow64GetProcessNtdllType.c)
 */

__int64 __fastcall PspPrepareSystemDllInitBlock(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 CfgBitMapInformation; // r15
  __int64 v5; // r12
  _KPROCESS *Process; // r9
  unsigned int ProcessNtdllType; // edx
  __int64 v8; // r8
  int v9; // edx
  unsigned __int8 i; // dl
  int v12; // ecx
  __int64 SharedInformation; // rax
  __int16 v14; // ax
  __int128 v16; // [rsp+28h] [rbp-60h]
  __int64 v17; // [rsp+38h] [rbp-50h]
  __int128 v18; // [rsp+40h] [rbp-48h]
  __int64 v19; // [rsp+50h] [rbp-38h]
  __int64 v20; // [rsp+98h] [rbp+10h] BYREF
  __int64 v21; // [rsp+A0h] [rbp+18h] BYREF

  v3 = 0LL;
  CfgBitMapInformation = 0LL;
  v20 = 0LL;
  v5 = 0LL;
  v21 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (_DWORD)a1 )
  {
    v12 = a1 - 1;
    if ( v12 )
    {
      if ( v12 != 1 )
        goto LABEL_3;
      SharedInformation = PspWow64GetSharedInformation(2LL);
    }
    else
    {
      SharedInformation = PspWow64GetSharedInformation(1LL);
    }
    v3 = *(_QWORD *)(SharedInformation + 56);
    CfgBitMapInformation = MmGetCfgBitMapInformation(1LL, &v20);
    goto LABEL_3;
  }
  v3 = PsNtdllExports;
  CfgBitMapInformation = MmGetCfgBitMapInformation(a1, &v20);
  if ( Process[1].Affinity.StaticBitmap[30] )
  {
    v14 = WORD2(Process[2].Affinity.StaticBitmap[20]);
    if ( v14 == 332 || v14 == 452 )
      v5 = MmGetCfgBitMapInformation(1LL, &v21);
  }
LABEL_3:
  if ( a2 )
  {
    v16 = *(_OWORD *)(a2 + 336);
    v17 = *(_QWORD *)(a2 + 352);
    v18 = *(_OWORD *)(a2 + 464);
    v19 = *(_QWORD *)(a2 + 480);
  }
  else
  {
    v16 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    v19 = 0LL;
  }
  if ( *(_DWORD *)v3 != 240 )
    return 3221225561LL;
  *(_QWORD *)(v3 + 16) = PspSystemDlls[0][7];
  ProcessNtdllType = PsWow64GetProcessNtdllType(Process);
  if ( !ProcessNtdllType )
    ProcessNtdllType = 1;
  v8 = PspWow64GetSharedInformation(ProcessNtdllType);
  *(_QWORD *)(v3 + 8) = PspSystemDlls[v9][7];
  for ( i = 0; i < 0x10u; ++i )
    *(_QWORD *)(v3 + 8LL * i + 24) = *(_QWORD *)(v8 + 8LL * i);
  *(_DWORD *)(v3 + 152) = ExGenRandom(1);
  *(_DWORD *)(v3 + 156) = 0;
  if ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 9) & 2) != 0 )
      *(_DWORD *)(v3 + 156) |= 1u;
  }
  *(_OWORD *)(v3 + 160) = v16;
  *(_QWORD *)(v3 + 176) = v17;
  *(_OWORD *)(v3 + 216) = v18;
  *(_QWORD *)(v3 + 232) = v19;
  *(_QWORD *)(v3 + 184) = CfgBitMapInformation;
  *(_QWORD *)(v3 + 192) = v20;
  *(_QWORD *)(v3 + 200) = v5;
  *(_QWORD *)(v3 + 208) = v21;
  return 0LL;
}
