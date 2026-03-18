/*
 * XREFs of KiOrAffinityEx @ 0x1402C2AB0
 * Callers:
 *     PpmParkSteerInterrupts @ 0x140256A20 (PpmParkSteerInterrupts.c)
 *     KiComputeCpuSetAffinity @ 0x1402C0444 (KiComputeCpuSetAffinity.c)
 *     KiUpdateTime @ 0x1402C36A0 (KiUpdateTime.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140305FB0 (KeQueryLogicalProcessorRelationship.c)
 *     KiTryPopulateLogicalProcessorInformation @ 0x140308C60 (KiTryPopulateLogicalProcessorInformation.c)
 *     PpmPerfApplyProcessorStates @ 0x14034EE10 (PpmPerfApplyProcessorStates.c)
 *     KiForwardTick @ 0x1403CB6E0 (KiForwardTick.c)
 *     EmonAddProfileSource @ 0x14051C8F0 (EmonAddProfileSource.c)
 *     Amd64AddProfileSource @ 0x140528820 (Amd64AddProfileSource.c)
 *     KeOrAffinityEx @ 0x14056F430 (KeOrAffinityEx.c)
 *     KeOrAffinityEx2 @ 0x14056F450 (KeOrAffinityEx2.c)
 *     KeCpuPartitionMoveCpus @ 0x140574DC4 (KeCpuPartitionMoveCpus.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x14057CFC4 (KiForceIdleUpdateSchedulerParkState.c)
 *     PpmUpdateProcessorPolicy @ 0x14082C7B0 (PpmUpdateProcessorPolicy.c)
 *     PpmCheckInitProcessors @ 0x14082E2C4 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x14082E54C (PpmRegisterPerfStates.c)
 *     PsInitializeBootCpuPartitions @ 0x140B71D74 (PsInitializeBootCpuPartitions.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     memset @ 0x140435A00 (memset.c)
 */

__int64 __fastcall KiOrAffinityEx(char *a1, _WORD *a2, _BYTE *a3, unsigned __int16 a4)
{
  unsigned __int16 v8; // r10
  unsigned __int16 v9; // cx
  char *v10; // r9
  unsigned int v11; // ebp
  unsigned __int16 v12; // r8
  signed __int64 v13; // rsi
  __int64 v14; // r11
  _QWORD *v15; // rdx
  bool v16; // zf
  __int64 v17; // r9
  __int64 v18; // rax
  unsigned __int16 v19; // cx
  __int64 v20; // rdx
  _QWORD *v21; // rax
  __int64 v22; // rcx
  __int64 v24; // rcx
  _BYTE v25[272]; // [rsp+20h] [rbp-138h] BYREF

  memset(v25, 0, 0x108uLL);
  if ( !a3 )
  {
    a3 = v25;
    a4 = 32;
  }
  v8 = *a2;
  if ( *(_WORD *)a1 < *a2 )
  {
    v10 = (char *)a2;
    v9 = *(_WORD *)a1;
  }
  else
  {
    v9 = *a2;
    v10 = a1;
    v8 = *(_WORD *)a1;
  }
  *((_WORD *)a3 + 1) = a4;
  *(_WORD *)a3 = v8;
  v11 = 0;
  if ( v8 > a4 )
    *(_WORD *)a3 = a4;
  if ( v9 > a4 )
    v9 = a4;
  if ( v8 > a4 )
    v8 = a4;
  v12 = 0;
  if ( v9 )
  {
    v13 = a1 - (char *)a2;
    v14 = v9;
    v15 = a2 + 4;
    v12 = v9;
    do
    {
      v16 = (*v15 | *(_QWORD *)((char *)v15 + v13)) == 0LL;
      *(_QWORD *)((char *)v15 + a3 - (_BYTE *)a2) = *v15 | *(_QWORD *)((char *)v15 + v13);
      if ( !v16 )
        v11 = 1;
      ++v15;
      --v14;
    }
    while ( v14 );
  }
  if ( v12 < v8 )
  {
    v17 = v10 - a3;
    v18 = v12 + 1LL;
    v19 = v8 - v12;
    v12 = v8;
    v20 = v19;
    v21 = &a3[8 * v18];
    do
    {
      v22 = *(_QWORD *)((char *)v21 + v17);
      *v21 = v22;
      if ( v22 )
        v11 = 1;
      ++v21;
      --v20;
    }
    while ( v20 );
  }
  if ( a3 != v25 )
  {
    for ( *((_DWORD *)a3 + 1) = 0; v12 < *((_WORD *)a3 + 1); *(_QWORD *)&a3[8 * v24 + 8] = 0LL )
      v24 = v12++;
  }
  return v11;
}
