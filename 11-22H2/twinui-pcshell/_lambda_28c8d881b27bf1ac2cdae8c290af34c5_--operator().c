/*
 * XREFs of _lambda_28c8d881b27bf1ac2cdae8c290af34c5_::operator() @ 0x18024FB04
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_28c8d881b27bf1ac2cdae8c290af34c5___::Run @ 0x180251BA0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_28c8d881b27bf1ac2cdae8c290af34c5___--Run.c)
 * Callees:
 *     ??R_lambda_832c05d38d5c282b3aadaebeafbaeeca_@@QEBA@XZ @ 0x180250058 (--R_lambda_832c05d38d5c282b3aadaebeafbaeeca_@@QEBA@XZ.c)
 */

void __fastcall lambda_28c8d881b27bf1ac2cdae8c290af34c5_::operator()(void **a1)
{
  void **v1; // rcx
  const void *v2; // rax
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  v1 = a1 + 1;
  try
  {
    _lambda_832c05d38d5c282b3aadaebeafbaeeca_::operator()(v1);
  }
  catch ( ... )
  {
    v2 = (const void *)std::current_exception(v3);
    __ExceptionPtrAssign(*a1, v2);
    __ExceptionPtrDestroy(v3);
  }
}
