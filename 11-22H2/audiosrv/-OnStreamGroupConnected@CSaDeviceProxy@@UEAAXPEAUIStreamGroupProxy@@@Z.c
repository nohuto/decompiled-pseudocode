/*
 * XREFs of ?OnStreamGroupConnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z @ 0x18004AD20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UpdateFormatAndPeriodicitySensitivity@CSaDeviceProxy@@IEAAXHHH@Z @ 0x18010A78C (-UpdateFormatAndPeriodicitySensitivity@CSaDeviceProxy@@IEAAXHHH@Z.c)
 */

void __fastcall CSaDeviceProxy::OnStreamGroupConnected(CSaDeviceProxy *this, struct IStreamGroupProxy *a2)
{
  int v4; // ebp
  BOOL v5; // edi
  BOOL v6; // ebx

  v4 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a2 + 256LL))(a2)
    || (*(unsigned __int8 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a2 + 248LL))(a2)
    || (*(unsigned __int8 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a2 + 264LL))(a2) )
  {
    v5 = (*(unsigned __int8 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a2 + 264LL))(a2) != 0;
    v6 = (*(unsigned __int8 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a2 + 248LL))(a2) != 0;
    LOBYTE(v4) = (*(unsigned __int8 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a2 + 256LL))(a2) != 0;
    CSaDeviceProxy::UpdateFormatAndPeriodicitySensitivity((CSaDeviceProxy *)((char *)this - 8), v4, v6, v5);
  }
  ++*((_DWORD *)this + 20);
}
