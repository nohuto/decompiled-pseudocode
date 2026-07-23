/*
 * XREFs of sub_14051F9A8 @ 0x14051F9A8
 * Callers:
 *     HalReturnToFirmware @ 0x14050A7E0 (HalReturnToFirmware.c)
 * Callees:
 *     HalRequestIpiSpecifyVector @ 0x140300100 (HalRequestIpiSpecifyVector.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14050A93C @ 0x14050A93C (sub_14050A93C.c)
 *     sub_14051FA44 @ 0x14051FA44 (sub_14051FA44.c)
 */

void __noreturn sub_14051F9A8()
{
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v1; // rdx
  bool v2; // zf

  if ( qword_140C54A88 && dword_140C0BB30 != 1 && !dword_140C54AE8 )
  {
    sub_14051FA44();
    qword_140C4C1F8 = (__int64)sub_140508F00;
    HalRequestIpiSpecifyVector(2, 0LL, 0xD7u);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v1 = *((_QWORD *)CurrentPrcb + 4375);
        v2 = (*(_DWORD *)(v1 + 20) & 0xFFFF0001) == 0;
        *(_DWORD *)(v1 + 20) &= 0xFFFF0001;
        if ( v2 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
    __writecr8(0LL);
    _enable();
    while ( 1 )
      ;
  }
  sub_14050A93C(0LL, 0LL);
}
