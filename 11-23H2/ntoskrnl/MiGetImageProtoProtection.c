/*
 * XREFs of MiGetImageProtoProtection @ 0x140356A5C
 * Callers:
 *     MiGetPageProtection @ 0x140272CB0 (MiGetPageProtection.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     MiGetSharedProtos @ 0x140369F2C (MiGetSharedProtos.c)
 */

__int64 __fastcall MiGetImageProtoProtection(__int64 a1, unsigned __int64 a2)
{
  __int64 *v2; // rbx
  unsigned int v3; // edi
  unsigned __int64 v6; // rdx
  __int64 v8; // rbp
  unsigned int SessionId; // eax

  v2 = *(__int64 **)(a1 + 72);
  v3 = 0;
  v6 = 0LL;
  while ( v2 )
  {
    if ( (*((_BYTE *)v2 + 34) & 2) != 0 && (v8 = *v2, (*(_DWORD *)(*v2 + 56) & 0x8000000) != 0) )
    {
      SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      v6 = *(_QWORD *)(MiGetSharedProtos(v8, SessionId, v2) + 72);
    }
    else
    {
      v6 = v2[1];
    }
    if ( a2 >= v6 && a2 < v6 + 8LL * *((unsigned int *)v2 + 11) )
      break;
    v2 = (__int64 *)v2[2];
  }
  if ( (__int64)(a2 - v6) >> 3 < (unsigned __int64)(*((_DWORD *)v2 + 11) - (*((_DWORD *)v2 + 13) & 0x3FFFFFFFu)) )
  {
    v3 = (*(_DWORD *)(a1 + 48) >> 7) & 0x1F;
    if ( v3 == 7 )
      return (*((unsigned __int16 *)v2 + 16) >> 1) & 0x1F;
  }
  return v3;
}
