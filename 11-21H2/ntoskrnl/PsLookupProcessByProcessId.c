/*
 * XREFs of PsLookupProcessByProcessId @ 0x1407A8720
 * Callers:
 *     sub_14066CC94 @ 0x14066CC94 (sub_14066CC94.c)
 *     sub_1406ADBC8 @ 0x1406ADBC8 (sub_1406ADBC8.c)
 *     sub_14070AFEC @ 0x14070AFEC (sub_14070AFEC.c)
 *     sub_1407292A0 @ 0x1407292A0 (sub_1407292A0.c)
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 *     sub_1407D9CC0 @ 0x1407D9CC0 (sub_1407D9CC0.c)
 *     sub_1407FBA68 @ 0x1407FBA68 (sub_1407FBA68.c)
 *     sub_140806904 @ 0x140806904 (sub_140806904.c)
 *     sub_14081454C @ 0x14081454C (sub_14081454C.c)
 *     sub_140847BB4 @ 0x140847BB4 (sub_140847BB4.c)
 *     sub_140914F9C @ 0x140914F9C (sub_140914F9C.c)
 *     sub_140950744 @ 0x140950744 (sub_140950744.c)
 *     sub_1409E4318 @ 0x1409E4318 (sub_1409E4318.c)
 *     sub_1409E491C @ 0x1409E491C (sub_1409E491C.c)
 *     sub_1409EBB58 @ 0x1409EBB58 (sub_1409EBB58.c)
 *     sub_140A96D84 @ 0x140A96D84 (sub_140A96D84.c)
 * Callees:
 *     sub_14024BA7C @ 0x14024BA7C (sub_14024BA7C.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     PsGetCurrentServerSilo @ 0x1402F61B0 (PsGetCurrentServerSilo.c)
 *     sub_140300B74 @ 0x140300B74 (sub_140300B74.c)
 *     sub_1407A8900 @ 0x1407A8900 (sub_1407A8900.c)
 */

NTSTATUS __stdcall PsLookupProcessByProcessId(HANDLE ProcessId, PEPROCESS *Process)
{
  PEPROCESS *v2; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v4; // rbx
  __int64 CurrentServerSilo; // rax
  __int64 v6; // rbp
  bool v7; // zf
  signed __int32 v9[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = Process;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 243);
  LOBYTE(Process) = 3;
  v4 = sub_1407A8900(ProcessId, Process);
  if ( v4 )
  {
    CurrentServerSilo = PsGetCurrentServerSilo();
    v6 = CurrentServerSilo;
    if ( (*(_DWORD *)(v4 + 1124) & 0x4000000) != 0 )
    {
      if ( sub_140300B74(v4, CurrentServerSilo) )
        goto LABEL_4;
LABEL_14:
      ObfDereferenceObjectWithTag((PVOID)v4, 0x746C6644u);
      v4 = 0LL;
      goto LABEL_4;
    }
    _InterlockedOr(v9, 0);
    if ( (*(_QWORD *)(v4 + 1080) & 1) != 0 )
      sub_14024BA7C(v4 + 1080);
    if ( (*(_DWORD *)(v4 + 1124) & 0x4000000) == 0 || !sub_140300B74(v4, v6) )
      goto LABEL_14;
  }
LABEL_4:
  v7 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
  if ( v7 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
    KiCheckForKernelApcDelivery();
  if ( !v4 )
    return -1073741813;
  *v2 = (PEPROCESS)v4;
  return 0;
}
