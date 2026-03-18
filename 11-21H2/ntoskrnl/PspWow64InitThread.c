/*
 * XREFs of PspWow64InitThread @ 0x1406747FC
 * Callers:
 *     PspAllocateThread @ 0x1407A34A0 (PspAllocateThread.c)
 * Callees:
 *     RtlpGetLegacyContextLength @ 0x14029A240 (RtlpGetLegacyContextLength.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     PspWow64GetSharedInformation @ 0x140672A64 (PspWow64GetSharedInformation.c)
 *     PsWow64GetProcessNtdllType @ 0x140672A7C (PsWow64GetProcessNtdllType.c)
 *     PspWow64InitThreadGuestx86 @ 0x1406749A4 (PspWow64InitThreadGuestx86.c)
 *     RtlpArchContextFlagFromMachine @ 0x140704E08 (RtlpArchContextFlagFromMachine.c)
 *     PspWow64InitThreadGuestArm @ 0x1409B3020 (PspWow64InitThreadGuestArm.c)
 */

__int64 __fastcall PspWow64InitThread(__int64 BugCheckParameter1, __int64 a2, _QWORD *a3, __int64 a4)
{
  unsigned int v7; // ebx
  unsigned __int16 v8; // di
  int v9; // eax
  _DWORD *v10; // r9
  __int64 v11; // r15
  __int64 v12; // r14
  unsigned __int16 ProcessNtdllType; // ax
  __int64 v14; // r12
  __int64 v15; // r13
  _DWORD *v16; // rdx
  __int64 v18; // [rsp+30h] [rbp-98h] BYREF
  int v19; // [rsp+38h] [rbp-90h]
  _DWORD *v20; // [rsp+40h] [rbp-88h]
  __int64 v21; // [rsp+48h] [rbp-80h]
  _OWORD v22[3]; // [rsp+50h] [rbp-78h] BYREF

  v21 = a4;
  memset(v22, 0, sizeof(v22));
  v7 = 0;
  LODWORD(v18) = 0;
  if ( !*(_QWORD *)(BugCheckParameter1 + 1408) || (v8 = *(_WORD *)(BugCheckParameter1 + 2412)) == 0 )
    v8 = -31132;
  v9 = RtlpArchContextFlagFromMachine(v8);
  if ( !v9 )
    return 3221225485LL;
  RtlpGetLegacyContextLength(v9, 0LL, &v18);
  v20 = *(_DWORD **)(a2 + 16);
  v11 = ~((unsigned int)v18 - 1LL) & ((unsigned __int64)v20 + (unsigned int)v18 + 3);
  v18 = *(_QWORD *)(a2 + 40);
  v12 = a3[31];
  if ( v12 == qword_140D07170 )
  {
    ProcessNtdllType = PsWow64GetProcessNtdllType(BugCheckParameter1);
    v12 = *((_QWORD *)PspWow64GetSharedInformation(ProcessNtdllType) + 4);
  }
  v14 = a3[16];
  v15 = a3[17];
  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v22, v10);
  v16 = v20;
  *(_QWORD *)(v21 + 5256) = v20;
  *v16 = v8 << 16;
  if ( v8 == 332 )
  {
    PspWow64InitThreadGuestx86(BugCheckParameter1, v11, v12, v18, v14, v15);
  }
  else if ( v8 == 452 )
  {
    PspWow64InitThreadGuestArm(BugCheckParameter1, v11, v12, v18, v14, v15);
  }
  else
  {
    v7 = -1073741811;
    v19 = -1073741811;
  }
  KiUnstackDetachProcess((__int64)v22, 0LL);
  return v7;
}
