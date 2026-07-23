/*
 * XREFs of sub_1407E1968 @ 0x1407E1968
 * Callers:
 *     sub_1407E3260 @ 0x1407E3260 (sub_1407E3260.c)
 * Callees:
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1407E1B0C @ 0x1407E1B0C (sub_1407E1B0C.c)
 *     sub_1407E3B7C @ 0x1407E3B7C (sub_1407E3B7C.c)
 */

void __fastcall sub_1407E1968(unsigned __int64 *a1, int a2)
{
  int v2; // r15d
  unsigned __int64 *v3; // rdi
  _QWORD *v5; // r14
  unsigned __int64 *v6; // rbp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rbx
  char v15; // al
  __int64 v16; // rdx
  char v17; // al
  struct _KTHREAD *v18; // rax
  bool v19; // zf
  __int64 v20; // [rsp+70h] [rbp+18h] BYREF

  if ( a2 > 0 )
  {
    v2 = a2;
    v3 = a1 + 10;
    v5 = a1 + 8;
    v6 = a1 + 6;
    do
    {
      CurrentThread = KeGetCurrentThread();
      --v2;
      --*((_WORD *)CurrentThread + 243);
      v8 = sub_140347C10((__int64)v6, 0LL);
      v9 = v8;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
        sub_14029F120(v6, v8, (__int64)v6);
      if ( v9 )
        *(_BYTE *)(v9 + 18) = 1;
      v10 = sub_140347C10((__int64)v3, 0LL);
      v11 = v10;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
        sub_14029F120(v3, v10, (__int64)v3);
      if ( v11 )
        *(_BYTE *)(v11 + 18) = 1;
      v12 = (_QWORD *)*v5;
      if ( (_QWORD *)*v5 == v5 )
      {
        v14 = 0LL;
      }
      else
      {
        if ( (_QWORD *)v12[1] != v5 || (v13 = *v12, *(_QWORD **)(*v12 + 8LL) != v12) )
          __fastfail(3u);
        v14 = 0LL;
        *v5 = v13;
        *(_QWORD *)(v13 + 8) = v5;
        if ( v12 )
        {
          *((_DWORD *)v12 + 4) &= ~1u;
          v14 = v12;
        }
      }
      v15 = _InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v15 & 2) != 0 && (v15 & 4) == 0 )
        ExfTryToWakePushLock(v3);
      sub_1402AFC00((ULONG_PTR)v3);
      if ( v14 )
      {
        v16 = v14[6];
        v20 = 0LL;
        if ( (int)sub_1407E1B0C((int)a1 + 8, v16, 8, -1, (__int64)&v20) >= 0 )
          sub_1407E3B7C(a1, v20);
      }
      v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v17 & 2) != 0 && (v17 & 4) == 0 )
        ExfTryToWakePushLock(v6);
      sub_1402AFC00((ULONG_PTR)v6);
      v18 = KeGetCurrentThread();
      v19 = (*((_WORD *)v18 + 243))++ == 0xFFFF;
      if ( v19 && *((struct _KTHREAD **)v18 + 19) != (struct _KTHREAD *)((char *)v18 + 152) )
        KiCheckForKernelApcDelivery();
      if ( !v14 )
        break;
      sub_1407E3B7C(a1, v14);
    }
    while ( v2 > 0 );
  }
}
