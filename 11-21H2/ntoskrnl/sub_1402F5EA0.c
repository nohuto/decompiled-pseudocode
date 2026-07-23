/*
 * XREFs of sub_1402F5EA0 @ 0x1402F5EA0
 * Callers:
 *     sub_140243EC4 @ 0x140243EC4 (sub_140243EC4.c)
 *     sub_14029CC2C @ 0x14029CC2C (sub_14029CC2C.c)
 *     CcAsyncCopyRead @ 0x1402F5790 (CcAsyncCopyRead.c)
 *     CcCopyReadEx @ 0x14032A8C0 (CcCopyReadEx.c)
 * Callees:
 *     sub_1402F5F14 @ 0x1402F5F14 (sub_1402F5F14.c)
 *     sub_1402F6220 @ 0x1402F6220 (sub_1402F6220.c)
 *     ObDereferenceObjectDeferDelete @ 0x140348920 (ObDereferenceObjectDeferDelete.c)
 */

__int64 __fastcall sub_1402F5EA0(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  void *v5; // rbx
  __int64 v6; // rcx
  unsigned int v7; // edi
  int v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0;
  v4 = sub_1402F6220(a1, &v9);
  v5 = (void *)v4;
  if ( v4 )
    v6 = *(_QWORD *)(v4 + 544);
  else
    v6 = *(_QWORD *)(a1 + 544);
  v7 = sub_1402F5F14(v6, 0LL, a2);
  if ( v9 )
    ObDereferenceObjectDeferDelete(v5);
  return v7;
}
