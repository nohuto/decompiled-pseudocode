/*
 * XREFs of GreExtTextOutRect @ 0x1C008AD4C
 * Callers:
 *     NtGdiExtTextOutW @ 0x1C008A800 (NtGdiExtTextOutW.c)
 * Callees:
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002C61C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1C002CA18 (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C002CEF0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003FD70 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C008AE30 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C015D588 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C015D85C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreExtTextOutRect(HDC a1, struct tagRECT *a2)
{
  unsigned int v2; // edi
  unsigned int v5; // eax
  __int64 v7; // [rsp+28h] [rbp-49h] BYREF
  int v8; // [rsp+30h] [rbp-41h]
  int v9; // [rsp+34h] [rbp-3Dh]
  _BYTE v10[32]; // [rsp+38h] [rbp-39h] BYREF
  _BYTE v11[32]; // [rsp+58h] [rbp-19h] BYREF
  __int64 v12; // [rsp+78h] [rbp+7h] BYREF
  _BYTE v13[64]; // [rsp+88h] [rbp+17h] BYREF

  v2 = 0;
  v7 = 0LL;
  v8 = 0;
  v9 = 0;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v10);
  XDCOBJ::vLock((XDCOBJ *)&v7, a1);
  if ( v7 && (*(_DWORD *)(v7 + 36) & 0x10000) == 0 )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v11);
    if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v11, (struct XDCOBJ *)&v7, 0) )
      v5 = ExtTextOutRect((struct XDCOBJ *)&v7, a2);
    else
      v5 = XDCOBJ::bFullScreen((XDCOBJ *)&v7);
    v2 = v5;
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v11);
    if ( v12 )
      DLODCOBJ::vUnlock((DLODCOBJ *)&v12);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v13);
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)&v7);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v10);
  return v2;
}
