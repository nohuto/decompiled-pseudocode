/*
 * XREFs of CmpDoWritethroughReparse @ 0x140693570
 * Callers:
 *     CmpDoParseKey @ 0x1406E9130 (CmpDoParseKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208C40 (CmSiFreeMemory.c)
 *     RtlUnicodeStringCat @ 0x140208C9C (RtlUnicodeStringCat.c)
 *     RtlUnicodeStringCopy @ 0x140208E68 (RtlUnicodeStringCopy.c)
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     CmpRecordParseFailure @ 0x140693738 (CmpRecordParseFailure.c)
 *     CmpIsKeyStackDeleted @ 0x1406D3EDC (CmpIsKeyStackDeleted.c)
 *     CmpGetKcbAtLayerHeight @ 0x1406D57D0 (CmpGetKcbAtLayerHeight.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1406D7B9C (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpConstructNameWithStatus @ 0x1406D7BE0 (CmpConstructNameWithStatus.c)
 *     CmpKeyFullNameLength @ 0x1406D92A0 (CmpKeyFullNameLength.c)
 *     CmpUnicodeStringAppendCharacter @ 0x140A1FA44 (CmpUnicodeStringAppendCharacter.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 *     CmpAttachToRegistryProcess @ 0x140AF5250 (CmpAttachToRegistryProcess.c)
 */

__int64 __fastcall CmpDoWritethroughReparse(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        PCUNICODE_STRING a5,
        __int64 a6,
        UNICODE_STRING *a7)
{
  bool v11; // zf
  unsigned int v12; // ebx
  __int64 v14; // rbx
  unsigned int v15; // eax
  __int64 v16; // rbp
  __int64 v17; // rdi
  int v18; // eax
  UNICODE_STRING *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 KcbAtLayerHeight; // rax
  int started; // eax
  int v25; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  __int128 v27; // [rsp+30h] [rbp-38h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+40h] [rbp-28h]
  PCUNICODE_STRING SourceString; // [rsp+70h] [rbp+8h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v11 = *(_DWORD *)(a1 + 40) == -1;
  v27 = 0LL;
  WORD1(v27) = -1;
  SourceString = 0LL;
  *(_OWORD *)Privileges = 0LL;
  if ( !v11 )
  {
    v12 = -1073741199;
    goto LABEL_3;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 4112LL) & 0x2000) == 0 )
  {
    v12 = -1073741199;
    goto LABEL_3;
  }
  if ( !a4 )
    goto LABEL_13;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 72) + 65LL) )
  {
    v12 = -1073741199;
  }
  else
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a3);
    started = CmpStartKcbStackForTopLayerKcb(&v27, KcbAtLayerHeight);
    v12 = started;
    if ( started < 0 )
    {
      v21 = a6;
      v22 = (unsigned int)started;
      v20 = 65792LL;
      goto LABEL_23;
    }
    if ( !(unsigned __int8)CmpIsKeyStackDeleted(&v27, 0LL) )
    {
LABEL_13:
      v14 = CmpGetKcbAtLayerHeight(a2);
      v15 = CmpKeyFullNameLength(v14);
      v16 = v15;
      if ( v15 > 0xFFFF )
      {
        v21 = a6;
        v12 = -1073741811;
        v20 = 65872LL;
      }
      else
      {
        v17 = a6;
        if ( (*(_DWORD *)(a6 + 160) & 1) == 0 )
        {
          CmpAttachToRegistryProcess(a6 + 168);
          *(_DWORD *)(v17 + 160) |= 1u;
        }
        if ( a4 )
        {
          v25 = CmpConstructNameWithStatus(*(_QWORD *)(v14 + 72), &SourceString);
          v12 = v25;
          if ( v25 < 0 )
          {
            v22 = (unsigned int)v25;
            v20 = 66048LL;
            v21 = v17;
            goto LABEL_23;
          }
        }
        else
        {
          v18 = CmpConstructNameWithStatus(v14, &SourceString);
          v12 = v18;
          if ( v18 < 0 )
          {
            v22 = (unsigned int)v18;
            v20 = 66304LL;
            v21 = v17;
            goto LABEL_23;
          }
        }
        DestinationString.Buffer = (wchar_t *)ExAllocatePool2(256LL, v16, 909528387LL);
        if ( !DestinationString.Buffer )
        {
          v12 = -1073741670;
          CmpRecordParseFailure(v17, 66560LL, 3221225626LL);
          goto LABEL_5;
        }
        DestinationString.Length = 0;
        DestinationString.MaximumLength = v16;
        RtlUnicodeStringCopy(&DestinationString, SourceString);
        if ( a4 )
        {
          CmpUnicodeStringAppendCharacter(&DestinationString);
          RtlUnicodeStringCat(&DestinationString, a5);
        }
        v19 = a7;
        ExFreePoolWithTag(a7->Buffer, 0);
        *v19 = DestinationString;
        RtlInitUnicodeString(&DestinationString, 0LL);
        *(_DWORD *)(v17 + 24) |= 0x10u;
        v20 = 66816LL;
        v21 = v17;
        v12 = 872;
      }
      v22 = v12;
LABEL_23:
      CmpRecordParseFailure(v21, v20, v22);
      goto LABEL_3;
    }
    v12 = -1073741199;
  }
LABEL_3:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
LABEL_5:
  if ( SourceString )
    CmSiFreeMemory((PPRIVILEGE_SET)SourceString);
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  return v12;
}
