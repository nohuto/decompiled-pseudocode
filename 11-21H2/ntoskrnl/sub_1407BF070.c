/*
 * XREFs of sub_1407BF070 @ 0x1407BF070
 * Callers:
 *     sub_14024076C @ 0x14024076C (sub_14024076C.c)
 *     sub_140336B30 @ 0x140336B30 (sub_140336B30.c)
 *     sub_140338080 @ 0x140338080 (sub_140338080.c)
 *     sub_140983680 @ 0x140983680 (sub_140983680.c)
 * Callees:
 *     PsGetHostSilo @ 0x140203DC0 (PsGetHostSilo.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14026C61C @ 0x14026C61C (sub_14026C61C.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402BB6D0 @ 0x1402BB6D0 (sub_1402BB6D0.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     ?_Getint@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0HHAEAH@Z @ 0x1402EA644 (-_Getint@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHAEAV-$ist.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_1403095B0 @ 0x1403095B0 (sub_1403095B0.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_1407BF2E0 @ 0x1407BF2E0 (sub_1407BF2E0.c)
 */

__int64 __fastcall sub_1407BF070(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7)
{
  __int64 *v11; // rdi
  __int64 v12; // r8
  struct _KTHREAD *v13; // r10
  int v14; // ecx
  __int64 v15; // rax
  __int64 v17; // rbx
  ULONG_PTR v18; // r13
  int v19; // eax
  unsigned __int64 v20; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v22; // rax
  bool v23; // zf
  ULONG_PTR v24; // [rsp+70h] [rbp+8h]

  v11 = *(__int64 **)(*(_QWORD *)(BugCheckParameter2 + 96) + 32LL);
  v12 = *v11;
  if ( (a7 & 1) == 0 || a3 >= *((_DWORD *)v11 + 14) )
    return 1LL;
  v13 = 0LL;
  v14 = 0;
  while ( *(struct _KTHREAD **)(v12 + 8LL * (v14 + a3)) == v13 )
  {
    v15 = v11[11];
    if ( v15 )
    {
      if ( *(struct _KTHREAD **)(v15 + 8LL * (v14 + a3) + 56) != v13 )
        break;
    }
    if ( (a7 & 2) != 0 && (unsigned int)PsGetHostSilo() )
      break;
    if ( ++v14 )
      return 1LL;
  }
  v17 = 48 * a4 - 0x220000000000LL;
  if ( a2 && (a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    v18 = (ULONG_PTR)v13;
    v24 = (ULONG_PTR)v13;
    goto LABEL_18;
  }
  v24 = a2;
  v18 = sub_1403095B0((__int64)&qword_140C534C0, 1u);
  if ( !v18 )
  {
    if ( !a2 )
      return 3221225626LL;
    v18 = a2;
  }
  a2 = (__int64)(v18 << 25) >> 16;
  v19 = sub_14026C61C(4, v17);
  v20 = sub_1402CBD10(v18, a4, v19 | 0xA0000000);
  if ( sub_140317A80(v18) )
  {
    if ( (unsigned int)sub_140229550() )
    {
      if ( !HIBYTE(word_140C51864) && (v20 & 1) != 0 )
        v20 |= 0x8000000000000000uLL;
      *(_QWORD *)v18 = v20;
      sub_1402294F0(v18, v20);
      goto LABEL_16;
    }
    if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 && (v20 & 1) != 0 )
      v20 |= 0x8000000000000000uLL;
  }
  *(_QWORD *)v18 = v20;
LABEL_16:
  v13 = 0LL;
LABEL_18:
  CurrentThread = KeGetCurrentThread();
  if ( (struct _KTHREAD *)v11[1] == CurrentThread )
  {
    CurrentThread = v13;
  }
  else
  {
    --*((_WORD *)CurrentThread + 243);
    ExAcquirePushLockSharedEx((ULONG_PTR)(v11 + 3), 0LL);
    v13 = 0LL;
  }
  v22 = v11[5];
  if ( (a7 & 4) == 0 )
    v22 = (__int64)v13;
  sub_1407BF2E0(a2, BugCheckParameter2, v22, a7);
  if ( CurrentThread )
  {
    if ( _InterlockedCompareExchange64(v11 + 3, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v11 + 3);
    sub_1402AFC00((ULONG_PTR)(v11 + 3));
    v23 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
    if ( v23 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
      KiCheckForKernelApcDelivery();
  }
  if ( !v18 )
    return 0LL;
  if ( v18 == v24 )
  {
    if ( sub_140317A80(v18) && (unsigned int)sub_140229550() )
    {
      *(_QWORD *)v18 = 0LL;
      sub_1402294F0(v18, 0LL);
    }
    else
    {
      *(_QWORD *)v18 = 0LL;
    }
    std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(a2, 0, 1u);
    return 0LL;
  }
  sub_1402BB6D0((__int64)&qword_140C534C0, (_QWORD *)v18, 1u);
  return 0LL;
}
