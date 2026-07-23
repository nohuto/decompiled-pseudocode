/*
 * XREFs of sub_140B30F84 @ 0x140B30F84
 * Callers:
 *     sub_140B03800 @ 0x140B03800 (sub_140B03800.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x140298010 (RtlLookupFunctionEntry.c)
 */

__int64 sub_140B30F84()
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
  qword_140D070A0[0] = 9LL;
  if ( !(_BYTE)KdDebuggerNotPresent )
    v0 = 5;
  v1 = v0 | 2;
  result = TraceInitSystem(&v5, qword_140D070A0, &qword_140D070E8);
  if ( (int)result >= 0 )
  {
    v3 = RtlLookupFunctionEntry(qword_140D070E8, &ImageBase, 0LL);
    if ( v3 )
    {
      qword_140D070E8 = ImageBase + v3->BeginAddress;
      qword_140D070F0 = ImageBase + v3->EndAddress;
    }
    result = (__int64)v5;
    *v5 = qword_140009CC0;
    dword_140D069BC = v1;
  }
  return result;
}
