/*
 * XREFs of AuthzBasepAddSecurityAttributeValueToLists @ 0x1402259C8
 * Callers:
 *     AuthzBasepAddSecurityAttributeValues @ 0x140225138 (AuthzBasepAddSecurityAttributeValues.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x140225480 (AuthzBasepDuplicateSecurityAttributes.c)
 *     AuthzBasepDeleteAllSecurityAttributeValues @ 0x14066F034 (AuthzBasepDeleteAllSecurityAttributeValues.c)
 *     AuthzBasepDeleteSecurityAttributeValues @ 0x14066F0DC (AuthzBasepDeleteSecurityAttributeValues.c)
 * Callees:
 *     <none>
 */

void __fastcall AuthzBasepAddSecurityAttributeValueToLists(__int64 a1, __int64 a2, char a3, char a4)
{
  _QWORD *v4; // r9
  _QWORD *v5; // rax
  _QWORD *v6; // r8

  if ( a4 && (*(_DWORD *)(a2 + 32) & 2) == 0 )
  {
    v4 = *(_QWORD **)(a1 + 104);
    v5 = (_QWORD *)(a2 + 16);
    if ( *v4 != a1 + 96 )
      goto FatalListEntryError_2;
    *v5 = a1 + 96;
    *(_QWORD *)(a2 + 24) = v4;
    *v4 = v5;
    *(_QWORD *)(a1 + 104) = v5;
    *(_DWORD *)(a2 + 32) |= 2u;
    ++*(_DWORD *)(a1 + 88);
  }
  if ( a3 && (*(_DWORD *)(a2 + 32) & 1) == 0 )
  {
    v6 = *(_QWORD **)(a1 + 80);
    if ( *v6 == a1 + 72 )
    {
      *(_QWORD *)a2 = a1 + 72;
      *(_QWORD *)(a2 + 8) = v6;
      *v6 = a2;
      *(_QWORD *)(a1 + 80) = a2;
      *(_DWORD *)(a2 + 32) |= 1u;
      ++*(_DWORD *)(a1 + 60);
      return;
    }
FatalListEntryError_2:
    __fastfail(3u);
  }
}
