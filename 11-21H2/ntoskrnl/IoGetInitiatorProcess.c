/*
 * XREFs of IoGetInitiatorProcess @ 0x14025D5C0
 * Callers:
 *     IoIsInitiator32bitProcess @ 0x14025D580 (IoIsInitiator32bitProcess.c)
 *     sub_140280170 @ 0x140280170 (sub_140280170.c)
 * Callees:
 *     sub_1402A3A14 @ 0x1402A3A14 (sub_1402A3A14.c)
 */

__int64 __fastcall IoGetInitiatorProcess(__int64 a1)
{
  __int64 v2; // rax

  if ( *(_QWORD *)(a1 + 208) && (v2 = sub_1402A3A14(a1, 1LL)) != 0 )
    return *(_QWORD *)(v2 + 8);
  else
    return 0LL;
}
