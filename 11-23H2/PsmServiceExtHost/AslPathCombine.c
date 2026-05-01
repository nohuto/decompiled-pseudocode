/*
 * XREFs of AslPathCombine @ 0x18009D99C
 * Callers:
 *     SdbpGetPathAppPatch @ 0x1800925D0 (SdbpGetPathAppPatch.c)
 *     SdbpGetPathAppPatchPreRS3 @ 0x1800926D0 (SdbpGetPathAppPatchPreRS3.c)
 *     SdbpGetPathAppraiser @ 0x180092860 (SdbpGetPathAppraiser.c)
 *     SdbpGetPathCustomSdb @ 0x1800929B0 (SdbpGetPathCustomSdb.c)
 *     SdbpGetPathCustomSdbPreRS3 @ 0x180092AB0 (SdbpGetPathCustomSdbPreRS3.c)
 *     AslEnvGetSysNativeDirPathForGuestBuf @ 0x1800A0184 (AslEnvGetSysNativeDirPathForGuestBuf.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x1800A02BC (AslEnvGetSystem32DirPathBuf.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x180002328 (RtlStringCopyWorkerW.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800748BC (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     RtlStringCchCatW @ 0x18008FB1C (RtlStringCchCatW.c)
 *     RtlStringCchLengthW @ 0x18008FCD8 (RtlStringCchLengthW.c)
 *     AslLogCallPrintf @ 0x1800982C0 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslPathCombine(unsigned __int16 *a1, unsigned __int16 *a2, unsigned __int16 *a3, __int64 a4)
{
  signed int v8; // ebx
  __int64 v9; // r11
  unsigned __int16 *v10; // r15
  unsigned int v11; // ebp
  __int64 v12; // r8
  unsigned __int64 v13; // r11
  unsigned int v14; // eax
  unsigned __int64 v15; // rdx
  unsigned __int16 *v16; // rax
  __int64 v17; // r9
  __int64 v18; // [rsp+30h] [rbp-38h] BYREF
  __int64 v19; // [rsp+88h] [rbp+20h] BYREF

  v18 = 0LL;
  v19 = 0LL;
  if ( !a4 )
    return 3221225507LL;
  v8 = RtlStringCchLengthW(a1, 0x7FFFFFFFLL, &v18);
  if ( v8 < 0 )
    goto LABEL_30;
  v8 = RtlStringCchLengthW(a2, 0x7FFFFFFFLL, &v19);
  if ( v8 < 0 )
    goto LABEL_30;
  if ( v18 )
  {
    if ( v19 )
    {
      v10 = a2 + 1;
      v11 = (a1[v18 - 1] == 92) + 1;
      if ( *a2 != 92 )
        v11 = a1[v18 - 1] == 92;
      if ( v11 <= 1 )
        v10 = a2;
      v8 = RtlStringCchCopyW(a3, v9, a1);
      if ( v8 >= 0 )
      {
        v14 = v11 - 1;
        if ( v11 <= 1 )
          v14 = v11;
        if ( v14 )
          goto LABEL_34;
        if ( v13 <= 0x7FFFFFFF )
        {
          v15 = v13;
          v16 = a3;
          do
          {
            if ( !*v16 )
              break;
            ++v16;
            --v15;
          }
          while ( v15 );
          v8 = v15 == 0 ? 0xC000000D : 0;
          if ( v15 )
          {
            v17 = (v13 - v15) & -(__int64)(v15 != 0);
            v8 = RtlStringCopyWorkerW(&a3[v17], v13 - v17, v12, (__int64)L"\\");
          }
        }
        else
        {
          v8 = v13 > 0x7FFFFFFF ? 0xC000000D : 0;
        }
        if ( v8 >= 0 )
        {
LABEL_34:
          v8 = RtlStringCchCatW(a3, v13, (__int64)v10);
          if ( v8 >= 0 )
            return 0;
        }
      }
LABEL_30:
      AslLogCallPrintf(1LL, (unsigned int)"AslPathCombine", 1420, (unsigned int)"An RtlString API failed [%x]", v8);
      return (unsigned int)v8;
    }
    a2 = a1;
LABEL_11:
    v8 = RtlStringCchCopyW(a3, v9, a2);
    if ( v8 >= 0 )
      return (unsigned int)v8;
    goto LABEL_30;
  }
  if ( v19 )
    goto LABEL_11;
  *a3 = 0;
  return 0;
}
