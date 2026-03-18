/*
 * XREFs of NtDCompositionSetBlurredWallpaperSurface @ 0x1C0211F70
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C00163FC (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C00164EC (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ?SetBlurredWallpaperSurface@CConnection@DirectComposition@@QEAAJPEAXPEBUtagRECT@@@Z @ 0x1C02135BC (-SetBlurredWallpaperSurface@CConnection@DirectComposition@@QEAAJPEAXPEBUtagRECT@@@Z.c)
 */

__int64 __fastcall NtDCompositionSetBlurredWallpaperSurface(void *a1, struct tagRECT *a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  DirectComposition::CConnection *DefaultConnection; // rax
  DirectComposition::CConnection *v9; // rdi
  unsigned int v10; // edx
  struct tagRECT v12; // [rsp+40h] [rbp-28h] BYREF

  v3 = 0;
  v12 = 0LL;
  if ( a2 )
  {
    if ( &a2[1] < a2 || (unsigned __int64)&a2[1] > MmUserProbeAddress )
      a2 = (struct tagRECT *)MmUserProbeAddress;
    v12 = *a2;
  }
  else if ( a1 )
  {
    v3 = -1073741811;
  }
  if ( v3 >= 0 )
  {
    KeEnterCriticalRegion();
    DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(v5, v4, v6, v7);
    v9 = DefaultConnection;
    if ( DefaultConnection )
    {
      v3 = DirectComposition::CConnection::SetBlurredWallpaperSurface(DefaultConnection, a1, &v12);
      DirectComposition::CConnection::Release(v9, v10);
    }
    else
    {
      v3 = -1073741790;
    }
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v3;
}
