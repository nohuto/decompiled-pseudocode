/*
 * XREFs of sub_14052AD10 @ 0x14052AD10
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14052AD10(char a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdi
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // r14
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v3 = qword_140C54C40;
  if ( qword_140C54C40 )
  {
    v5 = 0;
    if ( *(_BYTE *)(qword_140C54C40 + 36) )
    {
      do
      {
        v6 = 136LL * v5;
        v7 = v6 + qword_140C54C48 + 8;
        if ( (*(_BYTE *)(*(_QWORD *)(v6 + qword_140C54C48) + 1LL) & 1) != 0 && !a1 && v7 )
        {
          v8 = *(_QWORD *)(v7 + 56);
          result = sub_14042A5E0(v8, a2);
          if ( (int)result < 0 )
            return result;
          sub_14042A5E0(v8, 0LL);
        }
        result = *(unsigned __int8 *)(v3 + 36);
        ++v5;
      }
      while ( v5 < (unsigned int)result );
    }
  }
  return result;
}
