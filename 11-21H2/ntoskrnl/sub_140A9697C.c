/*
 * XREFs of sub_140A9697C @ 0x140A9697C
 * Callers:
 *     sub_140A82328 @ 0x140A82328 (sub_140A82328.c)
 *     sub_140A82480 @ 0x140A82480 (sub_140A82480.c)
 * Callees:
 *     ExAllocatePool3 @ 0x140A6E1B0 (ExAllocatePool3.c)
 *     sub_140A97308 @ 0x140A97308 (sub_140A97308.c)
 *     sub_140A973DC @ 0x140A973DC (sub_140A973DC.c)
 */

__int64 sub_140A9697C()
{
  __int64 v0; // rax
  __int64 result; // rax

  qword_140C1ACD0 = 0LL;
  v0 = (unsigned int)dword_140D4E01C;
  qword_140D57760 = 60000LL * (unsigned int)dword_140C0C838;
  if ( (unsigned int)dword_140D4E01C > 0x101000 )
  {
    v0 = 1052672LL;
    dword_140D4E01C = 1052672;
  }
  qword_140D57768 = ExAllocatePool3(64LL, 72 * v0, 0x74746C46u, (__int64)&byte_140C5B0E0, 1u);
  sub_140A973DC();
  result = sub_140A97308();
  dword_140D57600 = 1;
  return result;
}
