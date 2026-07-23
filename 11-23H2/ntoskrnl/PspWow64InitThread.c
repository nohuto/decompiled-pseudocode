/*
 * XREFs of PspWow64InitThread @ 0x14079F5B4
 * Callers:
 *     PspAllocateThread @ 0x140740BC0 (PspAllocateThread.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     RtlpGetLegacyContextLength @ 0x14030DD60 (RtlpGetLegacyContextLength.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     PspWow64InitThreadGuestx86 @ 0x14079F4B8 (PspWow64InitThreadGuestx86.c)
 *     RtlpArchContextFlagFromMachine @ 0x1407A0E60 (RtlpArchContextFlagFromMachine.c)
 *     PsWow64GetProcessNtdllType @ 0x1407A1930 (PsWow64GetProcessNtdllType.c)
 *     PspWow64InitThreadGuestArm @ 0x1409B63D4 (PspWow64InitThreadGuestArm.c)
 */

__int64 __fastcall PspWow64InitThread(__int64 BugCheckParameter1, __int64 a2, _QWORD *a3, __int64 a4)
{
  unsigned int v7; // ebx
  unsigned __int16 v8; // di
  int v9; // eax
  _DWORD *v10; // r13
  __int64 v11; // r14
  bool v12; // zf
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // r12
  _DWORD *v16; // rdx
  __int64 v18; // [rsp+30h] [rbp-98h] BYREF
  int v19; // [rsp+38h] [rbp-90h]
  _DWORD *v20; // [rsp+40h] [rbp-88h]
  __int64 v21; // [rsp+48h] [rbp-80h]
  $115DCDF994C6370D29323EAB0E0C9502 v22; // [rsp+50h] [rbp-78h] BYREF

  v21 = a4;
  memset(&v22, 0, sizeof(v22));
  v7 = 0;
  LODWORD(v18) = 0;
  if ( !*(_QWORD *)(BugCheckParameter1 + 1408) || (v8 = *(_WORD *)(BugCheckParameter1 + 2412)) == 0 )
    v8 = -31132;
  v9 = RtlpArchContextFlagFromMachine(v8);
  if ( !v9 )
    return 3221225485LL;
  RtlpGetLegacyContextLength(v9, 0LL, &v18);
  v20 = *(_DWORD **)(a2 + 16);
  v10 = (_DWORD *)(~((unsigned int)v18 - 1LL) & ((unsigned __int64)v20 + (unsigned int)v18 + 3));
  v18 = *(_QWORD *)(a2 + 40);
  v11 = a3[31];
  if ( v11 == qword_140D1F330 )
  {
    v12 = (unsigned __int16)PsWow64GetProcessNtdllType(BugCheckParameter1) == 1;
    v13 = 32LL;
    if ( v12 )
      v13 = (__int64)&unk_140D557A0;
    v11 = *(_QWORD *)v13;
  }
  v14 = a3[16];
  v15 = a3[17];
  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v22);
  v16 = v20;
  *(_QWORD *)(v21 + 5256) = v20;
  *v16 = v8 << 16;
  if ( v8 == 332 )
  {
    PspWow64InitThreadGuestx86(BugCheckParameter1, v10, v11, v18, v14, v15);
  }
  else if ( v8 == 452 )
  {
    PspWow64InitThreadGuestArm(BugCheckParameter1, v10, v11, v18, v14, v15);
  }
  else
  {
    v7 = -1073741811;
    v19 = -1073741811;
  }
  KiUnstackDetachProcess(&v22);
  return v7;
}
