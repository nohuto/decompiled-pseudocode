/*
 * XREFs of sub_1403915EC @ 0x1403915EC
 * Callers:
 *     sub_140A500C0 @ 0x140A500C0 (sub_140A500C0.c)
 * Callees:
 *     sub_140251FD8 @ 0x140251FD8 (sub_140251FD8.c)
 *     sub_1402520D4 @ 0x1402520D4 (sub_1402520D4.c)
 *     sub_140252134 @ 0x140252134 (sub_140252134.c)
 *     sub_140252258 @ 0x140252258 (sub_140252258.c)
 *     sub_140303720 @ 0x140303720 (sub_140303720.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14051E038 @ 0x14051E038 (sub_14051E038.c)
 */

__int64 sub_1403915EC()
{
  unsigned int v0; // ebx
  unsigned int v1; // esi
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 *v5; // rdi
  _QWORD *v6; // rax
  ULONG_PTR *v7; // rax
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0LL;
  v0 = 0;
  v1 = dword_140D01720;
  if ( dword_140D01720 )
  {
    v5 = &qword_140C4C800;
    while ( 1 )
    {
      v10 = *v5;
      sub_140252258(&v10, 0LL, 0LL);
      v6 = sub_1402520D4((unsigned int *)&v10);
      if ( !v6 )
        break;
      v7 = sub_140252134(*((_DWORD *)v6 + 4));
      if ( !v7 )
      {
        sub_14051E038(0, 17, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c", 1914);
LABEL_11:
        v9 = -1073741810;
LABEL_12:
        KeBugCheckEx(0x5Cu, 0x200uLL, dword_140C4ADB0, 2uLL, v9);
      }
      v9 = sub_140251FD8((__int64)v7, (__int64)&v10, *(_QWORD *)(v8 + 40));
      if ( v9 < 0 )
        goto LABEL_12;
      ++v0;
      ++v5;
      if ( v0 >= v1 )
        goto LABEL_2;
    }
    sub_14051E038(0, 18, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c", 1900);
    goto LABEL_11;
  }
LABEL_2:
  v2 = sub_140303720(qword_140C4E4B0);
  return sub_14042A5E0(v2, v3);
}
