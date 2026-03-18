/*
 * XREFs of ??1XLATEMEMOBJ@@QEAA@XZ @ 0x1C02BE384
 * Callers:
 *     NtGdiUpdateColors @ 0x1C02B6B20 (NtGdiUpdateColors.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C002C6B0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 */

void __fastcall XLATEMEMOBJ::~XLATEMEMOBJ(XLATEMEMOBJ *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    FreeThreadBufferWithTag(v2);
    *(_QWORD *)this = 0LL;
  }
  EXLATEOBJ::vAltUnlock(this);
}
