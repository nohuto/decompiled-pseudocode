/*
 * XREFs of _lambda_bcfbc8e9dbb18e4ddb6540cdb574c293_::operator() @ 0x180250188
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_bcfbc8e9dbb18e4ddb6540cdb574c293___::Run @ 0x180251C00 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_bcfbc8e9dbb18e4ddb6540cdb574c293___--Run.c)
 * Callees:
 *     ??R_lambda_de2d726059b44d27a392c508ba387a14_@@QEBA@XZ @ 0x1802502D8 (--R_lambda_de2d726059b44d27a392c508ba387a14_@@QEBA@XZ.c)
 */

void __fastcall lambda_bcfbc8e9dbb18e4ddb6540cdb574c293_::operator()(void **a1)
{
  void **v1; // rcx
  const void *v2; // rax
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  v1 = a1 + 1;
  try
  {
    _lambda_de2d726059b44d27a392c508ba387a14_::operator()(v1);
  }
  catch ( ... )
  {
    v2 = (const void *)std::current_exception(v3);
    __ExceptionPtrAssign(*a1, v2);
    __ExceptionPtrDestroy(v3);
  }
}
