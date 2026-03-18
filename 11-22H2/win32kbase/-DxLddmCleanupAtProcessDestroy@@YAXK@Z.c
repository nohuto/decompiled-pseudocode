/*
 * XREFs of ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C0034BE0
 * Callers:
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1C0034CE8 (-GrepCloseCurrentProcess@@YAHXZ.c)
 * Callees:
 *     GreUnlockDisplayDevice @ 0x1C001CBA0 (GreUnlockDisplayDevice.c)
 *     GreLockDisplayDevice @ 0x1C001CBF0 (GreLockDisplayDevice.c)
 *     GreUnlockSprite @ 0x1C001CC30 (GreUnlockSprite.c)
 *     GreLockSprite @ 0x1C001CC90 (GreLockSprite.c)
 *     ?bRenderLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C0033B80 (-bRenderLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ??$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z @ 0x1C0035498 (--$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0040814 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C004086C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreLockVisRgn @ 0x1C0051080 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C0051170 (GreUnlockVisRgn.c)
 *     ?DxLddmPrimaryLockProcessDestroy@@YAXPEAUHDEV__@@KPEAK@Z @ 0x1C00AD65C (-DxLddmPrimaryLockProcessDestroy@@YAXPEAUHDEV__@@KPEAK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     ?DxLddmLogProcessPrimaryLockCount@@YAXK@Z @ 0x1C016894C (-DxLddmLogProcessPrimaryLockCount@@YAXK@Z.c)
 */

void __fastcall DxLddmCleanupAtProcessDestroy(unsigned int a1)
{
  HDEV v2; // rbx
  int v3; // ecx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  void (__fastcall *v7)(_QWORD, __int64); // rdi
  __int64 CurrentProcess; // rax
  unsigned int CurrentProcessSessionId; // eax
  HDEV v10; // [rsp+38h] [rbp+10h] BYREF
  unsigned int v11; // [rsp+40h] [rbp+18h] BYREF

  v11 = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v10);
  v2 = (HDEV)hdevEnumerate<1>(0LL);
  if ( v2 )
  {
    do
    {
      v3 = (_DWORD)v2[10] & 0x20001;
      v10 = v2;
      if ( v3 == 1 && (unsigned int)PDEVOBJ::bRenderLddmDriver((PDEVOBJ *)&v10) )
      {
        GreLockVisRgn(v2);
        GreLockSprite((__int64)v2);
        GreLockDisplayDevice((__int64)v2);
        DxLddmPrimaryLockProcessDestroy(v2, a1, &v11);
        v7 = (void (__fastcall *)(_QWORD, __int64))*((_QWORD *)v2 + 329);
        if ( v7 )
        {
          CurrentProcess = PsGetCurrentProcess(v5, v4, v6);
          v7(*((_QWORD *)v2 + 221), CurrentProcess);
        }
        else
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId();
          WdLogSingleEntry1(2LL, CurrentProcessSessionId);
        }
        GreUnlockDisplayDevice((__int64)v2);
        GreUnlockSprite((__int64)v2);
        GreUnlockVisRgn(v2);
      }
      v2 = (HDEV)hdevEnumerate<1>((PDEV *)v2);
    }
    while ( v2 );
    if ( v11 )
      DxLddmLogProcessPrimaryLockCount(v11);
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v10);
}
