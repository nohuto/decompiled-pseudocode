/*
 * XREFs of AslpFileVerBlockGetValueOffset @ 0x18009CF6C
 * Callers:
 *     AslpFileMakeStringVersionAttributes @ 0x18009C5FC (AslpFileMakeStringVersionAttributes.c)
 *     AslpFileVerQueryBlock @ 0x18009CFD4 (AslpFileVerQueryBlock.c)
 *     AslpFileVerStringBlockGetValue @ 0x18009D1E0 (AslpFileVerStringBlockGetValue.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x18009D394 (RtlStringCbLengthW.c)
 */

__int64 __fastcall AslpFileVerBlockGetValueOffset(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 *v4; // r11
  unsigned __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  if ( (unsigned __int64)(a3 - 8) > 0x7FF7 )
    return 3221225485LL;
  result = RtlStringCbLengthW(a2 + 6, a3 - 6, &v5);
  if ( (int)result >= 0 )
  {
    if ( v5 + 8 < v5 )
    {
      return 3221225621LL;
    }
    else
    {
      *v4 = (v5 + 11) & 0xFFFFFFFFFFFFFFFCuLL;
      return 0LL;
    }
  }
  return result;
}
