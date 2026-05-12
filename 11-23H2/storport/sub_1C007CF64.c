/*
 * XREFs of sub_1C007CF64 @ 0x1C007CF64
 * Callers:
 *     sub_1C007BB50 @ 0x1C007BB50 (sub_1C007BB50.c)
 *     sub_1C007BBF8 @ 0x1C007BBF8 (sub_1C007BBF8.c)
 *     sub_1C007BC8C @ 0x1C007BC8C (sub_1C007BC8C.c)
 *     sub_1C007BD64 @ 0x1C007BD64 (sub_1C007BD64.c)
 *     sub_1C007BE80 @ 0x1C007BE80 (sub_1C007BE80.c)
 *     sub_1C007C648 @ 0x1C007C648 (sub_1C007C648.c)
 *     sub_1C007D2D8 @ 0x1C007D2D8 (sub_1C007D2D8.c)
 *     sub_1C007D4BC @ 0x1C007D4BC (sub_1C007D4BC.c)
 *     sub_1C007D734 @ 0x1C007D734 (sub_1C007D734.c)
 *     sub_1C007D8D4 @ 0x1C007D8D4 (sub_1C007D8D4.c)
 *     sub_1C007D974 @ 0x1C007D974 (sub_1C007D974.c)
 *     sub_1C007E6FC @ 0x1C007E6FC (sub_1C007E6FC.c)
 *     sub_1C007F44C @ 0x1C007F44C (sub_1C007F44C.c)
 *     sub_1C007F690 @ 0x1C007F690 (sub_1C007F690.c)
 *     sub_1C007F7A4 @ 0x1C007F7A4 (sub_1C007F7A4.c)
 *     sub_1C007F988 @ 0x1C007F988 (sub_1C007F988.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 *     sub_1C0055B44 @ 0x1C0055B44 (sub_1C0055B44.c)
 *     sub_1C007A530 @ 0x1C007A530 (sub_1C007A530.c)
 *     sub_1C007D14C @ 0x1C007D14C (sub_1C007D14C.c)
 *     sub_1C007D38C @ 0x1C007D38C (sub_1C007D38C.c)
 *     sub_1C007FC98 @ 0x1C007FC98 (sub_1C007FC98.c)
 *     sub_1C0080248 @ 0x1C0080248 (sub_1C0080248.c)
 *     sub_1C0080584 @ 0x1C0080584 (sub_1C0080584.c)
 *     sub_1C0080D94 @ 0x1C0080D94 (sub_1C0080D94.c)
 *     sub_1C0080E3C @ 0x1C0080E3C (sub_1C0080E3C.c)
 *     sub_1C0081478 @ 0x1C0081478 (sub_1C0081478.c)
 */

__int64 __fastcall sub_1C007CF64(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 (__fastcall *a5)(__int64, __int64, __int64 *, __int64),
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 (__fastcall *a9)(__int64, __int64, __int64, __int64),
        __int64 a10)
{
  __int64 v10; // rax
  _DWORD *v12; // r15
  __int64 v13; // r12
  __int64 v16; // r13
  __int64 v17; // r11
  int v18; // edi
  int v19; // eax
  int v20; // ecx
  __int64 v21; // r13
  __int64 v22; // r8
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v26; // [rsp+30h] [rbp-20h] BYREF
  __int64 v27; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v28; // [rsp+40h] [rbp-10h]
  int v29; // [rsp+44h] [rbp-Ch]
  unsigned int v30; // [rsp+90h] [rbp+40h] BYREF
  __int64 v31; // [rsp+98h] [rbp+48h] BYREF
  __int64 v32; // [rsp+A0h] [rbp+50h]

  v32 = a3;
  v10 = *(_QWORD *)(a2 + 40);
  v12 = *(_DWORD **)a1;
  v13 = *(_QWORD *)(a2 + 48);
  v26 = 0LL;
  v30 = 0;
  v31 = v10;
  sub_1C0055B44(v12, v10, &v26, &v30);
  v16 = v26;
  v29 = 0;
  v27 = v26 + 56;
  v28 = v30 - 56;
  v18 = sub_1C0080D94(&v27, a3, v17);
  if ( v18 < 0 )
    goto LABEL_16;
  if ( a5 )
  {
    v18 = a5(a1, a2, &v27, a6);
    if ( v18 < 0 )
      goto LABEL_16;
  }
  v18 = sub_1C0080E3C(&v27);
  if ( v18 < 0 )
    goto LABEL_16;
  v19 = 0;
  v20 = 0;
  if ( v32 != 255 )
  {
    v19 = *(_DWORD *)(a2 + 8);
    v20 = *(_DWORD *)(a2 + 4);
  }
  v18 = sub_1C0081478(v16, v30, a2, v29, v19, v20);
  if ( v18 < 0 )
  {
LABEL_16:
    v21 = v31;
  }
  else
  {
    sub_1C007A530(*(_DWORD *)(v16 + 16));
    v21 = v31;
    v18 = sub_1C007D14C(v12, v31, v22, 0LL);
    if ( v18 >= 0 )
    {
      LOBYTE(v24) = 1;
      v18 = sub_1C007D14C(v12, v13, v23, v24);
      if ( v18 >= 0 )
      {
        sub_1C0055B44(v12, v13, &v26, &v30);
        if ( !(unsigned int)sub_1C007FC98(a1, v26, v30) )
        {
          v31 = 0LL;
          v18 = sub_1C0080584(a1);
          if ( v18 >= 0 )
          {
            v18 = sub_1C0080248(a1, a7, a8, &v31);
            if ( v18 >= 0 )
            {
              if ( a9 )
                v18 = a9(a1, a2, v31, a10);
            }
          }
        }
        _InterlockedExchange((volatile __int32 *)(a1 + 52), 0);
      }
    }
  }
  sub_1C007D38C(v12, v21, v13);
  return (unsigned int)v18;
}
