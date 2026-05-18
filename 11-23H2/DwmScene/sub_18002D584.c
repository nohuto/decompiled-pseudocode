/*
 * XREFs of sub_18002D584 @ 0x18002D584
 * Callers:
 *     sub_18002B938 @ 0x18002B938 (sub_18002B938.c)
 *     sub_18002B9A8 @ 0x18002B9A8 (sub_18002B9A8.c)
 *     sub_18002BACC @ 0x18002BACC (sub_18002BACC.c)
 *     sub_18002CE40 @ 0x18002CE40 (sub_18002CE40.c)
 *     ??1?$_Func_impl@U?$_Callable_obj@V_lambda_8b695f9820225e821433c25f6ed27cb8_@@$0A@@std@@V?$allocator@V?$_Func_class@V?$task@_N@Concurrency@@_N@std@@@2@V?$task@_N@Concurrency@@_N@std@@UEAA@XZ @ 0x1800740D4 (--1-$_Func_impl@U-$_Callable_obj@V_lambda_8b695f9820225e821433c25f6ed27cb8_@@$0A@@std@@V-$alloca.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_18002AA98 @ 0x18002AA98 (sub_18002AA98.c)
 */

__int64 __fastcall sub_18002D584(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    sub_18002AA98((__int64)v2, *(_QWORD *)(a1 + 8));
    result = sub_1800100E8(*(void **)a1, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
