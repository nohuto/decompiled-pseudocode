/*
 * XREFs of MmCreateSpecialImageSection @ 0x1406B9694
 * Callers:
 *     NtCreateUserProcess @ 0x1406B8310 (NtCreateUserProcess.c)
 *     PspLocateSystemDll @ 0x14084D694 (PspLocateSystemDll.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402468E0 (KeDelayExecutionThread.c)
 *     MiSectionControlArea @ 0x14029FB10 (MiSectionControlArea.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     CcZeroEndOfLastPage @ 0x1402A2578 (CcZeroEndOfLastPage.c)
 *     MiReferenceControlAreaFile @ 0x1402A2664 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x1402A2770 (MiDereferenceControlAreaFile.c)
 *     MiCreateSection @ 0x140722D00 (MiCreateSection.c)
 *     ObInsertObjectEx @ 0x140735BC0 (ObInsertObjectEx.c)
 */

__int64 __fastcall MmCreateSpecialImageSection(__int64 *a1, int a2, __int64 a3, char a4, __int64 a5, char a6)
{
  int v6; // r11d
  _KPROCESS *Process; // rcx
  int v12; // edi
  int v13; // ebx
  int SessionId; // r12d
  __int64 result; // rax
  unsigned __int64 v16; // rdi
  struct _FILE_OBJECT *v17; // rbx
  PVOID Object; // [rsp+70h] [rbp-38h] BYREF
  __int64 v19; // [rsp+78h] [rbp-30h] BYREF

  v6 = a6 & 1;
  v19 = 0LL;
  Object = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v12 = v6 | 8;
  v13 = v6 != 0 ? 0x1000000 : 37748736;
  if ( (a6 & 4) == 0 )
    v12 = a6 & 1;
  SessionId = MmGetSessionIdEx((__int64)Process);
  for ( result = MiCreateSection((unsigned int)&Object, a2, 0, 16, v13, v12, a3, a4, a5, 0LL, 0, SessionId, 0LL);
        (int)result < 0;
        result = MiCreateSection((unsigned int)&Object, a2, 0, 16, v13, v12, a3, a4, a5, 0LL, 0, SessionId, 0LL) )
  {
    if ( (_DWORD)result != -1073741740 )
      return result;
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiHalfSecond);
  }
  v16 = MiSectionControlArea((__int64)Object);
  v17 = (struct _FILE_OBJECT *)MiReferenceControlAreaFile(v16);
  CcZeroEndOfLastPage(v17);
  MiDereferenceControlAreaFile(v16, (__int64)v17);
  result = ObInsertObjectEx(Object, 0LL, 0, 0LL, (__int64)&v19);
  if ( (int)result >= 0 )
    *a1 = v19;
  return result;
}
