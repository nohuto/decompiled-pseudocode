/*
 * XREFs of sub_1406416D0 @ 0x1406416D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140345190 @ 0x140345190 (sub_140345190.c)
 */

__int64 __fastcall sub_1406416D0(unsigned int a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = 104LL * a1;
  result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(v1 + qword_140C11460 + 96), 1, 0);
  if ( !(_DWORD)result )
    return sub_140345190(v1 + qword_140C11460 + 32, 0LL, 0LL, 0LL, 0);
  return result;
}
