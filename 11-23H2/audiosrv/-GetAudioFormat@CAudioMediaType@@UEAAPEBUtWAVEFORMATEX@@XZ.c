/*
 * XREFs of ?GetAudioFormat@CAudioMediaType@@UEAAPEBUtWAVEFORMATEX@@XZ @ 0x1800691A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct tWAVEFORMATEX *__fastcall CAudioMediaType::GetAudioFormat(CAudioMediaType *this)
{
  return (const struct tWAVEFORMATEX *)*((_QWORD *)this + 2);
}
