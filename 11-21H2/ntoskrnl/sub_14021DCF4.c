/*
 * XREFs of sub_14021DCF4 @ 0x14021DCF4
 * Callers:
 *     sub_14021D9D4 @ 0x14021D9D4 (sub_14021D9D4.c)
 *     sub_14021DC48 @ 0x14021DC48 (sub_14021DC48.c)
 *     sub_14021DEB4 @ 0x14021DEB4 (sub_14021DEB4.c)
 *     sub_14021E818 @ 0x14021E818 (sub_14021E818.c)
 *     sub_14021F198 @ 0x14021F198 (sub_14021F198.c)
 *     FsRtlGetNextFileLock @ 0x140541AD0 (FsRtlGetNextFileLock.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_14021DCF4(_QWORD *a1, unsigned __int64 *a2, unsigned __int64 *a3, _QWORD *a4, _BYTE *a5)
{
  _QWORD *v5; // rbx
  _QWORD *v8; // r8
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r10

  v5 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *a5 = 0;
  v8 = 0LL;
  while ( a1 )
  {
    v9 = a1[8];
    v5 = a1;
    v10 = *a2;
    if ( v9 >= *a2 && ((v11 = a1[3]) != 0 || a1[4]) )
    {
      if ( v11 <= *a3 && (*a3 != -1LL || v10) )
      {
        if ( v11 <= v10 )
          break;
        v8 = a1;
      }
      if ( a4 )
        *a4 = a1;
      if ( a5 )
        *a5 = 1;
LABEL_25:
      a1 = (_QWORD *)a1[1];
    }
    else
    {
      if ( v9 == *a3 && a1[3] == v10 )
      {
        v8 = a1;
        if ( a4 )
          *a4 = a1;
        if ( a5 )
          *a5 = 0;
        goto LABEL_25;
      }
      if ( a4 )
        *a4 = a1;
      if ( a5 )
        *a5 = 0;
      a1 = (_QWORD *)a1[2];
    }
  }
  if ( a1 )
    return v5;
  return v8;
}
