/*
 * XREFs of sub_1407185B4 @ 0x1407185B4
 * Callers:
 *     sub_14065DF64 @ 0x14065DF64 (sub_14065DF64.c)
 *     sub_140718244 @ 0x140718244 (sub_140718244.c)
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 *     sub_140923ED0 @ 0x140923ED0 (sub_140923ED0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407187D4 @ 0x1407187D4 (sub_1407187D4.c)
 *     sub_140718AE8 @ 0x140718AE8 (sub_140718AE8.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C97FC @ 0x1407C97FC (sub_1407C97FC.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_1407FB158 @ 0x1407FB158 (sub_1407FB158.c)
 */

__int64 __fastcall sub_1407185B4(ULONG_PTR BugCheckParameter3, unsigned int *a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rsi
  __int16 v8; // cx
  unsigned int v9; // r15d
  __int64 v10; // rax
  __int64 v11; // r12
  unsigned int v12; // edi
  _WORD *v13; // rax
  _WORD *v14; // rsi
  int v15; // edi
  _DWORD *v16; // rcx
  __int64 *v17; // rdx
  __int64 v19; // [rsp+30h] [rbp-30h] BYREF
  __int64 v20; // [rsp+38h] [rbp-28h] BYREF
  __int64 v21; // [rsp+40h] [rbp-20h] BYREF
  __int128 v22; // [rsp+48h] [rbp-18h]
  char v23; // [rsp+A0h] [rbp+40h]
  ULONG_PTR BugCheckParameter4; // [rsp+B8h] [rbp+58h] BYREF

  v20 = 0LL;
  v19 = 0LL;
  v22 = 0LL;
  sub_1407C97FC(&v19);
  sub_1407C97FC(&v20);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v6 = sub_1406BF400(BugCheckParameter3, a3, &v19);
  else
    v6 = sub_1407C9820(BugCheckParameter3);
  v7 = v6;
  v8 = *(_WORD *)(v6 + 72);
  if ( (*(_BYTE *)(v6 + 2) & 0x20) != 0 )
  {
    v9 = (unsigned __int16)(2 * v8);
    LOWORD(v22) = 2 * v8;
    WORD1(v22) = 2 * v8;
    v10 = sub_14042A5E0((unsigned __int16)(2 * v8), 0LL);
    *((_QWORD *)&v22 + 1) = v10;
    v11 = v10;
    if ( !v10 )
    {
      v15 = -1073741670;
      if ( !v7 )
        return (unsigned int)v15;
      v17 = &v19;
      goto LABEL_18;
    }
    v23 = 1;
    sub_140718AE8(v10, v9, v7 + 76, *(unsigned __int16 *)(v7 + 72));
  }
  else
  {
    v11 = v6 + 76;
    v23 = 0;
    *((_QWORD *)&v22 + 1) = v6 + 76;
    LOWORD(v9) = v8;
    LOWORD(v22) = v8;
    WORD1(v22) = v8;
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    sub_1406BF450(BugCheckParameter3, &v19);
  else
    sub_1407C97C0(BugCheckParameter3, &v19);
  v12 = *a2;
  LODWORD(BugCheckParameter4) = v12;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v13 = (_WORD *)sub_1406BF400(BugCheckParameter3, v12, &v20);
  else
    v13 = (_WORD *)sub_1407C9820(BugCheckParameter3);
  v21 = 0LL;
  v14 = v13;
  if ( *v13 == 26994 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v20);
    else
      sub_1407C97C0(BugCheckParameter3, &v20);
    v14 = 0LL;
    v15 = sub_1407FB158(BugCheckParameter3, (__int64)&v21, (__int64)&BugCheckParameter4);
    if ( v15 < 0 )
      goto LABEL_14;
    v15 = sub_1407187D4(BugCheckParameter3, (unsigned int)BugCheckParameter4, (__int64)&BugCheckParameter4);
    if ( v15 < 0 )
      goto LABEL_14;
    v16 = (_DWORD *)v21;
  }
  else
  {
    v15 = sub_1407187D4(BugCheckParameter3, v12, (__int64)&BugCheckParameter4);
    if ( v15 < 0 )
      goto LABEL_14;
    v16 = a2;
  }
  v15 = 0;
  *v16 = BugCheckParameter4;
LABEL_14:
  if ( v23 )
    sub_14042A5E0(v11, (unsigned __int16)v9);
  if ( v14 )
  {
    v17 = &v20;
LABEL_18:
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, v17);
    else
      sub_1407C97C0(BugCheckParameter3, v17);
  }
  return (unsigned int)v15;
}
