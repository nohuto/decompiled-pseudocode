/*
 * XREFs of KiInitDynamicTraceSupport @ 0x140B769B8
 * Callers:
 *     KeInitSystem @ 0x140B53548 (KeInitSystem.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x1402A5370 (RtlLookupFunctionEntry.c)
 */

__int64 KiInitDynamicTraceSupport()
{
  int v0; // ebx
  int v1; // ebx
  __int64 result; // rax
  PRUNTIME_FUNCTION v3; // rax
  unsigned __int64 ImageBase; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  ImageBase = 0LL;
  v0 = 1;
  KiDynamicTraceCallouts[0] = 9LL;
  if ( !(_BYTE)KdDebuggerNotPresent )
    v0 = 5;
  v1 = v0 | 2;
  result = TraceInitSystem(&v5, KiDynamicTraceCallouts, &ControlPc);
  if ( (int)result >= 0 )
  {
    v3 = RtlLookupFunctionEntry(ControlPc, &ImageBase, 0LL);
    if ( v3 )
    {
      ControlPc = ImageBase + v3->BeginAddress;
      qword_140D1F2B0 = ImageBase + v3->EndAddress;
    }
    result = (__int64)v5;
    *v5 = KiDynamicTraceContext;
    KiDynamicTraceEnabled = v1;
  }
  return result;
}
