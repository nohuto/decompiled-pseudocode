/*
 * XREFs of AMLIGetNameSpaceObjectNoLock @ 0x1C001817C
 * Callers:
 *     AMLIGetNameSpaceObject @ 0x1C0018260 (AMLIGetNameSpaceObject.c)
 * Callees:
 *     GetNameSpaceObjectNoLock @ 0x1C0015310 (GetNameSpaceObjectNoLock.c)
 *     DereferenceObjectEx @ 0x1C00189F4 (DereferenceObjectEx.c)
 *     ConPrintf @ 0x1C00290CC (ConPrintf.c)
 *     AMLIDebugger @ 0x1C0067034 (AMLIDebugger.c)
 */

__int64 __fastcall AMLIGetNameSpaceObjectNoLock(const char *Src, __int64 *a2, _QWORD *a3, int a4)
{
  __int64 v8; // rdx
  int NameSpaceObjectNoLock; // ebx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // [rsp+30h] [rbp+8h] BYREF

  v16 = 0LL;
  dword_1C0081AC8 = 0;
  byte_1C0081ACC = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger(v14, v13, v15);
  }
  if ( Src && *Src )
  {
    if ( a2 )
    {
      v8 = *a2;
      if ( (*(_BYTE *)(*a2 + 64) & 4) != 0 )
        return (unsigned int)-1073741738;
    }
    else
    {
      v8 = 0LL;
    }
    NameSpaceObjectNoLock = GetNameSpaceObjectNoLock(Src, v8, &v16, a4);
    if ( NameSpaceObjectNoLock >= 0 )
    {
      v11 = v16;
      if ( v16 )
      {
        dword_1C0081AC8 = 0;
        v12 = v16 + 120;
        byte_1C0081ACC = 0;
        if ( (gdwfAMLI & 4) != 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v16 + 128));
          v11 = v16;
        }
        *a3 = v12;
        DereferenceObjectEx(v11);
      }
    }
    if ( NameSpaceObjectNoLock == 32772 )
      return 259;
    return (unsigned int)NameSpaceObjectNoLock;
  }
  return 3221225486LL;
}
