/*
 * XREFs of SdbpFindFirstIndexedWildCardTag @ 0x140758BE0
 * Callers:
 *     SdbpSearchDB @ 0x1407523F4 (SdbpSearchDB.c)
 *     SdbGetDatabaseMatchEx @ 0x140756EB0 (SdbGetDatabaseMatchEx.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 *     SdbGetIndex @ 0x1407556B8 (SdbGetIndex.c)
 *     SdbpGetIndex @ 0x140757408 (SdbpGetIndex.c)
 *     SdbGetStringTagPtr @ 0x140757558 (SdbGetStringTagPtr.c)
 *     SdbFindFirstTag @ 0x140757B94 (SdbFindFirstTag.c)
 *     AslStringUpcaseToMultiByteN @ 0x1407582CC (AslStringUpcaseToMultiByteN.c)
 *     SdbpKeyToAnsiString @ 0x140758D80 (SdbpKeyToAnsiString.c)
 *     AslStringPatternMatchExA @ 0x1407AEF40 (AslStringPatternMatchExA.c)
 *     AslStringPatternMatchExW @ 0x1407C6B3C (AslStringPatternMatchExW.c)
 */

__int64 __fastcall SdbpFindFirstIndexedWildCardTag(
        _RTL_RUN_ONCE *Parameter,
        __int16 a2,
        __int16 a3,
        const WCHAR *a4,
        unsigned int *a5)
{
  unsigned int Index; // eax
  char v9; // r15
  __int64 v10; // rdx
  __int64 v11; // r12
  unsigned int v12; // r14d
  __int64 v13; // rdi
  int v14; // r15d
  __int64 v15; // rcx
  unsigned int v17; // esi
  unsigned int FirstTag; // eax
  __int64 v19; // r8
  __int64 StringTagPtr; // rax
  unsigned int v21; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v22; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v23; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v24; // [rsp+40h] [rbp-C0h]
  _BYTE v25[272]; // [rsp+50h] [rbp-B0h] BYREF

  v22 = 0;
  v21 = 0;
  if ( (((a3 & 0xF000) - 24576) & 0xDFFF) != 0 )
    goto LABEL_16;
  Index = SdbGetIndex(Parameter, a2, a3, &v21);
  *a5 = Index;
  if ( !Index )
    goto LABEL_16;
  v9 = v21;
  a5[5] = v21;
  *((_WORD *)a5 + 6) = a3;
  *((_QWORD *)a5 + 4) = a4;
  memset(v25, 0, 0x104uLL);
  v23 = 0LL;
  v24 = 0;
  if ( (int)AslStringUpcaseToMultiByteN((__int64)v25, v10, a4) < 0
    || (v11 = SdbpGetIndex((__int64)Parameter, *a5, &v22)) == 0 )
  {
LABEL_16:
    AslLogCallPrintf(1LL);
    return 0LL;
  }
  v12 = v22;
  v13 = 0LL;
  if ( !v22 )
    return 0LL;
  v14 = v9 & 2;
  while ( 1 )
  {
    v15 = *(_QWORD *)(v11 + 12 * v13);
    if ( v14 )
    {
      SdbpKeyToAnsiString(v15, (char *)&v23 + 1);
      LOBYTE(v23) = 42;
    }
    else
    {
      SdbpKeyToAnsiString(v15, &v23);
      LOBYTE(v24) = 42;
    }
    if ( (unsigned int)AslStringPatternMatchExA(&v23, v25) )
    {
      v17 = *(_DWORD *)(v11 + 12 * v13 + 8);
      FirstTag = SdbFindFirstTag((__int64)Parameter, v17, *((unsigned __int16 *)a5 + 6));
      if ( FirstTag )
      {
        StringTagPtr = SdbGetStringTagPtr((__int64)Parameter, FirstTag, v19);
        if ( StringTagPtr )
        {
          if ( (unsigned int)AslStringPatternMatchExW(StringTagPtr, *((_QWORD *)a5 + 4)) )
            break;
        }
      }
    }
    v13 = (unsigned int)(v13 + 1);
    if ( (unsigned int)v13 >= v12 )
      return 0LL;
  }
  a5[4] = v13;
  return v17;
}
