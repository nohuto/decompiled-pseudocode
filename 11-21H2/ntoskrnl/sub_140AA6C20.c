/*
 * XREFs of sub_140AA6C20 @ 0x140AA6C20
 * Callers:
 *     <none>
 * Callees:
 *     sub_1405FFB44 @ 0x1405FFB44 (sub_1405FFB44.c)
 *     sub_140A8C8EC @ 0x140A8C8EC (sub_140A8C8EC.c)
 */

__int64 (__fastcall *__fastcall sub_140AA6C20(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        const void *a7))(__int64 a1, IRP *a2)
{
  const void *v8; // rbx
  __int64 v9; // rcx
  __int64 (__fastcall *result)(__int64, IRP *); // rax
  PDRIVER_INITIALIZE v11; // rax

  v8 = *(const void **)a1;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 240) + 56LL) == 3 )
    sub_1405FFB44(0x211u, a7, *(const void **)a1);
  v9 = *(_QWORD *)(a2 + 8);
  result = sub_14023EE50;
  if ( *(__int64 (__fastcall **)(__int64, IRP *))(v9 + 296) == sub_14023EE50 )
  {
    *(_DWORD *)(a5 + 4) |= 0x1000000u;
    v11 = sub_140A8C8EC((struct _DRIVER_OBJECT *)v9);
    sub_1405FFB44(0x21Fu, v11, v8);
    result = (__int64 (__fastcall *)(__int64, IRP *))a6;
    *(_DWORD *)(a6 + 4) |= 0x80000000;
  }
  return result;
}
