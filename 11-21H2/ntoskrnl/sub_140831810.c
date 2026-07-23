/*
 * XREFs of sub_140831810 @ 0x140831810
 * Callers:
 *     sub_140261354 @ 0x140261354 (sub_140261354.c)
 *     sub_140831BF4 @ 0x140831BF4 (sub_140831BF4.c)
 *     sub_14085DACC @ 0x14085DACC (sub_14085DACC.c)
 *     sub_1409B2390 @ 0x1409B2390 (sub_1409B2390.c)
 *     sub_1409B3358 @ 0x1409B3358 (sub_1409B3358.c)
 *     sub_1409D91B0 @ 0x1409D91B0 (sub_1409D91B0.c)
 *     sub_140B0838C @ 0x140B0838C (sub_140B0838C.c)
 *     sub_140B1E0A8 @ 0x140B1E0A8 (sub_140B1E0A8.c)
 * Callees:
 *     KeStackAttachProcess @ 0x140203630 (KeStackAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x1402037B0 (KeUnstackDetachProcess.c)
 *     sub_1402581D0 @ 0x1402581D0 (sub_1402581D0.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14066D0AC @ 0x14066D0AC (sub_14066D0AC.c)
 *     sub_14066EFCC @ 0x14066EFCC (sub_14066EFCC.c)
 *     sub_14066F440 @ 0x14066F440 (sub_14066F440.c)
 *     sub_140683990 @ 0x140683990 (sub_140683990.c)
 *     PsAssignProcessToJobObject @ 0x140688050 (PsAssignProcessToJobObject.c)
 *     sub_1406DFF40 @ 0x1406DFF40 (sub_1406DFF40.c)
 *     sub_140701A98 @ 0x140701A98 (sub_140701A98.c)
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 *     PsReferencePrimaryToken @ 0x1407AFED0 (PsReferencePrimaryToken.c)
 *     sub_1407D80A4 @ 0x1407D80A4 (sub_1407D80A4.c)
 *     sub_140831AEC @ 0x140831AEC (sub_140831AEC.c)
 *     sub_140831B58 @ 0x140831B58 (sub_140831B58.c)
 *     sub_140882484 @ 0x140882484 (sub_140882484.c)
 */

__int64 __fastcall sub_140831810(
        PEPROCESS Process,
        __int64 a2,
        __int64 a3,
        char a4,
        void *a5,
        int a6,
        char a7,
        __int64 a8,
        PVOID Object,
        _QWORD *a10)
{
  PVOID v10; // r14
  PACCESS_TOKEN v12; // r13
  unsigned int v14; // ebx
  int v15; // r15d
  signed int v16; // esi
  char *v17; // rdi
  char v18; // al
  PRKPROCESS PROCESS; // [rsp+80h] [rbp-80h] BYREF
  PVOID v21; // [rsp+88h] [rbp-78h] BYREF
  void *v22; // [rsp+90h] [rbp-70h] BYREF
  __int64 v23; // [rsp+98h] [rbp-68h] BYREF
  __int64 v24; // [rsp+A0h] [rbp-60h]
  __int64 v25; // [rsp+A8h] [rbp-58h]
  _QWORD *v26; // [rsp+B0h] [rbp-50h]
  _BYTE v27[400]; // [rsp+C0h] [rbp-40h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+250h] [rbp+150h] BYREF

  v10 = Object;
  v12 = a5;
  v25 = a3;
  v24 = a2;
  v21 = Object;
  v26 = a10;
  v23 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  memset(v27, 0, sizeof(v27));
  v22 = 0LL;
  v14 = 0;
  PROCESS = 0LL;
  if ( a5 )
    v14 = 1;
  else
    v12 = PsReferencePrimaryToken(Process);
  v15 = a6 | 0x800;
  v16 = sub_14066F440((__int64)Process, a6 | 0x800u, (__int64)&v21, Object != 0LL, &v22);
  if ( v16 >= 0 )
  {
    v16 = sub_14070BD10((__int64)Process, 0, 0LL, a4, 0, 0, 0LL, v12, v15, a7, 0LL, v14, v22, (__int64)&v23, &PROCESS);
    if ( v16 < 0 )
    {
      PROCESS = 0LL;
    }
    else
    {
      if ( a8 )
        *((_QWORD *)PROCESS + 280) = a8;
      v17 = (char *)PROCESS;
      if ( (*((_DWORD *)PROCESS + 543) & 1) != 0 && !*((_QWORD *)PROCESS + 280) && (unsigned int)sub_1402581D0() )
      {
        v17[912] = 1;
        if ( !_interlockedbittestandset((volatile signed __int32 *)PROCESS + 543, 0xEu) )
        {
          KeStackAttachProcess(PROCESS, &ApcState);
          sub_1406DFF40(PROCESS);
          KeUnstackDetachProcess(&ApcState);
        }
        v10 = v21;
        v17 = (char *)PROCESS;
      }
      if ( v24 )
      {
        sub_140831B58(v17, v24);
        v17 = (char *)PROCESS;
      }
      v18 = 1;
      if ( (_DWORD)v23 )
        v18 = 3;
      v16 = sub_14066D0AC(v17, (__int64)Process, 0x2000000, v15, 0LL, v18, v25, (PACCESS_STATE)v27);
      if ( v16 < 0 )
      {
        sub_140683990((ULONG_PTR)PROCESS, 0);
      }
      else
      {
        v14 |= 4u;
        if ( !v10 || (v16 = PsAssignProcessToJobObject(v10, (__int64)PROCESS, 0LL), v16 >= 0) )
        {
          sub_140831AEC(PROCESS);
          v14 |= 2u;
          *(_DWORD *)&v27[384] |= 0x200u;
          v16 = sub_140701A98(PROCESS, (__int64)v27, (struct _OBJECT_TYPE *)PsProcessType);
          if ( v16 >= 0 )
          {
            v14 &= ~4u;
            *v26 = *(_QWORD *)&v27[392];
          }
        }
      }
    }
  }
  if ( (v14 & 2) != 0 )
    sub_140882484(v27);
  if ( PROCESS )
  {
    if ( v14 >= 4 )
      sub_1407D80A4((__int64)PROCESS, v16);
    ObfDereferenceObjectWithTag(PROCESS, 0x72437350u);
  }
  if ( v22 )
    sub_14066EFCC(v22);
  if ( (v14 & 1) == 0 )
    ObfDereferenceObject(v12);
  return (unsigned int)v16;
}
