/*
 * XREFs of EngCreatePath @ 0x1C0283600
 * Callers:
 *     EngLineTo @ 0x1C01338B0 (EngLineTo.c)
 *     VerifierEngCreatePath @ 0x1C029CE30 (VerifierEngCreatePath.c)
 * Callees:
 *     ?vLock@EPATHOBJ@@QEAAXPEAUHPATH__@@@Z @ 0x1C0138854 (-vLock@EPATHOBJ@@QEAAXPEAUHPATH__@@@Z.c)
 */

PATHOBJ *EngCreatePath(void)
{
  EPATHOBJ *v0; // rbx
  _BYTE v2[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v3; // [rsp+28h] [rbp-80h]

  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v2);
  if ( v3 && (v0 = (EPATHOBJ *)Win32AllocPoolZInit(80LL, 1952542791LL)) != 0LL )
  {
    *(_QWORD *)(v3 + 312) = v0;
    EPATHOBJ::vLock(v0, *(struct HPATH__ **)v3);
  }
  else
  {
    v0 = 0LL;
  }
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v2);
  return (PATHOBJ *)v0;
}
