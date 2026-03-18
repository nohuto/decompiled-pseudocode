/*
 * XREFs of NtGdiSTROBJ_bGetAdvanceWidths @ 0x1C02B3D60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0009B28 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C01267F4 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ??$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z @ 0x1C012AE8C (--$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     STROBJ_bGetAdvanceWidths @ 0x1C02BDEE0 (STROBJ_bGetAdvanceWidths.c)
 */

__int64 __fastcall NtGdiSTROBJ_bGetAdvanceWidths(__int64 a1, ULONG a2, unsigned int a3, void *a4)
{
  __int64 v5; // r14
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  UMPDOBJ *v10; // rbx
  STROBJ *v11; // rdi
  POINTQF *v12; // rax
  POINTQF *v13; // r15
  unsigned int AdvanceWidths; // edi
  ULONG64 v15; // rax

  v5 = a3;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v10 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  v11 = (STROBJ *)UMPDOBJ::GetDDIOBJ<_STROBJ>((__int64)ThreadCurrentObj, a1);
  if ( !v11
    || (unsigned int)v5 > 0x271000
    || (v12 = (POINTQF *)UMPDOBJ::_AllocUserMem(v10, 16 * (int)v5, 0), (v13 = v12) == 0LL) )
  {
    --*((_DWORD *)v10 + 105);
    return 0LL;
  }
  AdvanceWidths = STROBJ_bGetAdvanceWidths(v11, a2, v5, v12);
  if ( AdvanceWidths )
  {
    v15 = (ULONG64)a4 + 16 * v5;
    if ( v15 > MmUserProbeAddress || v15 <= (unsigned __int64)a4 || ((unsigned __int8)a4 & 7) != 0 )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(a4, v13, 16 * v5);
  }
  --*((_DWORD *)v10 + 105);
  return AdvanceWidths;
}
