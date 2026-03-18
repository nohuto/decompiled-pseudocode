/*
 * XREFs of MiTerminateWsle @ 0x1403146E0
 * Callers:
 *     MiDeleteEmptyPageTable @ 0x140227360 (MiDeleteEmptyPageTable.c)
 *     MiRemoveSystemImagePage @ 0x140247A74 (MiRemoveSystemImagePage.c)
 *     MiDecommitPages @ 0x1402CE240 (MiDecommitPages.c)
 * Callees:
 *     MiEvictPageTableLock @ 0x140229100 (MiEvictPageTableLock.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x1402746C0 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MiCountWslesInPageTable @ 0x140274720 (MiCountWslesInPageTable.c)
 *     MiUnlockWsle @ 0x1402E599C (MiUnlockWsle.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiRemoveWsle @ 0x140331CC0 (MiRemoveWsle.c)
 *     MiGetWsleContents @ 0x14033A410 (MiGetWsleContents.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall MiTerminateWsle(__int64 a1, unsigned __int64 a2, char a3, int *a4)
{
  BOOL v4; // ebx
  int v6; // r12d
  int v8; // ebp
  unsigned __int64 v9; // rdi
  __int64 v10; // r14
  unsigned __int8 WsleContents; // si
  unsigned __int64 v12; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // r11
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  int v20; // r14d
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // r9
  unsigned int v25; // ecx
  unsigned __int64 *v26; // rcx
  unsigned __int64 v27; // rbx
  struct _LIST_ENTRY *v28; // rax
  __int64 v29; // rax
  _KPROCESS *Process; // rcx
  struct _LIST_ENTRY *v31; // rdx
  __int64 v32; // rax
  unsigned __int64 *v33; // rbx
  char v34; // cl
  int v35; // r8d
  int v36; // [rsp+30h] [rbp-78h]
  __int64 v37; // [rsp+38h] [rbp-70h] BYREF
  int *v38; // [rsp+40h] [rbp-68h]
  _OWORD v39[2]; // [rsp+48h] [rbp-60h] BYREF

  v4 = 1;
  v38 = a4;
  v37 = a1;
  v6 = 10;
  v8 = 0;
  v9 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v9) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v36 = 1;
    v12 = *(_QWORD *)v9;
    v6 = 10 - ((a3 & 2) != 0);
    if ( (unsigned int)MiPteInShadowRange(v9)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v12 & 1) != 0
      && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v14 = *((_QWORD *)&Flink->Flink + ((v9 >> 3) & 0x1FF));
        v15 = v12 | 0x20;
        if ( (v14 & 0x20) == 0 )
          v15 = v12;
        v12 = v15;
        if ( (v14 & 0x42) != 0 )
          v12 = v15 | 0x42;
      }
    }
    WsleContents = HIBYTE(v12) & 0xF | (16 * ((v12 >> 60) & 7));
    v4 = *(_QWORD *)(v10 + 40) >= 0LL;
    if ( (WsleContents & 0xF) == 8 )
    {
      MiUnlockWsle(v37, a2, v10);
      WsleContents = MiGetWsleContents(v16, a2);
    }
  }
  else
  {
    WsleContents = (*(_BYTE *)v10 >> 1) & 7;
    v36 = 0;
  }
  v17 = 0xFFFFF6FB40000000uLL;
  if ( (a3 & 3) != 0 )
  {
    v20 = v36;
    goto LABEL_45;
  }
  if ( (a3 & 4) != 0 )
  {
    v18 = MI_READ_PTE_LOCK_FREE(v9);
    v17 = 0xFFFFF6FB40000000uLL;
    v19 = v18 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
  }
  else
  {
    v19 = 0LL;
  }
  v20 = v36;
  if ( !v36 )
  {
    if ( !(unsigned int)MiEvictPageTableLock(v37, v9, v19, 0) )
    {
      *v38 = 0;
      return 0LL;
    }
    goto LABEL_43;
  }
  v22 = *(_QWORD *)v9;
  v23 = 0xFFFFF6FB7DBED000uLL;
  v24 = 0xFFFFF6FB7DBED7F8uLL;
  if ( v9 >= 0xFFFFF6FB7DBED000uLL && v9 <= 0xFFFFF6FB7DBED7F8uLL && (unsigned int)MiPteHasShadow() )
    goto LABEL_40;
  v25 = ((unsigned int)MiFlags >> 27) & 3;
  if ( v25 > 1 )
  {
    if ( (MiFlags & 0x4000000) != 0 )
      _mm_lfence();
  }
  else
  {
    if ( !v25 )
    {
LABEL_38:
      if ( v9 < v23 || v9 > v24 )
      {
LABEL_42:
        *(_QWORD *)v9 = v19;
        goto LABEL_43;
      }
LABEL_40:
      if ( (unsigned int)MiPteHasShadow() )
      {
        *(_QWORD *)v9 = v19;
        MiWritePteShadow(v9, v19);
        v8 = 1;
        goto LABEL_45;
      }
      goto LABEL_42;
    }
    if ( v9 >= v17 && v9 <= 0xFFFFF6FB7FFFFFFFuLL && (v22 & 0x80u) == 0LL )
      LOBYTE(v22) = 32;
  }
  if ( (v22 & 0x20) != 0 )
    goto LABEL_38;
  if ( (MI_INTERLOCKED_EXCHANGE_PTE((volatile __int64 *)v9, v19) & 0x20) != 0 )
LABEL_43:
    v8 = 1;
LABEL_45:
  MiRemoveWsle(v37, a2, 1, WsleContents, v6, v4);
  if ( v20 )
  {
    v26 = (unsigned __int64 *)(((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    v27 = *v26;
    if ( (unsigned int)MiPteInShadowRange(v26)
      && (unsigned int)MiPteHasShadow()
      && (v27 & 1) != 0
      && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
    {
      v28 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v28 )
      {
        v29 = *((_QWORD *)&v28->Flink
              + (((unsigned __int64)(((unsigned int)(a2 >> 18) & 0x3FFFFFF8) + 0x40000000) >> 3) & 0x1FF));
        if ( (v29 & 0x20) != 0 )
          v27 |= 0x20uLL;
        if ( (v29 & 0x42) != 0 )
          v27 |= 0x42uLL;
      }
    }
    v37 = v27;
    if ( (unsigned int)MiPteInShadowRange(&v37)
      && (unsigned int)MiPteHasShadow()
      && (v27 & 1) != 0
      && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      v31 = Process[1].ProcessListEntry.Flink;
      if ( v31 )
      {
        v32 = *((_QWORD *)&v31->Flink + (((unsigned __int64)&v37 >> 3) & 0x1FF));
        if ( (v32 & 0x20) != 0 )
          v27 |= 0x20uLL;
        if ( (v32 & 0x42) != 0 )
          v27 |= 0x42uLL;
      }
    }
    v33 = (unsigned __int64 *)(48 * ((v27 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
    if ( ((*(_DWORD *)v33 >> 4) & 0x3FF) == 0 )
    {
      MiCountWslesInPageTable((__int64)Process, a2, v39);
      v34 = 8;
      while ( 1 )
      {
        v35 = *((_DWORD *)v39 + (unsigned __int8)--v34);
        if ( v35 )
          break;
        if ( !v34 )
          goto LABEL_72;
      }
      *v33 = *v33 & 0xFFFFFFFFFFFE000FuLL | (16 * (v35 & 0x3FF | ((unsigned __int64)(v34 & 7) << 10)));
    }
  }
LABEL_72:
  *v38 = v8;
  return 1LL;
}
