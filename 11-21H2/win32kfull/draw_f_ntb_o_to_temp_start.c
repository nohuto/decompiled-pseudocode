/*
 * XREFs of draw_f_ntb_o_to_temp_start @ 0x1C02D95A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall draw_f_ntb_o_to_temp_start(__int64 a1, int a2, __int64 a3, int a4, unsigned int a5, int a6, int a7)
{
  __int64 v7; // rsi
  int v8; // ebx
  int v9; // r14d
  int v10; // edi
  __int64 v12; // r11
  int v13; // eax
  __int64 v14; // rdx
  int v15; // r10d
  int v16; // r9d
  __int64 v17; // r12
  __int64 v18; // r8
  __int64 result; // rax
  __int64 v20; // rcx
  __int64 v21; // [rsp+80h] [rbp+18h]

  if ( a2 )
  {
    v21 = a3;
    v7 = 0LL;
    v8 = *(_DWORD *)(a1 + 16) - a4;
    v9 = *(_DWORD *)(a1 + 20) - a7;
    v10 = a2;
    do
    {
      --v10;
      v12 = **(_QWORD **)(a1 + 24 * v7 + 8);
      v13 = *(_DWORD *)(v12 + 8);
      v14 = ((_BYTE)v8 + *(_BYTE *)v12) & 7;
      v15 = (v13 + 7) >> 3;
      v16 = (v13 + (int)v14 + 7) >> 3;
      v17 = a3 + (int)(a5 * (v9 + *(_DWORD *)(v12 + 4))) + ((__int64)(v8 + *(_DWORD *)v12) >> 3);
      if ( v16 > 4 )
      {
        v20 = 0LL;
        if ( v16 > v15 )
          v20 = 2LL;
        result = OrAllTableWide[((_DWORD)v14 == 0) | (unsigned __int64)v20](
                   *(_DWORD *)(v12 + 12),
                   v14,
                   a5,
                   v12 + 16,
                   v17,
                   v15,
                   v16);
      }
      else
      {
        v18 = 0LL;
        if ( v16 > v15 )
          v18 = 2LL;
        result = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD, __int64, __int64, int))OrAllTableNarrow[((_DWORD)v14 == 0) | (unsigned int)(4 * v16) | (unsigned __int64)v18])(
                   *(unsigned int *)(v12 + 12),
                   v14,
                   a5,
                   v12 + 16,
                   v17,
                   v15);
      }
      v8 += a6;
      v7 = (unsigned int)(v7 + 1);
      a3 = v21;
    }
    while ( v10 );
  }
  return result;
}
