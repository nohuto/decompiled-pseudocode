/*
 * XREFs of ?Release@LampArrayRawInputProvider@@UEAAKXZ @ 0x180019E50
 * Callers:
 *     ?Create@LampArrayRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x18004AED0 (-Create@LampArrayRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 *     ?WorkerThreadProcThunk@LampArrayRawInputProvider@@CAKPEAX@Z @ 0x18004C630 (-WorkerThreadProcThunk@LampArrayRawInputProvider@@CAKPEAX@Z.c)
 *     ?EnsureLampArrayThreadState@LampArrayRawInputProvider@@AEAAJXZ @ 0x1800627B4 (-EnsureLampArrayThreadState@LampArrayRawInputProvider@@AEAAJXZ.c)
 *     ?Release@LampArrayRawInputProvider@@W7EAAKXZ @ 0x18007A010 (-Release@LampArrayRawInputProvider@@W7EAAKXZ.c)
 *     ?Release@LampArrayRawInputProvider@@WBA@EAAKXZ @ 0x18007A030 (-Release@LampArrayRawInputProvider@@WBA@EAAKXZ.c)
 *     ?Release@LampArrayRawInputProvider@@WBI@EAAKXZ @ 0x18007A050 (-Release@LampArrayRawInputProvider@@WBI@EAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Shutdown@LampArrayRawInputProvider@@AEAAXXZ @ 0x1800F87B8 (-Shutdown@LampArrayRawInputProvider@@AEAAXXZ.c)
 */

__int64 __fastcall LampArrayRawInputProvider::Release(LampArrayRawInputProvider *this)
{
  char *v1; // rdi
  unsigned __int32 v2; // ebx
  __int64 v4; // rax
  __int64 v5; // rax

  v1 = (char *)this + 24;
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 8);
  if ( v2 )
  {
    if ( v2 == 1 )
      LampArrayRawInputProvider::Shutdown((ULONG_PTR)this);
  }
  else
  {
    v4 = *(_QWORD *)v1;
    *((_DWORD *)this + 8) = 1;
    (*(void (__fastcall **)(char *))(v4 + 32))((char *)this + 24);
    v5 = *(_QWORD *)v1;
    *((_DWORD *)v1 + 2) = 0;
    (*(void (__fastcall **)(char *, __int64))(v5 + 24))(v1, 1LL);
  }
  return v2;
}
