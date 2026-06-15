/*
 * XREFs of ??1CAudioMediaType@@MEAA@XZ @ 0x140031190
 * Callers:
 *     ??_ECAudioMediaType@@MEAAPEAXI@Z @ 0x1400311C0 (--_ECAudioMediaType@@MEAAPEAXI@Z.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x140031214 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x140031820 (-Release@CAudioMediaType@@UEAAKXZ.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x14002FC80 (--_V@YAXPEAX@Z.c)
 */

void __fastcall CAudioMediaType::~CAudioMediaType(void **this)
{
  *this = &CAudioMediaType::`vftable';
  operator delete[](this[2]);
  this[2] = 0LL;
}
