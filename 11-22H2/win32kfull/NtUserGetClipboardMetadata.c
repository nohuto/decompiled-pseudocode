/*
 * XREFs of NtUserGetClipboardMetadata @ 0x1C01D0AA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     InternalGetClipboardMetadata @ 0x1C01FD93C (InternalGetClipboardMetadata.c)
 */

__int64 __fastcall NtUserGetClipboardMetadata(__int64 a1, ULONG64 a2, __int64 a3)
{
  ULONG64 v3; // rbx
  unsigned int v4; // edi
  ULONG64 v5; // rdx
  ULONG64 v6; // rdx
  ULONG64 v7; // rcx
  int ClipboardMetadata; // edi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v12; // [rsp+40h] [rbp-28h]
  int v13; // [rsp+48h] [rbp-20h]

  v3 = a2;
  v4 = a1;
  EnterSharedCrit(a1, a2, a3);
  v5 = v3;
  if ( v3 + 12 < v3 || v3 + 12 > MmUserProbeAddress )
    v5 = MmUserProbeAddress;
  v12 = *(_QWORD *)v5;
  v13 = *(_DWORD *)(v5 + 8);
  ClipboardMetadata = InternalGetClipboardMetadata(v4);
  if ( ClipboardMetadata == 1 )
  {
    v7 = MmUserProbeAddress;
    v6 = MmUserProbeAddress;
    if ( v3 >= MmUserProbeAddress )
      v3 = MmUserProbeAddress;
    *(_QWORD *)v3 = v12;
    *(_DWORD *)(v3 + 8) = v13;
  }
  UserSessionSwitchLeaveCrit(v7, v6, v9, v10);
  return ClipboardMetadata;
}
