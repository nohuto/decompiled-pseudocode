/*
 * XREFs of sub_14079CC20 @ 0x14079CC20
 * Callers:
 *     sub_14079C920 @ 0x14079C920 (sub_14079C920.c)
 * Callees:
 *     RtlFindSetBits @ 0x1402E4EE0 (RtlFindSetBits.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14079CE20 @ 0x14079CE20 (sub_14079CE20.c)
 *     sub_140AB44A4 @ 0x140AB44A4 (sub_140AB44A4.c)
 *     sub_140AB44C0 @ 0x140AB44C0 (sub_140AB44C0.c)
 *     sub_140AB451C @ 0x140AB451C (sub_140AB451C.c)
 *     sub_140AB4534 @ 0x140AB4534 (sub_140AB4534.c)
 */

__int64 __fastcall sub_14079CC20(ULONG_PTR BugCheckParameter2, unsigned int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rsi
  __int64 v7; // r12
  ULONG v9; // edx
  __int64 v10; // r15
  unsigned int v11; // ebx
  unsigned int v12; // r14d
  unsigned int v13; // eax
  int v14; // r13d
  ULONG i; // edx
  __int64 v16; // rdi
  ULONG SetBits; // ecx
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned int v21; // r8d
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdi
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v29; // rdi
  __int64 v30; // [rsp+90h] [rbp+8h] BYREF
  __int16 v31; // [rsp+98h] [rbp+10h] BYREF
  int v32; // [rsp+A0h] [rbp+18h]
  ULONG v33; // [rsp+A8h] [rbp+20h]

  v32 = a3;
  v6 = a2;
  v7 = a4;
  v31 = 0;
  sub_140AB4534(&v31);
  v10 = 632 * v7;
  v11 = -1;
  v12 = (-1 << v6) & *(_DWORD *)(632 * v7 + BugCheckParameter2 + 904);
  if ( !v12 )
    return v11;
  _BitScanForward(&v13, v12);
  v33 = v9;
  v14 = -1;
  if ( v13 != (_DWORD)v6 )
    v6 = v13;
  for ( i = *(_DWORD *)(v10 + 24 * v6 + BugCheckParameter2 + 316); ; i = v33 )
  {
    v16 = v10 + 24 * v6;
    SetBits = RtlFindSetBits((PRTL_BITMAP)(v16 + BugCheckParameter2 + 320), 1u, i);
    *(_DWORD *)(v16 + BugCheckParameter2 + 316) = SetBits;
    v33 = SetBits + 1;
    if ( v14 == SetBits )
    {
      v12 &= v12 - 1;
      if ( !v12 )
        return v11;
      _BitScanForward((unsigned int *)&v6, v12);
      v33 = 0;
      v29 = v10 + 24 * v6;
      SetBits = RtlFindSetBits(
                  (PRTL_BITMAP)(v29 + BugCheckParameter2 + 320),
                  1u,
                  *(_DWORD *)(v29 + BugCheckParameter2 + 316));
      *(_DWORD *)(v29 + BugCheckParameter2 + 316) = SetBits;
      v14 = SetBits;
      v33 = SetBits + 1;
    }
    v18 = SetBits;
    if ( v14 != -1 )
      v18 = v14;
    v14 = v18;
    LODWORD(v30) = (SetBits << 12) + ((_DWORD)v7 << 31);
    v19 = sub_140AB44C0(BugCheckParameter2, (unsigned int)v30);
    v22 = v19;
    if ( !v19 )
      KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v21, 0x48AuLL);
    v23 = *(_QWORD *)(v19 + 8);
    if ( (v23 & 2) != 0 || (v23 & 4) != 0 || (v23 & 1) == 0 )
      continue;
    v24 = sub_140AB451C(v20, v22, &v31);
    v25 = sub_14079CE20(BugCheckParameter2, (__int64)&v30, a5, a6);
    if ( v25 >= 0 )
      break;
    if ( v25 != -1073741275 )
      goto LABEL_14;
    sub_140AB44A4(v27, v26, &v31);
  }
  v11 = v30;
LABEL_14:
  if ( v24 )
    sub_140AB44A4(v27, v26, &v31);
  return v11;
}
