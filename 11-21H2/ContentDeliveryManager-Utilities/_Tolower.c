/*
 * XREFs of _Tolower @ 0x18000593C
 * Callers:
 *     ?do_tolower@?$ctype@D@std@@MEBADD@Z @ 0x18000AE80 (-do_tolower@-$ctype@D@std@@MEBADD@Z.c)
 *     ?do_tolower@?$ctype@D@std@@MEBAPEBDPEADPEBD@Z @ 0x18000AEA0 (-do_tolower@-$ctype@D@std@@MEBAPEBDPEADPEBD@Z.c)
 * Callees:
 *     _GetLocaleHandleById @ 0x18000D234 (_GetLocaleHandleById.c)
 *     _GetLocaleHandleByType @ 0x18000D254 (_GetLocaleHandleByType.c)
 *     __crtLCMapStringA_Stub @ 0x18000D308 (__crtLCMapStringA_Stub.c)
 */

int __cdecl Tolower(int a1, const _Ctypevec *a2)
{
  int v4; // ebp
  __int64 LocaleHandleById; // rsi
  unsigned int v6; // r14d
  __int64 LocaleHandleByType; // rax
  int result; // eax
  unsigned int v9; // edx
  int v10; // edi
  int v11; // eax
  bool v12; // zf
  char v13; // [rsp+78h] [rbp+10h] BYREF
  char v14; // [rsp+79h] [rbp+11h]
  char v15; // [rsp+7Ah] [rbp+12h]
  unsigned __int8 v16; // [rsp+80h] [rbp+18h] BYREF
  unsigned __int8 v17; // [rsp+81h] [rbp+19h]

  v4 = 2;
  if ( a2 )
  {
    LocaleHandleByType = GetLocaleHandleByType(a2);
    v6 = *(&a2->_Page + 1);
    LocaleHandleById = LocaleHandleByType;
  }
  else
  {
    LocaleHandleById = GetLocaleHandleById(2LL);
    v6 = ___lc_codepage_func();
  }
  if ( !LocaleHandleById )
  {
    if ( (unsigned int)(a1 - 65) <= 0x19 )
      a1 += 32;
    return a1;
  }
  if ( (unsigned int)a1 < 0x100 )
  {
    if ( !a2 )
    {
      if ( !isupper(a1) )
        return a1;
      goto LABEL_17;
    }
    if ( (a2->_Table[(unsigned __int8)a1] & 1) == 0 )
      return a1;
LABEL_13:
    v9 = ((unsigned int)a2->_Table[BYTE1(a1)] >> 15) & 1;
    v10 = a1 >> 8;
    goto LABEL_14;
  }
  if ( a2 )
    goto LABEL_13;
LABEL_17:
  v10 = a1 >> 8;
  v9 = __pctype_func()[BYTE1(a1)] & 0x8000;
LABEL_14:
  if ( v9 )
  {
    v13 = v10;
    v14 = a1;
    v15 = 0;
  }
  else
  {
    v13 = a1;
    v4 = 1;
    v14 = 0;
  }
  v11 = _crtLCMapStringA_Stub(0LL, LocaleHandleById, 256LL, &v13, v4, &v16, 3, v6, 1);
  if ( !v11 )
    return a1;
  v12 = v11 == 1;
  result = v16;
  if ( !v12 )
    return v17 | (v16 << 8);
  return result;
}
