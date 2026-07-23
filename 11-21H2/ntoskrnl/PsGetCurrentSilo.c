/*
 * XREFs of PsGetCurrentSilo @ 0x140347D50
 * Callers:
 *     sub_140558960 @ 0x140558960 (sub_140558960.c)
 *     sub_1406686C8 @ 0x1406686C8 (sub_1406686C8.c)
 *     sub_14066915C @ 0x14066915C (sub_14066915C.c)
 *     sub_14066E950 @ 0x14066E950 (sub_14066E950.c)
 *     sub_14066EBE0 @ 0x14066EBE0 (sub_14066EBE0.c)
 *     ObOpenObjectByName @ 0x14067C970 (ObOpenObjectByName.c)
 *     sub_14067F8D0 @ 0x14067F8D0 (sub_14067F8D0.c)
 *     sub_1406928FC @ 0x1406928FC (sub_1406928FC.c)
 *     sub_1406A0F30 @ 0x1406A0F30 (sub_1406A0F30.c)
 *     sub_1406A7AB0 @ 0x1406A7AB0 (sub_1406A7AB0.c)
 *     sub_1406A97F0 @ 0x1406A97F0 (sub_1406A97F0.c)
 *     sub_1407103B0 @ 0x1407103B0 (sub_1407103B0.c)
 *     ObReferenceObjectByName @ 0x14071EEC0 (ObReferenceObjectByName.c)
 *     sub_1407349A0 @ 0x1407349A0 (sub_1407349A0.c)
 *     sub_140751120 @ 0x140751120 (sub_140751120.c)
 *     sub_1407ADB90 @ 0x1407ADB90 (sub_1407ADB90.c)
 *     sub_1407CABA0 @ 0x1407CABA0 (sub_1407CABA0.c)
 *     IoQueryInformationByName @ 0x1407F69E0 (IoQueryInformationByName.c)
 *     sub_14080F9EC @ 0x14080F9EC (sub_14080F9EC.c)
 *     NtDeleteFile @ 0x1408115E0 (NtDeleteFile.c)
 *     PsRegisterSiloMonitor @ 0x1408257B0 (PsRegisterSiloMonitor.c)
 *     sub_140936A54 @ 0x140936A54 (sub_140936A54.c)
 *     sub_1409AB8A0 @ 0x1409AB8A0 (sub_1409AB8A0.c)
 *     sub_140A34854 @ 0x140A34854 (sub_140A34854.c)
 * Callees:
 *     <none>
 */

__int64 PsGetCurrentSilo()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  if ( *((_QWORD *)CurrentThread + 203) != -3LL )
    return *((_QWORD *)CurrentThread + 203);
  for ( result = *(_QWORD *)(*((_QWORD *)CurrentThread + 68) + 1296LL); result; result = *(_QWORD *)(result + 1264) )
  {
    if ( (*(_DWORD *)(result + 1512) & 0x40000000) != 0 )
      break;
  }
  return result;
}
