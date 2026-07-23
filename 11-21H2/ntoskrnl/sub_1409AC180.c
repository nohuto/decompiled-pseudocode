/*
 * XREFs of sub_1409AC180 @ 0x1409AC180
 * Callers:
 *     sub_1409AC2BC @ 0x1409AC2BC (sub_1409AC2BC.c)
 * Callees:
 *     sub_140204738 @ 0x140204738 (sub_140204738.c)
 *     sub_140639DA4 @ 0x140639DA4 (sub_140639DA4.c)
 *     sub_140854454 @ 0x140854454 (sub_140854454.c)
 *     sub_140859318 @ 0x140859318 (sub_140859318.c)
 *     sub_140861E8C @ 0x140861E8C (sub_140861E8C.c)
 *     sub_14086379C @ 0x14086379C (sub_14086379C.c)
 *     sub_140927240 @ 0x140927240 (sub_140927240.c)
 *     PsTerminateServerSilo @ 0x1409AB9B0 (PsTerminateServerSilo.c)
 *     sub_1409ABED8 @ 0x1409ABED8 (sub_1409ABED8.c)
 *     sub_1409AC6C0 @ 0x1409AC6C0 (sub_1409AC6C0.c)
 *     sub_1409AC724 @ 0x1409AC724 (sub_1409AC724.c)
 *     sub_1409AC86C @ 0x1409AC86C (sub_1409AC86C.c)
 *     sub_1409AC998 @ 0x1409AC998 (sub_1409AC998.c)
 *     sub_1409ACAD0 @ 0x1409ACAD0 (sub_1409ACAD0.c)
 *     sub_1409B1E4C @ 0x1409B1E4C (sub_1409B1E4C.c)
 *     sub_1409C5A90 @ 0x1409C5A90 (sub_1409C5A90.c)
 *     sub_1409DEF5C @ 0x1409DEF5C (sub_1409DEF5C.c)
 *     sub_1409F8178 @ 0x1409F8178 (sub_1409F8178.c)
 *     sub_1409FB4F4 @ 0x1409FB4F4 (sub_1409FB4F4.c)
 */

__int64 __fastcall sub_1409AC180(PVOID Object)
{
  _DWORD *v2; // rsi
  __int64 result; // rax
  int v4; // edi

  v2 = sub_140204738((__int64)Object);
  sub_14086379C((__int64)v2);
  result = sub_140639DA4((__int64)Object);
  if ( (int)result >= 0 )
  {
    result = sub_1409AC998(Object);
    if ( (int)result >= 0 )
    {
      result = sub_1409AC86C(Object);
      if ( (int)result >= 0 )
      {
        result = sub_140854454((__int64)v2);
        if ( (int)result >= 0 )
        {
          result = sub_1409ACAD0(Object);
          if ( (int)result >= 0 )
          {
            result = sub_1409AC6C0(Object);
            if ( (int)result >= 0 )
            {
              result = sub_1409AC724(Object);
              if ( (int)result >= 0 )
              {
                v4 = sub_140859318(Object);
                if ( v4 < 0 )
                  goto LABEL_18;
                result = sub_1409F8178(Object);
                if ( (int)result >= 0 )
                {
                  result = sub_1409FB4F4(Object);
                  if ( (int)result >= 0 )
                  {
                    v4 = sub_1409C5A90(Object);
                    if ( v4 >= 0 )
                    {
                      v4 = sub_140861E8C();
                      if ( v4 >= 0 )
                      {
                        v4 = sub_1409DEF5C(Object);
                        if ( v4 >= 0 )
                        {
                          v4 = sub_140927240((__int64)Object);
                          if ( v4 >= 0 )
                          {
                            v4 = sub_1409B1E4C(Object);
                            if ( v4 >= 0 )
                              return 0LL;
                            PsTerminateServerSilo((__int64)Object);
                            return (unsigned int)v4;
                          }
                        }
                      }
                    }
LABEL_18:
                    v2[326] = 4;
                    sub_1409ABED8((__int64)Object);
                    return (unsigned int)v4;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
