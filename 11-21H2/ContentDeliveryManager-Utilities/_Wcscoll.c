/*
 * XREFs of _Wcscoll @ 0x1800214E8
 * Callers:
 *     ?do_compare@?$collate@_W@std@@MEBAHPEB_W000@Z @ 0x180017510 (-do_compare@-$collate@_W@std@@MEBAHPEB_W000@Z.c)
 * Callees:
 *     _GetLocaleHandleByColl @ 0x18000D228 (_GetLocaleHandleByColl.c)
 *     _GetLocaleHandleById @ 0x18000D234 (_GetLocaleHandleById.c)
 *     __crtCompareStringW_Stub @ 0x18000D2A8 (__crtCompareStringW_Stub.c)
 */

int __cdecl Wcscoll(const wchar_t *a1, const wchar_t *a2, const wchar_t *a3, const wchar_t *a4, const _Collvec *a5)
{
  signed __int64 v6; // rbp
  int v7; // edi
  signed __int64 v8; // rsi
  const wchar_t *v9; // r14
  int v10; // ebx
  __int64 LocaleHandleByColl; // rax
  unsigned int v12; // r15d
  int v13; // eax
  char *v14; // r12
  wchar_t v15; // cx
  unsigned int v16; // eax
  int v17; // ebx

  v6 = a2 - a1;
  v7 = 0;
  v8 = a4 - a3;
  v9 = a3;
  v10 = 1;
  if ( a5 )
    LocaleHandleByColl = GetLocaleHandleByColl(&a5->_Page);
  else
    LocaleHandleByColl = GetLocaleHandleById(1);
  v12 = LocaleHandleByColl;
  if ( LocaleHandleByColl )
  {
    v16 = ___lc_collate_cp_func();
    v17 = _crtCompareStringW_Stub(v12, 0x1000u, (__int64)a1, v6, (__int64)v9, v8, v16);
    if ( v17 )
    {
      return v17 - 2;
    }
    else
    {
      v10 = 0x7FFFFFFF;
      *_errno() = 22;
    }
  }
  else
  {
    v13 = v8;
    if ( (int)v6 < (int)v8 )
      v13 = v6;
    if ( v13 > 0 )
    {
      v14 = (char *)((char *)a1 - (char *)v9);
      do
      {
        v15 = *(const wchar_t *)((char *)v9 + (_QWORD)v14);
        if ( v15 != *v9 )
          return v15 < *v9 ? -1 : 1;
        ++v9;
      }
      while ( --v13 > 0 );
    }
    if ( (_DWORD)v6 == (_DWORD)v8 )
      return v7;
    if ( (int)v6 < (int)v8 )
      return -1;
  }
  return v10;
}
