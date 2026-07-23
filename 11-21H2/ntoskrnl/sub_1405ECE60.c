/*
 * XREFs of sub_1405ECE60 @ 0x1405ECE60
 * Callers:
 *     sub_1409BBDD8 @ 0x1409BBDD8 (sub_1409BBDD8.c)
 *     sub_1409BBF5C @ 0x1409BBF5C (sub_1409BBF5C.c)
 *     sub_1409BC59C @ 0x1409BC59C (sub_1409BC59C.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1405ECE60(int a1)
{
  __int64 v1; // rdx
  bool result; // al

  result = (unsigned __int16)(a1 - 97) <= 0x19u
        || (unsigned __int16)(a1 - 45) <= 0x2Du && (v1 = 0x3FFFFFF01FFBLL, _bittest64(&v1, (unsigned int)(a1 - 45)))
        || (unsigned __int16)a1 >= 0x80u;
  return result;
}
