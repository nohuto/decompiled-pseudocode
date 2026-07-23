/*
 * XREFs of sub_1403C5514 @ 0x1403C5514
 * Callers:
 *     sub_14080F068 @ 0x14080F068 (sub_14080F068.c)
 *     sub_14082848C @ 0x14082848C (sub_14082848C.c)
 *     sub_140B0E310 @ 0x140B0E310 (sub_140B0E310.c)
 *     sub_140B0E52C @ 0x140B0E52C (sub_140B0E52C.c)
 *     sub_140B0E670 @ 0x140B0E670 (sub_140B0E670.c)
 *     sub_140B4F04C @ 0x140B4F04C (sub_140B4F04C.c)
 *     sub_140B4F514 @ 0x140B4F514 (sub_140B4F514.c)
 *     sub_140B4F790 @ 0x140B4F790 (sub_140B4F790.c)
 * Callees:
 *     _vsnprintf @ 0x1403E0560 (_vsnprintf.c)
 */

__int64 sub_1403C5514(char *a1, __int64 a2, const char *a3, ...)
{
  unsigned __int64 v4; // rdi
  unsigned int v5; // ebx
  int v6; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, a3);
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
  {
    v5 = -1073741811;
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    v4 = a2 - 1;
    v5 = 0;
    v6 = vsnprintf(a1, a2 - 1, a3, Args);
    if ( v6 < 0 || v6 > v4 )
    {
      a1[v4] = 0;
      return (unsigned int)-2147483643;
    }
    else if ( v6 == v4 )
    {
      a1[v4] = 0;
    }
  }
  return v5;
}
