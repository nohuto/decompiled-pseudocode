/*
 * XREFs of sub_14096C6C4 @ 0x14096C6C4
 * Callers:
 *     sub_14075C330 @ 0x14075C330 (sub_14075C330.c)
 *     sub_14075FC44 @ 0x14075FC44 (sub_14075FC44.c)
 *     sub_140761604 @ 0x140761604 (sub_140761604.c)
 * Callees:
 *     sub_14024A9B0 @ 0x14024A9B0 (sub_14024A9B0.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     sub_1403699D0 @ 0x1403699D0 (sub_1403699D0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

void __fastcall sub_14096C6C4(const CHAR *Src, __int64 a2)
{
  __int64 v4; // r10
  __int64 v5; // rdi
  _QWORD *v6; // rax
  __int64 v7; // rbx
  void *v8; // rcx
  __int64 *v9; // rax
  int v10; // [rsp+40h] [rbp-59h] BYREF
  int v11; // [rsp+44h] [rbp-55h] BYREF
  __int64 v12; // [rsp+48h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+50h] [rbp-49h] BYREF
  _BYTE v14[16]; // [rsp+70h] [rbp-29h] BYREF
  _DWORD *v15; // [rsp+80h] [rbp-19h]
  int v16; // [rsp+88h] [rbp-11h]
  int v17; // [rsp+8Ch] [rbp-Dh]
  __int64 v18; // [rsp+90h] [rbp-9h]
  _DWORD v19[2]; // [rsp+98h] [rbp-1h] BYREF
  int *v20; // [rsp+A0h] [rbp+7h]
  int v21; // [rsp+A8h] [rbp+Fh]
  int v22; // [rsp+ACh] [rbp+13h]
  int *v23; // [rsp+B0h] [rbp+17h]
  int v24; // [rsp+B8h] [rbp+1Fh]
  int v25; // [rsp+BCh] [rbp+23h]
  __int64 *v26; // [rsp+C0h] [rbp+27h]
  int v27; // [rsp+C8h] [rbp+2Fh]
  int v28; // [rsp+CCh] [rbp+33h]

  if ( *(_QWORD *)&qword_140C53448 )
  {
    if ( **(_DWORD **)&qword_140C53448 > 5u )
    {
      if ( sub_1402A2000(*(__int64 *)&qword_140C53448, 0x400000000000LL) )
      {
        sub_1403699D0((__int64)v14, Src);
        v17 = 0;
        v19[1] = 0;
        v22 = 0;
        v25 = 0;
        v28 = 0;
        v15 = v19;
        v18 = *(_QWORD *)(a2 + 96);
        v19[0] = *(unsigned __int16 *)(a2 + 88);
        v10 = *(_DWORD *)(a2 + 120);
        v20 = &v10;
        v11 = *(_DWORD *)(a2 + 156);
        v23 = &v11;
        v12 = 2164260864LL;
        v21 = 4;
        v24 = 4;
        v26 = &v12;
        v27 = 8;
        v16 = 2;
        sub_14024A9B0(v4, (unsigned __int8 *)&byte_14002CC2F, 0LL, 1u, 0, 0, 8u, &v13);
      }
    }
  }
  else
  {
    v5 = -1LL;
    do
      ++v5;
    while ( Src[v5] );
    v6 = sub_1402828F0(256, v5 + *(unsigned __int16 *)(a2 + 88) + 49LL, 0x46446D4Du);
    v7 = (__int64)v6;
    if ( v6 )
    {
      v6[2] = v6 + 6;
      memmove(v6 + 6, Src, v5 + 1);
      v8 = (void *)(v7 + v5 + 49);
      *(_QWORD *)(v7 + 32) = v8;
      memmove(v8, *(const void **)(a2 + 96), *(unsigned __int16 *)(a2 + 88));
      *(_WORD *)(v7 + 24) = *(_WORD *)(a2 + 88);
      *(_WORD *)(v7 + 26) = *(_WORD *)(a2 + 88);
      *(_DWORD *)(v7 + 40) = *(_DWORD *)(a2 + 120);
      *(_DWORD *)(v7 + 44) = *(_DWORD *)(a2 + 156);
      v9 = (__int64 *)qword_140C4F4C8;
      if ( *(PVOID **)qword_140C4F4C8 != &qword_140C4F4C0 )
        __fastfail(3u);
      *(_QWORD *)v7 = &qword_140C4F4C0;
      *(_QWORD *)(v7 + 8) = v9;
      *v9 = v7;
      qword_140C4F4C8 = v7;
    }
  }
}
