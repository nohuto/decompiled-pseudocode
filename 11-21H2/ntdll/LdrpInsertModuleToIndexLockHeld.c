/*
 * XREFs of LdrpInsertModuleToIndexLockHeld @ 0x18001CAA8
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x18004CD54 (LdrpMapDllWithSectionHandle.c)
 *     LdrpInsertModuleToIndex @ 0x18008321C (LdrpInsertModuleToIndex.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x18001AD20 (RtlRbInsertNodeEx.c)
 */

BOOLEAN __fastcall LdrpInsertModuleToIndexLockHeld(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // r9d
  BOOLEAN v3; // bl
  unsigned int v5; // r10d
  unsigned __int64 Root; // rdx
  BOOLEAN v7; // r8
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  BOOLEAN result; // al

  v2 = a2[2];
  *(_DWORD *)(a1 + 128) = v2;
  v3 = 0;
  *(_DWORD *)(a1 + 288) = a2[22];
  v5 = a2[20];
  *(_DWORD *)(a1 + 64) = v5;
  Root = (unsigned __int64)LdrpMappingInfoIndex.Root;
  if ( (*(_BYTE *)&LdrpMappingInfoIndex.0 & 1) != 0 )
  {
    if ( LdrpMappingInfoIndex.Root )
      Root = (unsigned __int64)&LdrpMappingInfoIndex ^ (unsigned __int64)LdrpMappingInfoIndex.Root;
    else
      Root = 0LL;
  }
  v7 = 0;
  if ( Root )
  {
    while ( 1 )
    {
      if ( v2 < *(_DWORD *)(Root - 96) || v2 <= *(_DWORD *)(Root - 96) && v5 < *(_DWORD *)(Root - 160) )
      {
        v8 = *(_QWORD *)Root;
        if ( (*(_BYTE *)&LdrpMappingInfoIndex.0 & 1) != 0 )
        {
          if ( !v8 )
            break;
          v8 ^= Root;
        }
        if ( !v8 )
          break;
      }
      else
      {
        v8 = *(_QWORD *)(Root + 8);
        if ( (*(_BYTE *)&LdrpMappingInfoIndex.0 & 1) != 0 )
        {
          if ( !v8 )
            goto LABEL_19;
          v8 ^= Root;
        }
        if ( !v8 )
        {
LABEL_19:
          v7 = 1;
          break;
        }
      }
      Root = v8;
    }
  }
  RtlRbInsertNodeEx(&LdrpMappingInfoIndex, (PRTL_BALANCED_NODE)Root, v7, (PRTL_BALANCED_NODE)(a1 + 224));
  v9 = (unsigned __int64)LdrpModuleBaseAddressIndex.Root;
  if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 )
  {
    if ( LdrpModuleBaseAddressIndex.Root )
      v9 = (unsigned __int64)&LdrpModuleBaseAddressIndex ^ (unsigned __int64)LdrpModuleBaseAddressIndex.Root;
    else
      v9 = 0LL;
  }
  if ( v9 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(a1 + 48) >= *(_QWORD *)(v9 - 152) )
      {
        v10 = *(_QWORD *)(v9 + 8);
        if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 )
        {
          if ( !v10 )
            goto LABEL_32;
          v10 ^= v9;
        }
        if ( !v10 )
        {
LABEL_32:
          v3 = 1;
          break;
        }
      }
      else
      {
        v10 = *(_QWORD *)v9;
        if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 )
        {
          if ( !v10 )
            break;
          v10 ^= v9;
        }
        if ( !v10 )
          break;
      }
      v9 = v10;
    }
  }
  result = RtlRbInsertNodeEx(&LdrpModuleBaseAddressIndex, (PRTL_BALANCED_NODE)v9, v3, (PRTL_BALANCED_NODE)(a1 + 200));
  *(_DWORD *)(a1 + 104) |= 0x80u;
  return result;
}
