/*
 * XREFs of ?SetColor@CDWriteText@@UEAAXK@Z @ 0x1800561B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDWriteText::SetColor(CDWriteText *this, int a2)
{
  if ( a2 != *((_DWORD *)this + 60) )
  {
    *((_DWORD *)this + 60) = a2;
    (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this - 34) + 24LL))((char *)this - 272, 4096LL);
  }
}
