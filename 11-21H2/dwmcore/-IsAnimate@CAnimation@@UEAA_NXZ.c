/*
 * XREFs of ?IsAnimate@CAnimation@@UEAA_NXZ @ 0x1800E5000
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CAnimation::IsAnimate(CAnimation *this)
{
  char v2; // al
  char v3; // dl
  char v4; // al

  v2 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 8) + 192LL))((char *)this - 64);
  v3 = 0;
  if ( !v2 )
  {
    if ( *((_DWORD *)this + 8) )
    {
      v4 = *((_BYTE *)this + 56);
      if ( (v4 & 4) == 0 )
        return (v4 & 0x11) != 17;
    }
  }
  return v3;
}
