/*
 * XREFs of _lambda_a2ae9ed9665e8839b9f8735db1ec2fae_::operator() @ 0x180144A10
 * Callers:
 *     CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_a2ae9ed9665e8839b9f8735db1ec2fae___ @ 0x18013FFCC (CEndpointCharacteristics--FindFirstMatchingPreferredFormat__lambda_a2ae9ed9665e8839b9f8735db1ec2.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x1800E803C (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     _lambda_0271267fe4b1063fcc66a341b5120ffb_::operator() @ 0x180144590 (_lambda_0271267fe4b1063fcc66a341b5120ffb_--operator().c)
 */

__int64 __fastcall lambda_a2ae9ed9665e8839b9f8735db1ec2fae_::operator()(__int64 a1, struct tWAVEFORMATEX *a2, bool *a3)
{
  _QWORD *v4; // rax
  int v7; // ebx
  CConnectorProcessingModeCharacteristics ***v8; // rcx
  bool v10; // [rsp+50h] [rbp+8h] BYREF
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
      v8 = *(CConnectorProcessingModeCharacteristics ****)(a1 + 16);
      v10 = 0;
      lambda_0271267fe4b1063fcc66a341b5120ffb_::operator()(v8, a2, &v10);
      if ( v10 )
      {
        v7 = CloneWaveFormat(a2, **(struct tWAVEFORMATEX ****)(a1 + 24));
        *a3 = v7 >= 0;
      }
    }
  }
  return (unsigned int)v7;
}
