/*
 * XREFs of ?Append@CParseBuffer@CRegParser@ATL@@QEAAHPEBGH@Z @ 0x14009117C
 * Callers:
 *     ?PreProcessBuffer@CRegParser@ATL@@QEAAJPEAGPEAPEAG@Z @ 0x140092488 (-PreProcessBuffer@CRegParser@ATL@@QEAAJPEAGPEAPEAG@Z.c)
 * Callees:
 *     memcpy_s @ 0x14002AC78 (memcpy_s.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14004B99C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??$AtlMultiply@K@ATL@@YAJPEAKKK@Z @ 0x14007A76C (--$AtlMultiply@K@ATL@@YAJPEAKKK@Z.c)
 */

__int64 __fastcall ATL::CRegParser::CParseBuffer::Append(
        ATL::CRegParser::CParseBuffer *this,
        const unsigned __int16 *a2,
        int a3)
{
  int v6; // ecx
  signed int v7; // ebx
  LPVOID v8; // rax
  signed int v9; // edx
  errno_t v10; // eax
  SIZE_T cb; // [rsp+50h] [rbp+18h] BYREF

  v6 = *(_DWORD *)this + a3 + 1;
  if ( v6 <= *(_DWORD *)this || v6 <= a3 )
    return 0LL;
  v7 = *((_DWORD *)this + 1);
  if ( v6 >= v7 )
  {
    while ( v7 <= 0x3FFFFFFF )
    {
      v7 *= 2;
      if ( v6 < v7 )
      {
        LODWORD(cb) = 0;
        if ( (int)ATL::AtlMultiply<unsigned long>(&cb, v7, 2u) >= 0 )
        {
          v8 = CoTaskMemRealloc(*((LPVOID *)this + 1), (unsigned int)cb);
          if ( v8 )
          {
            *((_QWORD *)this + 1) = v8;
            *((_DWORD *)this + 1) = v7;
            goto LABEL_9;
          }
        }
        return 0LL;
      }
    }
    return 0LL;
  }
LABEL_9:
  if ( *(int *)this < 0 )
    return 0LL;
  if ( *(_DWORD *)this >= v7 )
    return 0LL;
  v9 = v7 - *(_DWORD *)this;
  if ( v9 > v7 )
    return 0LL;
  v10 = memcpy_s((void *const)(*((_QWORD *)this + 1) + 2LL * *(int *)this), 2LL * v9, a2, 2 * a3);
  if ( v10 )
  {
    if ( v10 == 12 )
      ATL::AtlThrowImpl(-2147024882);
    if ( v10 == 22 || v10 == 34 )
      ATL::AtlThrowImpl(-2147024809);
    if ( v10 != 80 )
      ATL::AtlThrowImpl(-2147467259);
  }
  *(_DWORD *)this += a3;
  *(_WORD *)(*((_QWORD *)this + 1) + 2LL * *(int *)this) = 0;
  return 1LL;
}
