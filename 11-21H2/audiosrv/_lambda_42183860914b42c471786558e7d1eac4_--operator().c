/*
 * XREFs of _lambda_42183860914b42c471786558e7d1eac4_::operator() @ 0x180144780
 * Callers:
 *     CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_42183860914b42c471786558e7d1eac4___ @ 0x18013FCF8 (CEndpointCharacteristics--FindFirstMatchingPreferredFormat__lambda_42183860914b42c471786558e7d1e.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x1800E803C (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     _lambda_cc1fbeea7d61a5d688c074f297f6e07b_::operator() @ 0x180144AB8 (_lambda_cc1fbeea7d61a5d688c074f297f6e07b_--operator().c)
 */

__int64 __fastcall lambda_42183860914b42c471786558e7d1eac4_::operator()(
        __int64 a1,
        const struct tWAVEFORMATEX *a2,
        bool *a3)
{
  _QWORD *v4; // rax
  int v7; // ebx
  int v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0;
  v4 = *(_QWORD **)a1;
  *a3 = 0;
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, int *))(*(_QWORD *)*v4 + 24LL))(
         *v4,
         **(_QWORD **)(a1 + 8),
         ***(unsigned int ***)(a1 + 8),
         &v9);
  if ( v7 >= 0 && v9 && (unsigned __int8)lambda_cc1fbeea7d61a5d688c074f297f6e07b_::operator()(*(_QWORD *)(a1 + 16), a2) )
  {
    v7 = CloneWaveFormat(a2, **(struct tWAVEFORMATEX ****)(a1 + 24));
    *a3 = v7 >= 0;
  }
  return (unsigned int)v7;
}
