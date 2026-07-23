/*
 * XREFs of DbgkPostEnclaveModuleMessages @ 0x14053BEF0
 * Callers:
 *     DbgkpPostModuleMessages @ 0x140937DA8 (DbgkpPostModuleMessages.c)
 * Callees:
 *     DbgkPostModuleMessage @ 0x14053BF6C (DbgkPostModuleMessage.c)
 */

__int64 __fastcall DbgkPostEnclaveModuleMessages(void *a1, void *a2, struct _KEVENT *a3, __int64 a4, unsigned int a5)
{
  __int64 result; // rax
  __int64 v9; // rbx
  __int64 v10; // rdi

  result = a5;
  if ( a5 )
  {
    v9 = a4 + 16;
    v10 = a5;
    do
    {
      result = DbgkPostModuleMessage(a1, a2, *(_DWORD *)(v9 + 4), a3);
      v9 += 24LL;
      --v10;
    }
    while ( v10 );
  }
  return result;
}
