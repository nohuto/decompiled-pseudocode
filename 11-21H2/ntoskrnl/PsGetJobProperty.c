/*
 * XREFs of PsGetJobProperty @ 0x140223EC0
 * Callers:
 *     PsGetThreadProperty @ 0x140223C50 (PsGetThreadProperty.c)
 * Callees:
 *     sub_140223F24 @ 0x140223F24 (sub_140223F24.c)
 */

__int64 __fastcall PsGetJobProperty(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  if ( KeGetCurrentIrql() < 2u
    && (POBJECT_TYPE *)qword_140D07490[(unsigned __int8)dword_140D06C0C ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)] != PsJobType )
  {
    return 0LL;
  }
  sub_140223F24(a1, a2, &v3);
  return v3;
}
