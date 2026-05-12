/*
 * XREFs of sub_1C00AAE60 @ 0x1C00AAE60
 * Callers:
 *     sub_1C0006CB0 @ 0x1C0006CB0 (sub_1C0006CB0.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0035DE4 @ 0x1C0035DE4 (sub_1C0035DE4.c)
 *     sub_1C0035EB8 @ 0x1C0035EB8 (sub_1C0035EB8.c)
 *     sub_1C0061A68 @ 0x1C0061A68 (sub_1C0061A68.c)
 *     sub_1C00A69E4 @ 0x1C00A69E4 (sub_1C00A69E4.c)
 *     sub_1C00ABB58 @ 0x1C00ABB58 (sub_1C00ABB58.c)
 */

__int64 __fastcall sub_1C00AAE60(__int64 a1, IRP *a2)
{
  bool v4; // zf
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  signed int v6; // ebx
  __int64 Parameters; // rdi
  int v8; // eax
  char v9; // r10
  char *v10; // r8
  _QWORD *v11; // rdx
  _QWORD *v12; // rax
  _QWORD *v13; // rdx
  char *v14; // rax
  _QWORD *v15; // r11
  _QWORD *v16; // r9
  _QWORD *v17; // rcx
  _QWORD *v18; // r9
  _QWORD *v19; // rcx
  PVOID v20; // r14
  PVOID v22; // [rsp+30h] [rbp-10h] BYREF
  _QWORD *v23; // [rsp+38h] [rbp-8h] BYREF
  char v24; // [rsp+78h] [rbp+38h] BYREF
  char v25; // [rsp+80h] [rbp+40h] BYREF
  char *v26; // [rsp+88h] [rbp+48h] BYREF

  v22 = 0LL;
  v23 = 0LL;
  v26 = 0LL;
  a2->IoStatus.Information = 0LL;
  v4 = a2->RequestorMode == 0;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v24 = 0;
  v25 = 0;
  if ( !v4 )
  {
    v6 = -1073741790;
    return sub_1C0003440(a2, 0, v6);
  }
  if ( CurrentStackLocation->Parameters.Create.Options < 0x48 )
  {
    v6 = -1073741789;
    return sub_1C0003440(a2, 0, v6);
  }
  Parameters = (__int64)CurrentStackLocation->Parameters.CreatePipe.Parameters;
  if ( *(_DWORD *)Parameters != 72 )
  {
    v6 = -1073741811;
    return sub_1C0003440(a2, 0, v6);
  }
  v6 = sub_1C00ABB58(a1, a2, &v23);
  if ( v6 >= 0 )
  {
    v8 = sub_1C00A69E4(*(_QWORD *)(a1 + 24), Parameters, &v22, &v24, &v26, &v25);
    v9 = v25;
    v6 = v8;
    if ( v8 < 0 )
    {
      v20 = v22;
      v14 = v26;
    }
    else
    {
      v10 = v26;
      if ( !v25 )
      {
        v11 = *(_QWORD **)(Parameters + 64);
        v12 = v26 + 8;
        if ( *v11 != Parameters + 56 )
          goto LABEL_16;
        *v12 = Parameters + 56;
        *((_QWORD *)v10 + 2) = v11;
        *v11 = v12;
        *(_QWORD *)(Parameters + 64) = v12;
      }
      v13 = v23;
      v14 = 0LL;
      v15 = v22;
      v26 = 0LL;
      v23[8] = v10;
      if ( !v24 )
      {
        v16 = *(_QWORD **)(Parameters + 48);
        v17 = v15 + 1;
        if ( *v16 != Parameters + 40 )
          goto LABEL_16;
        *v17 = Parameters + 40;
        v15[2] = v16;
        *v16 = v17;
        *(_QWORD *)(Parameters + 48) = v17;
      }
      v13[7] = v15;
      v18 = *(_QWORD **)(Parameters + 32);
      v19 = v13 + 1;
      v20 = 0LL;
      v22 = 0LL;
      if ( *v18 != Parameters + 24 )
LABEL_16:
        __fastfail(3u);
      v23 = 0LL;
      *v19 = Parameters + 24;
      v13[2] = v18;
      *v18 = v19;
      *(_QWORD *)(Parameters + 32) = v19;
      *(_QWORD *)(Parameters + 16) = v13;
    }
    if ( !v9 && v14 )
      sub_1C0035DE4((PVOID *)&v26);
    if ( !v24 && v20 )
      sub_1C0035EB8(&v22);
  }
  if ( v23 )
    sub_1C0061A68((PVOID *)&v23);
  return sub_1C0003440(a2, 0, v6);
}
