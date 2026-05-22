/*
 * XREFs of ?IsSameByLuid@DWMInputTarget@@UEBA_NPEAX@Z @ 0x1800E7880
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLuid@LegacyInputSinkData@@QEBAAEBU_LUID@@XZ @ 0x18004E090 (-GetLuid@LegacyInputSinkData@@QEBAAEBU_LUID@@XZ.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x180086B08 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ??8@YA_NAEBU_LUID@@0@Z @ 0x1800E6D20 (--8@YA_NAEBU_LUID@@0@Z.c)
 */

bool __fastcall DWMInputTarget::IsSameByLuid(DWMInputTarget *this, void *a2)
{
  __int64 v2; // rax
  struct _LUID *Luid; // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 14);
  if ( !v2 || !*(_BYTE *)(v2 + 480) || (int)NtQueryCompositionInputSinkLuid(a2, &v6) < 0 )
    return 0;
  if ( !*(_BYTE *)(*((_QWORD *)this + 14) + 480LL) )
    std::_Throw_bad_optional_access();
  Luid = (struct _LUID *)LegacyInputSinkData::GetLuid((LegacyInputSinkData *)(*((_QWORD *)this + 14) + 48LL));
  return operator==(&v6, Luid);
}
