/*
 * XREFs of sub_1405043D8 @ 0x1405043D8
 * Callers:
 *     sub_140514F70 @ 0x140514F70 (sub_140514F70.c)
 *     sub_14084685C @ 0x14084685C (sub_14084685C.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     IoQueryInterface @ 0x140846710 (IoQueryInterface.c)
 */

__int64 __fastcall sub_1405043D8(__int64 a1, void *a2)
{
  __int64 result; // rax
  __int64 v4; // rdx

  result = IoQueryInterface(a1, 0, (int)&qword_14000FEC8, 88, 2, a1, a2);
  if ( (int)result >= 0 )
  {
    if ( *((_QWORD *)a2 + 8) )
    {
      return 0LL;
    }
    else
    {
      sub_14042A5E0(*((_QWORD *)a2 + 1), v4);
      return 3221225474LL;
    }
  }
  return result;
}
