/*
 * XREFs of sub_18001D4DC @ 0x18001D4DC
 * Callers:
 *     sub_180017EE4 @ 0x180017EE4 (sub_180017EE4.c)
 * Callees:
 *     sub_18000F364 @ 0x18000F364 (sub_18000F364.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800129F4 @ 0x1800129F4 (sub_1800129F4.c)
 *     sub_18001D0D0 @ 0x18001D0D0 (sub_18001D0D0.c)
 *     sub_180046470 @ 0x180046470 (sub_180046470.c)
 */

__int64 __fastcall sub_18001D4DC(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r8
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 *v6; // rax
  _QWORD *v7; // rax
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v11; // rbx
  __int64 *v12; // rax
  _QWORD *v13; // rax
  _QWORD v14[2]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v15[16]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v16[16]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v17[4]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v18[5]; // [rsp+70h] [rbp-28h] BYREF
  __int64 retaddr; // [rsp+98h] [rbp+0h]

  v2 = a2[1];
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = a2[1];
  }
  v14[0] = a1[2];
  a1[2] = *a2;
  v4 = a1[3];
  a1[3] = v2;
  v14[1] = v4;
  sub_180010910((__int64)v14);
  v5 = a1[2];
  v6 = sub_1800129F4(v17, (__int64)&qword_1801F7FD8);
  v7 = (_QWORD *)sub_180046470(v5, v15, v6);
  v8 = sub_18001D0D0(a1 + 4, v7);
  sub_180010910((__int64)v15);
  if ( v8 < 0 )
  {
    v9 = 33LL;
LABEL_5:
    sub_18000F364(
      retaddr,
      v9,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectreworld.cpp",
      (unsigned int)v8);
    return (unsigned int)v8;
  }
  v11 = a1[2];
  v12 = sub_1800129F4(v18, (__int64)&qword_1801F8058);
  v13 = (_QWORD *)sub_180046470(v11, v16, v12);
  v8 = sub_18001D0D0(a1 + 5, v13);
  sub_180010910((__int64)v16);
  if ( v8 < 0 )
  {
    v9 = 37LL;
    goto LABEL_5;
  }
  return 0LL;
}
