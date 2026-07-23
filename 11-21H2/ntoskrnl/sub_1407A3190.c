/*
 * XREFs of sub_1407A3190 @ 0x1407A3190
 * Callers:
 *     sub_140202270 @ 0x140202270 (sub_140202270.c)
 *     ObMakeTemporaryObject @ 0x1406E1700 (ObMakeTemporaryObject.c)
 *     sub_140733B40 @ 0x140733B40 (sub_140733B40.c)
 *     sub_1407A2FA0 @ 0x1407A2FA0 (sub_1407A2FA0.c)
 *     ObOpenObjectByNameEx @ 0x1407CAF90 (ObOpenObjectByNameEx.c)
 * Callees:
 *     PsDereferenceSiloContext @ 0x140251C40 (PsDereferenceSiloContext.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     sub_140353BB0 @ 0x140353BB0 (sub_140353BB0.c)
 *     sub_140668C60 @ 0x140668C60 (sub_140668C60.c)
 *     sub_14066960C @ 0x14066960C (sub_14066960C.c)
 *     sub_1406A9B40 @ 0x1406A9B40 (sub_1406A9B40.c)
 *     sub_1406B96B0 @ 0x1406B96B0 (sub_1406B96B0.c)
 *     sub_1406B96E8 @ 0x1406B96E8 (sub_1406B96E8.c)
 */

void __fastcall sub_1407A3190(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  ULONG_PTR v4; // rsi
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int32 *v6; // rbp
  struct _KTHREAD *v7; // rax
  unsigned __int64 v8; // rax
  _QWORD *v9; // r8
  _QWORD *v10; // rbx
  struct _KTHREAD *v11; // rax
  __int128 v12; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+30h] [rbp-28h]

  if ( (*(_BYTE *)(a1 + 26) & 2) != 0 )
  {
    v2 = byte_140C25440[*(_BYTE *)(a1 + 26) & 3];
    v3 = a1 - v2;
    if ( a1 != v2 )
    {
      v4 = a1 + 16;
      while ( 1 )
      {
        CurrentThread = KeGetCurrentThread();
        --*((_WORD *)CurrentThread + 242);
        ExAcquirePushLockExclusiveEx(v4, 0LL);
        v6 = *(volatile signed __int32 **)v3;
        if ( !*(_QWORD *)v3 || (*(_BYTE *)(a1 + 27) & 0x10) != 0 || *(_QWORD *)(a1 + 8) )
        {
          ExReleasePushLockEx(v4, 0LL);
          KeLeaveCriticalRegion();
          return;
        }
        v13 = 0x10000000000LL;
        v7 = KeGetCurrentThread();
        v12 = (unsigned __int64)v6;
        --*((_WORD *)v7 + 242);
        v8 = sub_140347C10((__int64)(v6 + 74), 0LL);
        if ( !_interlockedbittestandset64(v6 + 74, 0LL) )
          break;
        if ( v8 )
          sub_140353BB0((ULONG_PTR)(v6 + 74), v8);
        KeLeaveCriticalRegion();
        *(_QWORD *)&v12 = 0LL;
        BYTE5(v13) = 0;
        ObfReferenceObject((PVOID)v6);
        ExReleasePushLockEx(v4, 0LL);
        KeLeaveCriticalRegion();
        sub_1406B96B0((__int64)&v12, (__int64)v6);
        v11 = KeGetCurrentThread();
        --*((_WORD *)v11 + 242);
        ExAcquirePushLockExclusiveEx(v4, 0LL);
        if ( *(volatile signed __int32 **)v3 == v6 && (*(_BYTE *)(a1 + 27) & 0x10) == 0 && !*(_QWORD *)(a1 + 8) )
        {
          PsDereferenceSiloContext((void *)v6);
          goto LABEL_12;
        }
        if ( (_QWORD)v12 )
          sub_14066960C((__int64)&v12);
        ExReleasePushLockEx(v4, 0LL);
        KeLeaveCriticalRegion();
        PsDereferenceSiloContext((void *)v6);
      }
      if ( v8 )
        *(_BYTE *)(v8 + 18) = 1;
LABEL_12:
      if ( *(_DWORD *)(v3 + 24) )
      {
        ExReleasePushLockEx(v4, 0LL);
        KeLeaveCriticalRegion();
      }
      else
      {
        if ( (POBJECT_TYPE)qword_140D07490[(unsigned __int8)dword_140D06C0C ^ *(unsigned __int8 *)(a1 + 24) ^ (unsigned __int64)BYTE1(a1)] == qword_140C24FC0 )
          sub_1406B96E8(a1 + 48);
        sub_1406A9B40((unsigned __int16 *)(v3 + 8), 0, (__int64 *)&v12);
        v9 = (_QWORD *)*((_QWORD *)&v12 + 1);
        v10 = (_QWORD *)**((_QWORD **)&v12 + 1);
        *(_QWORD *)(*(_QWORD *)(**((_QWORD **)&v12 + 1) + 8LL)
                  - 48LL
                  - byte_140C25440[*(_BYTE *)(*(_QWORD *)(**((_QWORD **)&v12 + 1) + 8LL) - 48LL + 26) & 3]) = 0LL;
        *v9 = *v10;
        *v10 = 0LL;
        ExReleasePushLockEx(v4, 0LL);
        KeLeaveCriticalRegion();
        if ( v10 )
          sub_140668C60(v10, (void **)&v12);
      }
      if ( (_QWORD)v12 )
        sub_14066960C((__int64)&v12);
    }
  }
}
