/*
 * XREFs of ?_GetMinWidthSafe@CAppLayoutItem@@AEAAHPEBULAYOUT_ENVIRONMENT_DETAILS@@H@Z @ 0x18079829C
 * Callers:
 *     ?GetMinWidthSafe@CAppLayoutItem@@UEAAHPEBULAYOUT_ENVIRONMENT_DETAILS@@H@Z @ 0x1807979B0 (-GetMinWidthSafe@CAppLayoutItem@@UEAAHPEBULAYOUT_ENVIRONMENT_DETAILS@@H@Z.c)
 * Callees:
 *     ??$As@UIWin32ApplicationView@@@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIWin32ApplicationView@@@WRL@Microsoft@@@Details@12@@Z @ 0x180059CE4 (--$As@UIWin32ApplicationView@@@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAppLayoutItem::_GetMinWidthSafe(
        CAppLayoutItem *this,
        const struct LAYOUT_ENVIRONMENT_DETAILS *a2,
        signed int a3)
{
  int v5; // ecx
  unsigned int v7; // ebx
  __int64 *v8; // rax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v5 = *((_DWORD *)a2 + 4);
  v7 = 5 * v5 + 2 * (v5 / 100);
  if ( *((_DWORD *)this + 10) == 1 )
  {
    if ( (*((_BYTE *)this + 24) & 2) != 0 )
    {
      v7 = a3 / 2;
      if ( a3 / 2 >= MulDiv(360, v5, 100) )
        return (unsigned int)MulDiv(360, *((_DWORD *)a2 + 4), 100);
    }
    else
    {
      v10 = 0LL;
      v8 = Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v10, &v11);
      if ( (int)Microsoft::WRL::ComPtr<IApplicationView>::As<IWin32ApplicationView>(
                  (__int64 (__fastcall ****)(_QWORD, GUID *, __int64))this + 6,
                  *v8) >= 0 )
        v7 = (*(__int64 (__fastcall **)(char *, const struct LAYOUT_ENVIRONMENT_DETAILS *, _QWORD))(*((_QWORD *)this + 1)
                                                                                                  + 72LL))(
               (char *)this + 8,
               a2,
               (unsigned int)a3);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v10);
    }
  }
  return v7;
}
