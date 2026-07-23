/*
 * XREFs of sub_140789718 @ 0x140789718
 * Callers:
 *     IoGetDeviceInterfaceAlias @ 0x1406DB590 (IoGetDeviceInterfaceAlias.c)
 *     sub_140769C24 @ 0x140769C24 (sub_140769C24.c)
 * Callees:
 *     sub_1402E0340 @ 0x1402E0340 (sub_1402E0340.c)
 *     sub_14077FAC0 @ 0x14077FAC0 (sub_14077FAC0.c)
 *     sub_1407871A0 @ 0x1407871A0 (sub_1407871A0.c)
 */

__int64 __fastcall sub_140789718(
        __int64 a1,
        const WCHAR *a2,
        WCHAR *a3,
        const WCHAR *a4,
        char a5,
        _WORD *a6,
        unsigned int a7,
        _DWORD *a8)
{
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rbx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  _WORD *v16; // r14
  const WCHAR *v17; // r8
  __int64 result; // rax
  __int16 *i; // rdx
  __int16 v20; // cx
  WCHAR v21; // ax
  const WCHAR *v22; // rdx
  _WORD *v23[2]; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 v24; // [rsp+70h] [rbp+30h] BYREF

  v23[0] = 0LL;
  v24 = 0LL;
  if ( (int)sub_1407871A0(a1, a2) < 0 || (int)sub_14077FAC0(v11, a3) < 0 )
    return 3221225485LL;
  v12 = -1LL;
  if ( a4 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( a4[v13] );
    if ( (unsigned __int64)(v13 - 1) <= 0x102 )
    {
      v21 = *a4;
      v22 = a4;
      while ( v21 )
      {
        if ( v21 == 92 || v21 == 47 )
          return 3221225523LL;
        v21 = *++v22;
      }
      goto LABEL_5;
    }
    return 3221225485LL;
  }
  v13 = 0LL;
  do
LABEL_5:
    ++v12;
  while ( a3[v12] );
  v14 = v12 + 44;
  v15 = v13 + 2;
  if ( !v13 )
    v15 = v14;
  if ( v15 > 0xFFFFFFFF )
    return 3221225621LL;
  if ( a8 )
    *a8 = v15;
  if ( (unsigned int)v15 > a7 )
    return 3221225507LL;
  v16 = a6;
  v17 = L"\\??\\";
  if ( !a5 )
    v17 = (const WCHAR *)&qword_1408656D0;
  result = sub_1402E0340(a6, a7, v17, v23, &v24, 2304);
  if ( (int)result >= 0 )
  {
    result = sub_1402E0340(v23[0], v24, a3, v23, &v24, 2304);
    if ( (int)result >= 0 )
    {
      result = sub_1402E0340(v23[0], v24, (const WCHAR *)qword_1408692F0, v23, &v24, 2304);
      if ( (int)result >= 0 )
      {
        result = sub_1402E0340(v23[0], v24, a2, v23, &v24, 2304);
        if ( (int)result >= 0 )
        {
          for ( i = v16 + 4; ; ++i )
          {
            v20 = *i;
            if ( !*i )
              break;
            if ( v20 == 92 || v20 == 47 )
              *i = 35;
          }
          if ( v13 )
          {
            result = sub_1402E0340(v23[0], v24, &word_140865B20, v23, &v24, 2304);
            if ( (int)result >= 0 )
              return sub_1402E0340(v23[0], v24, a4, v23, &v24, 2304);
          }
        }
      }
    }
  }
  return result;
}
