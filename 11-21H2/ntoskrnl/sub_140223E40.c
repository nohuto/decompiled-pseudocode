/*
 * XREFs of sub_140223E40 @ 0x140223E40
 * Callers:
 *     PsGetThreadProperty @ 0x140223C50 (PsGetThreadProperty.c)
 *     PsSetThreadProperty @ 0x1403882B0 (PsSetThreadProperty.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140223E40(struct _KTHREAD *a1)
{
  if ( a1 != *((struct _KTHREAD **)KeGetCurrentPrcb() + 3) )
  {
    if ( KeGetCurrentIrql() < 2u
      && (POBJECT_TYPE *)qword_140D07490[(unsigned __int8)dword_140D06C0C ^ *((unsigned __int8 *)a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a1 - 48) >> 8)] != PsThreadType )
    {
      return 3221225485LL;
    }
    if ( a1 != KeGetCurrentThread() || (KeGetPcr()[36].Unused0[2] & 0x10001) == 0 )
      return 0LL;
  }
  return 3221225659LL;
}
