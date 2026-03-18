/*
 * XREFs of NtGdiPATHOBJ_bEnumClipLines @ 0x1C02B37F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0009B28 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z @ 0x1C014382C (-bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1C02B03D8 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 */

_BOOL8 __fastcall NtGdiPATHOBJ_bEnumClipLines(__int64 a1, unsigned int a2, volatile void *a3)
{
  volatile void *v3; // r12
  unsigned __int64 v4; // r13
  BOOL v6; // r14d
  struct _CLIPLINE *v7; // rsi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v10; // rbx
  unsigned __int64 v11; // r15
  struct _CLIPLINE *v12; // rax
  __int64 v13; // rax

  v3 = a3;
  v4 = a2;
  v6 = 0;
  v7 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v10 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  if ( (unsigned int)(v4 - 33) > 0x270FFDF )
  {
    --*((_DWORD *)ThreadCurrentObj + 105);
    return 0LL;
  }
  v11 = UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)ThreadCurrentObj, a1);
  if ( v11 )
  {
    v12 = (struct _CLIPLINE *)Win32AllocPool(v4, 1886221639LL);
    v7 = v12;
    if ( v12 )
    {
      memset(v12, 0, v4);
      if ( (*((_DWORD *)v10 + 103) & 0x100) != 0 )
      {
        v13 = *(_QWORD *)(v11 + 72);
        if ( !v13 )
        {
          if ( gfUMPDDebug )
            DbgPrint(
              "clientcore\\windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiPATHOBJ_bEnumClipLines:ppo->pco == NULL\n",
              4057);
          v6 = 1;
          goto LABEL_16;
        }
        if ( !*(_QWORD *)(v13 + 144) )
        {
          if ( gfUMPDDebug )
            DbgPrint(
              "clientcore\\windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiPATHOBJ_bEnumClipLines:ppo->pco->pcle == NULL\n",
              4063);
          v6 = 1;
        }
      }
      if ( !v6 )
        v6 = XCLIPOBJ::bEnumPath(*(XCLIPOBJ **)(v11 + 72), (struct _PATHOBJ *)v11, v4, v7, 0);
    }
LABEL_16:
    v3 = a3;
  }
  ProbeForWrite(v3, v4, 4u);
  if ( v7 )
    memmove((void *)v3, v7, v4);
  else
    memset((void *)v3, 0, v4);
  if ( v7 )
    Win32FreePool(v7);
  --*((_DWORD *)v10 + 105);
  return v6;
}
