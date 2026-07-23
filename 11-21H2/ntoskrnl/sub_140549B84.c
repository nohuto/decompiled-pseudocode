/*
 * XREFs of sub_140549B84 @ 0x140549B84
 * Callers:
 *     sub_14023F570 @ 0x14023F570 (sub_14023F570.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140292F90 (KeIsEmptyAffinityEx.c)
 *     sub_14039DECC @ 0x14039DECC (sub_14039DECC.c)
 *     HvlInvokeHypercall @ 0x14039DF00 (HvlInvokeHypercall.c)
 */

char sub_140549B84()
{
  char result; // al
  __int64 v1; // rbx
  unsigned __int64 v2; // rcx
  _BYTE *i; // rdx
  unsigned __int64 v4; // rcx

  result = dword_140D06A28;
  if ( (dword_140D06A28 & 8) != 0 )
  {
    result = sub_14039DECC();
    v1 = 0LL;
    if ( !result )
    {
      if ( !(unsigned int)KeIsEmptyAffinityEx(asc_140C0B9F0) )
      {
        v2 = qword_140C0B9F8;
        if ( !byte_140D05016 )
        {
          for ( i = &unk_140D0CBD3; ; i += 4 )
          {
            if ( (v2 & 1) != 0 )
              v1 |= 1LL << *(i - 2);
            v4 = v2 >> 1;
            if ( !v4 )
              break;
            if ( (v4 & 1) != 0 )
              v1 |= 1LL << *i;
            v2 = v4 >> 1;
            if ( !v2 )
              break;
          }
        }
      }
      return HvlInvokeHypercall(65545);
    }
  }
  return result;
}
