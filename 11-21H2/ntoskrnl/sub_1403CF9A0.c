/*
 * XREFs of sub_1403CF9A0 @ 0x1403CF9A0
 * Callers:
 *     sub_140551D58 @ 0x140551D58 (sub_140551D58.c)
 *     sub_14084BE78 @ 0x14084BE78 (sub_14084BE78.c)
 * Callees:
 *     sub_14067B838 @ 0x14067B838 (sub_14067B838.c)
 *     sub_1406DE960 @ 0x1406DE960 (sub_1406DE960.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall sub_1403CF9A0(__int64 a1, _DWORD *a2)
{
  NTSTATUS result; // eax
  char v4; // [rsp+20h] [rbp-20h]
  _QWORD v5[2]; // [rsp+30h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp+20h] BYREF

  Handle = 0LL;
  v5[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl";
  v5[0] = 8388734LL;
  v4 = 0;
  result = sub_1406DE960(&Handle, 0LL, v5, 131097LL, v4);
  if ( result >= 0 )
  {
    if ( (int)sub_14067B838(Handle) >= 0 )
    {
      if ( MEMORY[0xC] )
        dword_140C54D54 = *(_DWORD *)MEMORY[8];
      ExFreePoolWithTag(0LL, 0);
    }
    if ( a2 && (int)sub_14067B838(Handle) >= 0 )
    {
      if ( MEMORY[0xC] )
        *a2 = *(_DWORD *)MEMORY[8];
      ExFreePoolWithTag(0LL, 0);
    }
    if ( (int)sub_14067B838(Handle) >= 0 )
    {
      if ( MEMORY[0xC] )
        dword_140D018E0 = *(_DWORD *)MEMORY[8];
      ExFreePoolWithTag(0LL, 0);
    }
    if ( (int)sub_14067B838(Handle) >= 0 )
    {
      if ( MEMORY[0xC] )
        dword_140C0C6BC = *(_DWORD *)MEMORY[8];
      ExFreePoolWithTag(0LL, 0);
    }
    return ObCloseHandle(Handle, 0);
  }
  return result;
}
