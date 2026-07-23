/*
 * XREFs of FsRtlAllocatePool @ 0x14053E090
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140321A40 (RtlRaiseStatus.c)
 *     ExAllocatePoolWithTag @ 0x140AAEC80 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall FsRtlAllocatePool(POOL_TYPE a1, unsigned int a2)
{
  PVOID result; // rax

  result = ExAllocatePoolWithTag(a1, a2, 0x74725346u);
  if ( !result )
    RtlRaiseStatus(-1073741670);
  return result;
}
