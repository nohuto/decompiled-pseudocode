/*
 * XREFs of strcpy_s @ 0x18009AB90
 * Callers:
 *     RtlIncrementCorrelationVector @ 0x180109A60 (RtlIncrementCorrelationVector.c)
 * Callees:
 *     _invalid_parameter @ 0x18008EEB8 (_invalid_parameter.c)
 */

errno_t __cdecl strcpy_s(char *Destination, rsize_t SizeInBytes, const char *Source)
{
  errno_t v4; // ebx
  signed __int64 v5; // rcx
  char v6; // al

  if ( Destination && SizeInBytes )
  {
    if ( Source )
    {
      v5 = Destination - Source;
      while ( 1 )
      {
        v6 = *Source;
        Source[v5] = *Source;
        ++Source;
        if ( !v6 )
          return 0;
        if ( !--SizeInBytes )
        {
          v4 = 34;
          goto LABEL_9;
        }
      }
    }
    else
    {
      v4 = 22;
LABEL_9:
      *Destination = 0;
      invalid_parameter();
      return v4;
    }
  }
  else
  {
    invalid_parameter();
    return 22;
  }
}
