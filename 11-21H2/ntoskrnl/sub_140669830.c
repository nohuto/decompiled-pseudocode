/*
 * XREFs of sub_140669830 @ 0x140669830
 * Callers:
 *     sub_14066915C @ 0x14066915C (sub_14066915C.c)
 *     ObDuplicateObject @ 0x1407A1F80 (ObDuplicateObject.c)
 * Callees:
 *     ObCheckObjectAccess @ 0x1406698A0 (ObCheckObjectAccess.c)
 *     sub_1407227B0 @ 0x1407227B0 (sub_1407227B0.c)
 */

__int64 __fastcall sub_140669830(int a1, void *a2, struct _ACCESS_STATE *a3, __int64 a4, __int64 a5, ACCESS_MASK *a6)
{
  __int64 result; // rax
  NTSTATUS v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0;
  if ( (unsigned int)(a1 - 1) > 1 )
  {
    result = sub_1407227B0(a3);
    if ( (int)result >= 0 )
      goto LABEL_3;
  }
  else
  {
    if ( (unsigned __int8)ObCheckObjectAccess(a2, a3, &v8) )
    {
LABEL_3:
      *a6 = a3->PreviouslyGrantedAccess;
      return 0LL;
    }
    return (unsigned int)v8;
  }
  return result;
}
