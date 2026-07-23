/*
 * XREFs of sub_14082C6E0 @ 0x14082C6E0
 * Callers:
 *     sub_14082C49C @ 0x14082C49C (sub_14082C49C.c)
 * Callees:
 *     PsGetHostSilo @ 0x140203DC0 (PsGetHostSilo.c)
 *     PsGetEffectiveServerSilo @ 0x14020A3D0 (PsGetEffectiveServerSilo.c)
 *     sub_14069B8FC @ 0x14069B8FC (sub_14069B8FC.c)
 */

NTSTATUS __fastcall sub_14082C6E0(__int64 a1, void *a2, __int64 *a3)
{
  void *HostSilo; // rax
  PEPROCESS v7; // rdx
  char v8; // di

  HostSilo = (void *)PsGetHostSilo();
  if ( (void *)a1 == HostSilo )
  {
    v7 = PsInitialSystemProcess;
    v8 = 3;
  }
  else
  {
    v8 = 4;
    HostSilo = (void *)PsGetEffectiveServerSilo(a1);
    v7 = 0LL;
  }
  return sub_14069B8FC(HostSilo, (__int64)v7, a2, 0, v8, a3);
}
