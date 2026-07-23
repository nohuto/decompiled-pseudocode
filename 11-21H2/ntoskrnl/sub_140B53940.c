/*
 * XREFs of sub_140B53940 @ 0x140B53940
 * Callers:
 *     sub_140B27D88 @ 0x140B27D88 (sub_140B27D88.c)
 * Callees:
 *     sub_1402E0978 @ 0x1402E0978 (sub_1402E0978.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     sub_140B53650 @ 0x140B53650 (sub_140B53650.c)
 */

__int64 __fastcall sub_140B53940(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // r14
  __int64 *v3; // rdi
  __int64 *v5; // rbx
  unsigned int v6; // edx
  int v7; // esi

  dword_140C0B1F8 = 1;
  v2 = a1 + 1;
  v3 = qword_140B359B0;
  dword_140C0C848 = a1[1];
  v5 = 0LL;
  v6 = *a1 >> 19;
  v7 = 0;
  if ( v6 )
    goto LABEL_4;
  if ( a2 )
  {
    a1 = a2;
    v6 = *a2 >> 19;
LABEL_4:
    v5 = (__int64 *)(a1 + 2);
    sub_140B53650(a1 + 2, v6);
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: target drivers are `%ws'.\n", v5);
    goto LABEL_6;
  }
  v7 = 1;
  sub_140B53650(qword_140B359B0, 4u);
  DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: all drivers will be targetted.\n");
LABEL_6:
  dword_140C1ACA8 = 1;
  DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: system will enable verification features %X.\n", *v2);
  if ( !v7 )
    v3 = v5;
  return sub_1402E0978(word_140C1AFC0, 0x200uLL, (__int64)v3);
}
