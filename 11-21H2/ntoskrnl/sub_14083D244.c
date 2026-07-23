/*
 * XREFs of sub_14083D244 @ 0x14083D244
 * Callers:
 *     sub_14083200C @ 0x14083200C (sub_14083200C.c)
 *     sub_14083C870 @ 0x14083C870 (sub_14083C870.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14068CEA0 @ 0x14068CEA0 (sub_14068CEA0.c)
 *     sub_14068D2B8 @ 0x14068D2B8 (sub_14068D2B8.c)
 *     sub_1406D16F8 @ 0x1406D16F8 (sub_1406D16F8.c)
 *     sub_14079B740 @ 0x14079B740 (sub_14079B740.c)
 *     sub_14079CF18 @ 0x14079CF18 (sub_14079CF18.c)
 *     sub_14083D398 @ 0x14083D398 (sub_14083D398.c)
 *     sub_140AB44A4 @ 0x140AB44A4 (sub_140AB44A4.c)
 *     sub_140AB44C0 @ 0x140AB44C0 (sub_140AB44C0.c)
 *     sub_140AB451C @ 0x140AB451C (sub_140AB451C.c)
 *     sub_140AB4534 @ 0x140AB4534 (sub_140AB4534.c)
 */

__int64 __fastcall sub_14083D244(ULONG_PTR BugCheckParameter2)
{
  int v2; // eax
  unsigned int v3; // r14d
  unsigned int v4; // ebp
  unsigned int i; // esi
  __int64 v6; // rax
  __int64 v7; // rcx
  _BYTE *v8; // r15
  _DWORD *v9; // r13
  int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int16 v15; // [rsp+70h] [rbp+8h] BYREF
  void *v16; // [rsp+78h] [rbp+10h] BYREF

  v15 = 0;
  sub_140AB4534(&v15);
  v2 = *(_DWORD *)(BugCheckParameter2 + 160);
  v3 = 0;
  v16 = 0LL;
  if ( (v2 & 0x10) != 0 )
  {
    v4 = *(_DWORD *)(BugCheckParameter2 + 280);
    if ( v4 )
    {
      for ( i = 0; i < v4; i += v3 )
      {
        v6 = sub_140AB44C0(BugCheckParameter2, i);
        v8 = (_BYTE *)v6;
        if ( !v6 )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, i, 0x145AuLL);
        if ( (*(_BYTE *)(v6 + 8) & 8) != 0 )
          break;
        v9 = (_DWORD *)sub_140AB451C(v7, v6, &v15);
        v3 = v9[2];
        v10 = sub_14068D2B8(BugCheckParameter2, v3, 0, 892489027LL, (__int64 *)&v16);
        if ( v10 < 0 )
          goto LABEL_11;
        memmove(v16, v9, v3);
        sub_140AB44A4(v12, v11, &v15);
        v13 = sub_14079B740(v8);
        sub_14068CEA0(BugCheckParameter2, (__int64)v16, v3, i, 1, v13);
        v16 = 0LL;
        sub_14079CF18(v3);
      }
    }
    if ( _InterlockedExchangeAdd(&dword_140C097B8, 0xFFFFFFFF) == 1 )
      sub_14083D398();
    *(_DWORD *)(BugCheckParameter2 + 160) &= ~0x10u;
    v10 = 0;
LABEL_11:
    if ( v16 )
      sub_1406D16F8(BugCheckParameter2, v3, (__int64)v16);
  }
  else
  {
    return 0;
  }
  return (unsigned int)v10;
}
