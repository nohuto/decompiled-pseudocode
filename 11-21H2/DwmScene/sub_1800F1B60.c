/*
 * XREFs of sub_1800F1B60 @ 0x1800F1B60
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002EEDC @ 0x18002EEDC (sub_18002EEDC.c)
 *     sub_18002F050 @ 0x18002F050 (sub_18002F050.c)
 *     sub_1800F19C8 @ 0x1800F19C8 (sub_1800F19C8.c)
 */

__int64 __fastcall sub_1800F1B60(__int64 a1, unsigned int a2, int a3)
{
  __int64 v4; // rbx
  __int64 *v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  _QWORD v14[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v15[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v16; // [rsp+58h] [rbp+10h] BYREF

  v16 = a2;
  *(_DWORD *)(a1 + 568) = a2;
  v4 = a3;
  v5 = (__int64 *)sub_1800F19C8((__int64 *)(a1 + 552), &v16);
  v6 = 6 * v4;
  v7 = *v5;
  v8 = *(_QWORD *)(*v5 + 8 * v6 + 72);
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v8 = *(_QWORD *)(v7 + 8 * v6 + 72);
  }
  v9 = *(_QWORD *)(v7 + 8 * v6 + 64);
  v14[1] = v8;
  v14[0] = v9;
  sub_18002F050(a1, v14);
  v10 = *v5;
  v11 = *(_QWORD *)(*v5 + 8 * v6 + 88);
  if ( v11 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
    v11 = *(_QWORD *)(v10 + 8 * v6 + 88);
  }
  v12 = *(_QWORD *)(v10 + 8 * v6 + 80);
  v15[1] = v11;
  v15[0] = v12;
  return sub_18002EEDC(a1, v15);
}
