/*
 * XREFs of _lambda_c7c9c295e9eb20a9e0b33ea00abada77_::operator() @ 0x1800052E0
 * Callers:
 *     CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_c7c9c295e9eb20a9e0b33ea00abada77___ @ 0x18000518C (CEndpointCharacteristics--FindFirstMatchingPreferredFormat__lambda_c7c9c295e9eb20a9e0b33ea00abad.c)
 * Callees:
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180020D54 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     _lambda_5789e60fd85b99cd3c89d9f341e01d71_::operator() @ 0x180041F80 (_lambda_5789e60fd85b99cd3c89d9f341e01d71_--operator().c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_c7c9c295e9eb20a9e0b33ea00abada77_::operator()(
        __int64 a1,
        const struct tWAVEFORMATEX *a2,
        bool *a3)
{
  _QWORD *v4; // rax
  int v7; // ebx
  __int64 v9; // rcx
  char v10; // [rsp+50h] [rbp+8h] BYREF
  int v11; // [rsp+60h] [rbp+18h] BYREF

  v11 = 0;
  v4 = *(_QWORD **)a1;
  *a3 = 0;
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, int *))(*(_QWORD *)*v4 + 24LL))(
         *v4,
         **(_QWORD **)(a1 + 8),
         ***(unsigned int ***)(a1 + 8),
         &v11);
  if ( v7 >= 0 )
  {
    if ( v11 )
    {
      v9 = *(_QWORD *)(a1 + 16);
      v10 = 0;
      lambda_5789e60fd85b99cd3c89d9f341e01d71_::operator()(v9, a2, &v10);
      if ( v10 )
      {
        v7 = CloneWaveFormat(a2, **(struct tWAVEFORMATEX ****)(a1 + 24));
        *a3 = v7 >= 0;
      }
    }
  }
  return (unsigned int)v7;
}
