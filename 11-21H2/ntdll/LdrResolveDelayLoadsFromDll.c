/*
 * XREFs of LdrResolveDelayLoadsFromDll @ 0x1800DA930
 * Callers:
 *     <none>
 * Callees:
 *     LdrpGetDelayloadDescriptor @ 0x1800DAABC (LdrpGetDelayloadDescriptor.c)
 */

__int64 __fastcall LdrResolveDelayLoadsFromDll(__int64 a1, __int64 a2, int a3)
{
  __int64 DelayloadDescriptor; // rax

  if ( a3 )
    return 3221225485LL;
  DelayloadDescriptor = LdrpGetDelayloadDescriptor(a1);
  if ( DelayloadDescriptor )
    return LdrpResolveDelayLoadDescriptor(a1, DelayloadDescriptor);
  else
    return 3221225781LL;
}
