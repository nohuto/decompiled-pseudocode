/*
 * XREFs of PoFxProcessorNotification @ 0x1403DD1C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall PoFxProcessorNotification(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 64);
  if ( v2 && *(_QWORD *)(v2 + 104) )
    return (unsigned __int8)sub_14042A5E0(*(_QWORD *)(a1 + 72), a2) == 0 ? 0xC00000BB : 0;
  else
    return 3221225474LL;
}
