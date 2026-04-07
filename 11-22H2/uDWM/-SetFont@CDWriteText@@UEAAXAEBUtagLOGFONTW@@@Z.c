/*
 * XREFs of ?SetFont@CDWriteText@@UEAAXAEBUtagLOGFONTW@@@Z @ 0x180054620
 * Callers:
 *     <none>
 * Callees:
 *     memcmp_0 @ 0x18006634C (memcmp_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDWriteText::SetFont(CDWriteText *this, const struct tagLOGFONTW *a2)
{
  if ( memcmp_0((char *)this + 56, a2, 0x5CuLL) )
  {
    *(_OWORD *)((char *)this + 56) = *(_OWORD *)&a2->lfHeight;
    *(_OWORD *)((char *)this + 72) = *(_OWORD *)&a2->lfWeight;
    *(_OWORD *)((char *)this + 88) = *(_OWORD *)&a2->lfFaceName[2];
    *(_OWORD *)((char *)this + 104) = *(_OWORD *)&a2->lfFaceName[10];
    *(_OWORD *)((char *)this + 120) = *(_OWORD *)&a2->lfFaceName[18];
    *((_QWORD *)this + 17) = *(_QWORD *)&a2->lfFaceName[26];
    *((_DWORD *)this + 36) = *(_DWORD *)&a2->lfFaceName[30];
    (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this - 34) + 24LL))((char *)this - 272, 4096LL);
  }
}
