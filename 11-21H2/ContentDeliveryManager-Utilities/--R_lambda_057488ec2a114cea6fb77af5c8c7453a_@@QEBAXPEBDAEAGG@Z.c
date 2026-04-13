/*
 * XREFs of ??R_lambda_057488ec2a114cea6fb77af5c8c7453a_@@QEBAXPEBDAEAGG@Z @ 0x1800299F4
 * Callers:
 *     ?Serialize@SerializedFailure@details_abi@wil@@SA_NAEBUFEATURE_ERROR@@PEA_KPEAX_K@Z @ 0x180044DC8 (-Serialize@SerializedFailure@details_abi@wil@@SA_NAEBUFEATURE_ERROR@@PEA_KPEAX_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall _lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()(
        __int64 a1,
        unsigned __int8 *a2,
        unsigned __int16 *a3,
        unsigned __int16 a4)
{
  unsigned __int8 *v7; // rax
  __int64 v8; // r10
  int v9; // edx
  int v10; // ecx
  __int64 v11; // rbx
  _QWORD *v12; // rax
  rsize_t v13; // rbx
  _WORD *v14; // rdx
  unsigned __int16 v15; // cx

  if ( a2 )
  {
    if ( !a4 )
      goto LABEL_8;
    v7 = a2;
    v8 = **(_QWORD **)a1 + a4 - (_QWORD)a2;
    do
    {
      v9 = v7[v8];
      v10 = *v7 - v9;
      if ( v10 )
        break;
      ++v7;
    }
    while ( v9 );
    if ( v10 )
    {
LABEL_8:
      v11 = -1LL;
      do
        ++v11;
      while ( a2[v11] );
      v12 = *(_QWORD **)(a1 + 8);
      v13 = v11 + 1;
      *v12 += v13;
      if ( *v12 <= **(_QWORD **)(a1 + 16) )
      {
        memcpy_s(**(void *const **)(a1 + 24), **(_QWORD **)(a1 + 32) - **(_QWORD **)(a1 + 24), a2, v13);
        v14 = *(_WORD **)(a1 + 24);
        v15 = *v14 - **(_WORD **)a1;
        *(_QWORD *)v14 += v13;
        *a3 = v15;
      }
    }
    else
    {
      *a3 = a4;
    }
  }
}
