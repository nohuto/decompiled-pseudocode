/*
 * XREFs of SdbpReadApphelpDisplayCustom @ 0x180091FF8
 * Callers:
 *     SdbpApphelpExeInfo @ 0x18009198C (SdbpApphelpExeInfo.c)
 * Callees:
 *     SdbFindFirstDWORDIndexedTag @ 0x180093A84 (SdbFindFirstDWORDIndexedTag.c)
 *     SdbFindFirstTag @ 0x180093FA4 (SdbFindFirstTag.c)
 *     SdbGetStringTagPtr @ 0x180094294 (SdbGetStringTagPtr.c)
 *     AslStringDuplicate @ 0x180099128 (AslStringDuplicate.c)
 */

__int64 __fastcall SdbpReadApphelpDisplayCustom(__int64 a1, unsigned int a2, int a3, __int64 a4)
{
  unsigned int v7; // edi
  unsigned int FirstDWORDIndexedTag; // eax
  unsigned int v9; // r14d
  unsigned int FirstTag; // eax
  unsigned int v11; // ebp
  unsigned int v12; // eax
  __int64 StringTagPtr; // rax
  unsigned int v14; // eax
  __int64 v15; // rax
  unsigned int v16; // eax
  __int64 v17; // rax
  unsigned int v18; // eax
  __int64 v19; // rax
  unsigned int v20; // eax
  __int64 v21; // rax
  unsigned int v22; // eax
  __int64 v23; // rax
  unsigned int v24; // eax
  __int64 v25; // rax
  _OWORD v27[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v28; // [rsp+50h] [rbp-28h]

  memset(v27, 0, sizeof(v27));
  v28 = 0LL;
  v7 = 0;
  FirstDWORDIndexedTag = SdbFindFirstDWORDIndexedTag(a1, a2, a3, a3, (__int64)v27);
  v9 = FirstDWORDIndexedTag;
  if ( FirstDWORDIndexedTag )
  {
    FirstTag = SdbFindFirstTag(a1, FirstDWORDIndexedTag, 28686LL);
    v11 = FirstTag;
    if ( FirstTag )
    {
      v12 = SdbFindFirstTag(a1, FirstTag, 24601LL);
      if ( v12 )
      {
        StringTagPtr = SdbGetStringTagPtr(a1, v12);
        AslStringDuplicate(a4 + 104, StringTagPtr);
      }
      v14 = SdbFindFirstTag(a1, v11, 24602LL);
      if ( v14 )
      {
        v15 = SdbGetStringTagPtr(a1, v14);
        AslStringDuplicate(a4 + 96, v15);
      }
    }
    v16 = SdbFindFirstTag(a1, v9, 24603LL);
    if ( v16 )
    {
      v17 = SdbGetStringTagPtr(a1, v16);
      AslStringDuplicate(a4 + 64, v17);
    }
    if ( !*(_QWORD *)(a4 + 64) )
    {
      v18 = SdbFindFirstTag(a1, a2, 24582LL);
      if ( v18 )
      {
        v19 = SdbGetStringTagPtr(a1, v18);
        AslStringDuplicate(a4 + 64, v19);
      }
    }
    v20 = SdbFindFirstTag(a1, a2, 24581LL);
    if ( v20 )
    {
      v21 = SdbGetStringTagPtr(a1, v20);
      AslStringDuplicate(a4 + 72, v21);
    }
    if ( !*(_QWORD *)(a4 + 72) )
    {
      v22 = SdbFindFirstTag(a1, v9, 24604LL);
      if ( v22 )
      {
        v23 = SdbGetStringTagPtr(a1, v22);
        AslStringDuplicate(a4 + 72, v23);
      }
    }
    v24 = SdbFindFirstTag(a1, v9, 24600LL);
    if ( v24 )
    {
      v25 = SdbGetStringTagPtr(a1, v24);
      AslStringDuplicate(a4 + 80, v25);
    }
    return 1;
  }
  return v7;
}
