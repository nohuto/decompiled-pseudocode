/*
 * XREFs of sub_140947E30 @ 0x140947E30
 * Callers:
 *     sub_1407F4BB0 @ 0x1407F4BB0 (sub_1407F4BB0.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402DF880 @ 0x1402DF880 (sub_1402DF880.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     sub_14077F2EC @ 0x14077F2EC (sub_14077F2EC.c)
 *     sub_14077FC64 @ 0x14077FC64 (sub_14077FC64.c)
 */

int __fastcall sub_140947E30(unsigned int a1, __int128 *a2, __int64 a3)
{
  __int64 v4; // rax
  void *v5; // rbx
  unsigned int ExplicitScope; // [rsp+48h] [rbp+7h] BYREF
  unsigned int v8; // [rsp+50h] [rbp+Fh] BYREF
  int v9; // [rsp+54h] [rbp+13h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp+17h] BYREF
  __int128 Buffer; // [rsp+60h] [rbp+1Fh] BYREF
  _OWORD v12[2]; // [rsp+70h] [rbp+2Fh] BYREF

  Handle = 0LL;
  v9 = 0;
  ExplicitScope = a1;
  Buffer = 0LL;
  memset(v12, 0, sizeof(v12));
  LODWORD(v4) = sub_14077F2EC(*(__int64 *)&qword_140D00AC0, a3, 17, 0, 131097, 0, (__int64)&Handle, 0LL);
  if ( (int)v4 >= 0 )
  {
    v8 = 32;
    LODWORD(v4) = sub_14077FC64(Handle, L"PortName", &v9, v12, &v8);
    if ( (int)v4 >= 0 )
    {
      Buffer = *a2;
      if ( ExplicitScope == -1 )
      {
        LODWORD(v4) = ZwUpdateWnfStateData(&stru_140037760, &Buffer, 0x30u, 0LL, 0LL, 0, 0);
      }
      else
      {
        v4 = sub_1402DF880(ExplicitScope);
        v5 = (void *)v4;
        if ( v4 )
        {
          ZwUpdateWnfStateData(&stru_140037700, &Buffer, 0x30u, 0LL, &ExplicitScope, 0, 0);
          LODWORD(v4) = ObfDereferenceObject(v5);
        }
      }
    }
  }
  if ( Handle )
    LODWORD(v4) = ZwClose(Handle);
  return v4;
}
