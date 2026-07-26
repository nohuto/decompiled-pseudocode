/*
 * XREFs of NdisMReadConfigBlock @ 0x1C00755F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NdisMReadConfigBlock(_QWORD *a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  __int64 (__fastcall *v8)(__int64, _QWORD, __int64, _QWORD); // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned int v11; // edi

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x7Fu,
      (struct _GUID *)&WPP_573a5358497137649e8f40cb87ceec67_Traceguids,
      a1);
  v8 = (__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD))a1[607];
  if ( v8 && (v9 = a1[608]) != 0 && (v10 = a1[576]) != 0 && (*(_BYTE *)(v10 + 8) & 5) == 5 )
    v11 = v8(v9, a2, a3, a4);
  else
    v11 = -1073741637;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x80u,
      (struct _GUID *)&WPP_573a5358497137649e8f40cb87ceec67_Traceguids,
      a1);
  return v11;
}
