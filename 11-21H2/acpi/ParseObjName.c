/*
 * XREFs of ParseObjName @ 0x1C0028CA8
 * Callers:
 *     ParseArg @ 0x1C000B10C (ParseArg.c)
 *     ParsePackage @ 0x1C0012D00 (ParsePackage.c)
 * Callees:
 *     ParseName @ 0x1C000BE54 (ParseName.c)
 *     HeapAlloc @ 0x1C0014FF0 (HeapAlloc.c)
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 __fastcall ParseObjName(__int64 a1, char **a2, __int64 a3, char a4)
{
  __int64 v7; // rax
  unsigned int v8; // ebx
  __int64 v9; // rax
  _SLIST_ENTRY *v10; // rax
  char *v12; // r8
  char *v13; // rdx
  int v14; // ecx
  char Src[256]; // [rsp+30h] [rbp-128h] BYREF

  v7 = (__int64)*(&OpcodeTable + (unsigned __int8)**a2);
  if ( !v7 || (*(_DWORD *)(v7 + 28) & 0x20) == 0 )
  {
    v8 = -1072431103;
    if ( a4 )
      return v8;
    LogError(3222536193LL);
    AcpiDiagTraceAmlError(a1, 3222536193LL);
    v12 = *a2;
    v14 = 132;
    LODWORD(v13) = (unsigned __int8)**a2;
    goto LABEL_12;
  }
  v8 = ParseName(a1, a2, Src);
  if ( !v8 )
  {
    *(_WORD *)(a3 + 2) = 2;
    v9 = -1LL;
    do
      ++v9;
    while ( Src[v9] );
    *(_DWORD *)(a3 + 24) = v9 + 1;
    v10 = HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1381258056, (int)v9 + 1);
    *(_QWORD *)(a3 + 32) = v10;
    if ( v10 )
    {
      memmove(v10, Src, *(unsigned int *)(a3 + 24));
      return v8;
    }
    v8 = -1073741670;
    LogError(3221225626LL);
    AcpiDiagTraceAmlError(a1, 3221225626LL);
    LODWORD(v12) = 0;
    v13 = Src;
    v14 = 131;
LABEL_12:
    PrintDebugMessage(v14, (_DWORD)v13, (_DWORD)v12, 0, 0LL);
  }
  return v8;
}
