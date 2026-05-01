/*
 * XREFs of SdbpGetSystemSdbFilePath @ 0x1800930DC
 * Callers:
 *     SdbOpenApphelpResourceFile @ 0x1800918B0 (SdbOpenApphelpResourceFile.c)
 *     SdbGetPathCustomSdb @ 0x1800922F8 (SdbGetPathCustomSdb.c)
 *     SdbGetPathSystemSdb @ 0x1800923C8 (SdbGetPathSystemSdb.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180053740 (_guard_xfg_dispatch_icall_nop.c)
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetSystemSdbFilePath(_WORD *a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rax
  _DWORD *v8; // rdx
  char *v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // r8
  int v12; // eax

  *a1 = 0;
  if ( a3 && a3 < 10 )
  {
    v7 = 1LL;
    v8 = &unk_1800B41E0;
    while ( *v8 != a3 )
    {
      ++v7;
      v8 += 8;
      if ( v7 >= 0xA )
        goto LABEL_8;
    }
    v9 = (char *)&unk_1800B41C0 + 32 * v7;
    if ( !v9 )
    {
LABEL_8:
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpGetSystemSdbFilePath",
        1294,
        (unsigned int)"SdbFileDetails missing array item for SdbFileType: %d",
        a3);
      return (unsigned int)-1073741275;
    }
    if ( *((_QWORD *)v9 + 2) )
    {
      v11 = a5;
      if ( !a5 )
        v11 = *((_QWORD *)v9 + 1);
      v12 = (*((__int64 (__fastcall **)(_WORD *, __int64, __int64, __int64))v9 + 2))(a1, 260LL, v11, a6);
      v10 = v12;
      if ( v12 >= 0 )
        return 0;
      else
        AslLogCallPrintf(
          1,
          (unsigned int)"SdbpGetSystemSdbFilePath",
          1318,
          (unsigned int)"GetPathFunction (for SdbFileType %d, IsLtRs3: %d) failed [%x]",
          a3,
          0,
          v12);
    }
    else
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpGetSystemSdbFilePath",
        1308,
        (unsigned int)"SdbFileDetails missing function pointer for path.");
      return (unsigned int)-1073741595;
    }
  }
  else
  {
    return (unsigned int)-1073741583;
  }
  return v10;
}
