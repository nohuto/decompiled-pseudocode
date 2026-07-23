/*
 * XREFs of sub_140251EA0 @ 0x140251EA0
 * Callers:
 *     sub_140251DC0 @ 0x140251DC0 (sub_140251DC0.c)
 * Callees:
 *     sub_140251FD8 @ 0x140251FD8 (sub_140251FD8.c)
 *     sub_140252050 @ 0x140252050 (sub_140252050.c)
 *     sub_1402520D4 @ 0x1402520D4 (sub_1402520D4.c)
 *     sub_140252134 @ 0x140252134 (sub_140252134.c)
 *     sub_140252164 @ 0x140252164 (sub_140252164.c)
 *     sub_140252258 @ 0x140252258 (sub_140252258.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14051E038 @ 0x14051E038 (sub_14051E038.c)
 */

__int64 __fastcall sub_140251EA0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v6; // rax
  ULONG_PTR v7; // rax
  ULONG_PTR v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // r15
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  _DWORD *v14; // r14
  int v15; // r8d
  __int128 v17; // xmm1
  __int64 v18; // rcx
  __int64 v19; // rax
  __int128 v20; // xmm0
  int v21; // edx
  int v22; // ecx
  signed __int32 v23[8]; // [rsp+0h] [rbp-70h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-50h]
  __int128 v25; // [rsp+30h] [rbp-40h]
  __int128 v26; // [rsp+40h] [rbp-30h]
  __int128 v27; // [rsp+50h] [rbp-20h]
  __int64 v28; // [rsp+60h] [rbp-10h]
  unsigned int v29; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v30; // [rsp+B8h] [rbp+48h] BYREF

  v3 = *a1;
  v29 = 0;
  v30 = v3;
  sub_140252258(&v30, 0LL, 0LL);
  LODWORD(v6) = v30;
  while ( 1 )
  {
    v7 = sub_140252134((unsigned int)v6);
    v8 = v7;
    if ( !v7 )
      break;
    if ( (*(_DWORD *)(v7 + 232) & 2) != 0 )
      KeBugCheckEx(0x5Cu, 0x200uLL, dword_140C4ADB0, v7, 0x7931847uLL);
    v9 = sub_1402520D4(&v30, &v29);
    if ( !v9 )
    {
      LODWORD(BugCheckParameter4) = 1083;
      v21 = 18;
      v22 = v8;
      goto LABEL_16;
    }
    v10 = *(_QWORD *)(v9 + 48);
    if ( *(_BYTE *)(v10 + 16LL * v29) )
    {
      sub_14051E038(v8, 19, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 1096);
      return (unsigned int)-1073741811;
    }
    v11 = *(_QWORD *)(v9 + 40) + 56LL * v29;
    v12 = *(_OWORD *)(v11 + 16);
    v25 = *(_OWORD *)v11;
    v13 = *(_OWORD *)(v11 + 32);
    v26 = v12;
    *(_QWORD *)&v12 = *(_QWORD *)(v11 + 48);
    v27 = v13;
    v28 = v12;
    sub_140252164(v10, a2, v11 + 24);
    v14 = (_DWORD *)(v11 + 16);
    sub_140252050(&v30, *(_QWORD *)a3, v11 + 16);
    _InterlockedOr(v23, 0);
    v15 = sub_140251FD8(v8, &v30, v11);
    if ( v15 < 0 )
    {
      sub_14051E038(v8, 7, v15, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 1135);
      v17 = v26;
      v18 = 56LL * v29;
      v19 = *(_QWORD *)(v9 + 40);
      *(_OWORD *)(v18 + v19) = v25;
      v20 = v27;
      *(_OWORD *)(v18 + v19 + 16) = v17;
      *(_QWORD *)&v17 = v28;
      *(_OWORD *)(v18 + v19 + 32) = v20;
      *(_QWORD *)(v18 + v19 + 48) = v17;
      return (unsigned int)v15;
    }
    if ( *(_DWORD *)(v11 + 20) == *(_DWORD *)(a3 + 4) && *v14 == *(_DWORD *)a3 )
      return (unsigned int)v15;
    v6 = *(_QWORD *)v14;
    v30 = *(_QWORD *)v14;
  }
  LODWORD(BugCheckParameter4) = 1059;
  v21 = 17;
  v22 = 0;
LABEL_16:
  sub_14051E038(v22, v21, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", BugCheckParameter4);
  return (unsigned int)-1073741275;
}
