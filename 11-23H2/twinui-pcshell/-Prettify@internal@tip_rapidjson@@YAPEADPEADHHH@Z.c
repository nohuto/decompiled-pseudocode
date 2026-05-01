/*
 * XREFs of ?Prettify@internal@tip_rapidjson@@YAPEADPEADHHH@Z @ 0x1806552A0
 * Callers:
 *     ?dtoa@internal@tip_rapidjson@@YAPEADNPEADH@Z @ 0x180655F38 (-dtoa@internal@tip_rapidjson@@YAPEADNPEADH@Z.c)
 * Callees:
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 *     ?WriteExponent@internal@tip_rapidjson@@YAPEADHPEAD@Z @ 0x180655E10 (-WriteExponent@internal@tip_rapidjson@@YAPEADHPEAD@Z.c)
 */

char *__fastcall tip_rapidjson::internal::Prettify(tip_rapidjson::internal *this, char *a2, char *a3, int a4)
{
  int v4; // r15d
  __int64 v6; // r14
  int v8; // esi
  char *v9; // rcx
  int v10; // eax
  __int64 v12; // r12
  _BYTE *v13; // rbx
  int v14; // ecx
  __int64 i; // rax
  _BYTE *v16; // r12
  int v17; // edx
  int v18; // ebp
  __int64 j; // rax
  _BYTE *v20; // rcx
  int v21; // edx

  v4 = (int)a3;
  v6 = (int)a2;
  v8 = (_DWORD)a2 + (_DWORD)a3;
  if ( (int)a3 >= 0 && v8 <= 21 )
  {
    if ( (int)a2 < v8 )
    {
      v9 = (char *)this + (int)a2;
      LOBYTE(a2) = 48;
      memset_0(v9, (int)a2, (int)a3);
    }
    *(_WORD *)((char *)this + v8) = 12334;
    goto LABEL_6;
  }
  if ( (unsigned int)(v8 - 1) <= 0x14 )
  {
    v12 = v8 + 1;
    v13 = (char *)this + v8;
    memmove_0((char *)this + v12, v13, -(int)a3);
    *v13 = 46;
    if ( v4 + a4 >= 0 )
    {
      v10 = v6 + 1;
      return (char *)this + v10;
    }
    v14 = v8 + a4;
    for ( i = v8 + a4; i > v12; --i )
    {
      if ( *((_BYTE *)this + i) != 48 )
      {
        v10 = v14 + 1;
        return (char *)this + v10;
      }
      --v14;
    }
LABEL_6:
    v10 = v8 + 2;
    return (char *)this + v10;
  }
  v16 = (char *)this + 1;
  if ( (unsigned int)v8 >= 0xFFFFFFFB || v8 == 0 )
  {
    memmove_0((char *)this + 2 - v8, this, (int)a2);
    *(_BYTE *)this = 48;
    *v16 = 46;
    if ( 2 - v8 > 2 )
    {
      LOBYTE(v17) = 48;
      memset_0((char *)this + 2, v17, -v8);
    }
    if ( -v4 <= a4 )
    {
      v10 = 2 - v8 + v6;
      return (char *)this + v10;
    }
    v18 = a4 + 1;
    for ( j = v18; j > 2; --j )
    {
      if ( *((_BYTE *)this + j) != 48 )
      {
        v10 = v18 + 1;
        return (char *)this + v10;
      }
      --v18;
    }
    return (char *)this + 3;
  }
  v20 = (char *)this + 2;
  if ( v8 < -a4 )
  {
    *(_BYTE *)this = 48;
    *v16 = 46;
    *v20 = 48;
    return (char *)this + 3;
  }
  if ( (_DWORD)a2 == 1 )
  {
    *v16 = 101;
    v21 = (int)v20;
  }
  else
  {
    memmove_0(v20, v16, (int)a2 - 1);
    *v16 = 46;
    v21 = (_DWORD)this + v6 + 2;
    *((_BYTE *)this + v6 + 1) = 101;
  }
  return tip_rapidjson::internal::WriteExponent((tip_rapidjson::internal *)(unsigned int)(v8 - 1), v21, a3);
}
