/*
 * XREFs of sub_140A36E2C @ 0x140A36E2C
 * Callers:
 *     sub_140A09E34 @ 0x140A09E34 (sub_140A09E34.c)
 * Callees:
 *     sub_1402E1280 @ 0x1402E1280 (sub_1402E1280.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlCaptureContext @ 0x1404299A0 (RtlCaptureContext.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KeCapturePersistentThreadState @ 0x1405558E0 (KeCapturePersistentThreadState.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

char *__fastcall sub_140A36E2C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char *Pool2; // rax
  char *v9; // rbx
  __int64 v10; // rax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v15; // eax
  __int64 v16; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B8h] BYREF
  _CONTEXT ContextRecord; // [rsp+58h] [rbp-B0h] BYREF

  memset(&ContextRecord, 0, sizeof(ContextRecord));
  v17 = 0LL;
  LODWORD(v16) = 0;
  Pool2 = (char *)ExAllocatePool2(64LL, 136LL, 1952531540LL);
  v9 = Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, 0x88uLL);
    v10 = ExAllocatePool2(64LL, 0x40000LL, 1952531540LL);
    *(_QWORD *)v9 = v10;
    if ( v10 && (int)sub_1402E1280((wchar_t *)v9 + 52, 0x20uLL, L"%ws", L"WHEA") >= 0 )
    {
      LODWORD(v16) = 1;
      v11 = WerLiveKernelCreateReport(v9 + 104, &v16, &v17);
      if ( v11 >= 0 )
      {
        if ( (_DWORD)v16 )
        {
          *((_QWORD *)v9 + 12) = v17;
          RtlCaptureContext(&ContextRecord);
          v15 = KeCapturePersistentThreadState((__int64)&ContextRecord, 0LL, 292, a3, a4, a5, a6, *(_QWORD *)v9);
          if ( v15 )
          {
            *((_DWORD *)v9 + 2) = v15;
            return v9;
          }
        }
        else
        {
          DbgPrintEx(5u, 1u, "LKMDTEL: WerPolicy is WerLiveKernelPolicyNoDump, no dump is allowed.\n");
        }
      }
      else
      {
        DbgPrintEx(5u, 0, "LKMDTEL: WerLiveKernelCreateReport failed with status 0x%X\n", v11);
      }
    }
    if ( *(_QWORD *)v9 )
      ExFreePoolWithTag(*(PVOID *)v9, 0x74614454u);
    ExFreePoolWithTag(v9, 0x74614454u);
    v9 = 0LL;
  }
  if ( v17 )
  {
    v12 = WerLiveKernelCancelReport();
    if ( v12 < 0 )
      DbgPrintEx(5u, 1u, "LKMDTEL: WerLiveCancelReport failed, status 0x%X\n", v12);
    v13 = WerLiveKernelCloseHandle(v17);
    if ( v13 < 0 )
      DbgPrintEx(5u, 1u, "LKMDTEL: WerLiveCancelReport failed, status 0x%X\n", v13);
  }
  return v9;
}
