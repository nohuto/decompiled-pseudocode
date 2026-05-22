/*
 * XREFs of ?ProcessChannelBatchBuffer@KernelChannel@DirectComposition@@UEAAJIPEAKPEAE@Z @ 0x180078F00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::KernelChannel::ProcessChannelBatchBuffer(
        DirectComposition::KernelChannel *this,
        __int64 a2,
        unsigned int *a3,
        unsigned __int8 *a4)
{
  __int64 result; // rax

  result = NtDCompositionProcessChannelBatchBuffer(*((unsigned int *)this + 2), a2, a3, a4);
  if ( (int)result > -1073741790 )
  {
    if ( (_DWORD)result != -1073741788 )
    {
      if ( (_DWORD)result != -1073741637 )
      {
        if ( !(_DWORD)result )
          return result;
        return (unsigned int)result | 0x10000000;
      }
      return 2147942487LL;
    }
    return 2147942406LL;
  }
  switch ( (_DWORD)result )
  {
    case 0xC0000022:
      return 2147942405LL;
    case 0x803E0006:
      return 2291664896LL;
    case 0xC0000001:
      return 2147500037LL;
    case 0xC0000002:
      return 2147500033LL;
    case 0xC0000008:
      return 2147942406LL;
    case 0xC000000D:
      return 2147942487LL;
  }
  if ( (_DWORD)result != -1073741801 )
    return (unsigned int)result | 0x10000000;
  return 2147942414LL;
}
