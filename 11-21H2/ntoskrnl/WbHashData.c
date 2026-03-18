/*
 * XREFs of WbHashData @ 0x1407E20B8
 * Callers:
 *     sub_1407E2020 @ 0x1407E2020 (sub_1407E2020.c)
 * Callees:
 *     BCryptGetProperty @ 0x1407E21D4 (BCryptGetProperty.c)
 *     BCryptDestroyHash @ 0x1407E2260 (BCryptDestroyHash.c)
 *     BCryptFinishHash @ 0x1407E22B4 (BCryptFinishHash.c)
 *     BCryptCreateHash @ 0x1407E2328 (BCryptCreateHash.c)
 *     BCryptHashData @ 0x1407E23BC (BCryptHashData.c)
 *     WbAlloc @ 0x1407E3010 (WbAlloc.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WbHashData(PUCHAR pbInput, ULONG cbInput, PUCHAR *a3, _DWORD *a4)
{
  NTSTATUS Property; // ebx
  ULONG v9; // r9d
  ULONG v10; // r9d
  ULONG v11; // r9d
  PUCHAR v12; // rdi
  ULONG *pcbResult; // [rsp+20h] [rbp-40h]
  ULONG v15; // [rsp+28h] [rbp-38h]
  ULONG v16; // [rsp+28h] [rbp-38h]
  ULONG v17; // [rsp+30h] [rbp-30h]
  UCHAR pbOutput[4]; // [rsp+40h] [rbp-20h] BYREF
  ULONG v19; // [rsp+44h] [rbp-1Ch] BYREF
  BCRYPT_HASH_HANDLE phHash; // [rsp+48h] [rbp-18h] BYREF
  PUCHAR v21[2]; // [rsp+50h] [rbp-10h] BYREF

  phHash = 0LL;
  v21[0] = 0LL;
  *(_DWORD *)pbOutput = 0;
  v19 = 0;
  if ( *(__int64 *)((char *)&qword_140C5A704 + 4) )
  {
    Property = BCryptCreateHash(
                 *(BCRYPT_ALG_HANDLE *)((char *)&qword_140C5A704 + 4),
                 &phHash,
                 0LL,
                 0,
                 (PUCHAR)pcbResult,
                 v15,
                 v17);
    if ( Property >= 0 )
    {
      Property = BCryptGetProperty(
                   *(BCRYPT_HANDLE *)((char *)&qword_140C5A704 + 4),
                   L"HashDigestLength",
                   pbOutput,
                   v9,
                   &v19,
                   v16);
      if ( Property >= 0 )
      {
        Property = WbAlloc(*(unsigned int *)pbOutput, v21);
        if ( Property < 0 || (Property = BCryptHashData(phHash, pbInput, cbInput, v10), Property < 0) )
        {
          v12 = v21[0];
        }
        else
        {
          v12 = v21[0];
          Property = BCryptFinishHash(phHash, v21[0], *(ULONG *)pbOutput, v11);
          if ( Property >= 0 )
          {
            if ( a3 )
            {
              *a3 = v12;
              v12 = 0LL;
            }
            if ( a4 )
              *a4 = *(_DWORD *)pbOutput;
          }
        }
        if ( v12 )
          ExFreePoolWithTag(v12, 0);
      }
    }
    if ( phHash )
      BCryptDestroyHash(phHash);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)Property;
}
