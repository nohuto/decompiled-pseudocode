/*
 * XREFs of WbHashData @ 0x140761FB0
 * Callers:
 *     sub_140761F18 @ 0x140761F18 (sub_140761F18.c)
 * Callees:
 *     BCryptGetProperty @ 0x1407620D0 (BCryptGetProperty.c)
 *     BCryptCreateHash @ 0x14076215C (BCryptCreateHash.c)
 *     BCryptDestroyHash @ 0x1407621F0 (BCryptDestroyHash.c)
 *     BCryptFinishHash @ 0x140762244 (BCryptFinishHash.c)
 *     BCryptHashData @ 0x1407622B8 (BCryptHashData.c)
 *     WbAlloc @ 0x140763B78 (WbAlloc.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WbHashData(PUCHAR pbInput, ULONG cbInput, PUCHAR *a3, _DWORD *a4)
{
  PUCHAR v4; // rdi
  NTSTATUS Hash; // ebx
  ULONG v10; // r9d
  ULONG v11; // r9d
  ULONG v12; // r9d
  ULONG *pcbResult; // [rsp+20h] [rbp-40h]
  ULONG v15; // [rsp+28h] [rbp-38h]
  ULONG v16; // [rsp+28h] [rbp-38h]
  ULONG v17; // [rsp+30h] [rbp-30h]
  UCHAR pbOutput[4]; // [rsp+40h] [rbp-20h] BYREF
  ULONG v19[3]; // [rsp+44h] [rbp-1Ch] BYREF
  PUCHAR v20[2]; // [rsp+50h] [rbp-10h] BYREF

  v4 = 0LL;
  *(_DWORD *)pbOutput = 0;
  memset(v19, 0, sizeof(v19));
  v20[0] = 0LL;
  if ( *(__int64 *)((char *)&qword_140C70A74 + 4) )
  {
    Hash = BCryptCreateHash(
             *(BCRYPT_ALG_HANDLE *)((char *)&qword_140C70A74 + 4),
             (BCRYPT_HASH_HANDLE *)&v19[1],
             0LL,
             0,
             (PUCHAR)pcbResult,
             v15,
             v17);
    if ( Hash >= 0 )
    {
      Hash = BCryptGetProperty(
               *(BCRYPT_HANDLE *)((char *)&qword_140C70A74 + 4),
               L"HashDigestLength",
               pbOutput,
               v10,
               v19,
               v16);
      if ( Hash >= 0 )
      {
        Hash = WbAlloc(*(unsigned int *)pbOutput, v20);
        if ( Hash < 0 || (Hash = BCryptHashData(*(BCRYPT_HASH_HANDLE *)&v19[1], pbInput, cbInput, v11), Hash < 0) )
        {
          v4 = v20[0];
        }
        else
        {
          v4 = v20[0];
          Hash = BCryptFinishHash(*(BCRYPT_HASH_HANDLE *)&v19[1], v20[0], *(ULONG *)pbOutput, v12);
          if ( Hash >= 0 )
          {
            if ( a3 )
            {
              *a3 = v4;
              v4 = 0LL;
            }
            if ( a4 )
              *a4 = *(_DWORD *)pbOutput;
          }
        }
      }
    }
  }
  else
  {
    Hash = -1073741811;
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( *(_QWORD *)&v19[1] )
    BCryptDestroyHash(*(BCRYPT_HASH_HANDLE *)&v19[1]);
  return (unsigned int)Hash;
}
