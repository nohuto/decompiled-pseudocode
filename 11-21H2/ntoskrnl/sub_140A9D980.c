/*
 * XREFs of sub_140A9D980 @ 0x140A9D980
 * Callers:
 *     sub_140A9DE70 @ 0x140A9DE70 (sub_140A9DE70.c)
 * Callees:
 *     RtlInsertElementGenericTableAvl @ 0x1402DEF50 (RtlInsertElementGenericTableAvl.c)
 *     sub_140601F88 @ 0x140601F88 (sub_140601F88.c)
 *     sub_140601FCC @ 0x140601FCC (sub_140601FCC.c)
 *     sub_140602068 @ 0x140602068 (sub_140602068.c)
 *     sub_14060207C @ 0x14060207C (sub_14060207C.c)
 *     sub_1406020E8 @ 0x1406020E8 (sub_1406020E8.c)
 */

BOOLEAN __fastcall sub_140A9D980(_QWORD *a1, __int64 a2)
{
  BOOLEAN result; // al
  BOOLEAN v3; // bl
  __int128 v4; // [rsp+20h] [rbp-30h] BYREF
  _QWORD Buffer[4]; // [rsp+30h] [rbp-20h] BYREF
  BOOLEAN NewElement; // [rsp+60h] [rbp+10h] BYREF

  Buffer[0] = *a1;
  Buffer[1] = a1[1];
  result = dword_140D57580;
  NewElement = 0;
  Buffer[2] = a2;
  v4 = 0LL;
  if ( dword_140D57580 )
  {
    sub_140602068((__int64)&v4);
    sub_14060207C((__int64)&v4);
    sub_140601F88((__int64)&stru_140D58C80, (__int64)&v4);
    RtlInsertElementGenericTableAvl(&stru_140D58C80, Buffer, 0x18u, &NewElement);
    v3 = NewElement;
    if ( !NewElement )
    {
      v3 = 0;
      ++dword_140D576B4;
    }
    sub_1406020E8((__int64)&stru_140D58C80, (__int64)&v4);
    sub_140601FCC((__int64)&v4);
    return v3;
  }
  return result;
}
