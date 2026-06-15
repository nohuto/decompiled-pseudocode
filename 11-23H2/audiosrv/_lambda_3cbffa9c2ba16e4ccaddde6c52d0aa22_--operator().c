/*
 * XREFs of _lambda_3cbffa9c2ba16e4ccaddde6c52d0aa22_::operator() @ 0x180025080
 * Callers:
 *     ?DetermineCurrentEffectPack@CEndpointCharacteristics@@QEAAJXZ @ 0x180023BF4 (-DetermineCurrentEffectPack@CEndpointCharacteristics@@QEAAJXZ.c)
 *     wil::details::lambda_call__lambda_3cbffa9c2ba16e4ccaddde6c52d0aa22___::_lambda_call__lambda_3cbffa9c2ba16e4ccaddde6c52d0aa22___ @ 0x18014A5B8 (wil--details--lambda_call__lambda_3cbffa9c2ba16e4ccaddde6c52d0aa22___--_lambda_call__lambda_3cbf.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180025144 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 */

void __fastcall lambda_3cbffa9c2ba16e4ccaddde6c52d0aa22_::operator()(_QWORD *a1)
{
  __int64 v1; // r8
  _DWORD *v2; // r10
  int *v3; // rax
  int v4; // edx
  __int64 v5; // rax
  const WCHAR *v6; // rcx
  __int64 v7; // rax
  int v8; // edx
  int v9; // [rsp+30h] [rbp-19h] BYREF
  _BYTE v10[32]; // [rsp+40h] [rbp-9h] BYREF
  const WCHAR *v11; // [rsp+60h] [rbp+17h]
  int v12; // [rsp+68h] [rbp+1Fh]
  int v13; // [rsp+6Ch] [rbp+23h]
  __int64 v14; // [rsp+70h] [rbp+27h]
  __int64 v15; // [rsp+78h] [rbp+2Fh]
  int *v16; // [rsp+80h] [rbp+37h]
  __int64 v17; // [rsp+88h] [rbp+3Fh]

  v1 = *a1;
  v2 = *(_DWORD **)(*a1 + 8288LL);
  if ( *v2 > 5u )
  {
    v3 = (int *)a1[2];
    v17 = 4LL;
    v15 = 16LL;
    v4 = *v3;
    v5 = a1[1];
    v9 = v4;
    v6 = *(const WCHAR **)(v1 + 48);
    v16 = &v9;
    v14 = v5;
    if ( v6 )
    {
      v7 = -1LL;
      do
        ++v7;
      while ( v6[v7] );
      v8 = 2 * v7 + 2;
    }
    else
    {
      v6 = &String2;
      v8 = 2;
    }
    v11 = v6;
    v12 = v8;
    v13 = 0;
    tlgWriteTransfer_EtwEventWriteTransfer((_DWORD)v2, (unsigned int)&unk_180196445, 0, 0, 5, (__int64)v10);
  }
}
