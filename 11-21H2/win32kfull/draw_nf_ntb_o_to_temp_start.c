/*
 * XREFs of draw_nf_ntb_o_to_temp_start @ 0x1C00D9EF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall draw_nf_ntb_o_to_temp_start(__int64 a1, int a2, __int64 a3, int a4, unsigned int a5, int a6, int a7)
{
  int v9; // edi
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v12; // rsi
  unsigned int v13; // r10d
  int v14; // r11d
  int v15; // r9d
  int v16; // r11d
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 result; // rax
  __int64 v20; // rcx

  if ( a2 )
  {
    v9 = a2;
    v10 = a1;
    v11 = 0LL;
    do
    {
      --v9;
      v12 = **(_QWORD **)(v10 + 24 * v11 + 8);
      v13 = (*(_BYTE *)v12 + *(_BYTE *)(v10 + 24 * v11 + 16) - (_BYTE)a4) & 7;
      v14 = *(_DWORD *)(v12 + 8) + 7;
      v15 = (int)(v13 + v14) >> 3;
      v16 = v14 >> 3;
      v17 = a3
          + (int)(a5 * (*(_DWORD *)(v10 + 24 * v11 + 20) + *(_DWORD *)(v12 + 4) - a7))
          + ((__int64)(*(_DWORD *)v12 + *(_DWORD *)(v10 + 24 * v11 + 16) - a4) >> 3);
      if ( v15 > 4 )
      {
        v20 = 0LL;
        if ( v15 > v16 )
          v20 = 2LL;
        result = OrAllTableWide[(v13 == 0) | (unsigned __int64)v20](
                   *(_DWORD *)(v12 + 12),
                   v13,
                   a5,
                   v12 + 16,
                   v17,
                   v16,
                   v15);
      }
      else
      {
        v18 = 0LL;
        if ( v15 > v16 )
          v18 = 2LL;
        result = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, __int64, __int64, int))OrAllTableNarrow[(v13 == 0) | (unsigned int)(4 * v15) | (unsigned __int64)v18])(
                   *(unsigned int *)(v12 + 12),
                   v13,
                   a5,
                   v12 + 16,
                   v17,
                   v16);
      }
      v10 = a1;
      v11 = (unsigned int)(v11 + 1);
    }
    while ( v9 );
  }
  return result;
}
