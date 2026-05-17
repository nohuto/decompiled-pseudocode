/*
 * XREFs of RtlTryAcquireSRWLockShared @ 0x1800806D0
 * Callers:
 *     EtwpGetNextRegistration @ 0x180007898 (EtwpGetNextRegistration.c)
 *     EtwpFindRegistration @ 0x180007A58 (EtwpFindRegistration.c)
 * Callees:
 *     RtlBackoff @ 0x18001B8D8 (RtlBackoff.c)
 */

char __fastcall RtlTryAcquireSRWLockShared(volatile signed __int64 *a1)
{
  char v1; // r11
  volatile signed __int64 *v2; // r10
  unsigned __int64 v3; // rax
  __int64 v5; // r8
  signed __int64 v6; // rcx
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v2 = a1;
  v7 = 0;
  v3 = _InterlockedCompareExchange64(a1, 17LL, 0LL);
  if ( !v3 )
    return 1;
  while ( 1 )
  {
    if ( (v3 & 1) != 0 )
    {
      v5 = (v3 >> 1) & 1;
      if ( (_DWORD)v5 || (v3 & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
        return v1;
    }
    else
    {
      v5 = (v3 >> 1) & 1;
    }
    v6 = (v3 | 1) + 16;
    if ( v5 )
      v6 = v3 | 1;
    if ( v3 == _InterlockedCompareExchange64(v2, v6, v3) )
      break;
    RtlBackoff(&v7);
    _m_prefetchw((const void *)v2);
    v3 = *v2;
  }
  return 1;
}
