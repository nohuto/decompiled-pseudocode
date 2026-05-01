/*
 * XREFs of SdbpConvertResourcesToStrings @ 0x18009193C
 * Callers:
 *     SdbpReadApphelpDisplayResources @ 0x180091E64 (SdbpReadApphelpDisplayResources.c)
 * Callees:
 *     SdbpExpandSummaryMsg @ 0x180091B48 (SdbpExpandSummaryMsg.c)
 *     SdbpGetRCIDStringCopy @ 0x180091BF4 (SdbpGetRCIDStringCopy.c)
 *     SdbFindFirstTag @ 0x180093C44 (SdbFindFirstTag.c)
 *     SdbGetStringTagPtr @ 0x180093F34 (SdbGetStringTagPtr.c)
 *     AslStringDuplicate @ 0x180098DC8 (AslStringDuplicate.c)
 */

__int64 __fastcall SdbpConvertResourcesToStrings(__int64 a1, unsigned int a2, _QWORD *a3, _QWORD *a4)
{
  __int64 *v5; // r14
  __int64 RCIDStringCopy; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbp
  __int64 v17; // rbx
  unsigned int FirstTag; // eax
  __int64 StringTagPtr; // rax
  unsigned int v20; // eax
  __int64 v21; // rax

  v5 = a4 + 8;
  RCIDStringCopy = SdbpGetRCIDStringCopy(*a3, *((unsigned int *)a3 + 2));
  v10 = *((unsigned int *)a3 + 3);
  v11 = a4 + 9;
  v12 = *a3;
  *v5 = RCIDStringCopy;
  v13 = SdbpGetRCIDStringCopy(v12, v10);
  v14 = *((unsigned int *)a3 + 4);
  v15 = *a3;
  a4[9] = v13;
  v16 = SdbpGetRCIDStringCopy(v15, v14);
  v17 = SdbpGetRCIDStringCopy(*a3, *((unsigned int *)a3 + 5));
  if ( !*v5 )
  {
    FirstTag = SdbFindFirstTag(a1, a2, 24582LL);
    if ( FirstTag )
    {
      StringTagPtr = SdbGetStringTagPtr(a1, FirstTag);
      AslStringDuplicate(v5, StringTagPtr);
    }
  }
  if ( !*v11 )
  {
    v20 = SdbFindFirstTag(a1, a2, 24581LL);
    if ( v20 )
    {
      v21 = SdbGetStringTagPtr(a1, v20);
      AslStringDuplicate(a4 + 9, v21);
    }
  }
  if ( v16 )
    a4[10] = SdbpExpandSummaryMsg(v16, *v5, *v11, v17);
  return 1LL;
}
