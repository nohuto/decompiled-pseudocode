/*
 * XREFs of sub_140A7F778 @ 0x140A7F778
 * Callers:
 *     sub_140A7F670 @ 0x140A7F670 (sub_140A7F670.c)
 *     sub_140A95DA0 @ 0x140A95DA0 (sub_140A95DA0.c)
 *     sub_140A96450 @ 0x140A96450 (sub_140A96450.c)
 * Callees:
 *     sub_140A81DB4 @ 0x140A81DB4 (sub_140A81DB4.c)
 *     sub_140A96B0C @ 0x140A96B0C (sub_140A96B0C.c)
 */

_BOOL8 __fastcall sub_140A7F778(char a1)
{
  struct _KPROCESS *v1; // rbx
  _BOOL8 result; // rax

  result = 0;
  if ( a1 )
  {
    v1 = (struct _KPROCESS *)*((_QWORD *)KeGetCurrentThread() + 23);
    if ( PsInitialSystemProcess )
    {
      if ( v1 != PsInitialSystemProcess
        && v1 != qword_140D06940
        && (unsigned int)sub_140A96B0C(0LL)
        && !(unsigned int)sub_140A81DB4(v1) )
      {
        return 1;
      }
    }
  }
  return result;
}
