/*
 * XREFs of PsIsProcessInAppSilo @ 0x1409AB7B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14020A400 @ 0x14020A400 (sub_14020A400.c)
 *     PsGetProcessSilo @ 0x1405E0470 (PsGetProcessSilo.c)
 */

bool __fastcall PsIsProcessInAppSilo(__int64 a1)
{
  __int64 ProcessSilo; // rax
  char v2; // dl

  ProcessSilo = PsGetProcessSilo(a1);
  v2 = 0;
  if ( ProcessSilo )
    return !sub_14020A400(ProcessSilo);
  return v2;
}
