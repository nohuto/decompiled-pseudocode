/*
 * XREFs of AlpcInitializeMessageAttribute @ 0x180079340
 * Callers:
 *     <none>
 * Callees:
 *     AlpcGetHeaderSize @ 0x1800793E0 (AlpcGetHeaderSize.c)
 */

__int64 __fastcall AlpcInitializeMessageAttribute(int a1, _DWORD *a2, unsigned __int64 a3, _QWORD *a4)
{
  unsigned int HeaderSize; // eax

  HeaderSize = AlpcGetHeaderSize();
  *a4 = HeaderSize;
  if ( HeaderSize > a3 )
    return 3221225507LL;
  if ( a2 )
  {
    a2[1] = 0;
    *a2 = a1;
  }
  return 0LL;
}
