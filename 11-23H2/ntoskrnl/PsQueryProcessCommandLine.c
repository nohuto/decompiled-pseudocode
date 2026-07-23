/*
 * XREFs of PsQueryProcessCommandLine @ 0x140354890
 * Callers:
 *     NtQueryInformationProcess @ 0x1406FCCA0 (NtQueryInformationProcess.c)
 *     SeAuditProcessCreation @ 0x140840FC4 (SeAuditProcessCreation.c)
 *     PnpGetProcessCommandLine @ 0x140964548 (PnpGetProcessCommandLine.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     ExAcquireRundownProtection_0 @ 0x14028B5F0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     MmCopyVirtualMemory @ 0x1406F7AE0 (MmCopyVirtualMemory.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PsQueryProcessCommandLine(
        ULONG_PTR BugCheckParameter1,
        __int64 a2,
        unsigned int a3,
        char a4,
        unsigned int *a5)
{
  __int64 v7; // rax
  __int64 *v8; // rcx
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rbx
  int v14; // esi
  unsigned __int64 v15; // rcx
  unsigned int v16; // eax
  BOOLEAN v18; // [rsp+40h] [rbp-D8h]
  __int128 v19; // [rsp+48h] [rbp-D0h]
  __int64 v20; // [rsp+80h] [rbp-98h] BYREF
  PEX_RUNDOWN_REF RunRef; // [rsp+88h] [rbp-90h]
  __int64 v22; // [rsp+90h] [rbp-88h]
  __int64 v23; // [rsp+98h] [rbp-80h]
  $115DCDF994C6370D29323EAB0E0C9502 v24; // [rsp+A0h] [rbp-78h] BYREF

  memset(&v24, 0, sizeof(v24));
  v20 = 0LL;
  RunRef = (PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112);
  v18 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112));
  if ( v18 )
  {
    v19 = 0LL;
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v24);
    v7 = 0LL;
    v8 = *(__int64 **)(BugCheckParameter1 + 1408);
    if ( v8 )
      v7 = *v8;
    if ( v7 )
    {
      v22 = *(unsigned int *)(v7 + 16);
      v13 = *(_QWORD *)(v22 + 64);
      LODWORD(v19) = v13;
      v12 = v13 >> 16;
      v11 = HIDWORD(v13);
      *((_QWORD *)&v19 + 1) = HIDWORD(v13);
      v14 = 0;
    }
    else
    {
      v9 = *(_QWORD *)(BugCheckParameter1 + 1360);
      v23 = v9;
      if ( v9 )
      {
        v10 = *(_QWORD *)(v9 + 32) + 112LL;
        if ( v10 >= 0x7FFFFFFF0000LL )
          v10 = 0x7FFFFFFF0000LL;
        LODWORD(v19) = *(_DWORD *)v10;
        v11 = *(_QWORD *)(v10 + 8);
        DWORD2(v19) = v11;
        LOWORD(v12) = HIWORD(*(_DWORD *)v10);
        LOWORD(v13) = *(_DWORD *)v10;
        v14 = 0;
      }
      else
      {
        v14 = -1073741275;
        v11 = 0LL;
        LOWORD(v12) = 0;
        LOWORD(v13) = 0;
      }
    }
    if ( WORD1(v19) )
    {
      if ( (BYTE8(v19) & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v15 = v11 + (unsigned __int16)v12;
      if ( v15 > 0x7FFFFFFF0000LL || v15 < v11 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    KiUnstackDetachProcess(&v24);
    if ( v14 >= 0 )
    {
      if ( !(_WORD)v13
        || (unsigned __int16)v13 > (unsigned __int16)v12
        || (v19 & 1) != 0
        || (BYTE2(v19) & 1) != 0
        || !v11 )
      {
        v14 = -1073741275;
      }
      else
      {
        v16 = (unsigned __int16)v12 + 16;
        if ( a5 )
          *a5 = v16;
        if ( a3 < v16 )
        {
          v14 = -1073741820;
        }
        else
        {
          *(_WORD *)a2 = v13;
          *(_WORD *)(a2 + 2) = v12;
          if ( (_WORD)v12 )
            *(_QWORD *)(a2 + 8) = a2 + 16;
          else
            *(_QWORD *)(a2 + 8) = 0LL;
          v14 = MmCopyVirtualMemory(
                  BugCheckParameter1,
                  DWORD2(v19),
                  KeGetCurrentThread()->ApcState.Process,
                  (int)a2 + 16,
                  WORD1(v19),
                  a4,
                  (__int64)&v20);
          if ( v14 >= 0 )
            v14 = 0;
        }
      }
    }
  }
  else
  {
    v14 = -1073741558;
  }
  if ( v18 )
    ExReleaseRundownProtection_0(RunRef);
  return (unsigned int)v14;
}
