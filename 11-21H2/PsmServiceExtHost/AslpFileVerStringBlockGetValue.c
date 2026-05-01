/*
 * XREFs of AslpFileVerStringBlockGetValue @ 0x1800A2B40
 * Callers:
 *     AslpFileQueryVersionString @ 0x1800A25A8 (AslpFileQueryVersionString.c)
 * Callees:
 *     AslpFileVerBlockGetValueOffset @ 0x1800A28BC (AslpFileVerBlockGetValueOffset.c)
 *     RtlStringCbLengthW @ 0x1800A2CF4 (RtlStringCbLengthW.c)
 */

__int64 __fastcall AslpFileVerStringBlockGetValue(__int64 *a1, unsigned __int64 *a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v7; // rbx
  __int64 result; // rax
  __int64 v10; // r11
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  *a1 = 0LL;
  *a2 = 0LL;
  v7 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  result = AslpFileVerBlockGetValueOffset(&v12, a3, a4);
  if ( (int)result >= 0 )
  {
    if ( v12 <= a4 )
    {
      if ( v12 == a4 )
      {
        v10 = a3 + v12 - 2;
      }
      else
      {
        v11 = a4 - v12;
        if ( (int)RtlStringCbLengthW(v12 + a3, v11, &v13) >= 0 )
        {
          v7 = v13;
        }
        else
        {
          v7 = v11 - 2;
          *(_WORD *)(v10 + 2 * ((v11 - 2) >> 1)) = 0;
        }
      }
      result = 0LL;
      *a2 = v7 >> 1;
      *a1 = v10;
    }
    else
    {
      return 3221225485LL;
    }
  }
  return result;
}
