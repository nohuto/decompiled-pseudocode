/*
 * XREFs of PsRemoveLoadImageNotifyRoutine @ 0x1409B2B50
 * Callers:
 *     sub_1409F39DC @ 0x1409F39DC (sub_1409F39DC.c)
 * Callees:
 *     sub_140281870 @ 0x140281870 (sub_140281870.c)
 *     sub_140281930 @ 0x140281930 (sub_140281930.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_1403C7678 @ 0x1403C7678 (sub_1403C7678.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall PsRemoveLoadImageNotifyRoutine(PLOAD_IMAGE_NOTIFY_ROUTINE NotifyRoutine)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rdi
  struct _EX_RUNDOWN_REF *v4; // rax
  struct _EX_RUNDOWN_REF *v5; // rbx

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v3 = 0LL;
  while ( 1 )
  {
    v4 = sub_140281870((signed __int64 *)&stru_140CF6240.Ptr + v3);
    v5 = v4;
    if ( v4 )
      break;
LABEL_6:
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= 0x40 )
    {
      sub_1402F9540((__int64)CurrentThread);
      return -1073741702;
    }
  }
  if ( (PLOAD_IMAGE_NOTIFY_ROUTINE)v4[1].Count != NotifyRoutine
    || !sub_1403C7678((signed __int64 *)&stru_140CF6240.Ptr + v3, 0LL, (__int64)v4) )
  {
    sub_140281930((signed __int64 *)&stru_140CF6240.Ptr + v3, (__int64)v5);
    goto LABEL_6;
  }
  _InterlockedAdd(&dword_140D3CD4C, 0xFFFFFFFF);
  sub_140281930((signed __int64 *)&stru_140CF6240.Ptr + v3, (__int64)v5);
  sub_1402F9540((__int64)CurrentThread);
  ExWaitForRundownProtectionRelease(v5);
  ExFreePoolWithTag(v5, 0);
  return 0;
}
