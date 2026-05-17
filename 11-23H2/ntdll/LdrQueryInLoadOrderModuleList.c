/*
 * XREFs of LdrQueryInLoadOrderModuleList @ 0x1800015E0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpReadMemory @ 0x180001250 (LdrpReadMemory.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall LdrQueryInLoadOrderModuleList(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  int *v4; // r9
  __int64 result; // rax
  _BYTE v8[8]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v9; // [rsp+38h] [rbp-30h]
  int *v10; // [rsp+70h] [rbp+8h] BYREF

  v4 = &PebLdr;
  v10 = &PebLdr;
  if ( a1 != (_QWORD *)&LdrpLocalProcess )
  {
    if ( ((int (__fastcall *)(_QWORD, _QWORD, _BYTE *, __int64, _QWORD))a1[2])(*a1, 0LL, v8, 48LL, 0LL) >= 0 )
    {
      result = LdrpReadMemory((__int64)a1, v9 + 24, (__int64)&v10, 8LL);
      if ( (int)result < 0 )
        return result;
    }
    v4 = v10;
  }
  *a2 = v4 + 4;
  if ( a3 )
    *a3 = v4 + 12;
  return 0LL;
}
