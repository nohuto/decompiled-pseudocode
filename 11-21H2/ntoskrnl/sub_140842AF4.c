/*
 * XREFs of sub_140842AF4 @ 0x140842AF4
 * Callers:
 *     sub_140842AA4 @ 0x140842AA4 (sub_140842AA4.c)
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     RtlRunOnceExecuteOnce @ 0x14075BD80 (RtlRunOnceExecuteOnce.c)
 *     sub_14079499C @ 0x14079499C (sub_14079499C.c)
 */

__int64 __fastcall sub_140842AF4(_RTL_RUN_ONCE *Parameter, int a2, _DWORD *a3, _RTL_RUN_ONCE **a4)
{
  _RTL_RUN_ONCE *v4; // rbx
  int v9; // ebp
  _RTL_RUN_ONCE *Ptr; // r14
  NTSTATUS v11; // edi
  int v12; // eax
  bool v13; // sf
  int v14; // eax
  unsigned int v15; // edi
  __int64 result; // rax
  int *v17; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0LL;
  v9 = 0;
  Ptr = 0LL;
  v17 = 0LL;
  if ( LODWORD(Parameter[2].Ptr) )
  {
    if ( !Parameter[170].Ptr )
    {
      sub_1406E0C3C(1LL, (__int64)"SdbpGetStringTableItemFromStringRef");
      v11 = -1073741275;
      goto LABEL_8;
    }
    Ptr = (_RTL_RUN_ONCE *)Parameter[170].Ptr;
    v12 = 6;
  }
  else
  {
    v11 = RtlRunOnceExecuteOnce(Parameter + 168, sub_140861690, Parameter, (PVOID *)&v17);
    if ( v11 < 0 )
    {
      sub_1406E0C3C(1LL, (__int64)"SdbpGetStringTableItemFromStringRef");
      goto LABEL_8;
    }
    if ( !v17 || (v12 = *v17) == 0 )
    {
      sub_1406E0C3C(1LL, (__int64)"SdbpGetStringTableItemFromStringRef");
      v11 = -1073741271;
      goto LABEL_8;
    }
    Ptr = Parameter;
  }
  v9 = v12 + a2;
  if ( (unsigned __int16)sub_14079499C((__int64)Ptr, (unsigned int)(v12 + a2)) == 0x8801 )
  {
    v11 = 0;
  }
  else
  {
    sub_1406E0C3C(1LL, (__int64)"SdbpGetStringTableItemFromStringRef");
    v11 = -1073741788;
  }
LABEL_8:
  v13 = v11 < 0;
  v14 = 0;
  v15 = ~v11;
  if ( !v13 )
  {
    v14 = v9;
    v4 = Ptr;
  }
  *a3 = v14;
  result = v15 >> 31;
  *a4 = v4;
  return result;
}
