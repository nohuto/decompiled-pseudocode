/*
 * XREFs of KiExceptionStackSwitchHandler @ 0x14035ED78
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

__int64 __fastcall KiExceptionStackSwitchHandler(int *a1)
{
  if ( (a1[1] & 0x76) == 0 )
    KeBugCheckEx(0x1Eu, *a1, *((_QWORD *)a1 + 2), *((_QWORD *)a1 + 4), *((_QWORD *)a1 + 5));
  return 1LL;
}
