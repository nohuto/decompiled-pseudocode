/*
 * XREFs of sub_1402ACD00 @ 0x1402ACD00
 * Callers:
 *     sub_140346910 @ 0x140346910 (sub_140346910.c)
 *     sub_14065A1F0 @ 0x14065A1F0 (sub_14065A1F0.c)
 *     sub_14067CE4C @ 0x14067CE4C (sub_14067CE4C.c)
 *     sub_14067DE90 @ 0x14067DE90 (sub_14067DE90.c)
 *     sub_14067FF60 @ 0x14067FF60 (sub_14067FF60.c)
 *     sub_14069E454 @ 0x14069E454 (sub_14069E454.c)
 *     sub_1406A1370 @ 0x1406A1370 (sub_1406A1370.c)
 *     sub_1406A5C00 @ 0x1406A5C00 (sub_1406A5C00.c)
 *     sub_140713980 @ 0x140713980 (sub_140713980.c)
 *     sub_140714980 @ 0x140714980 (sub_140714980.c)
 *     sub_14071FAA0 @ 0x14071FAA0 (sub_14071FAA0.c)
 *     sub_140721010 @ 0x140721010 (sub_140721010.c)
 *     sub_1407333B0 @ 0x1407333B0 (sub_1407333B0.c)
 *     sub_1407349A0 @ 0x1407349A0 (sub_1407349A0.c)
 *     sub_1407C0160 @ 0x1407C0160 (sub_1407C0160.c)
 *     sub_1407C04B4 @ 0x1407C04B4 (sub_1407C04B4.c)
 *     sub_1407C1130 @ 0x1407C1130 (sub_1407C1130.c)
 *     sub_1407C2680 @ 0x1407C2680 (sub_1407C2680.c)
 *     sub_1407C9930 @ 0x1407C9930 (sub_1407C9930.c)
 *     sub_14090EF60 @ 0x14090EF60 (sub_14090EF60.c)
 *     sub_14090F3F0 @ 0x14090F3F0 (sub_14090F3F0.c)
 *     sub_14090F750 @ 0x14090F750 (sub_14090F750.c)
 *     sub_14090F9B0 @ 0x14090F9B0 (sub_14090F9B0.c)
 * Callees:
 *     sub_1402D6B0C @ 0x1402D6B0C (sub_1402D6B0C.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14036B680 (ExIsResourceAcquiredSharedLite.c)
 *     sub_14053E958 @ 0x14053E958 (sub_14053E958.c)
 */

ULONG sub_1402ACD00()
{
  __int64 v0; // rax

  sub_1402D6B0C((unsigned int)&unk_140CE1C18, 29919768, 0, 0, (__int64)&qword_14000EFB0, 1);
  v0 = *((_QWORD *)KeGetCurrentThread() + 284);
  if ( v0 )
    return *(_DWORD *)(v0 + 8);
  sub_14053E958();
  return ExIsResourceAcquiredSharedLite((PERESOURCE)&stru_140D31980);
}
