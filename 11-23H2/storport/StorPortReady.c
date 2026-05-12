/*
 * XREFs of StorPortReady @ 0x1C0046E60
 * Callers:
 *     sub_1C00B26B0 @ 0x1C00B26B0 (sub_1C00B26B0.c)
 * Callees:
 *     sub_1C000E2EC @ 0x1C000E2EC (sub_1C000E2EC.c)
 *     sub_1C0014D10 @ 0x1C0014D10 (sub_1C0014D10.c)
 *     sub_1C0019E4C @ 0x1C0019E4C (sub_1C0019E4C.c)
 *     sub_1C003EF0C @ 0x1C003EF0C (sub_1C003EF0C.c)
 */

char __fastcall StorPortReady(__int64 a1)
{
  _DWORD *v1; // rax
  __int64 v2; // rdi
  PSLIST_ENTRY v3; // rax
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v1 = sub_1C000E2EC(a1);
  v2 = (__int64)v1;
  if ( (qword_1C0093468 & 0x200) != 0 )
    sub_1C0019E4C((__int64)v1, 19, retaddr, (__int64)v1, 0LL, 0LL, 0LL);
  if ( v2 )
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 0x20) != 0
      && BYTE1(off_1C0093070->Timer) >= 3u )
    {
      sub_1C003EF0C((__int64)off_1C0093070->AttachedDevice, 0x16u, (__int64)&unk_1C0083380, v2);
    }
    v3 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v2 + 1024));
    if ( v3 )
    {
      LODWORD(v3[1].Next) = 134684674;
      LODWORD(v3[2].Next) = 8;
      sub_1C0014D10((char *)(v2 + 944), v3);
      return 1;
    }
    _InterlockedIncrement(&dword_1C0093C54);
    if ( (qword_1C0093468 & 0x800) != 0 )
      sub_1C0019E4C(v2, 22, retaddr, 1095LL, 0LL, 0LL, 0LL);
  }
  return 0;
}
