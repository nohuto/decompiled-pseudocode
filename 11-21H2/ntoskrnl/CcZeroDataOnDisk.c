/*
 * XREFs of CcZeroDataOnDisk @ 0x1402458E0
 * Callers:
 *     CcZeroData @ 0x14029BD20 (CcZeroData.c)
 * Callees:
 *     sub_140245968 @ 0x140245968 (sub_140245968.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 */

__int64 __fastcall CcZeroDataOnDisk(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 v3; // rax
  char v4; // bl
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 result; // rax
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v3 = *a2;
  v4 = 0;
  v5 = *a3 - *a2;
  v9 = v3;
  v8 = v5;
  if ( v5 >= (unsigned int)dword_140C54C70 )
  {
    if ( _InterlockedIncrement(&dword_140C49BB4) <= dword_140C49BB0 )
    {
      v6 = (unsigned int)dword_140C54C70;
      v4 = 1;
    }
    else
    {
      _InterlockedDecrement(&dword_140C49BB4);
      v6 = 0x10000LL;
    }
  }
  else
  {
    v6 = 0LL;
  }
  result = sub_140245968(a1, &v9, &v8, v6);
  if ( (int)result < 0 )
    RtlRaiseStatus(result);
  if ( v4 )
    _InterlockedDecrement(&dword_140C49BB4);
  return result;
}
