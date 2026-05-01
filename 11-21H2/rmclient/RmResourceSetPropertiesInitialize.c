/*
 * XREFs of RmResourceSetPropertiesInitialize @ 0x180008AF0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18001570E (memset_0.c)
 */

__int64 __fastcall RmResourceSetPropertiesInitialize(__int64 a1)
{
  __int64 result; // rax

  memset_0((void *)a1, 0, 0x68uLL);
  result = 0LL;
  *(_DWORD *)(a1 + 88) = 1;
  *(_QWORD *)(a1 + 72) = -1LL;
  *(_QWORD *)(a1 + 64) = -1LL;
  *(_QWORD *)(a1 + 56) = -1LL;
  *(_QWORD *)(a1 + 48) = -1LL;
  return result;
}
