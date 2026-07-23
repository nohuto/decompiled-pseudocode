/*
 * XREFs of RtlCultureNameToLCID @ 0x140830F20
 * Callers:
 *     sub_1403C64C0 @ 0x1403C64C0 (sub_1403C64C0.c)
 *     sub_14082EFE4 @ 0x14082EFE4 (sub_14082EFE4.c)
 *     sub_140830BF0 @ 0x140830BF0 (sub_140830BF0.c)
 *     sub_140A34D60 @ 0x140A34D60 (sub_140A34D60.c)
 *     sub_140A35084 @ 0x140A35084 (sub_140A35084.c)
 *     sub_140A35494 @ 0x140A35494 (sub_140A35494.c)
 *     sub_140A356D0 @ 0x140A356D0 (sub_140A356D0.c)
 *     sub_140A35814 @ 0x140A35814 (sub_140A35814.c)
 *     sub_140A35BC0 @ 0x140A35BC0 (sub_140A35BC0.c)
 * Callees:
 *     sub_1403C68CC @ 0x1403C68CC (sub_1403C68CC.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140502A3C @ 0x140502A3C (sub_140502A3C.c)
 */

BOOLEAN __cdecl RtlCultureNameToLCID(PUNICODE_STRING String, PLCID Lcid)
{
  BOOLEAN v2; // di
  size_t Length; // r8
  wchar_t *Buffer; // rdx
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rbx
  unsigned __int16 v8; // ax
  _WORD v10[88]; // [rsp+20h] [rbp-C8h] BYREF

  v2 = 0;
  if ( String )
  {
    if ( Lcid )
    {
      Length = String->Length;
      if ( (_WORD)Length )
      {
        Buffer = String->Buffer;
        if ( Buffer )
        {
          if ( (unsigned int)(Length + 2) <= 0x55 )
          {
            v6 = String->Length;
            memmove(v10, Buffer, Length);
            v7 = v6 >> 1;
            if ( v7 >= 85 )
              sub_140502A3C();
            v10[v7] = 0;
            v8 = sub_1403C68CC(v10, 2);
            *Lcid = v8;
            return v8 != 0;
          }
        }
      }
    }
  }
  return v2;
}
