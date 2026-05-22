/*
 * XREFs of GetFileName @ 0x18001F148
 * Callers:
 *     GetWin32AppId @ 0x18001E1BC (GetWin32AppId.c)
 *     GetModernAppId @ 0x18001F368 (GetModernAppId.c)
 * Callees:
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x180021CB8 (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 */

__int64 __fastcall GetFileName(const unsigned __int16 **a1, _QWORD *a2, __int64 *a3)
{
  const unsigned __int16 *v3; // r11
  __int64 result; // rax
  __int64 v7; // r10
  __int64 v8; // r11
  int v9; // edx
  int v10; // eax
  __int64 v11; // rcx
  unsigned __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  v3 = *a1;
  *a2 = &unk_1801E5750;
  *a3 = 0LL;
  v12 = 0LL;
  result = StringCchLengthW(v3, 0x7FFFuLL, &v12);
  if ( (int)result >= 0 )
  {
    v9 = v12;
    v10 = v12 - 1;
    if ( (int)v12 - 1 >= 0 )
    {
      v11 = v10;
      while ( *(_WORD *)(v8 + 2 * v11) != 92 )
      {
        --v10;
        if ( --v11 < 0 )
          goto LABEL_8;
      }
      v7 = v10 + 1;
    }
LABEL_8:
    *a2 = v8 + 2 * v7;
    result = v9 - v7;
    *a3 = result;
  }
  return result;
}
