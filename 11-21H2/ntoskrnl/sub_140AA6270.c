/*
 * XREFs of sub_140AA6270 @ 0x140AA6270
 * Callers:
 *     <none>
 * Callees:
 *     sub_1405FFB44 @ 0x1405FFB44 (sub_1405FFB44.c)
 *     sub_140A8C8EC @ 0x140A8C8EC (sub_140A8C8EC.c)
 *     sub_140A92124 @ 0x140A92124 (sub_140A92124.c)
 *     sub_140A922C0 @ 0x140A922C0 (sub_140A922C0.c)
 *     sub_140AA66E0 @ 0x140AA66E0 (sub_140AA66E0.c)
 */

__int64 __fastcall sub_140AA6270(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        const void *a7)
{
  __int64 result; // rax
  __int64 v11; // r13
  const void *v12; // rsi
  int v13; // ebp
  __int64 v14; // rcx
  PDRIVER_INITIALIZE v15; // rax
  unsigned int v16; // ecx
  __int64 v17; // r8
  int v18; // eax
  int v19; // r9d
  int v20; // r10d
  int v21; // [rsp+30h] [rbp-38h]

  result = sub_140A922C0(a2);
  if ( (_DWORD)result )
  {
    v11 = a1[30];
    v12 = (const void *)*a1;
    v13 = *(_DWORD *)(*a1 + 48LL);
    v21 = *(_DWORD *)(a5 + 96);
    if ( *(_DWORD *)(v11 + 56) == 3 )
      sub_1405FFB44(0x211u, a7, v12);
    v14 = a2[1];
    result = (__int64)sub_14023EE50;
    if ( *(__int64 (__fastcall **)(__int64, IRP *))(v14 + 328) == sub_14023EE50 )
    {
      *(_DWORD *)(a5 + 4) |= 0x1000000u;
      v15 = sub_140A8C8EC((struct _DRIVER_OBJECT *)v14);
      sub_1405FFB44(0x21Fu, v15, v12);
      result = a6;
      *(_DWORD *)(a6 + 4) |= 0x80000000;
    }
    if ( a3 )
    {
      if ( v13 >= 0 )
        goto LABEL_15;
      if ( v13 == -1073741637 )
      {
        if ( v21 == -1073741637 || (*(_DWORD *)(a5 + 4) & 0x2000000) != 0 )
        {
LABEL_15:
          if ( *(_QWORD *)(v11 + 48) )
          {
            result = sub_140A92124(*(_QWORD *)(v11 + 48), 2);
            if ( (_DWORD)result )
            {
              v18 = sub_140A92124(v17, 3);
              return sub_140AA66E0((_DWORD)v12, v20, v18 == 0 ? 4 : 0, v19, (__int64)a7, 1);
            }
          }
          return result;
        }
        v16 = 534;
      }
      else
      {
        if ( (*(_DWORD *)(a5 + 4) & 0x2000000) != 0 )
          goto LABEL_15;
        v16 = 533;
      }
      result = sub_1405FFB44(v16, a7, v12);
      *(_DWORD *)(a5 + 4) |= 0x2000000u;
      goto LABEL_15;
    }
  }
  return result;
}
