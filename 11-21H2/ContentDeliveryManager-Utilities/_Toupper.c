/*
 * XREFs of _Toupper @ 0x18000DCD4
 * Callers:
 *     ?do_toupper@?$ctype@D@std@@MEBADD@Z @ 0x18000AEF0 (-do_toupper@-$ctype@D@std@@MEBADD@Z.c)
 *     ?do_toupper@?$ctype@D@std@@MEBAPEBDPEADPEBD@Z @ 0x18000AF10 (-do_toupper@-$ctype@D@std@@MEBAPEBDPEADPEBD@Z.c)
 * Callees:
 *     _GetLocaleHandleById @ 0x18000D234 (_GetLocaleHandleById.c)
 *     _GetLocaleHandleByType @ 0x18000D254 (_GetLocaleHandleByType.c)
 *     __crtLCMapStringA_Stub @ 0x18000D308 (__crtLCMapStringA_Stub.c)
 */

int __cdecl Toupper(int a1, const _Ctypevec *a2)
{
  __int64 v2; // rbx
  int v4; // esi
  __int64 LocaleHandleById; // rbp
  unsigned int v6; // r14d
  __int64 LocaleHandleByType; // rax
  int result; // eax
  unsigned __int8 v9; // ch
  int v10; // edi
  unsigned int v11; // edx
  int v12; // eax
  bool v13; // zf
  char v14; // [rsp+78h] [rbp+10h] BYREF
  char v15; // [rsp+79h] [rbp+11h]
  char v16; // [rsp+7Ah] [rbp+12h]
  unsigned __int8 v17; // [rsp+80h] [rbp+18h] BYREF
  unsigned __int8 v18; // [rsp+81h] [rbp+19h]

  v2 = a1;
  v4 = 2;
  if ( a2 )
  {
    LocaleHandleByType = GetLocaleHandleByType(&a2->_Page);
    v6 = *(&a2->_Page + 1);
    LocaleHandleById = LocaleHandleByType;
  }
  else
  {
    LocaleHandleById = GetLocaleHandleById(2);
    v6 = ___lc_codepage_func();
  }
  if ( !LocaleHandleById )
  {
    if ( (unsigned int)(v2 - 97) <= 0x19 )
      LODWORD(v2) = v2 - 32;
    return v2;
  }
  if ( (unsigned int)v2 >= 0x100 )
  {
    v9 = BYTE1(v2);
  }
  else
  {
    if ( !a2 )
    {
      if ( !islower(v2) )
        return v2;
      goto LABEL_16;
    }
    v9 = BYTE1(v2);
    if ( (a2->_Table[v2] & 2) == 0 )
      return v2;
  }
  if ( !a2 )
  {
LABEL_16:
    v10 = (int)v2 >> 8;
    v11 = __pctype_func()[BYTE1(v2)] & 0x8000;
    goto LABEL_18;
  }
  v11 = ((unsigned int)a2->_Table[v9] >> 15) & 1;
  v10 = (int)v2 >> 8;
LABEL_18:
  if ( v11 )
  {
    v14 = v10;
    v15 = v2;
    v16 = 0;
  }
  else
  {
    v14 = v2;
    v4 = 1;
    v15 = 0;
  }
  v12 = _crtLCMapStringA_Stub(0LL, LocaleHandleById, 512LL, (__int64)&v14, v4, (__int64)&v17, 3, v6, 1);
  if ( !v12 )
    return v2;
  v13 = v12 == 1;
  result = v17;
  if ( !v13 )
    return v18 | (v17 << 8);
  return result;
}
