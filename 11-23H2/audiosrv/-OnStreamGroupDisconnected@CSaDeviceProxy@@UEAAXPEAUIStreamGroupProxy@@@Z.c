/*
 * XREFs of ?OnStreamGroupDisconnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z @ 0x18004A3A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UpdateFormatAndPeriodicitySensitivity@CSaDeviceProxy@@IEAAXHHH@Z @ 0x18010A73C (-UpdateFormatAndPeriodicitySensitivity@CSaDeviceProxy@@IEAAXHHH@Z.c)
 */

void __fastcall CSaDeviceProxy::OnStreamGroupDisconnected(CSaDeviceProxy *this, struct IStreamGroupProxy *a2)
{
  int v4; // edi
  int v5; // ebx
  char v6; // al

  if ( (*(unsigned __int8 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a2 + 256LL))(a2)
    || (*(unsigned __int8 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a2 + 248LL))(a2)
    || (*(unsigned __int8 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a2 + 264LL))(a2) )
  {
    v4 = -((*(unsigned __int8 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a2 + 264LL))(a2) != 0);
    v5 = -((*(unsigned __int8 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a2 + 248LL))(a2) != 0);
    v6 = (*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a2 + 256LL))(a2);
    CSaDeviceProxy::UpdateFormatAndPeriodicitySensitivity((CSaDeviceProxy *)((char *)this - 8), -(v6 != 0), v5, v4);
  }
  --*((_DWORD *)this + 20);
}
