/*
 * XREFs of UsbhSshSetPortsBusyState @ 0x1C000ABD0
 * Callers:
 *     UsbhBusIf_ResumeChildHub @ 0x1C0004460 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhSet_Pdo_Dx @ 0x1C0009CFC (UsbhSet_Pdo_Dx.c)
 *     UsbhDeregisterPdo @ 0x1C0037578 (UsbhDeregisterPdo.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x1C003B22C (Usbh_PdoRemove_PdoEvent.c)
 *     UsbhDriverNotFoundWorker @ 0x1C00428B0 (UsbhDriverNotFoundWorker.c)
 *     UsbhCreatePdo @ 0x1C0053530 (UsbhCreatePdo.c)
 *     UsbhDeletePdo @ 0x1C005409C (UsbhDeletePdo.c)
 *     UsbhPdoPnp_EnablePdo @ 0x1C00551AC (UsbhPdoPnp_EnablePdo.c)
 * Callees:
 *     UsbhDecHubBusy @ 0x1C0003DB0 (UsbhDecHubBusy.c)
 *     UsbhSshPortsBusy @ 0x1C0004EA4 (UsbhSshPortsBusy.c)
 *     UsbhDisableTimerObject @ 0x1C00084D0 (UsbhDisableTimerObject.c)
 *     UsbhEnableTimerObject @ 0x1C0008770 (UsbhEnableTimerObject.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002E078 (UsbhTrapFatal_Dbg.c)
 */

LONG __fastcall UsbhSshSetPortsBusyState(__int64 a1, unsigned __int16 a2, int a3, int a4)
{
  __int64 v4; // rsi
  LONG result; // eax
  __int64 v9; // rbx
  BOOL v10; // r10d
  unsigned __int16 v11; // dx
  char v12; // cl
  int v13; // ebp
  int v14; // r10d
  int v15; // eax
  int v16; // r11d
  int v17; // r10d
  _QWORD *v18; // r15
  __int64 v19; // rdx
  __int64 v20; // rax

  v4 = a2;
  result = a2 - 1;
  if ( (unsigned __int16)(a2 - 1) <= 0x7Eu )
  {
    if ( !a1 )
      UsbhTrapFatal_Dbg(0LL, 0LL);
    v9 = *(_QWORD *)(a1 + 64);
    if ( !v9 )
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *(_DWORD *)v9 != 541218120 )
      UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
    KeWaitForSingleObject((PVOID)(v9 + 3160), Executive, 0, 0, 0LL);
    v10 = *(_DWORD *)(v9 + 3320) || *(_DWORD *)(v9 + 3324) || *(_DWORD *)(v9 + 3328) || *(_DWORD *)(v9 + 3332);
    v11 = (unsigned __int16)v4 >> 5;
    v12 = v4 & 0x1F;
    v13 = a3 - 1;
    if ( v13 )
    {
      if ( v13 == 1 )
      {
        *(_DWORD *)(v9 + 4LL * v11 + 3320) |= 1 << v12;
        Log(a1, 0x10000, 1400066114, v10, v4);
        if ( !v14 )
        {
          v15 = FdoExt(a1);
          UsbhSshPortsBusy(a1, v15 + 1912, a4);
          UsbhDisableTimerObject(a1, v9 + 3200);
        }
      }
    }
    else
    {
      *(_DWORD *)(v9 + 4LL * v11 + 3320) &= ~(1 << v12);
      Log(a1, 0x10000, 1400066121, v10, v4);
      if ( v17 && !v16 )
      {
        FdoExt(a1);
        v18 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(FdoExt(a1) + 3312), 0LL);
        Log(a1, 0x10000, 1213419565, 0, (__int64)v18);
        UsbhDecHubBusy(a1, v19, v18);
        v20 = FdoExt(a1);
        UsbhEnableTimerObject(a1, v9 + 3200, *(_DWORD *)(v9 + 5256), 0, v20 + 1912, 0x77485353u);
      }
    }
    return KeReleaseSemaphore((PRKSEMAPHORE)(v9 + 3160), 16, 1, 0);
  }
  return result;
}
