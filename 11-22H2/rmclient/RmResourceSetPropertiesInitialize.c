/*
 * XREFs of RmResourceSetPropertiesInitialize @ 0x180008FB0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x180016A5E (memset.c)
 */

__int64 __fastcall RmResourceSetPropertiesInitialize(__int64 a1)
{
  __int64 result; // rax

  memset((void *)a1, 0, 0x68uLL);
  result = 0LL;
  *(_DWORD *)(a1 + 88) = 1;
  *(_QWORD *)(a1 + 72) = -1LL;
  *(_QWORD *)(a1 + 64) = -1LL;
  *(_QWORD *)(a1 + 56) = -1LL;
  *(_QWORD *)(a1 + 48) = -1LL;
  return result;
}
