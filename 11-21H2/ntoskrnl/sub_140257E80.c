/*
 * XREFs of sub_140257E80 @ 0x140257E80
 * Callers:
 *     sub_14062F040 @ 0x14062F040 (sub_14062F040.c)
 *     sub_140711614 @ 0x140711614 (sub_140711614.c)
 *     sub_1409EA348 @ 0x1409EA348 (sub_1409EA348.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140257E80(_OWORD *a1)
{
  __int64 result; // rax
  __int128 v2; // [rsp+0h] [rbp-28h]
  __int128 v3; // [rsp+10h] [rbp-18h]

  *(_QWORD *)&v2 = qword_140C534A8;
  *((_QWORD *)&v2 + 1) = qword_140C4F048;
  *(_QWORD *)&v3 = qword_140C53530;
  *((_QWORD *)&v3 + 1) = qword_140C592E8;
  result = 0LL;
  *a1 = v2;
  a1[1] = v3;
  return result;
}
