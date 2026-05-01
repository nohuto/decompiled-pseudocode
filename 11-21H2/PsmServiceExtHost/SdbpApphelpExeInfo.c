/*
 * XREFs of SdbpApphelpExeInfo @ 0x180096860
 * Callers:
 *     SdbShouldBlockPackageLaunch @ 0x180030400 (SdbShouldBlockPackageLaunch.c)
 * Callees:
 *     memset_0 @ 0x18005023A (memset_0.c)
 *     SdbpReadApphelpDisplayCustom @ 0x180096EC0 (SdbpReadApphelpDisplayCustom.c)
 *     SdbpReadApphelpDisplayResources @ 0x180097088 (SdbpReadApphelpDisplayResources.c)
 *     SdbFindFirstTag @ 0x180098EE4 (SdbFindFirstTag.c)
 *     SdbGetStringTagPtr @ 0x1800991D4 (SdbGetStringTagPtr.c)
 *     SdbReadBinaryTag @ 0x18009936C (SdbReadBinaryTag.c)
 *     SdbReadDWORDTag @ 0x180099428 (SdbReadDWORDTag.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 *     AslStringDuplicate @ 0x18009E710 (AslStringDuplicate.c)
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
  const char *v16; // r9
  int v17; // r8d
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  __int64 StringTagPtr; // rax
  const char *v24; // r9
  int v25; // r8d
  unsigned int v26; // eax

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
  AslStringDuplicate(a4 + 22, &word_1800B7A9C);
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
    if ( !v15 )
    {
      v16 = "Error trying to find TAG_EXE_ID";
      v17 = 1300;
LABEL_22:
      AslLogCallPrintf(1, (unsigned int)"SdbpApphelpExeInfo", v17, (_DWORD)v16);
      return v7;
    }
    if ( !(unsigned int)SdbReadBinaryTag(a2, v15, a4 + 4, 16LL) )
    {
      v16 = "Error trying to read TAG_EXE_ID";
      v17 = 1308;
      goto LABEL_22;
    }
    v18 = SdbFindFirstTag(a2, a3, 36881LL);
    if ( v18 && !(unsigned int)SdbReadBinaryTag(a2, v18, a4 + 8, 16LL) )
    {
      v16 = "Error trying to read TAG_APP_ID";
      v17 = 1322;
      goto LABEL_22;
    }
    v19 = SdbFindFirstTag(a2, v12, 16405LL);
    if ( v19 )
      a4[15] = SdbReadDWORDTag(a2, v19, 0LL);
    v20 = SdbFindFirstTag(a2, v12, 16470LL);
    if ( v20 )
      a4[28] = SdbReadDWORDTag(a2, v20, 0LL);
    v21 = SdbFindFirstTag(a2, v12, 16471LL);
    if ( v21 )
      a4[29] = SdbReadDWORDTag(a2, v21, 0LL);
    v22 = SdbFindFirstTag(a2, v12, 24627LL);
    if ( v22 )
    {
      StringTagPtr = SdbGetStringTagPtr(a2, v22);
      AslStringDuplicate(a4 + 30, StringTagPtr);
    }
    if ( (int)a4[32] < 0 )
    {
      if ( !(unsigned int)SdbpReadApphelpDisplayResources(a2, a3, v12, a4) )
      {
        v24 = "Error trying to read Apphelp Display resources";
        v25 = 1373;
        goto LABEL_41;
      }
    }
    else if ( !(unsigned int)SdbpReadApphelpDisplayCustom(a2, a3, (unsigned int)a4[15], a4) )
    {
      v24 = "Error trying to read Apphelp Display resources from Custom database";
      v25 = 1369;
LABEL_41:
      AslLogCallPrintf(1, (unsigned int)"SdbpApphelpExeInfo", v25, (_DWORD)v24);
    }
    v26 = SdbFindFirstTag(a2, v12, 16476LL);
    if ( v26 )
      SdbReadDWORDTag(a2, v26, 0LL);
    return 1;
  }
  return v7;
}
