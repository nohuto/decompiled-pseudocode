/*
 * XREFs of ?Attach@?$ComPtr@V?$ReferenceImpl@M@WRL2@Microsoft@@@WRL@Microsoft@@QEAAXPEAV?$ReferenceImpl@M@WRL2@3@@Z @ 0x180137090
 * Callers:
 *     ??$MakeAndInitialize@V?$ReferenceImpl@M@WRL2@Microsoft@@V123@AEAM@Details@WRL@Microsoft@@YAJPEAPEAV?$ReferenceImpl@M@WRL2@2@AEAM@Z @ 0x180134C78 (--$MakeAndInitialize@V-$ReferenceImpl@M@WRL2@Microsoft@@V123@AEAM@Details@WRL@Microsoft@@YAJPEAP.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Microsoft::WRL2::ReferenceImpl<float>>::Attach(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *a1 = a2;
  return result;
}
