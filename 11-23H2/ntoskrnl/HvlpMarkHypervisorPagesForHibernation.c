/*
 * XREFs of HvlpMarkHypervisorPagesForHibernation @ 0x140547114
 * Callers:
 *     HvlMarkHiberPhase @ 0x140546904 (HvlMarkHiberPhase.c)
 * Callees:
 *     HvlpEndPageListIteration @ 0x14054A12C (HvlpEndPageListIteration.c)
 *     HvlpGetPageList @ 0x14054A1F4 (HvlpGetPageList.c)
 *     HvlpInvokeGetPageListHypercall @ 0x14054A2C8 (HvlpInvokeGetPageListHypercall.c)
 *     HvlpSetupPageListIteration @ 0x14054A378 (HvlpSetupPageListIteration.c)
 *     PoSetHiberRange @ 0x14058E8A0 (PoSetHiberRange.c)
 */

__int64 HvlpMarkHypervisorPagesForHibernation()
{
  __int64 v0; // rax
  int PageList; // ebx
  ULONG_PTR Length; // [rsp+40h] [rbp+8h] BYREF
  PVOID Address; // [rsp+48h] [rbp+10h] BYREF

  Address = 0LL;
  LODWORD(Length) = 0;
  v0 = HvlpSetupPageListIteration(0LL, 0LL);
  if ( v0 )
    HvlpInvokeGetPageListHypercall(v0, 0LL);
  do
  {
    PageList = HvlpGetPageList(0LL, &Address, &Length);
    if ( (_DWORD)Length )
      PoSetHiberRange(0LL, 0x14000u, Address, (unsigned int)Length, 0x686C7648u);
  }
  while ( PageList == 261 );
  return HvlpEndPageListIteration(0LL);
}
