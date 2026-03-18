/*
 * XREFs of ??1EPALOBJ@@QEAA@XZ @ 0x1C015EFF0
 * Callers:
 *     NtGdiResizePalette @ 0x1C02B6830 (NtGdiResizePalette.c)
 * Callees:
 *     <none>
 */

void __fastcall EPALOBJ::~EPALOBJ(EPALOBJ *this)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)this;
  if ( v1 )
    DEC_SHARE_REF_CNT(v1);
}
