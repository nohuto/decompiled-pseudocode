/*
 * XREFs of sub_1403BC758 @ 0x1403BC758
 * Callers:
 *     sub_1403BC388 @ 0x1403BC388 (sub_1403BC388.c)
 * Callees:
 *     sub_1403ACEFC @ 0x1403ACEFC (sub_1403ACEFC.c)
 *     sub_1403B37F0 @ 0x1403B37F0 (sub_1403B37F0.c)
 */

ULONG_PTR *sub_1403BC758()
{
  int v0; // ebx
  ULONG_PTR *result; // rax

  if ( byte_140C4E410 )
    goto LABEL_9;
  if ( sub_1403B37F0() )
    goto LABEL_22;
  v0 = 0x2000;
  if ( (unsigned __int8)byte_140C4E364 > 1u )
    v0 = 24576;
  result = sub_1403ACEFC(5, 3, v0, 0, 0);
  if ( !result )
  {
    result = sub_1403ACEFC(10, 3, v0, 0, 0);
    if ( !result )
    {
LABEL_22:
      if ( !byte_140C4C678 || qword_140C4C488 || (result = sub_1403ACEFC(3, 2, 24576, 0, 0)) == 0LL )
      {
        result = sub_1403ACEFC(8, 2, 0, 0, 0);
        if ( !result )
        {
LABEL_9:
          result = sub_1403ACEFC(11, 2, 24576, 0, 0);
          if ( !result )
          {
            result = sub_1403ACEFC(3, 2, 24576, 0, 0);
            if ( !result )
            {
              result = sub_1403ACEFC(6, 2, 24576, 0, 0);
              if ( !result )
              {
                result = sub_1403ACEFC(1, 2, 24576, 0, 0);
                if ( !result )
                {
                  if ( sub_1403B37F0() )
                    return 0LL;
                  result = sub_1403ACEFC(0, 2, 24576, 0, 0);
                  if ( !result )
                    return 0LL;
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
