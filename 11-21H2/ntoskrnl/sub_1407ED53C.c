/*
 * XREFs of sub_1407ED53C @ 0x1407ED53C
 * Callers:
 *     sub_1407ED450 @ 0x1407ED450 (sub_1407ED450.c)
 * Callees:
 *     sub_14075B6A4 @ 0x14075B6A4 (sub_14075B6A4.c)
 *     sub_14078EE18 @ 0x14078EE18 (sub_14078EE18.c)
 *     sub_140792CCC @ 0x140792CCC (sub_140792CCC.c)
 *     sub_140842864 @ 0x140842864 (sub_140842864.c)
 *     sub_140843CD4 @ 0x140843CD4 (sub_140843CD4.c)
 *     sub_14085C084 @ 0x14085C084 (sub_14085C084.c)
 *     sub_140963CD0 @ 0x140963CD0 (sub_140963CD0.c)
 */

__int64 __fastcall sub_1407ED53C(__int64 a1, __int64 a2, const wchar_t *a3, __int64 a4)
{
  unsigned int v6; // eax
  __int64 result; // rax
  __int64 v8; // rbx
  unsigned int i; // eax
  unsigned int v10; // edi
  unsigned int j; // eax
  unsigned int v12; // edi
  unsigned int v13; // [rsp+40h] [rbp-40h] BYREF
  __int64 v14; // [rsp+48h] [rbp-38h] BYREF
  __int128 v15; // [rsp+50h] [rbp-30h] BYREF
  __int128 v16; // [rsp+60h] [rbp-20h]
  __int64 v17; // [rsp+70h] [rbp-10h]

  v13 = 0;
  v14 = 0LL;
  v15 = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  v6 = sub_14075B6A4(a1, 1, a3, a4, 0LL, 0LL, a2);
  if ( !v6 || !(unsigned int)sub_140843CD4(a1, v6, &v14, &v13) )
    return 3221226021LL;
  v8 = v14;
  for ( i = sub_140792CCC(v14, v13, 28691); ; i = sub_14078EE18(v8, v13, v10) )
  {
    v10 = i;
    if ( !i )
      break;
    result = sub_140842864(v8, i, &v15);
    if ( (int)result < 0 )
      return result;
    result = sub_14085C084(a4, v15, v16, DWORD2(v15), HIDWORD(v15));
    if ( (int)result < 0 )
      return result;
  }
  for ( j = sub_140792CCC(v8, v13, 28712); ; j = sub_14078EE18(v8, v13, v12) )
  {
    v12 = j;
    if ( !j )
      break;
    result = sub_140963CD0(v8, j, &v15);
    if ( (int)result < 0 )
      return result;
    result = sub_14085C084(a4, v15, v16, DWORD2(v15), HIDWORD(v15));
    if ( (int)result < 0 )
      return result;
  }
  return 0LL;
}
