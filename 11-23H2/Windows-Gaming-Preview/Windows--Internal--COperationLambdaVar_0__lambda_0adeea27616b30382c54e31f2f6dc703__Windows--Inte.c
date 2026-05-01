/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_0adeea27616b30382c54e31f2f6dc703__Windows::Internal::CNoResult_::Run @ 0x180036720
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::COperationLambdaVar_0__lambda_0adeea27616b30382c54e31f2f6dc703__Windows::Internal::CNoResult_::UnmarshalAndCall__ @ 0x180038014 (Windows--Internal--COperationLambdaVar_0__lambda_0adeea27616b30382c54e31f2f6dc703___ea_180038014.c)
 */

__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_0adeea27616b30382c54e31f2f6dc703__Windows::Internal::CNoResult_::Run(
        __int64 a1,
        __int64 a2,
        int a3)
{
  int v4; // [rsp+50h] [rbp+18h] BYREF

  v4 = a3;
  if ( a3 >= 0 )
  {
    a3 = *(_DWORD *)(a1 + 32);
    v4 = a3;
  }
  if ( (_DWORD)a2 == 1 )
    return (unsigned int)Windows::Internal::COperationLambdaVar_0__lambda_0adeea27616b30382c54e31f2f6dc703__Windows::Internal::CNoResult_::UnmarshalAndCall__(
                           a1,
                           a2,
                           &v4);
  return (unsigned int)a3;
}
