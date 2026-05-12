/*
 * XREFs of StorPortBusy @ 0x1C0045E10
 * Callers:
 *     sub_1C00B2150 @ 0x1C00B2150 (sub_1C00B2150.c)
 * Callees:
 *     sub_1C000E2EC @ 0x1C000E2EC (sub_1C000E2EC.c)
 *     sub_1C0014D10 @ 0x1C0014D10 (sub_1C0014D10.c)
 *     sub_1C0019E4C @ 0x1C0019E4C (sub_1C0019E4C.c)
 *     sub_1C003EF50 @ 0x1C003EF50 (sub_1C003EF50.c)
 */

char __fastcall StorPortBusy(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  _DWORD *v3; // rax
  __int64 v4; // rdi
  PSLIST_ENTRY v5; // rax
  __int64 v7; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v2 = a2;
  v3 = sub_1C000E2EC(a1);
  v4 = (__int64)v3;
  if ( (qword_1C0093468 & 0x200) != 0 )
    sub_1C0019E4C((__int64)v3, 18, retaddr, (__int64)v3, v2, 0LL, 0LL);
  if ( v4 )
  {
    ++*(_DWORD *)(v4 + 5292);
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 0x20) != 0
      && BYTE1(off_1C0093070->Timer) >= 3u )
    {
      LODWORD(v7) = v2;
      sub_1C003EF50((__int64)off_1C0093070->AttachedDevice, 0x15u, (__int64)&unk_1C0083380, v4, v7);
    }
    v5 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v4 + 1024));
    if ( v5 )
    {
      LODWORD(v5[1].Next) = 134684674;
      LODWORD(v5[2].Next) = 7;
      *((_DWORD *)&v5[2].Next + 2) = v2;
      sub_1C0014D10((char *)(v4 + 944), v5);
      return 1;
    }
    _InterlockedIncrement(&dword_1C0093C54);
    if ( (qword_1C0093468 & 0x800) != 0 )
      sub_1C0019E4C(v4, 22, retaddr, 1030LL, 0LL, 0LL, 0LL);
  }
  return 0;
}
