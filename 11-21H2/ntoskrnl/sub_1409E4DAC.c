/*
 * XREFs of sub_1409E4DAC @ 0x1409E4DAC
 * Callers:
 *     NtTraceControl @ 0x1407954F0 (NtTraceControl.c)
 * Callees:
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_1406EC9F8 @ 0x1406EC9F8 (sub_1406EC9F8.c)
 *     sub_1406EF020 @ 0x1406EF020 (sub_1406EF020.c)
 *     sub_1406EF140 @ 0x1406EF140 (sub_1406EF140.c)
 *     sub_1406EF280 @ 0x1406EF280 (sub_1406EF280.c)
 *     sub_1407981E8 @ 0x1407981E8 (sub_1407981E8.c)
 *     sub_1407FC710 @ 0x1407FC710 (sub_1407FC710.c)
 */

__int64 __fastcall sub_1409E4DAC(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // r9
  struct _KTHREAD *CurrentThread; // rax
  int v7; // edi
  __int64 v8; // rbx
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0LL;
  result = sub_1406EF140(a2);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    v7 = sub_1406EF020(v5, v4, &v9);
    if ( v7 >= 0 )
    {
      v8 = v9;
      if ( (*(_DWORD *)(v9 + 12) & 8) != 0 )
      {
        v8 = v9;
        if ( (*(_DWORD *)(v9 + 824) & 1) != 0
          || (sub_1406EC9F8(v9, 4u),
              sub_1407FC710(
                (unsigned __int16 *)(v8 + 168),
                (volatile signed __int32 *)(v8 + 296),
                (UNICODE_STRING *)(v8 + 184)),
              v7 = sub_1406EC9F8(v8, 1u),
              v7 >= 0) )
        {
          v7 = sub_1406EF280((__int64)a2, v8);
        }
      }
      else
      {
        v7 = -1073741811;
      }
      sub_1407981E8((unsigned int *)v8, 1);
    }
    sub_1402F9540((__int64)KeGetCurrentThread());
    return (unsigned int)v7;
  }
  return result;
}
