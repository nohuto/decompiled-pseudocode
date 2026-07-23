/*
 * XREFs of sub_140235AAC @ 0x140235AAC
 * Callers:
 *     sub_1402359C4 @ 0x1402359C4 (sub_1402359C4.c)
 *     sub_14027C784 @ 0x14027C784 (sub_14027C784.c)
 *     sub_140284A20 @ 0x140284A20 (sub_140284A20.c)
 *     sub_140AF61F4 @ 0x140AF61F4 (sub_140AF61F4.c)
 *     sub_140B098F0 @ 0x140B098F0 (sub_140B098F0.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_1402BEDD0 @ 0x1402BEDD0 (sub_1402BEDD0.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402CC7C0 @ 0x1402CC7C0 (sub_1402CC7C0.c)
 *     ?_Getint@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0HHAEAH@Z @ 0x1402EA644 (-_Getint@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHAEAV-$ist.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140424F50 @ 0x140424F50 (sub_140424F50.c)
 *     sub_140AF4308 @ 0x140AF4308 (sub_140AF4308.c)
 */

__int64 __fastcall sub_140235AAC(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // r15
  __int64 v6; // rdx
  void *v7; // rsi
  __int64 *v8; // rbx
  unsigned __int64 v10; // rax
  __int64 v11; // rdi
  int v12; // r14d
  int v13; // ebp
  bool v14; // zf
  __int64 v15; // [rsp+58h] [rbp+10h] BYREF

  v15 = a2;
  LOBYTE(v15) = 17;
  v5 = *((_QWORD *)KeGetCurrentPrcb() + 4272);
  if ( v5 )
  {
    v7 = (void *)sub_1402CC7C0(BugCheckParameter2, &v15, 0x80000000LL);
    v8 = 0LL;
    goto LABEL_3;
  }
  v10 = sub_140AF4308();
  v7 = (void *)v10;
  if ( !v10 )
    KeBugCheckEx(0x1Au, 0x3030305uLL, BugCheckParameter2, 0LL, 0LL);
  v8 = (__int64 *)(((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v11 = sub_1402CBD10(v8, BugCheckParameter2, 2684354564LL);
  v12 = 0;
  if ( (unsigned int)sub_140317A80(v8) )
  {
    if ( (unsigned int)sub_140229550() )
    {
      v12 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_9;
      v14 = (v11 & 1) == 0;
    }
    else
    {
      if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
        goto LABEL_9;
      v14 = (v11 & 1) == 0;
    }
    if ( !v14 )
      v11 |= 0x8000000000000000uLL;
  }
LABEL_9:
  *v8 = v11;
  if ( v12 )
    sub_1402294F0((__int64)v8, v11);
LABEL_3:
  if ( a3 )
    memset64(v7, a3, 0x200uLL);
  else
    sub_140424F50(v7, 4096LL);
  if ( v5 )
  {
    LOBYTE(v6) = v15;
    return sub_1402BEDD0(v7, v6, 0x80000000LL);
  }
  else
  {
    v13 = 0;
    if ( (unsigned int)sub_140317A80(v8) && (unsigned int)sub_140229550() )
      v13 = 1;
    *v8 = 0LL;
    if ( v13 )
      sub_1402294F0((__int64)v8, 0LL);
    return std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(v7, 0LL, 1LL);
  }
}
