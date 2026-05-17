/*
 * XREFs of LdrpInsertModuleToIndexLockHeld @ 0x18002D200
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x18002C97C (LdrpMapDllWithSectionHandle.c)
 *     LdrpInsertModuleToIndex @ 0x18007E92C (LdrpInsertModuleToIndex.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x180039370 (RtlRbInsertNodeEx.c)
 */

__int64 __fastcall LdrpInsertModuleToIndexLockHeld(__int64 a1, _DWORD *a2, __int64 a3)
{
  unsigned int v3; // r9d
  char v4; // bl
  unsigned int v6; // r10d
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 result; // rax

  v3 = a2[2];
  *(_DWORD *)(a1 + 128) = v3;
  v4 = 0;
  *(_DWORD *)(a1 + 288) = a2[22];
  v6 = a2[20];
  *(_DWORD *)(a1 + 64) = v6;
  v7 = LdrpMappingInfoIndex;
  if ( (qword_180185020 & 1) != 0 )
  {
    if ( LdrpMappingInfoIndex )
      v7 = (unsigned __int64)&LdrpMappingInfoIndex ^ LdrpMappingInfoIndex;
    else
      v7 = 0LL;
  }
  LOBYTE(a3) = 0;
  if ( v7 )
  {
    while ( 1 )
    {
      if ( v3 < *(_DWORD *)(v7 - 96) || v3 <= *(_DWORD *)(v7 - 96) && v6 < *(_DWORD *)(v7 - 160) )
      {
        v8 = *(_QWORD *)v7;
        if ( (qword_180185020 & 1) != 0 )
        {
          if ( !v8 )
            break;
          v8 ^= v7;
        }
        if ( !v8 )
          break;
      }
      else
      {
        v8 = *(_QWORD *)(v7 + 8);
        if ( (qword_180185020 & 1) != 0 )
        {
          if ( !v8 )
            goto LABEL_19;
          v8 ^= v7;
        }
        if ( !v8 )
        {
LABEL_19:
          LOBYTE(a3) = 1;
          break;
        }
      }
      v7 = v8;
    }
  }
  RtlRbInsertNodeEx(&LdrpMappingInfoIndex, v7, a3, a1 + 224);
  v9 = *(_QWORD *)(a1 + 48);
  v10 = LdrpModuleBaseAddressIndex;
  if ( (qword_180185010 & 1) != 0 )
  {
    if ( LdrpModuleBaseAddressIndex )
      v10 = (unsigned __int64)&LdrpModuleBaseAddressIndex ^ LdrpModuleBaseAddressIndex;
    else
      v10 = 0LL;
  }
  if ( v10 )
  {
    while ( 1 )
    {
      if ( v9 >= *(_QWORD *)(v10 - 152) )
      {
        v11 = *(_QWORD *)(v10 + 8);
        if ( (qword_180185010 & 1) != 0 )
        {
          if ( !v11 )
            goto LABEL_32;
          v11 ^= v10;
        }
        if ( !v11 )
        {
LABEL_32:
          v4 = 1;
          break;
        }
      }
      else
      {
        v11 = *(_QWORD *)v10;
        if ( (qword_180185010 & 1) != 0 )
        {
          if ( !v11 )
            break;
          v11 ^= v10;
        }
        if ( !v11 )
          break;
      }
      v10 = v11;
    }
  }
  LOBYTE(v9) = v4;
  result = RtlRbInsertNodeEx(&LdrpModuleBaseAddressIndex, v10, v9, a1 + 200);
  *(_DWORD *)(a1 + 104) |= 0x80u;
  return result;
}
