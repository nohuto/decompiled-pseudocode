/*
 * XREFs of ?GetFlags@FxRequestSystemBuffer@@UEAAGXZ @ 0x1C006AFF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxRequestSystemBuffer::GetFlags(FxRequestSystemBuffer *this)
{
  char *v1; // rdx
  char v2; // cl
  __int64 result; // rax

  v1 = (char *)*((_QWORD *)this[-7].m_Buffer + 23);
  v2 = *v1;
  if ( *v1 == 3 )
    return 0LL;
  result = 1LL;
  if ( v2 != 4 && ((unsigned __int8)(v2 - 14) > 1u || (*((_DWORD *)v1 + 6) & 3) == 0 || (*((_DWORD *)v1 + 6) & 3) == 3) )
    return 0LL;
  return result;
}
