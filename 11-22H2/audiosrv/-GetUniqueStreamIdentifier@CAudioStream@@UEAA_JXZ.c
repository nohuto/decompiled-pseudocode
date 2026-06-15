/*
 * XREFs of ?GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ @ 0x18004E970
 * Callers:
 *     ?GetUniqueStreamIdentifier@CAudioStream@@W7EAA_JXZ @ 0x180077200 (-GetUniqueStreamIdentifier@CAudioStream@@W7EAA_JXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::GetUniqueStreamIdentifier(CAudioStream *this)
{
  return *((_QWORD *)this + 51);
}
