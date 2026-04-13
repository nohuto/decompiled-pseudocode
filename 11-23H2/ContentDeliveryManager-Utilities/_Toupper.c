/*
 * XREFs of _Toupper @ 0x18000E3D8
 * Callers:
 *     ?do_toupper@?$ctype@D@std@@MEBADD@Z @ 0x18000B5F0 (-do_toupper@-$ctype@D@std@@MEBADD@Z.c)
 *     ?do_toupper@?$ctype@D@std@@MEBAPEBDPEADPEBD@Z @ 0x18000B610 (-do_toupper@-$ctype@D@std@@MEBAPEBDPEADPEBD@Z.c)
 * Callees:
 *     _GetLocaleHandleById @ 0x18000D928 (_GetLocaleHandleById.c)
 *     _GetLocaleHandleByType @ 0x18000D948 (_GetLocaleHandleByType.c)
 *     __crtLCMapStringA_Stub @ 0x18000D9FC (__crtLCMapStringA_Stub.c)
 */

int __cdecl Toupper(int a1, const _Ctypevec *a2)
{
  __int64 v2; // rbx
  int v4; // esi
  __int64 LocaleHandleById; // rbp
  unsigned int v6; // r14d
  __int64 LocaleHandleByType; // rax
  int result; // eax
  const __int16 **p_Table; // rdx
  unsigned __int8 v10; // ch
  unsigned int v11; // edx
  int v12; // edi
  int v13; // eax
  bool v14; // zf
  char v15; // [rsp+78h] [rbp+10h] BYREF
  char v16; // [rsp+79h] [rbp+11h]
  char v17; // [rsp+7Ah] [rbp+12h]
  unsigned __int8 v18; // [rsp+80h] [rbp+18h] BYREF
  unsigned __int8 v19; // [rsp+81h] [rbp+19h]

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
  if ( (unsigned int)v2 < 0x100 )
  {
    if ( !a2 )
    {
      if ( islower(v2) )
        goto LABEL_17;
      return v2;
    }
    p_Table = &a2->_Table;
    v10 = BYTE1(v2);
    if ( (a2->_Table[v2] & 2) == 0 )
      return v2;
LABEL_13:
    v11 = ((unsigned int)(*p_Table)[v10] >> 15) & 1;
    v12 = (int)v2 >> 8;
    goto LABEL_14;
  }
  p_Table = &a2->_Table;
  v10 = BYTE1(v2);
  if ( a2 )
    goto LABEL_13;
LABEL_17:
  v12 = (int)v2 >> 8;
  v11 = __pctype_func()[BYTE1(v2)] & 0x8000;
LABEL_14:
  if ( v11 )
  {
    v15 = v12;
    v16 = v2;
    v17 = 0;
  }
  else
  {
    v15 = v2;
    v4 = 1;
    v16 = 0;
  }
  v13 = _crtLCMapStringA_Stub(0LL, LocaleHandleById, 512LL, (__int64)&v15, v4, (__int64)&v18, 3, v6, 1);
  if ( !v13 )
    return v2;
  v14 = v13 == 1;
  result = v18;
  if ( !v14 )
    return v19 | (v18 << 8);
  return result;
}
