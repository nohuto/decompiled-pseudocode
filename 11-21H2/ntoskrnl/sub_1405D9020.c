/*
 * XREFs of sub_1405D9020 @ 0x1405D9020
 * Callers:
 *     <none>
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     sub_140345190 @ 0x140345190 (sub_140345190.c)
 */

__int64 sub_1405D9020()
{
  REGHANDLE v0; // rbx
  __int64 result; // rax

  if ( byte_140C5AE30 )
  {
    v0 = qword_140C1F580;
    if ( EtwEventEnabled(qword_140C1F580, &stru_1400389F0) )
      EtwWriteEx(v0, &stru_1400389F0, 0LL, 0, 0LL, 0LL, 0, 0LL);
  }
  result = (unsigned int)_InterlockedExchange(&dword_140D06D18, 1);
  if ( !(_DWORD)result )
    return sub_140345190((ULONG_PTR)&dword_140D073A0, 0LL, 0LL, 0LL, 0);
  return result;
}
