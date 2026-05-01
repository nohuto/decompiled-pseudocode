/*
 * XREFs of SdbpGetRegistryMatchingAttributes @ 0x180096418
 * Callers:
 *     SdbpCheckMatchingRegistry @ 0x180094D60 (SdbpCheckMatchingRegistry.c)
 *     SdbpCheckMatchingWildcardRegistry @ 0x180095C90 (SdbpCheckMatchingWildcardRegistry.c)
 * Callees:
 *     SdbFindFirstTag @ 0x180093C44 (SdbFindFirstTag.c)
 *     SdbGetBinaryTagData @ 0x180093EC0 (SdbGetBinaryTagData.c)
 *     SdbGetStringTagPtr @ 0x180093F34 (SdbGetStringTagPtr.c)
 *     SdbGetTagDataSize @ 0x180093FE4 (SdbGetTagDataSize.c)
 *     SdbReadDWORDTag @ 0x180094188 (SdbReadDWORDTag.c)
 *     SdbReadQWORDTag @ 0x180094224 (SdbReadQWORDTag.c)
 *     AslLogCallPrintf @ 0x1800982C0 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetRegistryMatchingAttributes(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 *a4,
        _DWORD *a5,
        __int64 *a6,
        _DWORD *a7,
        __int64 *a8,
        __int64 *a9,
        _QWORD *a10)
{
  int v10; // ebx
  unsigned int v11; // esi
  int v13; // ebp
  __int64 v14; // r13
  __int64 BinaryTagData; // r12
  unsigned int v16; // r14d
  unsigned int FirstTag; // eax
  _WORD *StringTagPtr; // rax
  __int64 v19; // r9
  _WORD *v20; // r15
  unsigned int v21; // eax
  __int64 v22; // r9
  unsigned int v23; // eax
  int DWORDTag; // eax
  __int64 v25; // r9
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  unsigned int v31; // eax
  __int64 TagDataSize; // rax
  unsigned int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // esi
  unsigned int v36; // eax
  __int64 v38; // [rsp+28h] [rbp-50h]
  __int64 QWORDTag; // [rsp+30h] [rbp-48h]

  v10 = 0;
  *a3 = 0LL;
  v11 = a2;
  v38 = 0LL;
  QWORDTag = 0LL;
  *a5 = 0;
  v13 = 0;
  v14 = 0LL;
  BinaryTagData = 0LL;
  *a4 = 0LL;
  v16 = 0;
  *a6 = 0LL;
  *a7 = 0;
  *a8 = 0LL;
  *a9 = 0LL;
  *a10 = 0LL;
  FirstTag = SdbFindFirstTag(a1, a2, 24577LL, (__int64)a4);
  if ( FirstTag )
  {
    StringTagPtr = (_WORD *)SdbGetStringTagPtr(a1, FirstTag);
    v20 = StringTagPtr;
    if ( !StringTagPtr || !*StringTagPtr )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpGetRegistryMatchingAttributes",
        1019,
        (unsigned int)"Failed to read key path");
      return v16;
    }
    v21 = SdbFindFirstTag(a1, v11, 24624LL, v19);
    if ( v21 )
      v38 = SdbGetStringTagPtr(a1, v21);
    v23 = SdbFindFirstTag(a1, v11, 16465LL, v22);
    if ( v23 )
    {
      DWORDTag = SdbReadDWORDTag(a1, v23, 0);
      v13 = DWORDTag;
      if ( !DWORDTag )
      {
        AslLogCallPrintf(
          1,
          (unsigned int)"SdbpGetRegistryMatchingAttributes",
          1038,
          (unsigned int)"Failed to read value type");
        return v16;
      }
      v26 = DWORDTag - 1;
      if ( !v26 )
        goto LABEL_30;
      v27 = v26 - 1;
      if ( !v27 )
        goto LABEL_30;
      v28 = v27 - 1;
      if ( !v28 )
      {
        v34 = SdbFindFirstTag(a1, v11, 36882LL, v25);
        v35 = v34;
        if ( !v34 )
        {
          AslLogCallPrintf(
            1,
            (unsigned int)"SdbpGetRegistryMatchingAttributes",
            1085,
            (unsigned int)"Failed to get TAG_REG_VALUE_DATA_BINARY");
          return v16;
        }
        BinaryTagData = SdbGetBinaryTagData(a1, v34);
        if ( !BinaryTagData )
        {
          AslLogCallPrintf(
            1,
            (unsigned int)"SdbpGetRegistryMatchingAttributes",
            1091,
            (unsigned int)"Failed to read value data");
          return v16;
        }
        TagDataSize = (unsigned int)SdbGetTagDataSize(a1, v35);
        goto LABEL_21;
      }
      v29 = v28 - 1;
      if ( !v29 )
      {
        v33 = SdbFindFirstTag(a1, v11, 16466LL, v25);
        if ( !v33 )
        {
          AslLogCallPrintf(
            1,
            (unsigned int)"SdbpGetRegistryMatchingAttributes",
            1065,
            (unsigned int)"Failed to get TAG_REG_VALUE_DATA_DWORD");
          return v16;
        }
        v10 = SdbReadDWORDTag(a1, v33, 0);
        TagDataSize = 0LL;
        goto LABEL_21;
      }
      v30 = v29 - 3;
      if ( v30 )
      {
        if ( v30 != 4 )
        {
          AslLogCallPrintf(
            1,
            (unsigned int)"SdbpGetRegistryMatchingAttributes",
            1098,
            (unsigned int)"Unknown registry value type");
          return v16;
        }
        v31 = SdbFindFirstTag(a1, v11, 20507LL, v25);
        if ( !v31 )
        {
          AslLogCallPrintf(
            1,
            (unsigned int)"SdbpGetRegistryMatchingAttributes",
            1075,
            (unsigned int)"Failed to get TAG_REG_VALUE_DATA_QWORD");
          return v16;
        }
        QWORDTag = SdbReadQWORDTag(a1, v31, 0LL);
      }
      else
      {
LABEL_30:
        v36 = SdbFindFirstTag(a1, v11, 24625LL, v25);
        if ( !v36 )
        {
          AslLogCallPrintf(
            1,
            (unsigned int)"SdbpGetRegistryMatchingAttributes",
            1051,
            (unsigned int)"Failed to get TAG_REG_VALUE_DATA_SZ");
          return v16;
        }
        v14 = SdbGetStringTagPtr(a1, v36);
        if ( !v14 )
        {
          AslLogCallPrintf(
            1,
            (unsigned int)"SdbpGetRegistryMatchingAttributes",
            1057,
            (unsigned int)"Failed to read value data");
          return v16;
        }
      }
    }
    TagDataSize = 0LL;
LABEL_21:
    v16 = 1;
    *a3 = v20;
    *a4 = v38;
    *a5 = v13;
    *a6 = v14;
    *a7 = v10;
    *a8 = QWORDTag;
    *a9 = BinaryTagData;
    *a10 = TagDataSize;
    return v16;
  }
  AslLogCallPrintf(
    1,
    (unsigned int)"SdbpGetRegistryMatchingAttributes",
    1013,
    (unsigned int)"Failed to get key path tag");
  return v16;
}
