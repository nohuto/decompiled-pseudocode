/*
 * XREFs of sub_180010500 @ 0x180010500
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011BC4 @ 0x180011BC4 (sub_180011BC4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180010500(unsigned int a1)
{
  ULONG (__stdcall *RtlNtStatusToDosErrorNoTeb)(NTSTATUS); // rax
  unsigned int v2; // ebx
  HMODULE v4; // rax

  RtlNtStatusToDosErrorNoTeb = (ULONG (__stdcall *)(NTSTATUS))qword_1800329A0;
  v2 = 0;
  if ( qword_1800329A0 )
    return ((unsigned int (__fastcall *)(_QWORD))RtlNtStatusToDosErrorNoTeb)(a1);
  v4 = (HMODULE)sub_180011BC4();
  RtlNtStatusToDosErrorNoTeb = (ULONG (__stdcall *)(NTSTATUS))GetProcAddress(v4, "RtlNtStatusToDosErrorNoTeb");
  qword_1800329A0 = (__int64)RtlNtStatusToDosErrorNoTeb;
  if ( RtlNtStatusToDosErrorNoTeb )
    return ((unsigned int (__fastcall *)(_QWORD))RtlNtStatusToDosErrorNoTeb)(a1);
  return v2;
}
