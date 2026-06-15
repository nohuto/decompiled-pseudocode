/*
 * XREFs of wil::details::ScopeExitFn__lambda_030bae19ff0c20ae49fdfeee1fc80389___::_ScopeExitFn__lambda_030bae19ff0c20ae49fdfeee1fc80389___ @ 0x1800FE3F0
 * Callers:
 *     _BuildDeviceGraphForStream_::_1_::dtor$8 @ 0x18006FC20 (_BuildDeviceGraphForStream_--_1_--dtor$8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_030bae19ff0c20ae49fdfeee1fc80389___::_ScopeExitFn__lambda_030bae19ff0c20ae49fdfeee1fc80389___(
        __int64 *a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 8) )
  {
    result = *a1;
    *((_BYTE *)a1 + 8) = 0;
    *(_QWORD *)(result + 152) = 0LL;
  }
  return result;
}
