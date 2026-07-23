/*
 * XREFs of sub_1407BF2E0 @ 0x1407BF2E0
 * Callers:
 *     sub_1406B8500 @ 0x1406B8500 (sub_1406B8500.c)
 *     sub_1406F367C @ 0x1406F367C (sub_1406F367C.c)
 *     sub_1407BF070 @ 0x1407BF070 (sub_1407BF070.c)
 * Callees:
 *     sub_140241008 @ 0x140241008 (sub_140241008.c)
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     sub_1402DB248 @ 0x1402DB248 (sub_1402DB248.c)
 *     sub_1407BF530 @ 0x1407BF530 (sub_1407BF530.c)
 *     sub_14097FB60 @ 0x14097FB60 (sub_14097FB60.c)
 */

void __fastcall sub_1407BF2E0(
        ULONG_PTR BugCheckParameter3,
        __int64 *BugCheckParameter2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  unsigned int v6; // r13d
  unsigned int v8; // ebp
  __int64 v11; // rbx
  _OWORD *v12; // r8
  int v13; // r15d
  unsigned __int16 *v14; // rdx
  unsigned __int64 v15; // rdi
  int v16; // ecx
  _DWORD *v17; // rcx
  unsigned __int64 v18; // rcx
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  unsigned int v21; // edi
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int128 v25; // [rsp+40h] [rbp-68h] BYREF
  __int128 v26; // [rsp+50h] [rbp-58h]
  __int128 v27; // [rsp+60h] [rbp-48h]
  unsigned __int16 *v28; // [rsp+B0h] [rbp+8h]
  __int64 v29; // [rsp+B8h] [rbp+10h]
  _OWORD *v30; // [rsp+C8h] [rbp+20h]

  v6 = a6;
  v8 = a3;
  if ( !a4 )
    v6 = a6 & 0xFFFFFFFE;
  v11 = *(_QWORD *)(BugCheckParameter2[12] + 32);
  if ( (v6 & 1) != 0 && a3 < *(_DWORD *)(v11 + 56) )
  {
    v12 = *(_OWORD **)(v11 + 88);
    v13 = v8 << 12;
    v29 = *BugCheckParameter2;
    v30 = v12;
    while ( 1 )
    {
      while ( 1 )
      {
        v14 = 0LL;
        v28 = 0LL;
        v15 = *(_QWORD *)(*(_QWORD *)v11 + 8LL * v8);
        if ( v12 )
        {
          v14 = (unsigned __int16 *)*((_QWORD *)v12 + v8 + 7);
          v28 = v14;
        }
        if ( v15 )
          break;
        if ( v14 )
          goto LABEL_24;
        BugCheckParameter3 += 4096LL;
        if ( (BugCheckParameter3 & 0xFFF) == 0 )
          return;
        ++v8;
        v13 += 4096;
      }
      if ( v15 > 1 )
      {
        if ( *(_BYTE *)(v11 + 64) )
          sub_1407BF530((ULONG_PTR)BugCheckParameter2, BugCheckParameter3);
        else
          sub_14097FB60((ULONG_PTR)BugCheckParameter2);
        v14 = v28;
      }
      if ( (v15 & 1) != 0 )
      {
        sub_140241008(v11, (char *)BugCheckParameter3, v13, a4, a5, v6);
        v14 = v28;
      }
      if ( v14 )
        break;
LABEL_16:
      v16 = *(_DWORD *)(v11 + 60);
      if ( (v16 & 0xFFFFF000) == v13 )
      {
        v17 = (_DWORD *)(BugCheckParameter3 + (v16 & 0xFFF));
        if ( (*(_BYTE *)(v29 + 14) & 0x40) != 0 )
          *v17 += a4;
        else
          *(_QWORD *)v17 += a4;
      }
      BugCheckParameter3 += 4096LL;
      if ( (BugCheckParameter3 & 0xFFF) == 0 )
        return;
      v12 = v30;
      ++v8;
      v13 += 4096;
    }
LABEL_24:
    v18 = *(_QWORD *)(v29 + 32);
    if ( (v6 & 4) != 0 )
    {
      if ( (v6 & 8) != 0 )
      {
        v18 += a5;
        goto LABEL_26;
      }
    }
    else if ( (v6 & 8) == 0 )
    {
LABEL_26:
      v19 = v30[1];
      v25 = *v30;
      v20 = v30[2];
      v26 = v19;
      v27 = v20;
      if ( a5 )
        *(_QWORD *)&v26 = 0LL;
      v21 = v6;
      v22 = sub_14027B080(v18);
      if ( v22 != 12 && v22 != 1 )
        v21 = v6 | 8;
      sub_1402DB248(BugCheckParameter3, v23, v24, v13, (__int64)&v25, v28, v21);
      goto LABEL_16;
    }
    v18 += a4;
    goto LABEL_26;
  }
}
