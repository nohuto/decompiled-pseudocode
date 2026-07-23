/*
 * XREFs of sub_14045F6A0 @ 0x14045F6A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140A96D84 @ 0x140A96D84 (sub_140A96D84.c)
 */

void __fastcall sub_14045F6A0(HANDLE ParentId, HANDLE ProcessId, BOOLEAN Create)
{
  HANDLE v3; // rax

  v3 = ProcessId;
  if ( dword_140C1B2A0 )
  {
    LOBYTE(ProcessId) = Create;
    sub_140A96D84(v3, ProcessId);
  }
}
