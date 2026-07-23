/*
 * XREFs of sub_140837574 @ 0x140837574
 * Callers:
 *     sub_140836AA4 @ 0x140836AA4 (sub_140836AA4.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1402A76A0 (RtlCopyUnicodeString.c)
 */

void __fastcall sub_140837574(__int64 a1, __int64 a2)
{
  int v3; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  const UNICODE_STRING *v8; // rdx

  v3 = *(_DWORD *)(a2 + 800);
  v5 = 0;
  if ( (v3 & 0x20) != 0 )
  {
    v7 = *(_DWORD *)(a2 + 8);
    *(_DWORD *)(a1 + 800) |= 0x20u;
    *(_DWORD *)(a1 + 8) = v7;
    v5 = 1;
    v3 = *(_DWORD *)(a2 + 800);
  }
  if ( (v3 & 0x40) != 0 )
  {
    v6 = *(_DWORD *)(a2 + 12);
    *(_DWORD *)(a1 + 800) |= 0x40u;
    *(_DWORD *)(a1 + 12) = v6;
    v5 = 1;
  }
  if ( *(_QWORD *)(a2 + 40) )
  {
    v8 = (const UNICODE_STRING *)(a2 + 32);
    if ( v8->Length )
    {
      RtlCopyUnicodeString((PUNICODE_STRING)(a1 + 32), v8);
      *(_DWORD *)(a1 + 800) |= 0x80u;
      v5 = 1;
    }
  }
  if ( *(_QWORD *)(a2 + 56) && *(_WORD *)(a2 + 48) )
  {
    RtlCopyUnicodeString((PUNICODE_STRING)(a1 + 48), (PCUNICODE_STRING)(a2 + 48));
    *(_DWORD *)(a1 + 800) |= 0x100u;
    v5 = 1;
  }
  if ( *(_QWORD *)(a2 + 72) && *(_WORD *)(a2 + 64) )
  {
    RtlCopyUnicodeString((PUNICODE_STRING)(a1 + 64), (PCUNICODE_STRING)(a2 + 64));
    *(_DWORD *)(a1 + 800) |= 0x200u;
    v5 = 1;
  }
  if ( *(_QWORD *)(a2 + 88) && *(_WORD *)(a2 + 80) )
  {
    RtlCopyUnicodeString((PUNICODE_STRING)(a1 + 80), (PCUNICODE_STRING)(a2 + 80));
    *(_DWORD *)(a1 + 800) |= 0x400u;
    v5 = 1;
  }
  if ( *(_QWORD *)(a2 + 104) && *(_WORD *)(a2 + 96) )
  {
    RtlCopyUnicodeString((PUNICODE_STRING)(a1 + 96), (PCUNICODE_STRING)(a2 + 96));
    *(_DWORD *)(a1 + 800) |= 0x800u;
  }
  else if ( !v5 )
  {
    return;
  }
  *(_DWORD *)(a1 + 800) |= 4u;
}
