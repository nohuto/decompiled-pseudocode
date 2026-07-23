/*
 * XREFs of sub_1402DAEB0 @ 0x1402DAEB0
 * Callers:
 *     sub_1402DAC64 @ 0x1402DAC64 (sub_1402DAC64.c)
 *     sub_140336B30 @ 0x140336B30 (sub_140336B30.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14026C61C @ 0x14026C61C (sub_14026C61C.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402BB6D0 @ 0x1402BB6D0 (sub_1402BB6D0.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402DB07C @ 0x1402DB07C (sub_1402DB07C.c)
 *     sub_1402DB0B8 @ 0x1402DB0B8 (sub_1402DB0B8.c)
 *     ?_Getint@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0HHAEAH@Z @ 0x1402EA644 (-_Getint@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHAEAV-$ist.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_1403095B0 @ 0x1403095B0 (sub_1403095B0.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall sub_1402DAEB0(__int64 a1, unsigned __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rcx
  __int64 v8; // r15
  int v9; // eax
  __int64 v10; // r9
  struct _KTHREAD *v11; // rdx
  __int64 v12; // rbx
  unsigned __int64 v13; // r12
  __int64 v14; // rsi
  int v15; // eax
  unsigned __int64 v16; // rbx
  int v17; // r14d
  int v18; // eax
  struct _KTHREAD *CurrentThread; // rbx
  volatile signed __int64 *v20; // r14
  bool v21; // zf
  BOOL v23; // r14d

  v4 = *(_QWORD *)(a1 + 96);
  v8 = *(_QWORD *)(v4 + 32);
  v9 = sub_1402DB07C(v4, a3);
  v11 = 0LL;
  if ( !v9 )
    return 1LL;
  v12 = 48 * v10 - 0x220000000000LL;
  if ( !a2 || a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v13 = a2;
    v14 = sub_1403095B0(&qword_140C534C0, 1LL);
    if ( !v14 )
    {
      if ( !a2 )
        return 3221225626LL;
      v14 = a2;
    }
    a2 = v14 << 25 >> 16;
    v15 = sub_14026C61C(4, v12);
    v16 = sub_1402CBD10(v14, a4, v15 | 0xA0000000);
    v17 = 0;
    v18 = sub_140317A80(v14);
    v11 = 0LL;
    if ( !v18 )
      goto LABEL_7;
    if ( (unsigned int)sub_140229550() )
    {
      v17 = 1;
      if ( HIBYTE(word_140C51864) == (_BYTE)v11 )
      {
LABEL_30:
        if ( (v16 & 1) != 0 )
          v16 |= 0x8000000000000000uLL;
      }
    }
    else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
    {
      goto LABEL_30;
    }
LABEL_7:
    *(_QWORD *)v14 = v16;
    if ( v17 )
    {
      sub_1402294F0(v14, v16);
      v11 = 0LL;
    }
    goto LABEL_9;
  }
  v14 = 0LL;
  v13 = 0LL;
LABEL_9:
  CurrentThread = KeGetCurrentThread();
  v20 = (volatile signed __int64 *)(v8 + 24);
  if ( *(struct _KTHREAD **)(v8 + 8) == CurrentThread )
  {
    CurrentThread = v11;
  }
  else
  {
    --*((_WORD *)CurrentThread + 243);
    ExAcquirePushLockSharedEx(v8 + 24, 0LL);
  }
  sub_1402DB0B8(a2, *(_QWORD *)(v8 + 88), a3);
  if ( CurrentThread )
  {
    if ( _InterlockedCompareExchange64(v20, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v20);
    sub_1402AFC00((ULONG_PTR)v20);
    v21 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
    if ( v21 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
      KiCheckForKernelApcDelivery();
  }
  if ( v14 )
  {
    if ( v14 == v13 )
    {
      v23 = 0;
      if ( (unsigned int)sub_140317A80(v14) )
        v23 = sub_140229550() != 0;
      *(_QWORD *)v14 = 0LL;
      if ( v23 )
        sub_1402294F0(v14, 0LL);
      std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(a2, 0LL, 1LL);
    }
    else
    {
      sub_1402BB6D0((__int64)&qword_140C534C0, (_QWORD *)v14, 1u);
    }
  }
  return 0LL;
}
