/*
 * XREFs of strncmp @ 0x1403E0910
 * Callers:
 *     sub_140213BD4 @ 0x140213BD4 (sub_140213BD4.c)
 *     sub_140215144 @ 0x140215144 (sub_140215144.c)
 *     sub_1403DF0F4 @ 0x1403DF0F4 (sub_1403DF0F4.c)
 *     sub_1405EC554 @ 0x1405EC554 (sub_1405EC554.c)
 *     sub_140637E70 @ 0x140637E70 (sub_140637E70.c)
 *     sub_1407F0E34 @ 0x1407F0E34 (sub_1407F0E34.c)
 *     RtlValidateCorrelationVector @ 0x1409BB8C0 (RtlValidateCorrelationVector.c)
 *     sub_140A0A7C4 @ 0x140A0A7C4 (sub_140A0A7C4.c)
 *     sub_140A19878 @ 0x140A19878 (sub_140A19878.c)
 *     sub_140A19CEC @ 0x140A19CEC (sub_140A19CEC.c)
 *     sub_140A202A4 @ 0x140A202A4 (sub_140A202A4.c)
 *     sub_140A54FB4 @ 0x140A54FB4 (sub_140A54FB4.c)
 *     sub_140A56B08 @ 0x140A56B08 (sub_140A56B08.c)
 *     sub_140A70470 @ 0x140A70470 (sub_140A70470.c)
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 * Callees:
 *     <none>
 */

int __cdecl strncmp(const char *Str1, const char *Str2, size_t MaxCount)
{
  signed __int64 v3; // r9
  unsigned __int8 v4; // al
  unsigned __int8 v5; // dl
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  bool v8; // cc
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  unsigned int v12; // edx

  if ( !MaxCount )
    return 0;
  v3 = Str2 - Str1;
  if ( ((unsigned __int8)Str1 & 7) != 0 )
    goto LABEL_3;
LABEL_7:
  while ( (((_WORD)v3 + (_WORD)Str1) & 0xFFFu) <= 0xFF8 )
  {
    v6 = *(_QWORD *)Str1;
    v7 = *(_QWORD *)&Str1[v3];
    if ( *(_QWORD *)Str1 != v7 )
      break;
    Str1 += 8;
    v8 = MaxCount <= 8;
    MaxCount -= 8LL;
    if ( v8 )
      return 0;
    if ( (((v7 + 0x7EFEFEFEFEFEFEFFLL) ^ ~v6) & 0x8101010101010100uLL) != 0 )
    {
      if ( !(_BYTE)v7 )
        return 0;
      if ( !BYTE1(v7) )
        return 0;
      v10 = v7 >> 16;
      if ( !(_BYTE)v10 )
        return 0;
      if ( !BYTE1(v10) )
        return 0;
      v11 = v10 >> 16;
      if ( !(_BYTE)v11 )
        return 0;
      if ( !BYTE1(v11) )
        return 0;
      v12 = WORD1(v11);
      if ( !(_BYTE)v12 || !BYTE1(v12) )
        return 0;
    }
  }
LABEL_3:
  while ( 1 )
  {
    v4 = *Str1;
    v5 = (Str1++)[v3];
    if ( v4 != v5 )
      return -(v4 < v5) - ((v4 < v5) - 1);
    if ( !--MaxCount || !v4 )
      return 0;
    if ( ((unsigned __int8)Str1 & 7) == 0 )
      goto LABEL_7;
  }
}
