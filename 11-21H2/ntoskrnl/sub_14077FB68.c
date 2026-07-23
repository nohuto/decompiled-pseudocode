/*
 * XREFs of sub_14077FB68 @ 0x14077FB68
 * Callers:
 *     sub_14069061C @ 0x14069061C (sub_14069061C.c)
 *     sub_140691CD8 @ 0x140691CD8 (sub_140691CD8.c)
 *     sub_140692514 @ 0x140692514 (sub_140692514.c)
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0 @ 0x14077E168 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0.c)
 *     sub_14077E628 @ 0x14077E628 (sub_14077E628.c)
 *     sub_1407806B0 @ 0x1407806B0 (sub_1407806B0.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1402A76A0 (RtlCopyUnicodeString.c)
 *     sub_1402DE190 @ 0x1402DE190 (sub_1402DE190.c)
 *     RtlAppendUnicodeStringToString @ 0x1402DFA30 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x1402DFAC0 (RtlAppendUnicodeToString.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14077FB68(PCUNICODE_STRING SourceString, PCUNICODE_STRING Source, PUNICODE_STRING Destination)
{
  PCUNICODE_STRING v3; // rsi
  __int16 *p_MaximumLength; // r8
  unsigned __int16 Length; // cx
  unsigned __int16 *v8; // r8
  int v9; // ebx
  unsigned __int16 *v10; // r8
  wchar_t *PoolWithTag; // rax
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = (PCUNICODE_STRING)v13;
  Destination->Length = 0;
  v13[0] = 0LL;
  if ( SourceString )
    v3 = SourceString;
  v13[1] = 0LL;
  p_MaximumLength = (__int16 *)&Destination->MaximumLength;
  Length = v3->Length;
  *p_MaximumLength = v3->Length;
  if ( (int)sub_1402DE190(Length, Source->Length, p_MaximumLength) < 0 )
    return (unsigned int)-1073741811;
  v9 = sub_1402DE190(*v8, 2, (__int16 *)v8);
  if ( v9 < 0 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, *v10, 0x67655256u);
    Destination->Buffer = PoolWithTag;
    if ( PoolWithTag )
    {
      RtlCopyUnicodeString(Destination, v3);
      if ( Source->Length )
      {
        if ( *Source->Buffer != 92 && v3->Buffer[((unsigned __int64)v3->Length >> 1) - 1] != 92 )
          RtlAppendUnicodeToString(Destination, &word_140865B20);
        RtlAppendUnicodeStringToString(Destination, Source);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v9;
}
