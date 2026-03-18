/*
 * XREFs of _EnumClipboardFormats @ 0x1C021A690
 * Callers:
 *     NtUserEnumClipboardFormats @ 0x1C016CA50 (NtUserEnumClipboardFormats.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x1C00CD1F0 (-FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C00CD268 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 */

__int64 __fastcall EnumClipboardFormats(unsigned int a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  struct tagWINDOWSTATION *v4; // rdi
  unsigned int *v6; // rcx
  struct tagCLIP *ClipFormat; // rax

  v2 = 0;
  v4 = CheckClipboardAccess();
  if ( !v4 )
    return 0LL;
  if ( *((_QWORD *)v4 + 10) != gptiCurrent )
  {
    UserSetLastError(1418LL, v3);
    return 0LL;
  }
  v6 = (unsigned int *)*((_QWORD *)v4 + 16);
  if ( v6 )
  {
    if ( !a1
      || (ClipFormat = FindClipFormat(v4, a1, 1)) != 0LL
      && (v6 = (unsigned int *)((char *)ClipFormat + 32), ClipFormat != (struct tagCLIP *)-32LL) )
    {
      if ( (unsigned __int64)v6 < *((_QWORD *)v4 + 16) + 32 * (unsigned __int64)*((unsigned int *)v4 + 34) )
        return *v6;
    }
  }
  return v2;
}
