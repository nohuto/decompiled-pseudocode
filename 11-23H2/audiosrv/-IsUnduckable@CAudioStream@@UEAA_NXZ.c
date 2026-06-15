/*
 * XREFs of ?IsUnduckable@CAudioStream@@UEAA_NXZ @ 0x18004E9C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CAudioStream::IsUnduckable(CAudioStream *this)
{
  return *((_BYTE *)this + 26);
}
