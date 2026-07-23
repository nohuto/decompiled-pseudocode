/*
 * XREFs of sub_140B1B1D0 @ 0x140B1B1D0
 * Callers:
 *     sub_140B0046C @ 0x140B0046C (sub_140B0046C.c)
 * Callees:
 *     sub_1408449C8 @ 0x1408449C8 (sub_1408449C8.c)
 *     sub_140844A24 @ 0x140844A24 (sub_140844A24.c)
 *     sub_140844B5C @ 0x140844B5C (sub_140844B5C.c)
 */

__int64 sub_140B1B1D0()
{
  __int64 result; // rax
  unsigned int i; // ebx

  sub_140844B5C((__int64)&unk_140C451C0, 1);
  sub_140844B5C((__int64)&unk_140C450E0, 3);
  sub_140844B5C((__int64)&unk_140C45540, 4);
  sub_140844B5C((__int64)&unk_140C45460, 5);
  sub_140844B5C((__int64)&unk_140C45380, 2);
  sub_140844B5C((__int64)&unk_140C452A0, 6);
  result = sub_140844A24((__int64)&unk_140C451C0);
  if ( (int)result >= 0 )
  {
    result = sub_140844A24((__int64)&unk_140C450E0);
    if ( (int)result >= 0 )
    {
      result = sub_140844A24((__int64)&unk_140C45540);
      if ( (int)result >= 0 )
      {
        result = sub_140844A24((__int64)&unk_140C45460);
        if ( (int)result >= 0 )
        {
          result = sub_140844A24((__int64)&unk_140C45380);
          if ( (int)result >= 0 )
          {
            result = sub_140844A24((__int64)&unk_140C452A0);
            if ( (int)result >= 0 )
            {
              for ( i = 0; i < 7; ++i )
              {
                result = sub_1408449C8(i);
                if ( (int)result < 0 )
                  break;
              }
            }
          }
        }
      }
    }
  }
  return result;
}
