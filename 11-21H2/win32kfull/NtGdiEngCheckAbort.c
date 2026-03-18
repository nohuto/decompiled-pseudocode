/*
 * XREFs of NtGdiEngCheckAbort @ 0x1C02B1210
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0009B28 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ??1CAutoTGO@@QEAA@XZ @ 0x1C010A45C (--1CAutoTGO@@QEAA@XZ.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C0128EA0 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?Cleanup@UMPDSURFOBJ@@SAXPEAX@Z @ 0x1C015F730 (-Cleanup@UMPDSURFOBJ@@SAXPEAX@Z.c)
 *     EngCheckAbort @ 0x1C027A290 (EngCheckAbort.c)
 */

__int64 __fastcall NtGdiEngCheckAbort(struct _SURFOBJ *a1)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v4; // rdi
  unsigned int v5; // ebx
  SURFOBJ *pso[3]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v8[48]; // [rsp+38h] [rbp-30h] BYREF

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v4 = ThreadCurrentObj;
  v5 = 1;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 105);
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, (struct _SURFOBJ **)ThreadCurrentObj);
    if ( pso[0] )
      v5 = EngCheckAbort(pso[0]);
    CAutoTGO::~CAutoTGO((CAutoTGO *)v8);
    UMPDSURFOBJ::Cleanup(pso);
    CAutoTGO::~CAutoTGO((CAutoTGO *)v8);
    --*((_DWORD *)v4 + 105);
  }
  return v5;
}
