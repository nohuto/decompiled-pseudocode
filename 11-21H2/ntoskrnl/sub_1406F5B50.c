/*
 * XREFs of sub_1406F5B50 @ 0x1406F5B50
 * Callers:
 *     MmProtectDriverSection @ 0x14025D5E0 (MmProtectDriverSection.c)
 *     sub_140582708 @ 0x140582708 (sub_140582708.c)
 *     sub_1405A40C4 @ 0x1405A40C4 (sub_1405A40C4.c)
 *     MmChangeImageProtection @ 0x1406F5800 (MmChangeImageProtection.c)
 *     sub_14074A178 @ 0x14074A178 (sub_14074A178.c)
 *     sub_14075FC44 @ 0x14075FC44 (sub_14075FC44.c)
 *     sub_1407603D4 @ 0x1407603D4 (sub_1407603D4.c)
 *     sub_140761DF8 @ 0x140761DF8 (sub_140761DF8.c)
 *     MmUnloadSystemImage @ 0x140762490 (MmUnloadSystemImage.c)
 *     sub_14080F66C @ 0x14080F66C (sub_14080F66C.c)
 *     sub_140814DC0 @ 0x140814DC0 (sub_140814DC0.c)
 *     sub_14082CB2C @ 0x14082CB2C (sub_14082CB2C.c)
 *     sub_14084C1C8 @ 0x14084C1C8 (sub_14084C1C8.c)
 *     MmAddVerifierSpecialThunks @ 0x140969FB0 (MmAddVerifierSpecialThunks.c)
 *     MmAddVerifierThunks @ 0x14096A0D0 (MmAddVerifierThunks.c)
 *     sub_140974020 @ 0x140974020 (sub_140974020.c)
 *     sub_140975748 @ 0x140975748 (sub_140975748.c)
 *     sub_14097723C @ 0x14097723C (sub_14097723C.c)
 *     sub_140977B70 @ 0x140977B70 (sub_140977B70.c)
 *     sub_140A69FD8 @ 0x140A69FD8 (sub_140A69FD8.c)
 *     sub_140A81214 @ 0x140A81214 (sub_140A81214.c)
 *     sub_140A812D0 @ 0x140A812D0 (sub_140A812D0.c)
 *     sub_140A9C668 @ 0x140A9C668 (sub_140A9C668.c)
 *     sub_140B04F8C @ 0x140B04F8C (sub_140B04F8C.c)
 *     sub_140B084F4 @ 0x140B084F4 (sub_140B084F4.c)
 *     sub_140B09D6C @ 0x140B09D6C (sub_140B09D6C.c)
 *     sub_140B0A4A8 @ 0x140B0A4A8 (sub_140B0A4A8.c)
 *     sub_140B2F2BC @ 0x140B2F2BC (sub_140B2F2BC.c)
 *     sub_140B2FE74 @ 0x140B2FE74 (sub_140B2FE74.c)
 *     sub_140B5210C @ 0x140B5210C (sub_140B5210C.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

struct _KTHREAD *sub_1406F5B50()
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread == (struct _KTHREAD *)qword_140C4F498 )
  {
    ++dword_140C4F4A0;
  }
  else
  {
    --*((_WORD *)CurrentThread + 242);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4F490, 0LL);
    qword_140C4F498 = (__int64)CurrentThread;
    dword_140C4F4A0 = 1;
  }
  return CurrentThread;
}
