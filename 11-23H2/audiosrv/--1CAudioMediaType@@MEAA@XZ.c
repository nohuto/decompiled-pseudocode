/*
 * XREFs of ??1CAudioMediaType@@MEAA@XZ @ 0x180068FF0
 * Callers:
 *     ??_ECAudioMediaType@@MEAAPEAXI@Z @ 0x180069020 (--_ECAudioMediaType@@MEAAPEAXI@Z.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x180069074 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x180069690 (-Release@CAudioMediaType@@UEAAKXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 */

void __fastcall CAudioMediaType::~CAudioMediaType(void **this)
{
  *this = &CAudioMediaType::`vftable';
  operator delete(this[2]);
  this[2] = 0LL;
}
