/*
 * XREFs of SdbpFindFirstIndexedWildCardTag @ 0x14075B48C
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x14075B6A4 (SdbGetDatabaseMatchEx.c)
 *     SdbpSearchDB @ 0x14075BB10 (SdbpSearchDB.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     AslStringPatternMatchExA @ 0x1406AD17C (AslStringPatternMatchExA.c)
 *     AslLogCallPrintf @ 0x1406E0C3C (AslLogCallPrintf.c)
 *     AslStringUpcaseToMultiByteN @ 0x14075B0E4 (AslStringUpcaseToMultiByteN.c)
 *     SdbpKeyToAnsiString @ 0x14075B608 (SdbpKeyToAnsiString.c)
 *     SdbpGetIndex @ 0x14075B638 (SdbpGetIndex.c)
 *     SdbGetIndex @ 0x14075BCC0 (SdbGetIndex.c)
 *     SdbFindFirstTag @ 0x140792CCC (SdbFindFirstTag.c)
 *     SdbGetStringTagPtr @ 0x140842A24 (SdbGetStringTagPtr.c)
 *     AslStringPatternMatchExW @ 0x140851068 (AslStringPatternMatchExW.c)
 */

__int64 __fastcall SdbpFindFirstIndexedWildCardTag(void *a1, __int64 a2, __int64 a3, const WCHAR *a4, unsigned int *a5)
{
  unsigned int Index; // eax
  __int64 v8; // rdx
  __int64 v9; // r12
  unsigned int v10; // r14d
  __int64 v11; // rdi
  unsigned int v13; // esi
  unsigned int FirstTag; // eax
  __int64 StringTagPtr; // rax
  unsigned int v16; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v17; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v18; // [rsp+40h] [rbp-C0h]
  char v19[272]; // [rsp+50h] [rbp-B0h] BYREF

  v16 = 0;
  Index = SdbGetIndex(a1);
  *a5 = Index;
  if ( !Index )
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
  a5[5] = 0;
  *((_WORD *)a5 + 6) = 24587;
  *((_QWORD *)a5 + 4) = a4;
  memset(v19, 0, 0x104uLL);
  v17 = 0LL;
  v18 = 0;
  if ( (int)AslStringUpcaseToMultiByteN(v19, v8, a4) < 0 )
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
  v9 = SdbpGetIndex(a1, *a5, &v16);
  if ( !v9 )
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
  v10 = v16;
  v11 = 0LL;
  if ( !v16 )
    return 0LL;
  while ( 1 )
  {
    SdbpKeyToAnsiString(*(_QWORD *)(v9 + 12 * v11), &v17);
    LOBYTE(v18) = 42;
    if ( (unsigned int)AslStringPatternMatchExA((char *)&v17, v19) )
    {
      v13 = *(_DWORD *)(v9 + 12 * v11 + 8);
      FirstTag = SdbFindFirstTag(a1, v13, *((unsigned __int16 *)a5 + 6));
      if ( FirstTag )
      {
        StringTagPtr = SdbGetStringTagPtr(a1, FirstTag);
        if ( StringTagPtr )
        {
          if ( (unsigned int)AslStringPatternMatchExW(StringTagPtr, *((_QWORD *)a5 + 4)) )
            break;
        }
      }
    }
    v11 = (unsigned int)(v11 + 1);
    if ( (unsigned int)v11 >= v10 )
      return 0LL;
  }
  a5[4] = v11;
  return v13;
}
