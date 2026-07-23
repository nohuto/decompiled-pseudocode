/*
 * XREFs of FsRtlValidateReparsePointBuffer @ 0x1402DDF40
 * Callers:
 *     sub_14066119C @ 0x14066119C (sub_14066119C.c)
 * Callees:
 *     sub_1402DE190 @ 0x1402DE190 (sub_1402DE190.c)
 */

NTSTATUS __stdcall FsRtlValidateReparsePointBuffer(ULONG BufferLength, PREPARSE_DATA_BUFFER ReparseBuffer)
{
  signed int ReparseTag; // edx
  unsigned int ReparseDataLength; // r11d
  unsigned int v5; // esi
  unsigned int v6; // r8d
  unsigned int v7; // eax
  NTSTATUS result; // eax
  __int64 v9; // rcx
  __int64 v10; // r9
  unsigned int v11; // ebx
  __int16 v12; // r9
  __int64 v13; // r10
  int v14; // r11d
  bool v15; // zf
  USHORT SubstituteNameOffset; // di
  __int64 v17; // r9
  __int64 v18; // r10
  unsigned __int16 v19; // bx
  char v20; // r10
  __int16 v21; // r11
  unsigned __int16 v22; // [rsp+40h] [rbp+20h] BYREF
  unsigned __int16 v23; // [rsp+50h] [rbp+30h] BYREF

  if ( BufferLength - 8 > 0x3FF8 )
    return -1073741192;
  ReparseTag = ReparseBuffer->ReparseTag;
  if ( (ReparseTag & 0xFFF0000) != 0
    || (unsigned int)ReparseTag <= 2
    || (ReparseTag & 0xC0000000) == 0x40000000
    || (ReparseTag & 0x30000000) == 0x30000000
    || ReparseTag == -1610612711 )
  {
    return -1073741194;
  }
  ReparseDataLength = ReparseBuffer->ReparseDataLength;
  v5 = ReparseDataLength + 8;
  v6 = ReparseDataLength + 24;
  if ( ReparseDataLength + 8 != BufferLength )
  {
    if ( v6 == BufferLength )
    {
      v7 = ReparseTag & 0x80000000;
      goto LABEL_12;
    }
    return -1073741192;
  }
  v7 = ReparseTag & 0x80000000;
  if ( ReparseTag >= 0 )
    return -1073741192;
  if ( v6 == BufferLength )
  {
LABEL_12:
    if ( !v7
      && !ReparseBuffer->AppExecLinkReparseBuffer.StringCount
      && !ReparseBuffer->SymbolicLinkReparseBuffer.PrintNameOffset
      && !ReparseBuffer->SymbolicLinkReparseBuffer.PrintNameLength
      && !*((_BYTE *)&ReparseBuffer->GenericReparseBuffer + 8)
      && !*((_BYTE *)&ReparseBuffer->GenericReparseBuffer + 9)
      && !*((_BYTE *)&ReparseBuffer->GenericReparseBuffer + 10)
      && !*((_BYTE *)&ReparseBuffer->GenericReparseBuffer + 11)
      && !*((_BYTE *)&ReparseBuffer->GenericReparseBuffer + 12)
      && !*((_BYTE *)&ReparseBuffer->GenericReparseBuffer + 13)
      && !*((_BYTE *)&ReparseBuffer->GenericReparseBuffer + 14)
      && !*((_BYTE *)&ReparseBuffer->GenericReparseBuffer + 15)
      || ReparseTag == -1610612733
      || ReparseTag == -1610612724 )
    {
      return -1073741192;
    }
    return 0;
  }
  if ( ReparseTag == -1610612733 )
  {
    v22 = 0;
    if ( ReparseDataLength < 8 )
      return -1073741192;
    result = sub_1402DE190(
               ReparseBuffer->SymbolicLinkReparseBuffer.SubstituteNameLength,
               ReparseBuffer->SymbolicLinkReparseBuffer.PrintNameLength,
               &v22,
               0LL);
    if ( !result )
    {
      v11 = v22 + 12;
      if ( v11 < 0xC )
        return -1073741675;
      v22 = v10;
      result = sub_1402DE190(v9, 2LL, &v22, v10);
      if ( !result )
      {
        if ( *(_WORD *)(v13 + 8) != v12 || *(_WORD *)(v13 + 12) != v22 )
          return -1073741192;
        v15 = v14 == v11;
        goto LABEL_36;
      }
    }
  }
  else
  {
    if ( ReparseTag != -1610612724 )
      return 0;
    v23 = 0;
    v22 = 0;
    if ( (unsigned __int16)ReparseDataLength < 0xCu )
      return -1073741192;
    SubstituteNameOffset = ReparseBuffer->SymbolicLinkReparseBuffer.SubstituteNameOffset;
    result = sub_1402DE190(
               SubstituteNameOffset,
               ReparseBuffer->SymbolicLinkReparseBuffer.SubstituteNameLength,
               &v23,
               0LL);
    if ( !result )
    {
      v19 = *(_WORD *)(v18 + 14);
      result = sub_1402DE190(*(unsigned __int16 *)(v18 + 12), v19, &v22, v17);
      if ( !result )
      {
        if ( v5 < (unsigned int)v23 + 20
          || v5 < (unsigned int)v22 + 20
          || !v21
          || !v19
          || (v21 & 1) != 0
          || (v19 & 1) != 0
          || (SubstituteNameOffset & 1) != 0 )
        {
          return -1073741192;
        }
        v15 = (v20 & 1) == 0;
LABEL_36:
        if ( v15 )
          return 0;
        return -1073741192;
      }
    }
  }
  return result;
}
