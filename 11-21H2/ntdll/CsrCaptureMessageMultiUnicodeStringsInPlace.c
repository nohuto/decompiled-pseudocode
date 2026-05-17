/*
 * XREFs of CsrCaptureMessageMultiUnicodeStringsInPlace @ 0x180079CD0
 * Callers:
 *     <none>
 * Callees:
 *     CsrCaptureMessageString @ 0x180079DD0 (CsrCaptureMessageString.c)
 *     CsrAllocateCaptureBuffer @ 0x180079ED0 (CsrAllocateCaptureBuffer.c)
 */

__int64 __fastcall CsrCaptureMessageMultiUnicodeStringsInPlace(__int64 *a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rsi
  __int64 v7; // rdx
  unsigned int v8; // ecx
  __int64 v9; // r8
  __int64 CaptureBuffer; // rax
  unsigned int v11; // edi
  unsigned __int16 *v12; // r14

  if ( LdrpIsSecureProcess )
    return 3221225659LL;
  if ( !a1 )
    return 3221225485LL;
  v6 = *a1;
  if ( !*a1 )
  {
    v7 = 0LL;
    v8 = 0;
    if ( a2 )
    {
      do
      {
        v9 = *(_QWORD *)(a3 + 8LL * v8);
        if ( v9 )
          v7 = *(unsigned __int16 *)(v9 + 2) + (unsigned int)v7;
        ++v8;
      }
      while ( v8 != a2 );
    }
    CaptureBuffer = CsrAllocateCaptureBuffer(a2, v7);
    v6 = CaptureBuffer;
    if ( !CaptureBuffer )
      return 3221225495LL;
    *a1 = CaptureBuffer;
  }
  v11 = 0;
  if ( a2 )
  {
    do
    {
      v12 = *(unsigned __int16 **)(a3 + 8LL * v11);
      if ( v12 )
      {
        if ( !LdrpIsSecureProcess )
        {
          CsrCaptureMessageString(v6, *((_QWORD *)v12 + 1), *v12, v12[1], *(_QWORD *)(a3 + 8LL * v11));
          if ( v12[1] > *v12 && v12[1] - (unsigned __int64)*v12 >= 2 )
            *(_WORD *)(*((_QWORD *)v12 + 1) + 2 * ((unsigned __int64)*v12 >> 1)) = 0;
        }
      }
      ++v11;
    }
    while ( v11 != a2 );
  }
  return 0LL;
}
