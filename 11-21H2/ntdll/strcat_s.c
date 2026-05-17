/*
 * XREFs of strcat_s @ 0x18009F160
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x180093768 (_invalid_parameter.c)
 */

errno_t __cdecl strcat_s(char *Destination, rsize_t SizeInBytes, const char *Source)
{
  char *v3; // r9
  signed __int64 v4; // r9
  char v5; // al
  errno_t v6; // ebx

  if ( Destination && SizeInBytes )
  {
    if ( Source )
    {
      v3 = Destination;
      while ( *v3 )
      {
        ++v3;
        if ( !--SizeInBytes )
          goto LABEL_13;
      }
      v4 = v3 - Source;
      while ( 1 )
      {
        v5 = *Source;
        Source[v4] = *Source;
        ++Source;
        if ( !v5 )
          return 0;
        if ( !--SizeInBytes )
        {
          v6 = 34;
          goto LABEL_14;
        }
      }
    }
    else
    {
LABEL_13:
      v6 = 22;
LABEL_14:
      *Destination = 0;
      invalid_parameter();
      return v6;
    }
  }
  else
  {
    invalid_parameter();
    return 22;
  }
}
