/*
 * XREFs of CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_cc1fbeea7d61a5d688c074f297f6e07b___ @ 0x18013FB9C
 * Callers:
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_cc1fbeea7d61a5d688c074f297f6e07b___ @ 0x18014164C (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_cc1fbeea7d61a5d688c074f297f6e07b___.c)
 * Callees:
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x1800E803C (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     _lambda_cc1fbeea7d61a5d688c074f297f6e07b_::operator() @ 0x180144AB8 (_lambda_cc1fbeea7d61a5d688c074f297f6e07b_--operator().c)
 */

__int64 __fastcall CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_cc1fbeea7d61a5d688c074f297f6e07b___(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        struct tWAVEFORMATEX **a4)
{
  unsigned int v4; // ebx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  const struct tWAVEFORMATEX *v12; // rdi
  int v13; // edx
  __int64 v14; // xmm0_8
  __int128 v16; // [rsp+20h] [rbp-38h] BYREF
  __int16 v17; // [rsp+30h] [rbp-28h]

  v4 = 0;
  if ( a3 )
  {
    v7 = *((_QWORD *)a3 + 4) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
    if ( !v7 )
      v7 = *((_QWORD *)a3 + 5) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
    if ( !v7 )
      goto LABEL_8;
    v8 = *((_QWORD *)a3 + 4) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
    if ( !v8 )
      v8 = *((_QWORD *)a3 + 5) - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
    if ( !v8 )
    {
LABEL_8:
      v9 = *((_QWORD *)a3 + 6) - *(_QWORD *)&GUID_05589f81_c356_11ce_bf01_00aa0055595a.Data1;
      if ( !v9 )
        v9 = *((_QWORD *)a3 + 7) - *(_QWORD *)GUID_05589f81_c356_11ce_bf01_00aa0055595a.Data4;
      if ( !v9 && *a3 > 0x40 )
      {
        v10 = *a3 - 64LL;
        if ( v10 <= 0x28 )
        {
          v11 = 0x10000044000LL;
          if ( _bittest64(&v11, v10) )
          {
            v12 = (const struct tWAVEFORMATEX *)(a3 + 16);
            v17 = 0;
            v16 = 0LL;
            if ( v10 == 14 )
            {
              v13 = *((unsigned __int16 *)a3 + 38);
              v14 = *(_QWORD *)&v12->wFormatTag;
              v12 = (const struct tWAVEFORMATEX *)&v16;
              DWORD2(v16) = a3[18];
              WORD6(v16) = v13;
              *(_QWORD *)&v16 = v14;
              v17 = 0;
              v10 = 18LL;
              HIWORD(v16) = 8 * v13 / (unsigned int)WORD1(v14);
            }
            if ( v10 >= (unsigned __int64)v12->cbSize + 18
              && (unsigned __int8)lambda_cc1fbeea7d61a5d688c074f297f6e07b_::operator()(a2, v12) )
            {
              return (unsigned int)CloneWaveFormat(v12, a4);
            }
          }
        }
      }
    }
  }
  return v4;
}
