/*
 * XREFs of sub_140554244 @ 0x140554244
 * Callers:
 *     sub_1403B83F0 @ 0x1403B83F0 (sub_1403B83F0.c)
 *     sub_1405531C0 @ 0x1405531C0 (sub_1405531C0.c)
 * Callees:
 *     sub_140551F78 @ 0x140551F78 (sub_140551F78.c)
 */

__int64 sub_140554244()
{
  __int64 result; // rax
  _DWORD *v1; // r14
  __int64 v2; // rsi

  result = (unsigned int)_InterlockedExchange(dword_140C54D70, 1);
  if ( (_DWORD)result != 1 )
  {
    dword_140C54DA8 = 0;
    if ( dword_140C54D74
      && (result = qword_140C54D90 & 1, (v1 = *(_DWORD **)&dword_140C54D70[2 * result + 2]) != 0LL)
      && (v2 = *(_QWORD *)&dword_140C54D70[2 * (((_BYTE)qword_140C54D90 - 1) & 1) + 2]) != 0 )
    {
      sub_140551F78((_NT_PRODUCT_TYPE *)(v2 + 24), 1, 332, 0LL, 0LL, 0LL, 0LL, (__int64)KeGetCurrentThread());
      *(_QWORD *)(v2 + 4040) = qword_140C54D98;
      *(_QWORD *)(v2 + 40) = *((_QWORD *)PsInitialSystemProcess + 5) & 0xFFFFFFFFFFFFF000uLL;
      result = (unsigned int)_InterlockedExchange((volatile __int32 *)v2, 1397967163);
      *v1 = result;
      LODWORD(qword_140C54D90) = qword_140C54D90 + 1;
    }
    else
    {
      dword_140C54DA8 = -1073741823;
    }
    _InterlockedExchange(dword_140C54D70, 0);
  }
  return result;
}
