/*
 * XREFs of sub_1402F89B0 @ 0x1402F89B0
 * Callers:
 *     sub_140203EE0 @ 0x140203EE0 (sub_140203EE0.c)
 *     sub_14025E12C @ 0x14025E12C (sub_14025E12C.c)
 *     sub_1402EF324 @ 0x1402EF324 (sub_1402EF324.c)
 *     sub_1405F43E0 @ 0x1405F43E0 (sub_1405F43E0.c)
 *     sub_140668294 @ 0x140668294 (sub_140668294.c)
 *     sub_14066A21C @ 0x14066A21C (sub_14066A21C.c)
 *     sub_14066A57C @ 0x14066A57C (sub_14066A57C.c)
 *     sub_140671BE0 @ 0x140671BE0 (sub_140671BE0.c)
 *     sub_1406745EC @ 0x1406745EC (sub_1406745EC.c)
 *     sub_140678C4C @ 0x140678C4C (sub_140678C4C.c)
 *     sub_140695160 @ 0x140695160 (sub_140695160.c)
 *     sub_14069532C @ 0x14069532C (sub_14069532C.c)
 *     sub_1406953C8 @ 0x1406953C8 (sub_1406953C8.c)
 *     sub_140695570 @ 0x140695570 (sub_140695570.c)
 *     sub_140695CF8 @ 0x140695CF8 (sub_140695CF8.c)
 *     sub_14069B030 @ 0x14069B030 (sub_14069B030.c)
 *     sub_1406DD598 @ 0x1406DD598 (sub_1406DD598.c)
 *     sub_1406DEAEC @ 0x1406DEAEC (sub_1406DEAEC.c)
 *     sub_1406E71BC @ 0x1406E71BC (sub_1406E71BC.c)
 *     sub_1406E9BE0 @ 0x1406E9BE0 (sub_1406E9BE0.c)
 *     sub_140702604 @ 0x140702604 (sub_140702604.c)
 *     sub_14070AFEC @ 0x14070AFEC (sub_14070AFEC.c)
 *     sub_14070B610 @ 0x14070B610 (sub_14070B610.c)
 *     sub_14070BA00 @ 0x14070BA00 (sub_14070BA00.c)
 *     sub_14070F0D8 @ 0x14070F0D8 (sub_14070F0D8.c)
 *     sub_140711F48 @ 0x140711F48 (sub_140711F48.c)
 *     sub_140712868 @ 0x140712868 (sub_140712868.c)
 *     NtOpenThreadTokenEx @ 0x140725A50 (NtOpenThreadTokenEx.c)
 *     sub_140756AD4 @ 0x140756AD4 (sub_140756AD4.c)
 *     sub_1407A0088 @ 0x1407A0088 (sub_1407A0088.c)
 *     PsImpersonateClient @ 0x1407AF1B0 (PsImpersonateClient.c)
 *     sub_1407B6CA0 @ 0x1407B6CA0 (sub_1407B6CA0.c)
 *     sub_1407DCA0C @ 0x1407DCA0C (sub_1407DCA0C.c)
 *     sub_1407F2DBC @ 0x1407F2DBC (sub_1407F2DBC.c)
 *     sub_1409C6000 @ 0x1409C6000 (sub_1409C6000.c)
 *     sub_1409E4114 @ 0x1409E4114 (sub_1409E4114.c)
 *     sub_1409EB400 @ 0x1409EB400 (sub_1409EB400.c)
 *     sub_1409F4DA0 @ 0x1409F4DA0 (sub_1409F4DA0.c)
 *     sub_140B30EE0 @ 0x140B30EE0 (sub_140B30EE0.c)
 *     sub_140B533E0 @ 0x140B533E0 (sub_140B533E0.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_140347B50 @ 0x140347B50 (sub_140347B50.c)
 */

__int64 __fastcall sub_1402F89B0(signed __int64 *a1, unsigned __int64 a2, ULONG a3)
{
  signed __int64 v3; // rax
  signed __int64 v4; // rtt

  _m_prefetchw(a1);
  v3 = *a1;
  if ( (a2 ^ *a1) >= 0xF )
    return ObfDereferenceObjectWithTag((PVOID)a2, a3);
  while ( 1 )
  {
    v4 = v3;
    v3 = _InterlockedCompareExchange64(a1, v3 + 1, v3);
    if ( v4 == v3 )
      break;
    if ( (a2 ^ v3) >= 0xF )
      return ObfDereferenceObjectWithTag((PVOID)a2, a3);
  }
  return sub_140347B50(a2 - 48, 1LL);
}
