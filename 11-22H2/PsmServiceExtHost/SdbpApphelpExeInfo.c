/*
 * XREFs of SdbpApphelpExeInfo @ 0x18009198C
 * Callers:
 *     SdbShouldBlockPackageLaunch @ 0x1800336CC (SdbShouldBlockPackageLaunch.c)
 * Callees:
 *     memset_0 @ 0x1800536FA (memset_0.c)
 *     SdbpReadApphelpDisplayCustom @ 0x180091FF8 (SdbpReadApphelpDisplayCustom.c)
 *     SdbpReadApphelpDisplayResources @ 0x1800921C4 (SdbpReadApphelpDisplayResources.c)
 *     SdbFindFirstTag @ 0x180093FA4 (SdbFindFirstTag.c)
 *     SdbGetStringTagPtr @ 0x180094294 (SdbGetStringTagPtr.c)
 *     SdbReadBinaryTag @ 0x18009442C (SdbReadBinaryTag.c)
 *     SdbReadDWORDTag @ 0x1800944E8 (SdbReadDWORDTag.c)
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 *     AslStringDuplicate @ 0x180099128 (AslStringDuplicate.c)
 */

__int64 __fastcall SdbpApphelpExeInfo(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int FirstTag; // eax
  unsigned int v12; // ebp
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  __int64 StringTagPtr; // rax
  unsigned int v22; // eax

  v7 = 0;
  memset_0(a4, 0, 0x88uLL);
  v8 = *(_QWORD *)(a2 + 28) - *(_QWORD *)&GUID_SYSMAIN_SDB.Data1;
  if ( !v8 )
    v8 = *(_QWORD *)(a2 + 36) - *(_QWORD *)GUID_SYSMAIN_SDB.Data4;
  if ( v8 )
  {
    v9 = *(_QWORD *)(a2 + 28) - *(_QWORD *)&GUID_DRVMAIN_SDB.Data1;
    if ( !v9 )
      v9 = *(_QWORD *)(a2 + 36) - *(_QWORD *)GUID_DRVMAIN_SDB.Data4;
    if ( v9 )
    {
      v10 = *(_QWORD *)(a2 + 28) - *(_QWORD *)&GUID_MSIMAIN_SDB.Data1;
      if ( !v10 )
        v10 = *(_QWORD *)(a2 + 36) - *(_QWORD *)GUID_MSIMAIN_SDB.Data4;
      if ( !v10 )
        a4[32] = -2147352576;
    }
    else
    {
      a4[32] = -2147221504;
    }
  }
  else
  {
    a4[32] = -2147287040;
  }
  AslStringDuplicate(a4 + 22, &word_1800B66C4);
  a4[12] = a3;
  *(_OWORD *)a4 = *(_OWORD *)(a2 + 28);
  FirstTag = SdbFindFirstTag(a2, a3, 28685LL);
  v12 = FirstTag;
  if ( FirstTag )
  {
    v13 = SdbFindFirstTag(a2, FirstTag, 16407LL);
    if ( v13 )
      a4[13] = SdbReadDWORDTag(a2, v13, 0LL);
    if ( (a4[32] & 0x40000) != 0 )
    {
      a4[14] = 1;
    }
    else
    {
      v14 = SdbFindFirstTag(a2, v12, 16400LL);
      if ( v14 )
        a4[14] = SdbReadDWORDTag(a2, v14, 0LL);
    }
    v15 = SdbFindFirstTag(a2, a3, 36868LL);
    if ( v15 )
    {
      if ( (unsigned int)SdbReadBinaryTag(a2, v15, a4 + 4, 16LL) )
      {
        v16 = SdbFindFirstTag(a2, a3, 36881LL);
        if ( !v16 || (unsigned int)SdbReadBinaryTag(a2, v16, a4 + 8, 16LL) )
        {
          v17 = SdbFindFirstTag(a2, v12, 16405LL);
          if ( v17 )
            a4[15] = SdbReadDWORDTag(a2, v17, 0LL);
          v18 = SdbFindFirstTag(a2, v12, 16470LL);
          if ( v18 )
            a4[28] = SdbReadDWORDTag(a2, v18, 0LL);
          v19 = SdbFindFirstTag(a2, v12, 16471LL);
          if ( v19 )
            a4[29] = SdbReadDWORDTag(a2, v19, 0LL);
          v20 = SdbFindFirstTag(a2, v12, 24627LL);
          if ( v20 )
          {
            StringTagPtr = SdbGetStringTagPtr(a2, v20);
            AslStringDuplicate(a4 + 30, StringTagPtr);
          }
          if ( (int)a4[32] < 0 )
          {
            if ( !(unsigned int)SdbpReadApphelpDisplayResources(a2, a3, v12, a4) )
              AslLogCallPrintf(
                1,
                (unsigned int)"SdbpApphelpExeInfo",
                1373,
                (unsigned int)"Error trying to read Apphelp Display resources");
          }
          else if ( !(unsigned int)SdbpReadApphelpDisplayCustom(a2, a3, (unsigned int)a4[15], a4) )
          {
            AslLogCallPrintf(
              1,
              (unsigned int)"SdbpApphelpExeInfo",
              1369,
              (unsigned int)"Error trying to read Apphelp Display resources from Custom database");
          }
          v22 = SdbFindFirstTag(a2, v12, 16476LL);
          if ( v22 )
            SdbReadDWORDTag(a2, v22, 0LL);
          return 1;
        }
        else
        {
          AslLogCallPrintf(1, (unsigned int)"SdbpApphelpExeInfo", 1322, (unsigned int)"Error trying to read TAG_APP_ID");
        }
      }
      else
      {
        AslLogCallPrintf(1, (unsigned int)"SdbpApphelpExeInfo", 1308, (unsigned int)"Error trying to read TAG_EXE_ID");
      }
    }
    else
    {
      AslLogCallPrintf(1, (unsigned int)"SdbpApphelpExeInfo", 1300, (unsigned int)"Error trying to find TAG_EXE_ID");
    }
  }
  return v7;
}
