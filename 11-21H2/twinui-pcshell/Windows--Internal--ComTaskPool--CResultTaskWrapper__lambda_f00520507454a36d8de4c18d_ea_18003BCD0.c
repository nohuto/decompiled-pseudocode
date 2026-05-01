/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f00520507454a36d8de4c18dfc66140a___::Run @ 0x18003BCD0
 * Callers:
 *     <none>
 * Callees:
 *     CreationThreadDispatcher::RunSync__lambda_a17548d10af2541a2c37e0dd1a1d4086__&_ @ 0x18003BD10 (CreationThreadDispatcher--RunSync__lambda_a17548d10af2541a2c37e0dd1a1d4086__-_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

int *__fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f00520507454a36d8de4c18dfc66140a___::Run(
        _QWORD *a1)
{
  int v2; // eax
  int v3; // ebx
  int *result; // rax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CreationThreadDispatcher::RunSync__lambda_a17548d10af2541a2c37e0dd1a1d4086____(a1[2], a1[3]);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5C,
      (unsigned int)"onecoreuap\\internal\\shell\\inc\\CreationThreadDispatcher.h",
      (const char *)(unsigned int)v2,
      v5);
  else
    v3 = 0;
  result = (int *)a1[4];
  *result = v3;
  return result;
}
