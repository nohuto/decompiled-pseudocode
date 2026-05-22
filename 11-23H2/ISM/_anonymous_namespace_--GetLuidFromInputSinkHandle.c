/*
 * XREFs of _anonymous_namespace_::GetLuidFromInputSinkHandle @ 0x180097E68
 * Callers:
 *     NotifyInputSinkRemoved @ 0x1800982A0 (NotifyInputSinkRemoved.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall anonymous_namespace_::GetLuidFromInputSinkHandle(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  v5 = 0LL;
  if ( a1 )
  {
    NtQueryCompositionInputSinkLuid(a1, &v5, a3);
    v3 = v5;
  }
  return __PAIR64__(HIDWORD(v5), v3);
}
