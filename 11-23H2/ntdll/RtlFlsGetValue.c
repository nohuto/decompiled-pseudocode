/*
 * XREFs of RtlFlsGetValue @ 0x180057740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlFlsGetValue(ULONG FlsIndex, PVOID *FlsData)
{
  _QWORD *v3; // rax
  ULONG v4; // r10d
  __int64 v5; // rdx
  void **v6; // rax
  void *v7; // rax

  v3 = NtCurrentTeb()->FlsData;
  if ( FlsIndex - 1 > 0xFEE )
    return -1073741811;
  if ( !v3 )
    return -1073741664;
  v4 = FlsIndex + 16;
  _BitScanReverse(&FlsIndex, FlsIndex + 16);
  v5 = v3[FlsIndex - 2];
  if ( v5 && (v6 = (void **)(v5 + 8 * (((unsigned int)(1 << FlsIndex) ^ (unsigned __int64)v4) + 1))) != 0LL )
    v7 = *v6;
  else
    v7 = 0LL;
  *FlsData = v7;
  return 0;
}
