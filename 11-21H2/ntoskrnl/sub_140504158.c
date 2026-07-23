/*
 * XREFs of sub_140504158 @ 0x140504158
 * Callers:
 *     sub_140516D80 @ 0x140516D80 (sub_140516D80.c)
 *     sub_140517000 @ 0x140517000 (sub_140517000.c)
 * Callees:
 *     KeFlushIoBuffers @ 0x140232370 (KeFlushIoBuffers.c)
 */

char __fastcall sub_140504158(_QWORD *BugCheckParameter4, char a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rbx
  char result; // al

  if ( BugCheckParameter4 )
  {
    v5 = BugCheckParameter4;
    do
    {
      result = KeFlushIoBuffers((ULONG_PTR)v5, a2, 1, a4);
      v5 = (_QWORD *)*v5;
    }
    while ( v5 );
  }
  return result;
}
