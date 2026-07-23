/*
 * XREFs of sub_140576640 @ 0x140576640
 * Callers:
 *     sub_14041FF90 @ 0x14041FF90 (sub_14041FF90.c)
 * Callees:
 *     sub_14025E30C @ 0x14025E30C (sub_14025E30C.c)
 *     sub_140299280 @ 0x140299280 (sub_140299280.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140576820 @ 0x140576820 (sub_140576820.c)
 */

__int64 __fastcall sub_140576640(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  unsigned __int8 v8; // si
  __int64 v9; // rax
  int v10; // ebx
  __int64 result; // rax
  unsigned __int64 v12; // rax
  struct _KTHREAD *CurrentThread; // rdx
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v15; // r11
  unsigned __int8 v16; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v18; // r9
  int v19; // eax
  bool v20; // zf
  _DWORD v22[40]; // [rsp+40h] [rbp-D8h] BYREF

  memset(v22, 0, 0x98uLL);
  v8 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( v8 )
  {
    v9 = (__int64)(a1 + 6);
    if ( (unsigned __int64)(a1 + 6) >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    v10 = *(_DWORD *)v9;
    if ( *(_DWORD *)v9 > 0xFu )
      return 3221225485LL;
    v12 = (unsigned __int64)a1 + (unsigned int)(8 * v10 + 32);
    if ( v12 > 0x7FFFFFFF0000LL || v12 < (unsigned __int64)a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
    memmove(v22, a1, (unsigned int)(8 * v10 + 32));
    a1 = v22;
    v22[6] = v10;
  }
  result = sub_140576820(a1, a2, a3, a4);
  if ( (int)result >= 0 )
  {
    *a1 &= ~0x10000000u;
    sub_140299280(a1, a3, a4, v8, a5);
    if ( v8 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( (*((_BYTE *)CurrentThread + 3) & 2) != 0
        && *(_QWORD *)(a4 + 360) != *(_QWORD *)(*((_QWORD *)CurrentThread + 68) + 984LL) )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(1uLL);
        sub_14025E30C(a4);
        if ( dword_140D06B08 )
        {
          if ( ((unsigned __int8)dword_140D06B08 & v15) != 0 )
          {
            v16 = KeGetCurrentIrql();
            if ( v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v18 = *((_QWORD *)CurrentPrcb + 4375);
              v19 = ~(unsigned __int16)(-1LL << (v15 + CurrentIrql));
              v20 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
              *(_DWORD *)(v18 + 20) &= v19;
              if ( v20 )
                sub_140418E4C((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(CurrentIrql);
      }
    }
    return 0LL;
  }
  return result;
}
