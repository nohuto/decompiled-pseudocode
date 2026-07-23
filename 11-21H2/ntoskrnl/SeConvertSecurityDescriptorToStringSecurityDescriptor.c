/*
 * XREFs of SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x140206FA0
 * Callers:
 *     sub_14064B9D8 @ 0x14064B9D8 (sub_14064B9D8.c)
 *     sub_140675814 @ 0x140675814 (sub_140675814.c)
 *     sub_1406D2D00 @ 0x1406D2D00 (sub_1406D2D00.c)
 *     sub_140A1B7E4 @ 0x140A1B7E4 (sub_140A1B7E4.c)
 * Callees:
 *     sub_140676314 @ 0x140676314 (sub_140676314.c)
 *     sub_14067757C @ 0x14067757C (sub_14067757C.c)
 */

__int64 __fastcall SeConvertSecurityDescriptorToStringSecurityDescriptor(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        _DWORD *a5)
{
  unsigned int v6; // ebx
  __int64 result; // rax
  _WORD *v8; // rax

  v6 = 0;
  if ( a1 && (_DWORD)a3 )
  {
LABEL_3:
    if ( a4 && (_DWORD)a3 )
    {
      if ( (_DWORD)a2 == 1 )
      {
        result = sub_140676314(a1, a2, a3, a1, a3, a4, a5);
        if ( (int)result <= 0 )
          return result;
      }
      else
      {
        LOWORD(result) = 1305;
      }
      return (unsigned __int16)result | 0xC0070000;
    }
LABEL_9:
    LOWORD(result) = 87;
    return (unsigned __int16)result | 0xC0070000;
  }
  if ( !a4 )
  {
    if ( !a1 )
      goto LABEL_9;
    goto LABEL_3;
  }
  v8 = (_WORD *)sub_14067757C(2uLL);
  *a4 = v8;
  if ( v8 )
  {
    *v8 = 0;
    if ( a5 )
      *a5 = 0;
  }
  else
  {
    v6 = 8;
  }
  if ( v6 )
    v6 |= 0xC0070000;
  return v6;
}
