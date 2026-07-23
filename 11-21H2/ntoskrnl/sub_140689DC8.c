/*
 * XREFs of sub_140689DC8 @ 0x140689DC8
 * Callers:
 *     sub_14068A7FC @ 0x14068A7FC (sub_14068A7FC.c)
 *     sub_14068B1C8 @ 0x14068B1C8 (sub_14068B1C8.c)
 * Callees:
 *     sub_14020A890 @ 0x14020A890 (sub_14020A890.c)
 *     RtlClearAllBits @ 0x14020AE80 (RtlClearAllBits.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140715FA8 @ 0x140715FA8 (sub_140715FA8.c)
 *     sub_14079B3A0 @ 0x14079B3A0 (sub_14079B3A0.c)
 *     sub_1407C5CB0 @ 0x1407C5CB0 (sub_1407C5CB0.c)
 */

__int64 __fastcall sub_140689DC8(ULONG_PTR BugCheckParameter3, int a2, __int64 a3)
{
  unsigned int v3; // ebx
  ULONG *v6; // r13
  _RTL_BITMAP *p_BitMapHeader; // r12
  char v8; // si
  ULONG v9; // ebx
  unsigned int v10; // r15d
  ULONG *v11; // rax
  int v12; // eax
  int v13; // eax
  unsigned int v14; // r9d
  unsigned int v16; // [rsp+20h] [rbp-49h]
  __int64 v17; // [rsp+40h] [rbp-29h] BYREF
  _RTL_BITMAP BitMapHeader; // [rsp+48h] [rbp-21h] BYREF
  __int128 v19; // [rsp+58h] [rbp-11h] BYREF
  __int128 v20; // [rsp+68h] [rbp-1h]
  __int128 v21; // [rsp+78h] [rbp+Fh]
  __int64 v22; // [rsp+88h] [rbp+1Fh]
  int v23; // [rsp+D8h] [rbp+6Fh]
  int v24; // [rsp+E8h] [rbp+7Fh]

  v23 = a2;
  v3 = 0;
  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 0LL;
  BitMapHeader.Buffer = 0LL;
  v6 = 0LL;
  v22 = 0LL;
  p_BitMapHeader = 0LL;
  LODWORD(v17) = 0;
  v19 = 0LL;
  v8 = 0;
  v20 = 0LL;
  v21 = 0LL;
  if ( BugCheckParameter3 == qword_140D3CA28 )
    return v3;
  v9 = *(_DWORD *)(BugCheckParameter3 + 280) >> 3;
  v10 = (((v9 + 7) >> 3) + 7) & 0xFFFFFFF8;
  if ( (a2 & 0x80000) != 0 )
  {
    v11 = (ULONG *)sub_14042A5E0(v10, 0LL);
    v6 = v11;
    if ( !v11 )
    {
      v3 = -1073741670;
      sub_14020A890(a3, 0, 11, 0xC000009A, 0);
      return v3;
    }
    BitMapHeader.SizeOfBitMap = v9;
    BitMapHeader.Buffer = v11;
    p_BitMapHeader = &BitMapHeader;
    RtlClearAllBits(&BitMapHeader);
    a2 = v23;
  }
  v12 = a2 & 0x10000;
  v24 = a2 & 0x10000;
  while ( 1 )
  {
    if ( v12 )
    {
      if ( p_BitMapHeader )
        RtlClearAllBits(p_BitMapHeader);
      v13 = sub_14079B3A0(BugCheckParameter3, a2, a3, (_DWORD)p_BitMapHeader, (__int64)&v19, a3);
      v3 = v13;
      if ( v13 < 0 )
      {
        v16 = 16;
        goto LABEL_25;
      }
      if ( (int)v19 + (int)v20 + (int)v21 > (unsigned int)dword_140C0C614 )
        *(_DWORD *)(BugCheckParameter3 + 4112) |= 0x400u;
      *(_QWORD *)(BugCheckParameter3 + 4752) = v22;
    }
    if ( *(int *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL) < 0 )
      break;
    v13 = sub_140715FA8(BugCheckParameter3, a3);
    v3 = v13;
    if ( v13 < 0 )
    {
      if ( v13 != -2147483606 )
      {
        if ( v13 != -1073741267 )
        {
          v16 = 48;
          goto LABEL_25;
        }
        goto LABEL_23;
      }
      v8 = 1;
    }
    v13 = sub_1407C5CB0(BugCheckParameter3, 0, (__int64)p_BitMapHeader, a3, (__int64)&v17);
    v3 = v13;
    if ( v13 >= 0 )
      goto LABEL_28;
    if ( v13 == -2147483606 )
    {
      v8 = 1;
LABEL_28:
      *(_DWORD *)(BugCheckParameter3 + 4764) = v17;
      v3 = v8 != 0 ? 0x8000002A : 0;
      goto LABEL_31;
    }
    if ( v13 != -1073741267 )
    {
      v16 = 64;
LABEL_25:
      v14 = v13;
      goto LABEL_30;
    }
LABEL_23:
    v12 = v24;
    v8 = 1;
    a2 = v23;
  }
  v3 = -1073741492;
  v16 = 32;
  v14 = -1073741492;
LABEL_30:
  sub_14020A890(a3, 0, 11, v14, v16);
LABEL_31:
  if ( v6 )
    sub_14042A5E0(v6, v10);
  return v3;
}
