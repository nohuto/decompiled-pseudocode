/*
 * XREFs of sub_180022FFC @ 0x180022FFC
 * Callers:
 *     sub_180023150 @ 0x180023150 (sub_180023150.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001266C @ 0x18001266C (sub_18001266C.c)
 *     sub_1800230E0 @ 0x1800230E0 (sub_1800230E0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180022FFC(__int64 a1)
{
  REGHANDLE v2; // rcx
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rdx

  *(_QWORD *)a1 = &Spectre::Utils::TelemetryTraceLoggerWin::`vftable';
  if ( _InterlockedExchangeAdd64(
         (volatile signed __int64 *)sub_18001266C((__int64)&unk_1801F74D0),
         0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v2 = qword_1801EA1E0;
    dword_1801EA1C0 = 0;
    qword_1801EA1E0 = 0LL;
    EventUnregister(v2);
  }
  if ( *(_QWORD *)(a1 + 112) )
    o__aligned_free();
  v3 = *(_QWORD *)(a1 + 104);
  if ( v3 >= 0x10 )
    sub_180010884(*(char **)(a1 + 80), v3 + 1);
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 15LL;
  *(_BYTE *)(a1 + 80) = 0;
  v4 = *(_QWORD *)(a1 + 72);
  if ( v4 >= 0x10 )
    sub_180010884(*(char **)(a1 + 48), v4 + 1);
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 15LL;
  *(_BYTE *)(a1 + 48) = 0;
  sub_180010910(a1 + 32);
  sub_1800230E0((void **)(a1 + 24));
  sub_1800230E0((void **)(a1 + 16));
  return sub_1800230E0((void **)(a1 + 8));
}
