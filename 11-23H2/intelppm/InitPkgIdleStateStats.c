/*
 * XREFs of InitPkgIdleStateStats @ 0x1C00344A0
 * Callers:
 *     <none>
 * Callees:
 *     ReadMSRValue @ 0x1C00012F8 (ReadMSRValue.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C00270EC (GetRegistryDwordValueNoDefault.c)
 *     QueryPPMForRegisterList @ 0x1C002DCF0 (QueryPPMForRegisterList.c)
 *     QueryPEPForRegisterList @ 0x1C00346CC (QueryPEPForRegisterList.c)
 */

__int64 __fastcall InitPkgIdleStateStats(__int64 a1, char a2)
{
  _DWORD *v4; // rdi
  int v5; // ebx
  __int64 Pool2; // rax
  _QWORD *v7; // rsi
  __int64 v8; // rdx
  int v9; // eax
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  unsigned int v13; // r11d
  __int64 v14; // r10
  __int64 v15; // rax
  unsigned __int64 MSRValue; // rax
  int v17; // r11d
  __int64 v18; // r10
  __int64 v19; // rax
  int RegistryDwordValueNoDefault; // eax
  unsigned int v21; // ecx
  _QWORD *v22; // rax
  _QWORD v23[7]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v24; // [rsp+70h] [rbp+18h] BYREF
  _DWORD *v25; // [rsp+78h] [rbp+20h] BYREF

  v24 = 0;
  v23[0] = 0LL;
  v4 = 0LL;
  v25 = 0LL;
  v5 = 0;
  if ( (qword_1C001F928 & 0x100000000LL) != 0 )
    return (unsigned int)v5;
  Pool2 = ExAllocatePool2(64LL, 56LL, 1919119952LL);
  v7 = (_QWORD *)Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  *(_DWORD *)(Pool2 + 24) = 1;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01015 + 2520))(
         WdfDriverGlobals,
         0LL,
         Pool2 + 16);
  if ( v5 >= 0 )
  {
    v9 = a2 ? QueryPEPForRegisterList(a1, v8, &v25) : QueryPPMForRegisterList((__int64 *)&v25);
    v4 = v25;
    v5 = v9;
    if ( v9 >= 0 )
    {
      v10 = (_QWORD *)ExAllocatePool2(64LL, (unsigned int)(40 * v25[2] + 32), 1919119952LL);
      v7[6] = v10;
      v11 = v10;
      if ( v10 )
      {
        *v10 = KeQueryInterruptTimePrecise(v23);
        v13 = 0;
        for ( *((_DWORD *)v11 + 6) = v4[2]; v13 < v4[2]; v11[v18 + 8] = MSRValue )
        {
          v14 = 5LL * v13;
          v15 = 8LL * v13;
          *(_OWORD *)&v11[v14 + 4] = *(_OWORD *)&v4[v15 + 4];
          *(_OWORD *)&v11[v14 + 6] = *(_OWORD *)&v4[v15 + 8];
          MSRValue = ReadMSRValue(0LL, v11[5 * v13 + 5], v11[5 * v13 + 6], HIDWORD(v11[5 * v13 + 6]));
          v13 = v17 + 1;
        }
        v19 = *(_QWORD *)v4;
        if ( !*(_QWORD *)v4 )
        {
          RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                          (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
                                          (__int64)L"~MHz",
                                          (__int64)&v24);
          v21 = v24;
          if ( RegistryDwordValueNoDefault < 0 )
            v21 = 0;
          v19 = 1000000LL * v21;
          v24 = v21;
        }
        v11[2] = v19;
        v7[4] = RefreshPkgIdleStateMSRValues;
        v7[5] = QueryPkgIdleStateMSRValues;
        v22 = (_QWORD *)qword_1C001F938;
        if ( *(__int64 **)qword_1C001F938 != &qword_1C001F930 )
          __fastfail(3u);
        *v7 = &qword_1C001F930;
        v5 = 0;
        v7[1] = v22;
        *v22 = v7;
        HIDWORD(qword_1C001F928) |= 1u;
        qword_1C001F938 = (__int64)v7;
        goto LABEL_12;
      }
      v5 = -1073741670;
    }
  }
  ExFreePoolWithTag(v7, (ULONG)1919119952);
LABEL_12:
  if ( v4 )
    ExFreePoolWithTag(v4, (ULONG)1919119952);
  return (unsigned int)v5;
}
