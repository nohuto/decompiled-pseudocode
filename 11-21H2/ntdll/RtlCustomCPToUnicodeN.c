/*
 * XREFs of RtlCustomCPToUnicodeN @ 0x18000E210
 * Callers:
 *     RtlOemToUnicodeN @ 0x18000DCD0 (RtlOemToUnicodeN.c)
 *     RtlMultiByteToUnicodeN @ 0x18000DD40 (RtlMultiByteToUnicodeN.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x18005BF00 (RtlUTF8ToUnicodeN.c)
 */

NTSTATUS __cdecl RtlCustomCPToUnicodeN(
        PCPTABLEINFO CustomCP,
        PWCH UnicodeString,
        ULONG MaxBytesInUnicodeString,
        PULONG BytesInUnicodeString,
        PCH CustomCPString,
        ULONG BytesInCustomCPString)
{
  NTSTATUS v6; // ebx
  PWCH v8; // r10
  ULONG v10; // edx
  ULONG v11; // r11d
  ULONG v12; // ecx
  wchar_t *MultiByteTable; // rdi
  PCH v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  wchar_t *DBCSOffsets; // r14
  int v19; // esi
  PCH v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rax
  ULONG *v23; // r8
  NTSTATUS v24; // eax
  char v25; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0;
  v8 = UnicodeString;
  if ( !CustomCP || CustomCP->CodePage == 0xFDE9 )
  {
    v23 = (ULONG *)&v25;
    if ( BytesInUnicodeString )
      v23 = BytesInUnicodeString;
    if ( BytesInCustomCPString )
    {
      v24 = RtlUTF8ToUnicodeN(UnicodeString, MaxBytesInUnicodeString, v23, CustomCPString, BytesInCustomCPString);
    }
    else
    {
      *v23 = 0;
      v24 = 0;
    }
    if ( v24 == -1073741789 )
      return -2147483643;
    return v6;
  }
  else
  {
    v10 = BytesInCustomCPString;
    v11 = MaxBytesInUnicodeString >> 1;
    if ( CustomCP->DBCSCodePage )
    {
      DBCSOffsets = CustomCP->DBCSOffsets;
      v19 = (int)v8;
      if ( v11 )
      {
        v20 = CustomCPString;
        while ( v10 )
        {
          v21 = (unsigned __int8)*v20;
          --v11;
          --v10;
          v22 = DBCSOffsets[v21];
          if ( (_WORD)v22 )
          {
            if ( !v10 )
            {
              *v8 = 0;
              LODWORD(v8) = (_DWORD)v8 + 2;
              break;
            }
            ++v20;
            --v10;
            *v8 = DBCSOffsets[v22 + (unsigned __int8)*v20];
          }
          else
          {
            *v8 = CustomCP->MultiByteTable[v21];
          }
          ++v8;
          ++v20;
          if ( !v11 )
            break;
        }
      }
      if ( BytesInUnicodeString )
        *BytesInUnicodeString = (_DWORD)v8 - v19;
    }
    else
    {
      v12 = BytesInCustomCPString;
      if ( v11 < BytesInCustomCPString )
        v12 = v11;
      if ( BytesInUnicodeString )
        *BytesInUnicodeString = 2 * v12;
      MultiByteTable = CustomCP->MultiByteTable;
      if ( v12 )
      {
        v14 = CustomCPString;
        v15 = v12;
        do
        {
          v16 = (unsigned __int8)*v14++;
          *v8++ = MultiByteTable[v16];
          --v15;
        }
        while ( v15 );
      }
    }
    return v11 < v10 ? 0x80000005 : 0;
  }
}
