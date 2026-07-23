/*
 * XREFs of sub_140A9DA38 @ 0x140A9DA38
 * Callers:
 *     sub_140A9DE70 @ 0x140A9DE70 (sub_140A9DE70.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x1402DECF0 (RtlDeleteElementGenericTableAvl.c)
 *     sub_140601F88 @ 0x140601F88 (sub_140601F88.c)
 *     sub_140601FCC @ 0x140601FCC (sub_140601FCC.c)
 *     sub_140602068 @ 0x140602068 (sub_140602068.c)
 *     sub_14060207C @ 0x14060207C (sub_14060207C.c)
 *     sub_1406020E8 @ 0x1406020E8 (sub_1406020E8.c)
 */

BOOLEAN __fastcall sub_140A9DA38(__int64 *a1)
{
  __int64 v1; // rax
  BOOLEAN v2; // bl
  __int128 v4; // [rsp+20h] [rbp-38h] BYREF
  _QWORD Buffer[5]; // [rsp+30h] [rbp-28h] BYREF

  v1 = *a1;
  Buffer[2] = 0LL;
  Buffer[0] = v1;
  Buffer[1] = a1[1];
  v4 = 0LL;
  if ( !dword_140D57580 || !dword_140D5757C )
    return 0;
  sub_140602068((__int64)&v4);
  sub_14060207C((__int64)&v4);
  sub_140601F88((__int64)&stru_140D58C80, (__int64)&v4);
  v2 = RtlDeleteElementGenericTableAvl(&stru_140D58C80, Buffer);
  if ( !v2 )
    ++dword_140D576B0;
  sub_1406020E8((__int64)&stru_140D58C80, (__int64)&v4);
  sub_140601FCC((__int64)&v4);
  return v2;
}
