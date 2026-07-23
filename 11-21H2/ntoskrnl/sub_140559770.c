/*
 * XREFs of sub_140559770 @ 0x140559770
 * Callers:
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     sub_140A805EC @ 0x140A805EC (sub_140A805EC.c)
 * Callees:
 *     sub_14020B888 @ 0x14020B888 (sub_14020B888.c)
 *     sub_14020C0F0 @ 0x14020C0F0 (sub_14020C0F0.c)
 *     sub_1402B59D0 @ 0x1402B59D0 (sub_1402B59D0.c)
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140559C3C @ 0x140559C3C (sub_140559C3C.c)
 */

void __fastcall sub_140559770(__int64 BugCheckParameter1, unsigned __int8 a2)
{
  bool v2; // zf
  char v5; // cl
  char v6; // dl
  __int64 v7; // r14
  unsigned __int8 *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  signed __int32 v12; // esi
  bool v13; // sf
  char v14; // al
  __int128 v15; // [rsp+30h] [rbp-39h] BYREF
  __int128 v16; // [rsp+40h] [rbp-29h]
  __int64 v17; // [rsp+50h] [rbp-19h] BYREF
  signed __int32 v18; // [rsp+58h] [rbp-11h]
  _QWORD v19[2]; // [rsp+60h] [rbp-9h] BYREF
  signed __int32 v20; // [rsp+70h] [rbp+7h]
  _QWORD *v21; // [rsp+78h] [rbp+Fh] BYREF
  int v22; // [rsp+80h] [rbp+17h]
  int v23; // [rsp+84h] [rbp+1Bh]
  __int64 *v24; // [rsp+88h] [rbp+1Fh] BYREF
  int v25; // [rsp+90h] [rbp+27h]
  int v26; // [rsp+94h] [rbp+2Bh]

  v2 = *(_WORD *)BugCheckParameter1 == 6;
  v15 = 0LL;
  v16 = 0LL;
  if ( v2 )
  {
    v5 = *(_BYTE *)(BugCheckParameter1 + 66);
    v6 = *(_BYTE *)(BugCheckParameter1 + 67);
    if ( v6 <= (char)(v5 + 1) )
    {
      v7 = 0LL;
      v8 = 0LL;
      if ( v6 <= v5 )
      {
        v8 = *(unsigned __int8 **)(BugCheckParameter1 + 184);
        if ( *((_QWORD *)v8 + 5) )
        {
          if ( (dword_140D018A0 & 2) != 0 && sub_14020C0F0(BugCheckParameter1, 1u) && !sub_14020C0F0(v9, 4u) )
          {
            sub_140559C3C(
              MEMORY[0xFFFFF78000000014] - *(_QWORD *)(*(_QWORD *)(BugCheckParameter1 + 200) + 40LL),
              *(unsigned int *)(*((_QWORD *)v8 + 5) + 72LL));
            sub_14020B888(BugCheckParameter1, 1, 1);
          }
          v10 = *(_QWORD *)(*((_QWORD *)v8 + 5) + 8LL);
          if ( v10 )
          {
            v11 = *v8;
            if ( (unsigned __int8)v11 <= 0x1Bu )
              v7 = *(_QWORD *)(v10 + 8 * v11 + 112);
          }
        }
        else
        {
          v7 = *((_QWORD *)v8 + 7);
        }
      }
      if ( (dword_140D018A0 & 1) != 0 )
      {
        v23 = 0;
        v19[0] = v7;
        v19[1] = BugCheckParameter1;
        v12 = _InterlockedIncrement(&dword_140C46CF0);
        v20 = v12;
        v21 = v19;
        v22 = 20;
        sub_14035EDE4((__int64)&v21, 1u, 0x20000010u, 0x134u, 0x401802u);
        if ( !v8 )
        {
LABEL_19:
          sub_1402B59D0((IRP *)BugCheckParameter1, a2);
          v26 = 0;
          v24 = &v17;
          v17 = BugCheckParameter1;
          v18 = v12;
          v25 = 12;
          sub_14035EDE4((__int64)&v24, 1u, 0x20000010u, 0x135u, 0x401802u);
          return;
        }
        v13 = *(int *)(BugCheckParameter1 + 48) < 0;
        *((_QWORD *)&v15 + 1) = *((_QWORD *)v8 + 8);
        *(_QWORD *)&v15 = v8;
        DWORD2(v16) = v12;
        BYTE12(v16) = v8[3];
        v14 = v8[3];
        if ( v13 )
        {
          if ( v14 < 0 )
            goto LABEL_17;
        }
        else if ( (v14 & 0x40) != 0 )
        {
          goto LABEL_17;
        }
        if ( !*(_BYTE *)(BugCheckParameter1 + 68) || (v14 & 0x20) == 0 )
        {
          v8[3] = v14 | 0xC0;
          goto LABEL_18;
        }
LABEL_17:
        *(_QWORD *)&v16 = *((_QWORD *)v8 + 7);
        *((_QWORD *)&v15 + 1) = *((_QWORD *)v8 + 8);
LABEL_18:
        *((_QWORD *)v8 + 7) = sub_1405599A0;
        *((_QWORD *)v8 + 8) = &v15;
        goto LABEL_19;
      }
    }
  }
  sub_1402B59D0((IRP *)BugCheckParameter1, a2);
}
