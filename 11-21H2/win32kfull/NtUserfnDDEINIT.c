/*
 * XREFs of NtUserfnDDEINIT @ 0x1C0200C50
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     InternalSetProp @ 0x1C0083110 (InternalSetProp.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ?DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z @ 0x1C01F0590 (-DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z.c)
 *     ?DDEImpIncRefInit@@YAHPEAUtagWND@@PEAUtagDDEIMP@@PEAU_TL@@@Z @ 0x1C01F0624 (-DDEImpIncRefInit@@YAHPEAUtagWND@@PEAUtagDDEIMP@@PEAU_TL@@@Z.c)
 */

__int64 __fastcall NtUserfnDDEINIT(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v7; // rbx
  __int64 ThreadWin32Thread; // rdi
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 Prop; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  _QWORD v25[3]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v26; // [rsp+48h] [rbp-40h] BYREF
  __int64 v27; // [rsp+58h] [rbp-30h]

  v26 = 0LL;
  v27 = 0LL;
  v7 = 0LL;
  v25[2] = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v12 = ValidateHwnd(a3);
  v13 = v12;
  if ( v12 )
  {
    v25[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v25;
    v25[1] = v12;
    HMLockObject(v12);
    Prop = GetProp(v13, (unsigned __int16)atomDDEImp, 1u);
    if ( !Prop )
    {
      v16 = *(_QWORD *)(v13 + 40);
      if ( *(char *)(v16 + 19) < 0 || *(char *)(v16 + 20) < 0 )
      {
LABEL_13:
        v18 = 87LL;
        goto LABEL_14;
      }
      v17 = Win32AllocPoolWithQuotaZInit(96LL, 1147433813LL);
      Prop = v17;
      if ( !v17 )
      {
LABEL_6:
        v18 = 8LL;
LABEL_14:
        UserSetLastError(v18, v14);
        goto LABEL_15;
      }
      *(struct _SECURITY_QUALITY_OF_SERVICE *)v17 = gqosDefault;
      if ( SeCreateClientSecurity(KeGetCurrentThread(), &gqosDefault, 0, (PSECURITY_CLIENT_CONTEXT)(v17 + 16)) < 0 )
      {
LABEL_8:
        Win32FreePool(Prop);
        goto LABEL_6;
      }
      v19 = (unsigned __int16)atomDDEImp;
      *(_DWORD *)(Prop + 88) = 0;
      if ( !(unsigned int)InternalSetProp(v13, v19, Prop, 1u) )
      {
        SeDeleteClientSecurity(Prop + 16);
        goto LABEL_8;
      }
    }
    if ( (unsigned int)DDEImpIncRefInit((struct tagWND *)v13, (struct tagDDEIMP *)Prop, (struct _TL *)&v26) == 1 )
    {
      v7 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
             a1,
             a2,
             a3,
             a4,
             a5);
      v20 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)(v20 + 16) = v26;
      DDEImpDecRefInitWorker(*(HWND *)v13);
LABEL_15:
      ThreadUnlock1(v22, v21, v23);
      return v7;
    }
    goto LABEL_13;
  }
  return v7;
}
