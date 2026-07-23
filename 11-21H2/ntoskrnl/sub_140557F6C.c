/*
 * XREFs of sub_140557F6C @ 0x140557F6C
 * Callers:
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 * Callees:
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     PsGetThreadServerSilo @ 0x140347690 (PsGetThreadServerSilo.c)
 *     sub_140749588 @ 0x140749588 (sub_140749588.c)
 */

bool __fastcall sub_140557F6C(__int64 a1)
{
  int v2; // eax
  struct _KTHREAD *CurrentThread; // rcx
  int v4; // ebx
  __int64 ThreadServerSilo; // rax
  _DWORD **v6; // rax
  int v7; // eax
  bool result; // al

  v2 = sub_140287F30(*((_QWORD *)KeGetCurrentThread() + 23));
  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  if ( v2 != -1 )
    v4 = v2;
  ThreadServerSilo = PsGetThreadServerSilo((__int64)CurrentThread);
  if ( ThreadServerSilo )
    v6 = *(_DWORD ***)(ThreadServerSilo + 1464);
  else
    v6 = (_DWORD **)&unk_140D32580;
  result = 1;
  if ( v4 != *v6[165] || dword_140D011AC )
  {
    v7 = sub_140749588(a1);
    if ( v7 != -1 && v4 != v7 )
      return 0;
  }
  return result;
}
