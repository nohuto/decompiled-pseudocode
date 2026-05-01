/*
 * XREFs of pfnti @ 0x18000BF10
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000CE58 @ 0x18000CE58 (sub_18000CE58.c)
 *     sub_18000DCE0 @ 0x18000DCE0 (sub_18000DCE0.c)
 */

void __fastcall pfnti(PTP_CALLBACK_INSTANCE Instance, RTL_SRWLOCK *Context, PTP_TIMER Timer)
{
  RTL_SRWLOCK *v4; // rbx
  RTL_SRWLOCK *v5; // [rsp+38h] [rbp+10h] BYREF

  if ( LOBYTE(Context->Ptr) )
  {
    v4 = Context + 4;
    AcquireSRWLockExclusive(Context + 4);
    v5 = v4;
    BYTE1(Context[8].Ptr) = 0;
    sub_18000CE58(&v5);
    sub_18000DCE0(Context);
  }
}
