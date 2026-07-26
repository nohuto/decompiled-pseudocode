/*
 * XREFs of ??1?$unique_ptr@_WU?$KFreePool@_W@@@wistd@@QEAA@XZ @ 0x1C0058484
 * Callers:
 *     ?Initialize@NdisPoll@@QEAAJXZ @ 0x1C0134D14 (-Initialize@NdisPoll@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall wistd::unique_ptr<wchar_t,KFreePool<wchar_t>>::~unique_ptr<wchar_t,KFreePool<wchar_t>>(void **a1)
{
  void *v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}
