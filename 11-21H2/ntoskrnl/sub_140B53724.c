/*
 * XREFs of sub_140B53724 @ 0x140B53724
 * Callers:
 *     sub_140B0DBD4 @ 0x140B0DBD4 (sub_140B0DBD4.c)
 * Callees:
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     sub_1406546AC @ 0x1406546AC (sub_1406546AC.c)
 *     sub_140A89D58 @ 0x140A89D58 (sub_140A89D58.c)
 *     sub_140A89E7C @ 0x140A89E7C (sub_140A89E7C.c)
 *     sub_140A9A588 @ 0x140A9A588 (sub_140A9A588.c)
 *     sub_140A9A8C4 @ 0x140A9A8C4 (sub_140A9A8C4.c)
 *     sub_140B55B68 @ 0x140B55B68 (sub_140B55B68.c)
 */

__int64 __fastcall sub_140B53724(__int64 a1)
{
  __int64 v3; // r14
  unsigned int v4; // esi
  unsigned int i; // edi
  __int64 v6; // rax
  const void **v7; // rbx
  _QWORD *v8; // rbx
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0;
  if ( (dword_140C1ACA8 & 0x40000000) == 0 )
  {
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: no suspect drivers will be selected for verification.\n");
    return 0LL;
  }
  DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: will select target drivers for verification.\n");
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 240) + 40LL);
  if ( (int)sub_140B55B68(v3, &v9) < 0 )
    return 0LL;
  v4 = 0;
  for ( i = 0; i < v9; ++i )
  {
    v6 = sub_1406546AC(v3, i);
    if ( v6 && (*(_DWORD *)(v6 + 104) & 0x8000000) == 0 )
    {
      v7 = (const void **)(v6 + 88);
      DbgPrintEx(0x5Du, 3u, "VfTriageAddDrivers: Marking %wZ for verification when it is loaded\n", v6 + 88);
      v8 = (_QWORD *)sub_140A9A588(v7);
      if ( v8 )
      {
        sub_140A89D58();
        sub_140A9A8C4(v8);
        sub_140A89E7C();
        v4 = 1;
      }
    }
  }
  return v4;
}
