/*
 * XREFs of GetRecordFromWnf @ 0x18013A0D0
 * Callers:
 *     ?OnExclusiveModeChange@CExclusiveModeListener@@AEAAXPEBUApplicationSpatialInformationWnf@@@Z @ 0x18013A544 (-OnExclusiveModeChange@CExclusiveModeListener@@AEAAXPEBUApplicationSpatialInformationWnf@@@Z.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F1010 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall GetRecordFromWnf(unsigned int *a1, unsigned int a2, _QWORD *a3, const char *a4)
{
  __int64 result; // rax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  try
  {
    *a3 = 0LL;
    if ( a2 >= *a1 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        140LL,
        (__int64)"onecoreuap\\internal\\AVCore\\inc\\ApplicationSpatialInformationWnf.h",
        (const char *)0x80070057LL,
        v5);
    *a3 = (char *)a1 + a1[18] * a2 + 76;
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x92,
                           (int)"onecoreuap\\internal\\AVCore\\inc\\ApplicationSpatialInformationWnf.h",
                           a4);
  }
  return result;
}
