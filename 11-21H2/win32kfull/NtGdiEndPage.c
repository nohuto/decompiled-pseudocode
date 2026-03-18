/*
 * XREFs of NtGdiEndPage @ 0x1C027ACD0
 * Callers:
 *     <none>
 * Callees:
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C002BB70 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x1C012CA30 (-RestoreAttributesHelper@XDCOBJ@@AEAAXXZ.c)
 *     ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x1C012CA70 (-vDone@RESTORESAVEDCATTRS@@QEAAXXZ.c)
 *     ?vSaveAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C012CA98 (-vSaveAttributesAlways@XDCOBJ@@AEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     GreDeleteWnd @ 0x1C02844B0 (GreDeleteWnd.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C0285520 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall NtGdiEndPage(HDC a1)
{
  int v1; // ebx
  unsigned int v2; // r14d
  __int64 v3; // rdx
  int v4; // ebx
  __int64 v5; // rsi
  __int64 v6; // rdi
  int v7; // ecx
  XDCOBJ *v8; // rbx
  int v9; // eax
  struct _EPROCESS *CurrentProcess; // rax
  EWNDOBJ *v11; // rcx
  _QWORD v13[2]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v14[32]; // [rsp+30h] [rbp-20h] BYREF
  XDCOBJ *v15; // [rsp+78h] [rbp+28h] BYREF

  v1 = (int)a1;
  v2 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v13, a1);
  if ( (unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v13) )
  {
    v4 = v1 & 0x7F0000;
    if ( v4 != 0x10000 && v4 != 6684672 )
    {
      v5 = *(_QWORD *)(v13[0] + 496LL);
      if ( v5 )
      {
        v6 = *(_QWORD *)(v13[0] + 48LL);
        v7 = *(_DWORD *)(v6 + 40);
        if ( (v7 & 1) == 0 )
        {
          if ( *(_QWORD *)(v6 + 2536) )
          {
            v8 = 0LL;
            v15 = 0LL;
            if ( (v7 & 0x8000) != 0 )
            {
              v9 = *(_DWORD *)(v13[0] + 44LL);
              v8 = (XDCOBJ *)v13;
              v15 = (XDCOBJ *)v13;
              if ( (v9 & 2) != 0 )
              {
                XDCOBJ::RestoreAttributesHelper((XDCOBJ *)v13);
                *(_DWORD *)(v13[0] + 44LL) &= ~2u;
              }
            }
            if ( gUMPDSecurityLevel == 2
              || gUMPDSecurityLevel
              && (CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel, v3),
                  (unsigned int)bIsProcessLocalSystem(CurrentProcess))
              || *(_QWORD *)(v6 + 2920) )
            {
              v2 = (*(__int64 (__fastcall **)(__int64))(v6 + 2920))(v5 + 24);
              if ( v2 )
              {
                RESTORESAVEDCATTRS::vDone(&v15);
                if ( (*(_DWORD *)(v6 + 40) & 0x8000) != 0 )
                {
                  *(_DWORD *)(v13[0] + 36LL) &= ~0x100u;
                  v11 = *(EWNDOBJ **)(v5 + 136);
                  if ( v11 )
                  {
                    GreDeleteWnd(v11);
                    *(_QWORD *)(v5 + 136) = 0LL;
                  }
                  *(_WORD *)(v13[0] + 2088LL) = -1;
                }
                v8 = v15;
              }
            }
            else if ( gfUMPDDebug )
            {
              DbgPrint(
                "clientcore\\windows\\core\\ntgdi\\gre\\windows\\print.cxx:%d:NtGdiEndPage:!(PPFNVALID(po, SendPage))\n",
                2369);
            }
            if ( v8 )
              XDCOBJ::vSaveAttributesAlways(v8);
          }
        }
      }
    }
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)v13);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v14);
  return v2;
}
