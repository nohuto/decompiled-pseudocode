/*
 * XREFs of _lambda_82048e68f5598f867a09767a358fae1b_::_lambda_invoker_cdecl_ @ 0x1C00D5460
 * Callers:
 *     <none>
 * Callees:
 *     SendMessageTo @ 0x1C006A100 (SendMessageTo.c)
 */

void lambda_82048e68f5598f867a09767a358fae1b_::_lambda_invoker_cdecl_()
{
  struct tagTHREADINFO *v0; // rbx
  __int64 v1; // rax
  __int64 v2; // r9
  __int64 *v3; // rax
  _DWORD v4[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+28h] [rbp-30h]
  __int64 v6; // [rsp+30h] [rbp-28h]
  __int128 v7; // [rsp+38h] [rbp-20h]

  v0 = gptiForeground;
  if ( gptiForeground )
  {
    v1 = *((_QWORD *)gptiForeground + 53);
    v5 = 0LL;
    v7 = 0LL;
    v4[0] = *(_DWORD *)(v1 + 56);
    v4[1] = (unsigned int)PsGetThreadId(*(PETHREAD *)gptiForeground);
    v3 = *(__int64 **)(*((_QWORD *)v0 + 54) + 120LL);
    if ( v3 )
      v6 = *v3;
    else
      v6 = 0LL;
    SendMessageTo(2LL, (__int64)v4, 40LL, v2);
  }
}
