/*
 * XREFs of InbvDisplayString @ 0x140384810
 * Callers:
 *     Phase1InitializationDiscard @ 0x140B4FFBC (Phase1InitializationDiscard.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

char __fastcall InbvDisplayString(__int64 a1)
{
  __int64 (*v2)(void); // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  if ( !byte_140C6AB4C )
    return 0;
  if ( qword_140C6AB50 )
    qword_140C6AB50(&v3);
  if ( qword_140C6AB58 && (v2 = *(__int64 (**)(void))(qword_140C6AB58 + 40)) != 0LL )
    return v2();
  else
    return 0;
}
