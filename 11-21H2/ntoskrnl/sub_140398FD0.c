/*
 * XREFs of sub_140398FD0 @ 0x140398FD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14045746C @ 0x14045746C (sub_14045746C.c)
 */

__int64 __fastcall sub_140398FD0(int a1)
{
  unsigned int v1; // edi
  int i; // ebx
  __int64 result; // rax

  v1 = 0;
  for ( i = 1; v1 < dword_140C4E264; ++v1 )
  {
    result = *((_QWORD *)&unk_140C4E2A0 + 2 * v1);
    *(_QWORD *)(result + 56) = result;
    if ( a1 )
      result = sub_14045746C(
                 qword_140C4E240,
                 *((_QWORD *)&unk_140C4E2A0 + 2 * v1),
                 *((unsigned int *)&unk_140C4E2A0 + 4 * v1 + 2));
  }
  if ( a1 )
  {
    qword_140C4E240 = 0LL;
    dword_140C4E264 = 0;
    dword_140C4E260 = 0;
    i = 0;
  }
  dword_140C4E248 = i;
  return result;
}
