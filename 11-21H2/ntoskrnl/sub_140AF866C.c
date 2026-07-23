/*
 * XREFs of sub_140AF866C @ 0x140AF866C
 * Callers:
 *     sub_140A54BA0 @ 0x140A54BA0 (sub_140A54BA0.c)
 * Callees:
 *     sub_1403B3BA0 @ 0x1403B3BA0 (sub_1403B3BA0.c)
 *     sub_14051E038 @ 0x14051E038 (sub_14051E038.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 sub_140AF866C()
{
  int v0; // eax
  int v1; // ebx
  __int64 Pool2; // rax

  if ( qword_140C54C10 )
    return 0LL;
  v0 = sub_1403B3BA0();
  v1 = 16 * v0;
  Pool2 = ExAllocatePool2(64LL, (unsigned int)(4608 * v0), 0x4B6C6148u);
  if ( Pool2 )
  {
    qword_140C54C10 = Pool2;
    dword_140C54C08 = v1;
    return 0LL;
  }
  sub_14051E038(0LL, 30, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\kintrupt.c", 0xC8u);
  return 3221225495LL;
}
