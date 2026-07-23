/*
 * XREFs of RtlStringCbPrintfExW @ 0x18006E844
 * Callers:
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18006E06C (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlQueryPackageClaims @ 0x18006E550 (RtlQueryPackageClaims.c)
 *     LdrpConstructModernAppKeyName @ 0x1800DD1B0 (LdrpConstructModernAppKeyName.c)
 * Callees:
 *     RtlStringVPrintfWorkerW_0 @ 0x18006E948 (RtlStringVPrintfWorkerW_0.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1800D9544 (RtlStringExHandleOtherFlagsW.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

__int64 RtlStringCbPrintfExW(_WORD *a1, unsigned __int64 a2, _QWORD *a3, _QWORD *a4, int a5, const WCHAR *a6, ...)
{
  unsigned __int64 v7; // rdi
  int v10; // ebx
  _WORD *v11; // r13
  const WCHAR *v12; // r9
  int v13; // eax
  __int64 v14; // rcx
  unsigned __int64 v16; // r8
  _WORD *v17; // [rsp+30h] [rbp-18h] BYREF
  _QWORD v18[2]; // [rsp+38h] [rbp-10h] BYREF
  va_list va; // [rsp+C0h] [rbp+78h] BYREF

  va_start(va, a6);
  v7 = a2 >> 1;
  v10 = 0;
  if ( (a5 & 0x100) != 0 )
  {
    if ( !a1 && v7 || v7 > 0x7FFFFFFF )
      v10 = -1073741811;
  }
  else if ( v7 - 1 > 0x7FFFFFFE )
  {
    v10 = -1073741811;
  }
  if ( v10 < 0 )
  {
    if ( v7 )
      *a1 = 0;
  }
  else
  {
    v17 = a1;
    v11 = a1;
    v18[0] = a2 >> 1;
    if ( (a5 & 0x100) != 0 )
    {
      v12 = &word_180135D3C;
      if ( a6 )
        v12 = a6;
    }
    else
    {
      v12 = a6;
    }
    v10 = 0;
    if ( (a5 & 0xFFFFE000) != 0 )
    {
      v10 = -1073741811;
      if ( v7 )
        *a1 = 0;
    }
    else if ( v7 )
    {
      v18[0] = 0LL;
      v13 = RtlStringVPrintfWorkerW_0(a1, v7, v18, v12, va);
      v14 = v18[0];
      v10 = v13;
      v7 -= v18[0];
      v18[0] = v7;
      v11 = &a1[v14];
      v17 = v11;
      if ( v13 >= 0 )
      {
        if ( (a5 & 0x200) != 0 )
        {
          v16 = (a2 & 1) + 2 * v7;
          if ( v16 > 2 )
            memset_thunk_772440563353939046(v11 + 1, (unsigned __int8)a5, v16 - 2);
        }
        goto LABEL_11;
      }
    }
    else
    {
      if ( !*v12 )
      {
LABEL_11:
        if ( a3 )
          *a3 = v11;
        if ( a4 )
          *a4 = (a2 & 1) + 2 * v7;
        return (unsigned int)v10;
      }
      v10 = a1 != 0LL ? -2147483643 : -1073741811;
    }
    if ( (a5 & 0x1C00) != 0 && a2 )
    {
      RtlStringExHandleOtherFlagsW(a1, a2, a3, &v17, v18, a5);
      v11 = v17;
      v7 = v18[0];
    }
    if ( (int)(v10 + 0x80000000) < 0 || v10 == -2147483643 )
      goto LABEL_11;
  }
  return (unsigned int)v10;
}
