/*
 * XREFs of sub_140926DD8 @ 0x140926DD8
 * Callers:
 *     sub_140780EF0 @ 0x140780EF0 (sub_140780EF0.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     EtwActivityIdControl @ 0x1402DFD70 (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall sub_140926DD8(__int64 a1)
{
  __int64 v2; // r14
  __int64 *v3; // rsi
  __int64 *v4; // rax
  int v5; // ecx
  __int64 v6; // rax
  _WORD *v7; // r15
  __int64 *v8; // rdx
  unsigned int v9; // ecx
  unsigned int v10; // edi
  void *v11; // r13
  _QWORD v13[3]; // [rsp+30h] [rbp-A8h] BYREF
  GUID ActivityId; // [rsp+48h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15[2]; // [rsp+60h] [rbp-78h] BYREF
  int *v16; // [rsp+80h] [rbp-58h]
  __int64 v17; // [rsp+88h] [rbp-50h]
  __int64 v18; // [rsp+90h] [rbp-48h]
  int v19; // [rsp+98h] [rbp-40h] BYREF
  int v20; // [rsp+9Ch] [rbp-3Ch]
  _QWORD *v21; // [rsp+A0h] [rbp-38h]
  __int64 v22; // [rsp+A8h] [rbp-30h]

  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v2 = *(_QWORD *)(a1 + 40);
  v13[1] = v2;
  if ( (unsigned int)dword_140C038A0 <= 2 )
  {
    v3 = &qword_140001AF8;
  }
  else
  {
    v3 = &qword_140001AF8;
    v4 = (__int64 *)(v2 + 16);
    if ( !*(_QWORD *)(v2 + 24) )
      v4 = &qword_140001AF8;
    v5 = *(unsigned __int16 *)v4;
    v6 = v4[1];
    v16 = &v19;
    v17 = 2LL;
    v18 = v6;
    v19 = v5;
    v20 = 0;
    sub_14020A9C4((__int64)&dword_140C038A0, (unsigned __int8 *)byte_14002A90D, &ActivityId, 0LL, 4u, v15);
  }
  v7 = (_WORD *)(v2 + 16);
  v13[2] = v2 + 16;
  v8 = (__int64 *)(v2 + 16);
  v13[0] = v2 + 16;
  v9 = *(unsigned __int16 *)(v2 + 16) + 18;
  **(_DWORD **)(a1 + 24) = v9;
  if ( *(_DWORD *)(a1 + 16) >= v9 )
  {
    v11 = (void *)(*(_QWORD *)(a1 + 8) + 16LL);
    memmove(v11, *(const void **)(v2 + 24), (unsigned __int16)*v7);
    *((_WORD *)v11 + ((unsigned __int64)(unsigned __int16)*v7 >> 1)) = 0;
    **(_WORD **)(a1 + 8) = *v7;
    *(_WORD *)(*(_QWORD *)(a1 + 8) + 2LL) = *v7;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = v11;
    v10 = -1073740541;
    v8 = (__int64 *)v13[0];
  }
  else
  {
    v10 = -1073741820;
  }
  if ( (unsigned int)dword_140C038A0 > 5 )
  {
    if ( *(_QWORD *)(v2 + 24) )
      v3 = v8;
    v16 = &v19;
    v18 = v3[1];
    v19 = *(unsigned __int16 *)v3;
    v21 = v13;
    v17 = 2LL;
    v20 = 0;
    LODWORD(v13[0]) = v10;
    v22 = 4LL;
    sub_14020A9C4((__int64)&dword_140C038A0, (unsigned __int8 *)&byte_14002A707, &ActivityId, 0LL, 5u, v15);
  }
  return v10;
}
