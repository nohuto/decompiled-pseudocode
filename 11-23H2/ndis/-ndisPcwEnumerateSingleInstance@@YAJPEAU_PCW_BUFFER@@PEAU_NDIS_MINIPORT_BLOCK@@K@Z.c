/*
 * XREFs of ?ndisPcwEnumerateSingleInstance@@YAJPEAU_PCW_BUFFER@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C011862C
 * Callers:
 *     ?ndisPcwEnumerateInstances@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C0028AF4 (-ndisPcwEnumerateInstances@@YAJPEAU_PCW_BUFFER@@@Z.c)
 * Callees:
 *     ?RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEB_W@Z @ 0x1C002888C (-RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEB_W@Z.c)
 *     ?RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEB_WZZ @ 0x1C0028C30 (-RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEB_WZZ.c)
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C0028CCC (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 */

NTSTATUS __fastcall ndisPcwEnumerateSingleInstance(PPCW_BUFFER Buffer, struct _NDIS_MINIPORT_BLOCK *a2, int a3)
{
  ULONG v5; // ebx
  int v6; // eax
  int v7; // ecx
  _UNICODE_STRING *pModifiedInstanceName; // rax
  unsigned __int64 Length; // r8
  unsigned __int64 v10; // rdx
  unsigned __int16 MaximumLength; // cx
  wchar_t *v12; // r11
  wchar_t *v13; // rdi
  unsigned __int64 v14; // r8
  __int16 v15; // r9
  unsigned __int64 v16; // r10
  UNICODE_STRING Name; // [rsp+30h] [rbp-D0h] BYREF
  struct _PCW_DATA Data; // [rsp+40h] [rbp-C0h] BYREF
  char v20; // [rsp+50h] [rbp-B0h] BYREF

  *(_DWORD *)(&Name.MaximumLength + 1) = 0;
  if ( a3 == -2 )
    v5 = -2;
  else
    v5 = a3 & 0xFFF | ((a2->IfIndex & 0xFFF) << 12) | (a2->NetLuid.Value >> 24) & 0xFF000000;
  Data.Data = 0LL;
  Name.Buffer = (wchar_t *)&v20;
  Data.Size = 0;
  *(_DWORD *)&Name.Length = 33685504;
  if ( a3 == -2 )
  {
    v7 = RtlUnicodeStringCopy(&Name, &ndisPcwSystemTotalInstanceName, 0xFFFFFFFE);
  }
  else
  {
    if ( a3 == 4095 )
      v6 = RtlUnicodeStringCopyString(&Name, (const wchar_t *)0xFFF);
    else
      v6 = RtlUnicodeStringPrintf(&Name, L"%u, ");
    v7 = v6;
    if ( v6 < 0 )
      return v7;
    pModifiedInstanceName = a2->pModifiedInstanceName;
    if ( !pModifiedInstanceName )
      pModifiedInstanceName = a2->pAdapterInstanceName;
    if ( (Name.Length & 1) != 0
      || (Name.MaximumLength & 1) != 0
      || Name.Length > Name.MaximumLength
      || Name.MaximumLength == 0xFFFF
      || !Name.Buffer && (Name.Length || Name.MaximumLength)
      || (Length = pModifiedInstanceName->Length, v10 = (unsigned __int64)Name.Length >> 1, (Length & 1) != 0)
      || (MaximumLength = pModifiedInstanceName->MaximumLength, (MaximumLength & 1) != 0)
      || (unsigned __int16)Length > MaximumLength
      || MaximumLength == 0xFFFF
      || !pModifiedInstanceName->Buffer && ((_WORD)Length || MaximumLength) )
    {
      v7 = -1073741811;
    }
    else
    {
      v12 = pModifiedInstanceName->Buffer;
      v13 = &Name.Buffer[v10];
      v14 = Length >> 1;
      v7 = 0;
      v15 = 0;
      v16 = ((unsigned __int64)Name.MaximumLength >> 1) - v10;
      if ( v16 )
      {
        while ( v14 )
        {
          --v14;
          *v13++ = *v12++;
          ++v15;
          if ( !--v16 )
            goto LABEL_36;
        }
      }
      else
      {
LABEL_36:
        if ( v14 )
          v7 = -2147483643;
      }
      Name.Length = 2 * (v15 + v10);
    }
  }
  if ( v7 >= 0 )
    return PcwAddInstance(Buffer, &Name, v5, 1u, &Data);
  return v7;
}
