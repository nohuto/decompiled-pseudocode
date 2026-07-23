/*
 * XREFs of NtQueryAuxiliaryCounterFrequency @ 0x140A04770
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     ProbeForWrite @ 0x140729580 (ProbeForWrite.c)
 */

NTSTATUS __cdecl NtQueryAuxiliaryCounterFrequency(PLARGE_INTEGER AuxiliaryCounterFrequency)
{
  NTSTATUS result; // eax
  LONGLONG v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  if ( !KeGetCurrentThread()->PreviousMode )
    return off_140C01D40[0]();
  ProbeForWrite(AuxiliaryCounterFrequency, 8uLL, 4u);
  result = ((__int64 (__fastcall *)(LONGLONG *))off_140C01D40[0])(&v3);
  if ( result >= 0 )
    AuxiliaryCounterFrequency->QuadPart = v3;
  return result;
}
