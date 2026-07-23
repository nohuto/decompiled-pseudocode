/*
 * XREFs of sub_140B4F76C @ 0x140B4F76C
 * Callers:
 *     sub_140B114E8 @ 0x140B114E8 (sub_140B114E8.c)
 * Callees:
 *     sub_140851A60 @ 0x140851A60 (sub_140851A60.c)
 */

NTSTATUS __fastcall sub_140B4F76C(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  void *v5; // [rsp+20h] [rbp-28h]
  void *v6; // [rsp+30h] [rbp-18h]

  return sub_140851A60(a1, (UNICODE_STRING *)(*(_QWORD *)(a1 + 48) + 24LL), a3, a4, v5, a1, v6);
}
