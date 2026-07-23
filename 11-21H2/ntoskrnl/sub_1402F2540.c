/*
 * XREFs of sub_1402F2540 @ 0x1402F2540
 * Callers:
 *     sub_1402F1DC0 @ 0x1402F1DC0 (sub_1402F1DC0.c)
 *     sub_140423360 @ 0x140423360 (sub_140423360.c)
 *     sub_1404257E0 @ 0x1404257E0 (sub_1404257E0.c)
 *     sub_140425B20 @ 0x140425B20 (sub_140425B20.c)
 *     sub_140425E60 @ 0x140425E60 (sub_140425E60.c)
 *     sub_1404261A0 @ 0x1404261A0 (sub_1404261A0.c)
 *     sub_1404264E0 @ 0x1404264E0 (sub_1404264E0.c)
 *     sub_140427360 @ 0x140427360 (sub_140427360.c)
 *     sub_140428220 @ 0x140428220 (sub_140428220.c)
 *     sub_140428B10 @ 0x140428B10 (sub_140428B10.c)
 *     sub_14042CF40 @ 0x14042CF40 (sub_14042CF40.c)
 *     sub_140430000 @ 0x140430000 (sub_140430000.c)
 *     sub_140430F00 @ 0x140430F00 (sub_140430F00.c)
 * Callees:
 *     sub_14054EA40 @ 0x14054EA40 (sub_14054EA40.c)
 */

__int64 __fastcall sub_1402F2540(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // rdx

  result = *(unsigned __int16 *)(a1 + 368);
  v2 = *(_QWORD *)(a1 + 360);
  if ( (_WORD)result == 51 )
  {
    result = qword_140D071B8;
    if ( v2 > qword_140D071B8 && v2 <= qword_140D071A8 )
      *(_QWORD *)(a1 + 360) = qword_140D071B8;
  }
  else if ( (_WORD)result == 16 && v2 > (unsigned __int64)&loc_140429887 )
  {
    result = (__int64)&loc_1404298A0;
    if ( v2 <= (unsigned __int64)&loc_1404298A0 )
    {
      *(_QWORD *)(a1 + 360) = &loc_140429887;
      if ( (_BYTE)byte_140E01841 )
        return sub_14054EA40(3, *(_QWORD *)(a1 + 216), 0, 0, (__int64)&loc_140429887, 4);
    }
  }
  return result;
}
