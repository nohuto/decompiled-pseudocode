/*
 * XREFs of sub_14036CD34 @ 0x14036CD34
 * Callers:
 *     sub_1402F25C0 @ 0x1402F25C0 (sub_1402F25C0.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     ?_Getint@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0HHAEAH@Z @ 0x1402EA644 (-_Getint@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHAEAV-$ist.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_14036C428 @ 0x14036C428 (sub_14036C428.c)
 *     sub_14036C7EC @ 0x14036C7EC (sub_14036C7EC.c)
 *     NaptrDnsRecordConvert_0 @ 0x14036CF60 (NaptrDnsRecordConvert_0.c)
 */

__int64 __fastcall sub_14036CD34(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v4; // r13
  volatile LONG *v5; // rbx
  unsigned int v6; // esi
  __int64 v7; // r15
  unsigned __int64 *v8; // r14
  int v9; // r12d
  unsigned __int64 v10; // rbx
  BOOL v11; // r11d
  int v12; // edx
  __int64 v13; // r14
  __int64 v14; // rbx
  int v15; // ebp
  BOOL v16; // r12d
  int v17; // edx
  unsigned __int64 v18; // rbx
  __int64 v19; // r8
  bool v20; // zf
  bool v21; // zf
  KIRQL v22; // [rsp+60h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(a1 + 40) != CurrentThread )
    return 0LL;
  v4 = (_QWORD *)*((_QWORD *)CurrentThread + 23);
  v5 = (volatile LONG *)sub_140282AD0((__int64)(v4 + 208));
  v6 = 0;
  v22 = ExAcquireSpinLockExclusive(v5);
  *((_DWORD *)v5 + 1) = 0;
  NaptrDnsRecordConvert_0(a1);
  if ( *(int *)(a1 + 56) >= 0 )
  {
    v7 = *(_QWORD *)(a1 + 32);
    ++dword_140C29CE8;
    v8 = (unsigned __int64 *)(*(_QWORD *)(a1 + 16) + 8LL * ((((*(_DWORD *)(a1 + 8) >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF));
    v9 = 0;
    v10 = ((v7 & 0xFFFFFFFFFFLL) << 12) | sub_140317A10((unsigned __int64)v8) & 0xFFF0000000000FFFuLL;
    v11 = sub_140317A80((unsigned __int64)v8);
    if ( v11 && (unsigned int)sub_140229550() )
      v9 = 1;
    *v8 = 0LL;
    if ( v9 )
      sub_1402294F0((__int64)v8, 0LL);
    v12 = 0;
    if ( v11 )
    {
      if ( (unsigned int)sub_140229550() )
      {
        v12 = 1;
        if ( HIBYTE(word_140C51864) )
          goto LABEL_8;
        v20 = (v10 & 1) == 0;
      }
      else
      {
        if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
          goto LABEL_8;
        v20 = (v10 & 1) == 0;
      }
      if ( !v20 )
        v10 |= v19;
    }
LABEL_8:
    *v8 = v10;
    if ( v12 )
      sub_1402294F0((__int64)v8, v10);
    if ( !*(_DWORD *)(a1 + 60) )
    {
      v4[5] = sub_14036C428(v7 << 12);
LABEL_12:
      v6 = 1;
      goto LABEL_13;
    }
    v13 = ((v4[241] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v14 = sub_140317A10(v13);
    v15 = 0;
    v16 = sub_140317A80(v13);
    if ( v16 && (unsigned int)sub_140229550() )
      v15 = 1;
    *(_QWORD *)v13 = 0LL;
    if ( v15 )
      sub_1402294F0(v13, 0LL);
    std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(v13 << 25 >> 16, 0, 2u);
    v17 = 0;
    v18 = ((v7 & 0xFFFFFFFFFFLL) << 12) | v14 & 0xFFF0000000000FFFuLL;
    if ( !v16 )
    {
LABEL_18:
      *(_QWORD *)v13 = v18;
      if ( v17 )
        sub_1402294F0(v13, v18);
      v4[113] = sub_14036C7EC(v7 << 12);
      goto LABEL_12;
    }
    if ( (unsigned int)sub_140229550() )
    {
      v17 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_18;
      v21 = (v18 & 1) == 0;
    }
    else
    {
      if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
        goto LABEL_18;
      v21 = (v18 & 1) == 0;
    }
    if ( !v21 )
      v18 |= 0x8000000000000000uLL;
    goto LABEL_18;
  }
LABEL_13:
  sub_14030FA80((__int64)(v4 + 208), v22);
  return v6;
}
