/*
 * XREFs of ??$ReleaseInterfaceNoNULL@UID3D11Texture2D@@@@YAXPEAUID3D11Texture2D@@@Z @ 0x18001B16C
 * Callers:
 *     ?Uninitialize@CDxDevice@DirectComposition@@IEAAXXZ @ 0x18009BE60 (-Uninitialize@CDxDevice@DirectComposition@@IEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ReleaseInterfaceNoNULL<ID3D11Texture2D>(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return result;
}
