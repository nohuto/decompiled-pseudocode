/*
 * XREFs of sub_140709F54 @ 0x140709F54
 * Callers:
 *     sub_140709E04 @ 0x140709E04 (sub_140709E04.c)
 *     sub_140977E70 @ 0x140977E70 (sub_140977E70.c)
 * Callees:
 *     sub_140281C00 @ 0x140281C00 (sub_140281C00.c)
 *     sub_14029EBB0 @ 0x14029EBB0 (sub_14029EBB0.c)
 *     sub_1407B8A60 @ 0x1407B8A60 (sub_1407B8A60.c)
 */

unsigned __int64 __fastcall sub_140709F54(unsigned __int64 a1, unsigned __int64 a2)
{
  bool v2; // cf
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 v5; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rbx
  __int64 v8; // rcx

  v2 = a2 < a1;
  CurrentThread = KeGetCurrentThread();
  v5 = 0x7FFFFFFEFFFFLL;
  if ( !v2 )
    v5 = a2;
  result = (unsigned __int64)sub_14029EBB0(*((_QWORD *)CurrentThread + 23), a1, v5 - 1);
  v7 = result;
  if ( result )
  {
    do
    {
      sub_1407B8A60(v7);
      result = sub_140281C00(v7);
      v7 = result;
      if ( !result )
        break;
      v8 = *(unsigned __int8 *)(result + 32);
      result = *(unsigned int *)(result + 24);
    }
    while ( (result | (v8 << 32)) << 12 < v5 );
  }
  return result;
}
