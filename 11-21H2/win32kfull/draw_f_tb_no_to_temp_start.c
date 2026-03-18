/*
 * XREFs of draw_f_tb_no_to_temp_start @ 0x1C02D9710
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall draw_f_tb_no_to_temp_start(__int64 a1, int a2, __int64 a3, int a4, unsigned int a5, int a6)
{
  __int64 v6; // rsi
  int v8; // edi
  int v10; // ebx
  _DWORD *v11; // r14
  int v12; // eax
  int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // r10
  int v16; // r11d
  int v17; // r9d
  __int64 v18; // r8
  __int64 result; // rax
  __int64 v20; // rcx

  if ( a2 )
  {
    v6 = 0LL;
    v8 = a2;
    v10 = *(_DWORD *)(a1 + 16) - a4;
    do
    {
      --v8;
      v11 = **(_DWORD ***)(a1 + 24 * v6 + 8);
      v12 = v11[2];
      v13 = v10 + *v11;
      v14 = ((_BYTE)v10 + *(_BYTE *)v11) & 7;
      v15 = a3 + ((__int64)v13 >> 3);
      v16 = (v12 + 7) >> 3;
      v17 = (v12 + (int)v14 + 7) >> 3;
      if ( v17 > 4 )
      {
        v20 = 0LL;
        if ( v17 > v16 )
          v20 = 2LL;
        result = OrAllTableWide[((_DWORD)v14 == 0) | (unsigned __int64)v20](
                   v11[3],
                   v14,
                   a5,
                   (int)(v11 + 4),
                   v15,
                   v16,
                   v17);
      }
      else
      {
        v18 = 0LL;
        if ( v17 > v16 )
          v18 = 2LL;
        result = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD, _DWORD *, __int64, int))OrInitialTableNarrow[((_DWORD)v14 == 0) | (unsigned int)(4 * v17) | (unsigned __int64)v18])(
                   (unsigned int)v11[3],
                   v14,
                   a5,
                   v11 + 4,
                   a3 + ((__int64)v13 >> 3),
                   v16);
      }
      v10 += a6;
      v6 = (unsigned int)(v6 + 1);
    }
    while ( v8 );
  }
  return result;
}
