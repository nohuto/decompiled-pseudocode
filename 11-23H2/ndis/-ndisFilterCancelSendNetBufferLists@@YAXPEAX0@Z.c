/*
 * XREFs of ?ndisFilterCancelSendNetBufferLists@@YAXPEAX0@Z @ 0x1C00656D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ndisFilterCancelSendNetBufferLists(void *a1, void *a2)
{
  _QWORD v2[5]; // [rsp+30h] [rbp-28h] BYREF

  v2[1] = a1;
  v2[3] = a2;
  v2[0] = 0LL;
  v2[2] = 0LL;
  KeExpandKernelStackAndCalloutEx(ndisFilterCancelSendNetBufferListsInternal, v2, (unsigned int)Size, 0, 0LL);
}
