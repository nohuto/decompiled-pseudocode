/*
 * XREFs of ParseName @ 0x1C000BE54
 * Callers:
 *     ParseNameObj @ 0x1C000BCC4 (ParseNameObj.c)
 *     ParseObjName @ 0x1C0028CA8 (ParseObjName.c)
 *     ParseFieldConnection @ 0x1C006BCC4 (ParseFieldConnection.c)
 * Callees:
 *     ParseNameTail @ 0x1C000D580 (ParseNameTail.c)
 *     RtlStringCchCopyA @ 0x1C0027100 (RtlStringCchCopyA.c)
 *     ConPrintf @ 0x1C00290CC (ConPrintf.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 __fastcall ParseName(__int64 a1, char **a2, char *a3)
{
  char v5; // cl
  unsigned int v6; // edi
  _QWORD *v8; // r10
  _QWORD *v9; // r10
  char v10; // r11
  _BYTE *v11; // rcx
  _BYTE *v12; // rdx
  __int64 v13; // rax

  v5 = **a2;
  if ( v5 == 92 )
  {
    RtlStringCchCopyA(a3, 0x100uLL, "\\");
    ++*v8;
  }
  else if ( v5 == 94 )
  {
    RtlStringCchCopyA(a3, 0x100uLL, "^");
    ++*v9;
    v11 = a3 + 1;
    v12 = (_BYTE *)*v9;
    v13 = 1LL;
    do
    {
      if ( *v12 != v10 )
        break;
      *v11 = v10;
      v13 = (unsigned int)(v13 + 1);
      ++*v9;
      ++v11;
      v12 = (_BYTE *)*v9;
    }
    while ( (unsigned int)v13 < 0xFF );
    a3[v13] = 0;
    if ( *(_BYTE *)*v9 == v10 )
    {
      v6 = -1073741562;
      LogError(3221225734LL);
      AcpiDiagTraceAmlError(a1, 3221225734LL);
      PrintDebugMessage(129, (_DWORD)a3, 0, 0, 0LL);
      return v6;
    }
  }
  else
  {
    *a3 = 0;
  }
  v6 = ParseNameTail(a1);
  if ( !v6 && (gDebugger & 0xD0) != 0 )
    ConPrintf("%s");
  return v6;
}
