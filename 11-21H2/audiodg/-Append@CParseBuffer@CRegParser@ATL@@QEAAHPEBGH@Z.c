/*
 * XREFs of ?Append@CParseBuffer@CRegParser@ATL@@QEAAHPEBGH@Z @ 0x140084454
 * Callers:
 *     ?PreProcessBuffer@CRegParser@ATL@@QEAAJPEAGPEAPEAG@Z @ 0x1400856A0 (-PreProcessBuffer@CRegParser@ATL@@QEAAJPEAGPEAPEAG@Z.c)
 * Callees:
 *     memcpy_s_0 @ 0x14004F70C (memcpy_s_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140050DC8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??$AtlMultiply@K@ATL@@YAJPEAKKK@Z @ 0x14006DC98 (--$AtlMultiply@K@ATL@@YAJPEAKKK@Z.c)
 */

__int64 __fastcall ATL::CRegParser::CParseBuffer::Append(
        ATL::CRegParser::CParseBuffer *this,
        const unsigned __int16 *a2,
        int a3)
{
  int v3; // eax
  int v6; // ecx
  signed int v8; // ebx
  LPVOID v9; // rax
  errno_t v10; // eax
  SIZE_T cb; // [rsp+50h] [rbp+18h] BYREF

  v3 = *(_DWORD *)this;
  v6 = *(_DWORD *)this + a3 + 1;
  if ( v6 <= v3 || v6 <= a3 )
    return 0LL;
  v8 = *((_DWORD *)this + 1);
  if ( v6 >= v8 )
  {
    while ( v8 <= 0x3FFFFFFF )
    {
      v8 *= 2;
      if ( v6 < v8 )
      {
        LODWORD(cb) = 0;
        if ( (int)ATL::AtlMultiply<unsigned long>(&cb, v8, 2u) >= 0 )
        {
          v9 = CoTaskMemRealloc(*((LPVOID *)this + 1), (unsigned int)cb);
          if ( v9 )
          {
            *((_QWORD *)this + 1) = v9;
            v3 = *(_DWORD *)this;
            *((_DWORD *)this + 1) = v8;
            goto LABEL_9;
          }
        }
        return 0LL;
      }
    }
    return 0LL;
  }
LABEL_9:
  if ( v3 < 0 || v3 >= v8 || v8 - v3 > v8 )
    return 0LL;
  v10 = memcpy_s_0((void *const)(*((_QWORD *)this + 1) + 2LL * v3), 2LL * (v8 - v3), a2, 2 * a3);
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
